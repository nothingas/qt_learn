#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_strlist<<"北京"<<"上海"<<"天津"<<"河北"<<"山东"<<"四川"<<"重庆"<<"广东"<<"河南";
    m_model = new QStringListModel(m_strlist,this);
    ui->listView->setModel(m_model);
    ui->checkBox->setChecked(true);
    ui->listView->setEditTriggers(QAbstractItemView::DoubleClicked
                                  | QAbstractItemView::SelectedClicked);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    m_model->setStringList(m_strlist);
}


void MainWindow::on_pushButton_2_clicked()
{
    m_model->removeRows(0,m_model->rowCount());
}


void MainWindow::on_pushButton_3_clicked()
{
    m_model->insertRow(m_model->rowCount());
    QModelIndex index = m_model->index(m_model->rowCount()-1,0);
    m_model->setData(index,"new item", Qt::DisplayRole);
    ui->listView->setCurrentIndex(index);
}


void MainWindow::on_pushButton_4_clicked()
{
    QModelIndex index = ui->listView->currentIndex();
    m_model->insertRow(index.row());
    m_model->setData(index, "inserted item", Qt::DisplayRole );
    ui->listView->setCurrentIndex(index);
}


void MainWindow::on_pushButton_5_clicked()
{
    int r = ui->listView->currentIndex().row();
    m_model->removeRow(r);
}


void MainWindow::on_pushButton_6_clicked()
{
    int curRow = ui->listView->currentIndex().row();
    QModelIndex index = QModelIndex();
    m_model->moveRow(index,curRow,index,curRow-1);
}


void MainWindow::on_pushButton_7_clicked()
{
    //Qt的设置是如果两个数在同一行，那么老的数据会被挤到新数据的下一行去，所以下移的目的地应该加2
    int curRow = ui->listView->currentIndex().row();
    QModelIndex index = QModelIndex();
    m_model->moveRow(index,curRow,index,curRow+2);
}



void MainWindow::on_pushButton_8_clicked(bool checked)
{
    if (checked)
        m_model->sort(0,Qt::AscendingOrder);
    else
        m_model->sort(0,Qt::DescendingOrder);
}


void MainWindow::on_checkBox_clicked(bool checked)
{//“允许编辑”复选框
    if (checked)
        //可编辑
        ui->listView->setEditTriggers(QAbstractItemView::DoubleClicked
                                      | QAbstractItemView::SelectedClicked);
    else
        ui->listView->setEditTriggers(QAbstractItemView::NoEditTriggers);
}




void MainWindow::on_listView_clicked(const QModelIndex &index)
{
    QString str1= QString::asprintf("模型索引:row=%d, column=%d；",
                                     index.row(),index.column());
    QVariant var= m_model->data(index, Qt::DisplayRole);
    QString str2= var.toString();
    ui->statusbar->showMessage(str1+str2);
}


void MainWindow::on_pushButton_10_clicked()
{
    QStringList l = m_model->stringList();
    ui->plainTextEdit->clear();
    for(int i=0; i<l.count();i++){ui->plainTextEdit->appendPlainText(l[i]);}
}


void MainWindow::on_pushButton_9_clicked()
{
    ui->plainTextEdit->clear();
}

