#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    setspinbox();
    connectsignal();
}

void Widget::setspinbox(){
    ui->spinBox->setSuffix(QString("kg "));
    ui->doubleSpinBox_2->setPrefix(QString("$ "));
    ui->doubleSpinBox_3->setPrefix(QString("$ "));
    ui->spinBox_4->setMaximum(65535);
    ui->spinBox_5->setMaximum(65535);
    ui->spinBox_6->setMaximum(65535);
    ui->spinBox_4->setPrefix("Dec ");
    ui->spinBox_5->setPrefix("Bin ");
    ui->spinBox_6->setPrefix("Hex ");

    ui->doubleSpinBox_2->setSingleStep(0.1);
    ui->doubleSpinBox_3->setSingleStep(0.1);

    ui->spinBox_4->setDisplayIntegerBase(10);
    ui->spinBox_5->setDisplayIntegerBase(2);
    ui->spinBox_6->setDisplayIntegerBase(16);
}

void Widget::connectsignal(){
    connect(ui->spinBox, SIGNAL(valueChanged(int)) ,this, SLOT(on_pushButton_clicked()) );
    connect(ui->doubleSpinBox_2, SIGNAL(valueChanged(double)) ,this, SLOT(on_pushButton_clicked()) );
    connect(ui->doubleSpinBox_3, SIGNAL(valueChanged(double)) ,this, SLOT(on_pushButton_clicked()) );
}

void Widget::setval(int arg){
    ui->spinBox_4->setValue(arg);
    ui->spinBox_5->setValue(arg);
    ui->spinBox_6->setValue(arg);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    int num = ui->spinBox->value();
    double price = ui->doubleSpinBox_2->value();
    double total  = num*price;
    ui->doubleSpinBox_3->setValue(total);
}


void Widget::on_spinBox_4_valueChanged(int arg1)
{
    setval(arg1);
}


void Widget::on_spinBox_5_valueChanged(int arg1)
{
    setval(arg1);
}


void Widget::on_spinBox_6_valueChanged(int arg1)
{
    setval(arg1);
}

