#include "tdialogdata.h"
#include "ui_tdialogdata.h"

TDialogData::TDialogData(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::TDialogData)
{
    ui->setupUi(this);
}

TDialogData::~TDialogData()
{
    delete ui;
}

void TDialogData::on_pushButton_clicked()
{
    QString aFile = QFileDialog::getOpenFileName(this,"选择图片文件","", "照片(*.jpg)");
    if(aFile.isEmpty())return;
    QByteArray data;
    QFile* file = new QFile(aFile);
    file->open(QIODevice::ReadOnly);
    data = file->readAll();
    file->close();
    delete file;

    m_record.setValue("Photo",data);
    QPixmap pic;
    pic.loadFromData(data);
    ui->label->setPixmap(pic.scaledToWidth(ui->label->size().width()));
}


void TDialogData::on_pushButton_2_clicked()
{
    ui->label->clear();
    m_record.setNull("Photo");
}

void TDialogData::setUpdateRecord(QSqlRecord &recData)
{
    m_record = recData;
    ui->spinBox->setEnabled(false);
    setWindowTitle("更新记录");

    ui->spinBox->setValue(recData.value("empNo").toInt());
    ui->lineEdit->setText(recData.value("Name").toString());
    ui->comboBox->setCurrentText(recData.value("Gender").toString());
    ui->dateEdit->setDate(recData.value("Birthday").toDate());
    ui->comboBox_2->setCurrentText(recData.value("Province").toString());
    ui->comboBox_3->setCurrentText(recData.value("Department").toString());
    ui->spinBox_2->setValue(recData.value("Salary").toInt());
    ui->plainTextEdit->setPlainText(recData.value("Memo").toString());

    QVariant va = recData.value("Photo");
    if(!va.isValid())ui->label->clear();
    else
    {
        QByteArray data = va.toByteArray();
        QPixmap pic;
        pic.loadFromData(data);
        ui->label->setPixmap(pic.scaledToWidth(ui->label->size().width()));
    }
}

void TDialogData::setInsertRecord(QSqlRecord &recData)
{
    m_record = recData;
    ui->spinBox->setEnabled(true);
    setWindowTitle("插入新记录");
    ui->spinBox->setValue(recData.value("empNo").toInt());
}

QSqlRecord TDialogData::getRecordData()
{
    m_record.setValue("empNo",ui->spinBox->value());
    m_record.setValue("Name",ui->lineEdit->text());
    m_record.setValue("Gender", ui->comboBox->currentText());
    m_record.setValue("Birthday",ui->dateEdit->date());
    m_record.setValue("Province",ui->comboBox_2->currentText());
    m_record.setValue("Department", ui->comboBox_3->currentText());
    m_record.setValue("Salary", ui->spinBox_2->value());
    m_record.setValue("Memo",ui->plainTextEdit->toPlainText());
    return m_record;
}

void TDialogData::on_pushButton_3_clicked()
{
    this->accept();
}


void TDialogData::on_pushButton_4_clicked()
{
    this->reject();
}

