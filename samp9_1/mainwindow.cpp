#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //this->setCentralWidget(ui->verticalSpacer);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectItems);
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableView->setAlternatingRowColors(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_open_triggered()
{
    QString aFile = QFileDialog::getOpenFileName(this,"选择文件","","SQLite 数据库(*.db3)");
    if(aFile.isEmpty())return;
    DB = QSqlDatabase::addDatabase("QSQLITE");
    DB.setDatabaseName(aFile);

    if(!DB.open())QMessageBox::warning(this, "错误", "打开数据库失败");
    else openTable();
}

void  MainWindow::openTable()
{
    tableModel = new QSqlTableModel(this,DB);
    tableModel->setTable("employee");
    tableModel->setEditStrategy(QSqlTableModel::OnManualSubmit);
    tableModel->setSort(tableModel->fieldIndex("empNo"),Qt::AscendingOrder);
    if(!(tableModel->select()))
    {
        QMessageBox::critical(this, "错误信息",
"打开数据表错误,错误信息:\n"+tableModel->lastError().text());
        return;
    }

    tableModel->setHeaderData(tableModel->fieldIndex("empNo"),Qt::Horizontal, "工号" );
    tableModel->setHeaderData(tableModel->fieldIndex("Name"),
                            Qt::Horizontal, "姓名");
    tableModel->setHeaderData(tableModel->fieldIndex("Gender"), Qt::Horizontal, "性别");
    tableModel->setHeaderData(tableModel->fieldIndex("Birthday"),
                            Qt::Horizontal,
                            "出生日期");
    tableModel->setHeaderData(tableModel->fieldIndex("Province"),
                            Qt::Horizontal, "省份");
    tableModel->setHeaderData(tableModel->fieldIndex("Department"), Qt::Horizontal, "部门");
    tableModel->setHeaderData(tableModel->fieldIndex("Salary"), Qt::Horizontal, "工资");
    tableModel->setHeaderData(tableModel->fieldIndex("Memo"), Qt::Horizontal,"备注");
    tableModel->setHeaderData(tableModel->fieldIndex("Photo"),Qt::Horizontal,"照片");

    selModel = new QItemSelectionModel(tableModel,this);
    connect(selModel,&QItemSelectionModel::currentChanged,this,&MainWindow::do_currentChanged);
    connect(selModel,&QItemSelectionModel::currentRowChanged,this,&MainWindow::do_currentRowChanged);

    ui->tableView->setModel(tableModel);
    ui->tableView->setSelectionModel(selModel);
    ui->tableView->setColumnHidden(tableModel->fieldIndex("Memo"),true);
    ui->tableView->setColumnHidden(tableModel->fieldIndex("Photo"),true);

    QStringList strList;
    strList<<"男"<<"女";
    bool isEditable= false;
    delegateSex.setItems(strList,isEditable);
    ui->tableView->setItemDelegateForColumn(tableModel->fieldIndex("Gender"),&delegateSex);
    strList.clear();
    strList<<"销售部"<<"技术部"<<"生产部"<<"行政部";
    isEditable= true;
    delegateDepart.setItems(strList,isEditable);
    ui->tableView->setItemDelegateForColumn(tableModel->fieldIndex("Department"),&delegateDepart);

    dataMapper = new QDataWidgetMapper(this);
    dataMapper->setModel(tableModel);
    dataMapper->setSubmitPolicy(QDataWidgetMapper::AutoSubmit);

    dataMapper->addMapping(ui->dbSpinEmpNo,tableModel->fieldIndex("empNo"));
    dataMapper->addMapping(ui->dbEditName,tableModel->fieldIndex("Name"));
    dataMapper->addMapping(ui->dbComboSex,tableModel->fieldIndex("Gender"));
    dataMapper->addMapping(ui->dbEditBirth,tableModel->fieldIndex("Birthday"));
    dataMapper->addMapping(ui->dbComboProvince,tableModel->fieldIndex("Province"));
    dataMapper->addMapping(ui->dbComboDep,tableModel->fieldIndex("Department"));
    dataMapper->addMapping(ui->dbSpinSalary,tableModel->fieldIndex("Salary"));
    ui->dbSpinSalary->setMaximum(1000000000);
    dataMapper->addMapping(ui->dbEditMemo,tableModel->fieldIndex("Memo"));

    dataMapper->toFirst();

    getFieldNames();

    ui->action_open->setEnabled(false);
    ui->actRecAppend->setEnabled(true);
    ui->actRecInsert->setEnabled(true);
    ui->actRecDelete->setEnabled(true);
    ui->actScan->setEnabled(true);
    //ui->groupBoxSort->setEnabled(true);
    //ui->groupBoxFilter->setEnabled(true);
}

void MainWindow::getFieldNames()
{
    QSqlRecord emptyRec = tableModel->record();
    for(int i=0;i<emptyRec.count();i++)
    {ui->comboFields->addItem(emptyRec.fieldName(i));}
}

void MainWindow::do_currentChanged(const QModelIndex &current, const QModelIndex &previous)
{
    Q_UNUSED(current);
    Q_UNUSED(previous);
    ui->actSubmit->setEnabled(tableModel->isDirty());
    ui->actRevert->setEnabled(tableModel->isDirty());
}

void MainWindow::do_currentRowChanged(const QModelIndex &current, const QModelIndex &previous)
{
    Q_UNUSED(previous);

    ui->actRecDelete->setEnabled(current.isValid());
    ui->actPhoto->setEnabled(current.isValid());
    ui->actPhotoClear->setEnabled(current.isValid());
    if(!current.isValid())
    {
        ui->label->clear();
        return;
    }
    dataMapper->setCurrentIndex(current.row());
    int curRecNo = current.row();
    QSqlRecord curRec = tableModel->record(curRecNo);
    if(curRec.isNull("Photo")){ui->label->clear();}
    else
    {
        QByteArray data = curRec.value("Photo").toByteArray();
        QPixmap pic;
        pic.loadFromData(data);
        ui->label->setPixmap(pic.scaledToWidth(ui->label->size().width()));
    }
}

void MainWindow::on_actRecAppend_triggered()
{
    QSqlRecord rec = tableModel->record();
    rec.setValue(tableModel->fieldIndex("empNo"),2000+tableModel->rowCount());
    rec.setValue(tableModel->fieldIndex("Gender"),"男");
    tableModel->insertRecord(tableModel->rowCount(),rec);

    selModel->clearSelection();
    QModelIndex curIndex = tableModel->index(tableModel->rowCount()-1,1);
    selModel->setCurrentIndex(curIndex,QItemSelectionModel::Select);
    showRecordCount();
}

void MainWindow::showRecordCount()
{
}

void MainWindow::on_actRecInsert_triggered()
{
    QModelIndex curIndex = ui->tableView->currentIndex();
    QSqlRecord rec = tableModel->record();
    tableModel->insertRecord(curIndex.row(),rec);
    selModel->clearSelection();
    selModel->setCurrentIndex(curIndex,QItemSelectionModel::Select);
    showRecordCount();
}


void MainWindow::on_actRecDelete_triggered()
{
    QModelIndex curIndex = selModel->currentIndex();
    tableModel->removeRow(curIndex.row());
    showRecordCount();
}


void MainWindow::on_actSubmit_triggered()
{
    bool res = tableModel->submitAll();
    if(!res)QMessageBox::information(this, "消息",
                                 "数据保存错误,错误信息\n" +tableModel->lastError().text());
            else{
            ui->actSubmit->setEnabled(false);
            ui->actRevert->setEnabled(false);
        }
    showRecordCount();
}


void MainWindow::on_actRevert_triggered()
{
    tableModel->revertAll();
    ui->actSubmit->setEnabled(false);
    ui->actRevert->setEnabled(false);
    showRecordCount();
}


void MainWindow::on_actPhoto_triggered()
{//设置照片
    QString aFile = QFileDialog::getOpenFileName(this,"选择图片文件","","照片(*.jpg)");
    if(aFile.isEmpty())return;
    QByteArray data;
    QFile *file = new QFile(aFile);
    file->open(QIODevice::ReadOnly);
    data = file->readAll();
    file->close();

    int curRecNo= selModel->currentIndex().row();
    QSqlRecord curRec= tableModel->record(curRecNo);
    //获取当前记录
    curRec.setValue("Photo",data);
    //设置字段数据
    tableModel->setRecord(curRecNo,curRec);
    //修改记录
    QPixmap pic;
    pic.load(aFile);
    ui->label->setPixmap(pic.scaledToWidth(ui->label->width()));
}


void MainWindow::on_actPhotoClear_triggered()
{//清除照片
    int curRecNo = selModel->currentIndex().row();
    QSqlRecord curRec = tableModel->record(curRecNo);
    curRec.setNull("Photo");
    tableModel->setRecord(curRecNo,curRec);
    ui->label->clear();
}


void MainWindow::on_actScan_triggered()
{
    if(tableModel->rowCount() == 0)return;
    for(int i=0;i<tableModel->rowCount();i++)
    {
        QSqlRecord aRec = tableModel->record(i);
        float salary = aRec.value("Salary").toFloat();
        salary = salary*1.1;
        aRec.setValue("Salary",salary);
        tableModel->setRecord(i,aRec);
    }
    if(tableModel->submitAll()){QMessageBox::information(this, "消息", "涨工资数据计算完毕");}
}


void MainWindow::on_comboFields_currentIndexChanged(int index)
{
    if(ui->radioButton_4->isChecked()){tableModel->setSort(index,Qt::AscendingOrder);}
    else tableModel->setSort(index,Qt::DescendingOrder);
    tableModel->select();
}


void MainWindow::on_radioButton_4_clicked()
{
    tableModel->setSort(ui->comboFields->currentIndex(),Qt::AscendingOrder);
    tableModel->select();
}


void MainWindow::on_radioButton_5_clicked()
{
    tableModel->setSort(ui->comboFields->currentIndex(),Qt::DescendingOrder);
    tableModel->select();
}


void MainWindow::on_radioButton_clicked()
{
    tableModel->setFilter("Gender='男'");
    showRecordCount();
}


void MainWindow::on_radioButton_2_clicked()
{
    tableModel->setFilter("Gender='女'");
    showRecordCount();
}


void MainWindow::on_radioButton_3_clicked()
{
    tableModel->setFilter("");
    showRecordCount();
}


void MainWindow::on_actQuit_triggered()
{
    close();
}

