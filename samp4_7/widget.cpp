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

void Widget::on_pushButton_6_clicked()
{
    QTime TM1(17,28,0);
    QString str = TM1.toString("HH:mm:ss");
    qDebug("Original time = %s", str.toLocal8Bit().data());
    QTime TM2 = TM1.addSecs(150);
    str = TM2.toString("HH:mm:ss");
    qDebug("Current time = %s", str.toLocal8Bit().data());
    qDebug("Hour = %d", TM2.hour());
    qDebug("Msecond = %d", TM2.msec());
}


void Widget::on_pushButton_5_clicked()
{
    QDate DT1(2021,7,6);
    //初始化日期
    QString str= DT1.toString("yyyy-MM-dd");
    qDebug("DT1= %s", str.toLocal8Bit().data());
    QDate DT2;
    DT2.setDate(2024,8,25);
    //设置日期
    str= DT2.toString("yyyy-MM-dd");
    qDebug("DT2= %s",str.toLocal8Bit().data());
    qDebug("Days between DT2 and DT1= %d", DT2.daysTo(DT1));//DT2 与 DT1 相差的天数
    DT2= QDate::currentDate();
    str= DT2.toString("yyyy-MM-dd");
    qDebug("Current date= %s", str.toLocal8Bit().data());
    qDebug("Year= %d", DT2.year());
    qDebug("Month= %d", DT2.month());
    qDebug("Day= %d",
           DT2.day());
    qDebug("Day of week= %d",DT2.dayOfWeek());
    //获取当前日期
    //1 表示星期一，7 表示星期天
}


void Widget::on_pushButton_4_clicked()
{
    QDateTime DT1 = QDateTime::currentDateTime();
    QString str = DT1.toString("yyyy-MM-dd hh:mm:ss");
    qDebug("DT1 = %s", str.toLocal8Bit().data());

    QDate dt = DT1.date();
    str = dt.toString("yyyy-MM-dd");
    qDebug("DT1.data() = %s", str.toLocal8Bit().data());
    QTime tm = DT1.time();
    str = tm.toString("hh:mm:ss zzz");
    qDebug("DT1.time() = %s", str.toLocal8Bit().data());

    qint64 MS = DT1.toSecsSinceEpoch();
    qDebug("DT1.toSecsSinceEpoch() = %lld", MS);
    MS += 120;
    DT1.setSecsSinceEpoch(MS);
    str = DT1.toString("yyyy-mm-dd hh:mm:ss");
    qDebug("DT1 + 120 = %s",str.toLocal8Bit().data());
}



void Widget::on_pushButton_7_clicked()
{
    QDateTime curDataTime = QDateTime::currentDateTime();
    ui->timeEdit->setTime(curDataTime.time());
    ui->lineEdit->setText(curDataTime.toString("hh:mm:ss"));
    ui->dateEdit->setDate(curDataTime.date());
    ui->lineEdit_2->setText(curDataTime.toString("yyyy-MM-dd"));
    ui->dateTimeEdit->setDateTime(curDataTime);
    ui->lineEdit_3->setText(curDataTime.toString("yyyy-MM-dd  hh:mm:ss") );


}


void Widget::on_pushButton_clicked()
{
    QString str = ui->lineEdit->text();
    str = str.trimmed();
    if(!str.isEmpty())
    {
        QTime tm = QTime::fromString(str,"hh:mm:ss");
        ui->timeEdit->setTime(tm);
    }
}


void Widget::on_pushButton_2_clicked()
{//“日期时间 fromString”按钮
    QString str= ui->lineEdit_2->text();
    //读取字符串表示的日期时间
    str= str.trimmed();
    if (!str.isEmpty())
    {
        QDateTime datetime= QDateTime::fromString(str,"yyyy-MM-dd hh:mm:ss");
        ui->dateTimeEdit->setDateTime(datetime);
        //设置日期时间
    }
}


void Widget::on_pushButton_3_clicked()
{//日历组件的 selectionChanged()信号的槽函数
    QDate dt= ui->calendarWidget->selectedDate();
    QString str= dt.toString("yyyy 年 M 月 d 日");
    ui->lineEdit_4->setText(str);
}



