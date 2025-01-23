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
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_act_open_triggered()
{
    QString aFile = QFileDialog::getOpenFileName(this,"选择文件","","SQLite 数据库(*.db3)");
    if(aFile.isEmpty())return;
    DB = QSqlDatabase::addDatabase("QSQLITE");
    DB.setDatabaseName(aFile);
    if(DB.open())selectData();
    else
        QMessageBox::warning(this, "错误", "打开数据库失败");
}

void MainWindow::selectData()
{
    qrymodel = new QSqlQueryModel(this);
    qrymodel->setQuery("SELECT empNo, Name, Gender, Birthday, Province, Department," "Salary FROM employee ORDER BY empNo");
    if(qrymodel->lastError().isValid())
    {
        QMessageBox::critical(this, "错误", "数据表查询错误,错误信息\n" + qrymodel->lastError().text());
        return;
    }
    ui->statusbar->showMessage(QString("记录条数：%1").arg(qrymodel->rowCount()));

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

    selmodel = new QItemSelectionModel(qrymodel,this);
    connect(selmodel, &QItemSelectionModel::currentRowChanged,this,&MainWindow::do_currentRowChanged);
    ui->tableView->setModel(qrymodel);
    ui->tableView->setSelectionModel(selmodel);

    mapper = new QDataWidgetMapper(this);
    mapper->setSubmitPolicy(QDataWidgetMapper::AutoSubmit);
    mapper->setModel(qrymodel);
    mapper->addMapping(ui->dbSpinEmpNo,rec.indexOf("empNo"));
    mapper->addMapping(ui->dbEditName, rec.indexOf("Name"));
    mapper->addMapping(ui->dbComboSex, rec.indexOf("Gender"));
    mapper->addMapping(ui->dbEditBirth, rec.indexOf("Birthday") );
    mapper->addMapping(ui->dbComboProvince,rec.indexOf("Province"));
    mapper->addMapping(ui->dbComboDep, rec.indexOf("Department"));
    mapper->addMapping(ui->dbSpinSalary, rec.indexOf("Salary"));
    mapper->toFirst();

    ui->dbSpinEmpNo->setMaximum(10000000);
    ui->dbSpinSalary->setMaximum(10000000);
    ui->act_open->setEnabled(false);
}

void MainWindow::refreshTableView()
{
    int index = mapper->currentIndex();
    QModelIndex curIndex = qrymodel->index(index,1);
    selmodel->clearSelection();
    selmodel->setCurrentIndex(curIndex,QItemSelectionModel::Select);
}

void MainWindow::do_currentRowChanged(const QModelIndex &current, const QModelIndex &previous)
{
    Q_UNUSED(previous)
    if(!current.isValid())
    {
        ui->label->clear();
        ui->dbEditMemo->clear();
        return;
    }
    mapper->setCurrentModelIndex(current);

    bool first = (current.row() == 0);
    bool last = (current.row() == qrymodel->rowCount()-1);
    ui->action_1->setEnabled(!first);
    ui->action_2->setEnabled(!first);
    ui->action_3->setEnabled(!last);
    ui->action_4->setEnabled(!last);

    int currecno = selmodel->currentIndex().row();
    QSqlRecord currec = qrymodel->record(currecno);
    int empNo = currec.value("EmpNo").toInt();
    QSqlQuery query;
    query.prepare("SELECT EmpNo, Memo, Photo FROM employee WHERE EmpNo = :ID");
    query.bindValue(":ID",empNo);
    query.exec();
    query.first();

    QVariant va = query.value("Photo");
    if(!va.isValid())ui->label->clear();
    else
    {
        QByteArray data = va.toByteArray();
        QPixmap pic;
        pic.loadFromData(data);
        ui->label->setPixmap(pic.scaledToWidth(ui->label->size().width()));
    }
    QVariant va2 = query.value("Memo");
    ui->dbEditMemo->setPlainText(va2.toString());
}

void MainWindow::on_action_4_triggered()
{
    mapper->toLast();
    refreshTableView();
}


void MainWindow::on_action_2_triggered()
{
    mapper->toPrevious();
    refreshTableView();
}


void MainWindow::on_action_3_triggered()
{
    mapper->toNext();
    refreshTableView();
}


void MainWindow::on_action_5_triggered()
{
    close();
}


void MainWindow::on_action_triggered()
{
    mapper->toFirst();
    refreshTableView();
}

