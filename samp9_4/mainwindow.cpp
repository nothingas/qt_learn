#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectItems);
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableView->setAlternatingRowColors(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::opentable()
{
    tabModel = new QSqlRelationalTableModel(this,DB);
    tabModel->setTable("studInfo");
    tabModel->setEditStrategy(QSqlTableModel::OnManualSubmit);
    tabModel->setSort(tabModel->fieldIndex("studID"), Qt::AscendingOrder);
    selModel = new QItemSelectionModel(tabModel, this);
    connect(selModel,&QItemSelectionModel::currentChanged,this,&MainWindow::do_currentChanged);
    ui->tableView->setModel(tabModel);
    ui->tableView->setSelectionModel(selModel);

    //设置字段显示标题
    tabModel->setHeaderData(tabModel->fieldIndex("studID"), Qt::Horizontal, "学号");
    tabModel->setHeaderData(tabModel->fieldIndex("name"),
                            Qt::Horizontal, "姓名");
    tabModel->setHeaderData(tabModel->fieldIndex("gender"), Qt::Horizontal, "性别");
    tabModel->setHeaderData(tabModel->fieldIndex("departID"),Qt::Horizontal, "学院");
    tabModel->setHeaderData(tabModel->fieldIndex("majorID"), Qt::Horizontal, "专业");

    tabModel->setRelation(tabModel->fieldIndex("departID"),QSqlRelation("departments","departID","department") );
    tabModel->setRelation(tabModel->fieldIndex("majorID"),QSqlRelation("majors","majorID","major") );

    ui->tableView->setItemDelegate(new QSqlRelationalDelegate(ui->tableView));
    tabModel->select();
    ui->action->setEnabled(false);
    ui->action_2->setEnabled(true);
    ui->action_3->setEnabled(true);
    ui->action_4->setEnabled(true);
    ui->action_7->setEnabled(true);
    ui->action_8->setEnabled(true);
}

void MainWindow::do_currentChanged(const QModelIndex &current, const QModelIndex &previous)
{
    Q_UNUSED(current);
    Q_UNUSED(previous);
    ui->action_5->setEnabled(tabModel->isDirty());
    ui->action_6->setEnabled(tabModel->isDirty());
}


void MainWindow::on_action_triggered()
{
    QString aFile = QFileDialog::getOpenFileName(this,"选择文件","",",SQLite 数据库(*.db3)");
    if(aFile.isEmpty())return;
    DB = QSqlDatabase::addDatabase("QSQLITE");
    DB.setDatabaseName(aFile);
    if(DB.open())opentable();
    else
        QMessageBox::critical(this,"错误", "打开数据库失败");
}


void MainWindow::on_action_7_triggered()
{
    QSqlRecord emptyRec = tabModel->record();
    QString str;
    for(int i=0;i<emptyRec.count();i++)
    {
        str += emptyRec.filedName(i)+'\n'
    }
    QMessageBox::information(this, "所有字段名", str);
}

