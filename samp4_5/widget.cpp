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

void Widget::on_p11_clicked()
{
    ui->textEdit->setAlignment(Qt::AlignLeft);
}


void Widget::on_p12_clicked()
{
    ui->textEdit->setAlignment(Qt::AlignCenter);
}


void Widget::on_p13_clicked()
{
    ui->textEdit->setAlignment(Qt::AlignRight);
}




void Widget::on_p21_clicked(bool checked)
{
    QFont font = ui->textEdit->font();
    font.setBold(checked);
    ui->textEdit->setFont(font);
}


void Widget::on_p22_clicked(bool checked)
{
    QFont font = ui->textEdit->font();
    font.setItalic(checked);
    ui->textEdit->setFont(font);
}


void Widget::on_p23_clicked(bool checked)
{
    QFont font = ui->textEdit->font();
    font.setUnderline(checked);
    ui->textEdit->setFont(font);
}


void Widget::on_c1_clicked(bool checked)
{
    ui->textEdit->setReadOnly(checked);
}


void Widget::on_c2_clicked(bool checked)
{
    ui->textEdit->setEnabled(checked);
}


void Widget::on_c3_clicked(bool checked)
{

}


void Widget::on_r1_clicked()
{
    QPalette plet = ui->textEdit->palette();
    plet.setColor(QPalette::Text, Qt::black);
    ui->textEdit->setPalette(plet);
}


void Widget::on_r2_clicked()
{
    QPalette plet = ui->textEdit->palette();
    plet.setColor(QPalette::Text, Qt::red);
    ui->textEdit->setPalette(plet);
}


void Widget::on_r3_clicked()
{
    QPalette plet = ui->textEdit->palette();
    plet.setColor(QPalette::Text, Qt::blue);
    ui->textEdit->setPalette(plet);
}

