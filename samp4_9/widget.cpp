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

void Widget::on_pushButton_clicked()
{//“初始化列表”按钮
    QIcon icon;
    icon.addFile(":/icons/icon1");
    //从资源文件中获取图标
    ui->comboBox->clear();
    //清除列表
    for (int i=0; i<20; i++)
    {
        ui->comboBox->addItem(icon,QString("Item %1").arg(i)); //带有图标
    //
        ui->comboBox->addItem(QString("Item %1").arg(i));
    //不带有图标
    }
}

void Widget::on_pushButton_3_clicked()
{
    QMap<QString, int> City_Zone;
    City_Zone.insert("北京",10);
    City_Zone.insert("上海",21);
    City_Zone.insert("天津",22);
    City_Zone.insert("大连",411);
    City_Zone.insert("锦州",416);
    City_Zone.insert("徐州",516);
    City_Zone.insert("福州",591);
    City_Zone.insert("青岛",532);
    ui->comboBox_2->clear();
    foreach(const QString &str, City_Zone.keys())
    {
        ui->comboBox_2->addItem(str,City_Zone.value(str));
    }
}


void Widget::on_comboBox_currentTextChanged(const QString &arg1)
{
    ui->plainTextEdit->appendPlainText(arg1);
}


void Widget::on_comboBox_2_currentIndexChanged(int index)
{
    Q_UNUSED(index);
    QString city = ui->comboBox_2->currentText();
    QString zone = ui->comboBox_2->currentData().toString();
    ui->plainTextEdit->appendPlainText(city+" : has zone number =" + zone);
}


void Widget::on_pushButton_4_clicked()
{
    ui->plainTextEdit->clear();
}

