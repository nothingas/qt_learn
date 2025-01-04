#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_b2_clicked()
{
    int num = ui->l1->text().toInt();
    double price = ui->l2->text().toDouble();
    double total = num*price;
    QString str(QString::number(total));
    ui->l3->setText(str);
}


void Widget::on_b3_clicked()
{
    int val = ui->l4->text().toInt();
    QString str = QString::number(val,16);
    ui->l6->setText(str);
    str = QString::number(val,2);
    ui->l5->setText(str);
}


void Widget::on_b4_clicked()
{
    bool ok;
    int val = ui->l5->text().toInt(&ok,2);
    QString str = QString::number(val);
    ui->l4->setText(str);
    str = QString::number(val,16);
    ui->l6->setText(str);
}




void Widget::on_b5_clicked()
{
    bool ok;
    int val = ui->l6->text().toInt(&ok,16);
    QString str = QString::number(val);
    ui->l4->setText(str);
    str = QString::number(val,2);
    ui->l5->setText(str);
}


void Widget::on_b1_clicked()
{
    QString str;
    double num = 1234.5678;
    qDebug("num = %f", num);
    str.setNum(num, 'f', 5);
    qDebug("str = %s", str.toLocal8Bit().data());
}

