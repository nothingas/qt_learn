#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableView->setAlternatingRowColors(true);

    QString aFile = QFileDialog::getOpenFileName(this,"选择文件","",",SQLite 数据库(*.db3)");
    if(aFile.isEmpty())return;
    DB = QSqlDatabase::addDatabase("QSQLITE");
    DB.setDatabaseName(aFile);
    if(DB.open())selectData();
    else
        QMessageBox::critical(this,"错误", "打开数据库失败");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::selectData()
{
    qrymodel = new QSqlQueryModel(this);
    selmodel = new QItemSelectionModel(qrymodel,this);
    ui->tableView->setModel(qrymodel);
    ui->tableView->setSelectionModel(selmodel);
    qrymodel->setQuery("SELECT empNo,Name, Gender, Birthday, Province, Department,Salary FROM employee ORDER BY empNo");
    if(qrymodel->lastError().isValid())
    {
        QMessageBox::information(this,"错误", "数据表查询错误,错误信息\n"+qrymodel->lastError().text());
        return;
    }
    QSqlRecord rec = qrymodel->record();
    qrymodel->setHeaderData(rec.indexOf("empNo"), Qt::Horizontal, "工号");
    qrymodel->setHeaderData(rec.indexOf("Name"),
                            Qt::Horizontal, "姓名");
    qrymodel->setHeaderData(rec.indexOf("Gender"), Qt::Horizontal, "性别");
    qrymodel->setHeaderData(rec.indexOf("Birthday"),
                            Qt::Horizontal, "出生日期");
    qrymodel->setHeaderData(rec.indexOf("Province"),
                            Qt::Horizontal, "省份");
    qrymodel->setHeaderData(rec.indexOf("Department"), Qt::Horizontal, "部门");
    qrymodel->setHeaderData(rec.indexOf("Salary"),
                            Qt::Horizontal, "工资");
    ui->action->setEnabled(false);
    ui->action_2->setEnabled(true);
    ui->action_3->setEnabled(true);
    ui->action_4->setEnabled(true);
    ui->action_5->setEnabled(true);
    ui->action_6->setEnabled(true);
}

void MainWindow::updateRecord(int recNo)
{
    QSqlRecord curRec = qrymodel->record(recNo);
    int empNo= curRec.value("EmpNo").toInt();
    QSqlQuery query;
    query.prepare("SELECT * FROM employee WHERE EmpNo = :ID");
    query.bindValue(":ID",empNo);
    query.exec();
    query.first();
    if(!query.isValid())return;
    curRec = query.record();

    TDialogData *dataDialog = new TDialogData(this);
    //Qt::WindowFlags flags = dataDialog->windowFlags();
    //dataDialog->setWindowFlag(flags|Qt::MSWindowsFixedSizeDialogHint);
    dataDialog->setUpdateRecord(curRec);

    int ret = dataDialog->exec();
    if(ret == QDialog::Accepted)
    {
        QSqlRecord recData= dataDialog->getRecordData();
        query.prepare("UPDATE employee SET Name=:Name, Gender=:Gender,"
                      " Birthday=:Birthday, Province=:Province,"
                      " Department=:Department, Salary=:Salary,"
                      " Memo=:Memo, Photo=:Photo "
                      " WHERE EmpNo = :ID");
        query.bindValue(":Name",
                        recData.value("Name"));
        query.bindValue(":Gender", recData.value("Gender"));
        query.bindValue(":Birthday",recData.value("Birthday"));
        query.bindValue(":Province",recData.value("Province"));
        query.bindValue(":Department", recData.value("Department"));
        query.bindValue(":Salary", recData.value("Salary"));
        query.bindValue(":Memo",
                        recData.value("Memo"));
        query.bindValue(":Photo",
                        recData.value("Photo"));
        query.bindValue(":ID",
                        empNo);
        if(!query.exec()){QMessageBox::critical(this, "错误","记录更新错误\n"+query.lastError().text());}
        else ui->tableView->update(); //数据模型重新查询数据，更新 tableView 显示内容
    }
    delete dataDialog;
}

void MainWindow::on_action_3_triggered()
{
    int curRecNo = selmodel->currentIndex().row();
    updateRecord(curRecNo);
}

