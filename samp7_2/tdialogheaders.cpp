#include "tdialogheaders.h"
#include "ui_tdialogheaders.h"

TDialogHeaders::TDialogHeaders(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::TDialogHeaders)
{
    ui->setupUi(this);
    model = new QStringListModel(this);
    ui->listView->setModel(model);
}

TDialogHeaders::~TDialogHeaders()
{
    QMessageBox::information(this,"提示","TDialogHeaders 对话框被删除");
    delete ui;
}

void TDialogHeaders::setHeaderList(QStringList &headers)
{
    model->setStringList(headers);
}

QStringList TDialogHeaders::headerList()
{
    return model->stringList();
}
