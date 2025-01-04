#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    setconnect();
}

void Widget::setconnect(){
    connect(ui->horizontalSlider, SIGNAL(valueChanged(int)),this, SLOT(do_valueChanged(int))  );
    connect(ui->horizontalScrollBar, SIGNAL(valueChanged(int)),this, SLOT(do_valueChanged(int))  );
    connect(ui->dial, SIGNAL(valueChanged(int)),this, SLOT(do_valueChanged(int))  );
}

void Widget::do_valueChanged(int value){
        ui->progressBar->setValue(value);
}


Widget::~Widget()
{
    delete ui;
}

void Widget::on_checkBox_clicked(bool checked)
{
    ui->progressBar->setTextVisible(checked);
}




void Widget::on_checkBox_2_clicked(bool checked)
{
    ui->progressBar->setInvertedAppearance(checked);
}




void Widget::on_radioButton_clicked()
{
    ui->progressBar->setFormat("%p");
}


void Widget::on_radioButton_2_clicked()
{
    ui->progressBar->setFormat("%v");
}

