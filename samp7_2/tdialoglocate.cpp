#include "tdialoglocate.h"
#include "ui_tdialoglocate.h"

TDialogLocate::TDialogLocate(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::TDialogLocate)
{
    ui->setupUi(this);
}

TDialogLocate::~TDialogLocate()
{
    QMessageBox::information(this,"提示","TDialogLocate 对话框被删除");
    delete ui;
}

void TDialogLocate::closeEvent(QCloseEvent *event)
{
    event->accept();
    emit changeActionEnable(true);
}

void TDialogLocate::showEvent(QShowEvent *event)
{
    event->accept();
    emit changeActionEnable(false);
}

void TDialogLocate::on_pushButton_clicked()
{
    int row = ui->spinBox->value();
    int col = ui->spinBox_2->value();
    QString text = ui->lineEdit->text();
    emit changeCellText(row,col,text);
    if(ui->checkBox->isChecked()){ui->spinBox->setValue(1+ui->spinBox->value());}
    if(ui->checkBox_2->isChecked()){ui->spinBox_2->setValue(1+ui->spinBox_2->value());}
}

void TDialogLocate::setSpinValue(int rowNow, int colNow)
{
    ui->spinBox->setValue(rowNow);
    ui->spinBox_2->setValue(colNow);
}

void TDialogLocate::setSpinRange(int rowcount, int colcount)
{
    ui->spinBox->setMaximum(rowcount-1);
    ui->spinBox_2->setMaximum(colcount-1);
}

void TDialogLocate::on_pushButton_2_clicked()
{
    close();
}

