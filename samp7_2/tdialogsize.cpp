#include "tdialogsize.h"
#include "ui_tdialogsize.h"

TDialogsize::TDialogsize(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::TDialogsize)
{
    ui->setupUi(this);
}

TDialogsize::~TDialogsize()
{
    QMessageBox::information(this,"提示","TDialogSize 对话框被删除");
    delete ui;
}

int TDialogsize::rowcount(){return ui->spinBox->value();}
int TDialogsize::columncount(){return ui->spinBox_2->value();}
void TDialogsize::setrowcolumn(int row, int column){ui->spinBox->setValue(row);ui->spinBox_2->setValue(column);}
