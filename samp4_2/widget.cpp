#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    setsize();
    ui->comboBox->addItem("channel 1");
    ui->comboBox->addItem("channel 2");
}



void Widget::setsize()
{
    this->setFixedSize(920,600);
    ui->groupBox->setFixedSize(300,600);
    ui->groupBox_2->setFixedSize(600,600);

    ui->groupBox_3->setFixedWidth(300);
}

void Widget::showboolinfo(QString str, bool b)
{
    if(b)ui->plainTextEdit->appendPlainText(str+ " = True");
    else ui->plainTextEdit->appendPlainText(str + " = False");
}

void Widget::out(QString str){ui->plainTextEdit->appendPlainText(str);}
bool Widget::channel(){
    if(ui->comboBox->currentText()=="channel 1")return true;
    else return false;
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_p11_clicked()
{
    QString str = ui->lineEdit->text();
    if(str.isEmpty())return;
    QChar ch1 = str.front();
    QChar ch2 = str.back();
    if(ui->comboBox->currentText()=="channel 2"){
        QString res(ch2);
        ui->plainTextEdit->appendPlainText(str + " has back = " + res);
    }
    else{
        QString res(ch1);
        ui->plainTextEdit->appendPlainText(str + " has front = " + res);
    }
}


void Widget::on_p5_clicked()
{
    ui->plainTextEdit->clear();
}


void Widget::on_p12_clicked()
{
    QString str = ui->lineEdit->text();
    qint16 n = ui->spinBox->text().toInt();
    if(str.isEmpty())return;
    QString strn = ui->spinBox->text();
    if(n>= str.size()){
        ui->plainTextEdit->appendPlainText("n is more than size of str1, Please choose less n");
        return;
    }
    if(ui->comboBox->currentText()=="channel 1"){
        ui->plainTextEdit->appendPlainText("the left " + strn+" Chars is: " +str.first(n));
    }
    else{
        ui->plainTextEdit->appendPlainText("the right " + strn+" Chars is: " +str.last(n));
    }
}


void Widget::on_p13_clicked()
{
    QString str = ui->lineEdit->text();
    qint16 n = ui->spinBox->text().toInt();
    if(str.isEmpty())return;
    QString strn = ui->spinBox->text();
    if(n>= str.size()){
        ui->plainTextEdit->appendPlainText("n is more than size of str1, Please choose less n");
        return;
    }
    if(ui->comboBox->currentText()=="channel 1"){
        ui->plainTextEdit->appendPlainText("the first " + strn+" Chars is: " +str.first(n));
    }
    else{
        ui->plainTextEdit->appendPlainText("the last " + strn+" Chars is: " +str.last(n));
    }
}


void Widget::on_p14_clicked()
{
    QString str = ui->lineEdit->text();
    QString nstr = ui->spinBox->text();
    qint16 n = nstr.toInt();
    if(str.isEmpty() || n == 0){return;}
    QChar star('*');
    if(str.count(star)+1<n){ui->plainTextEdit->appendPlainText("try less number to input in spinbox");return;}
    ui->plainTextEdit->appendPlainText("The " + nstr +"th" + " section seperated by * is: " + str.section(star,n-1,n-1));


}


void Widget::on_p21_clicked()
{
    QString str = ui->lineEdit->text();
    if(ui->comboBox->currentText() == "channel 1"){
        showboolinfo("Whether " + str + " is Null" , str.isNull());
    }
    else{
        showboolinfo("Whether " +str+" is Empty",str.isEmpty());
    }
}


void Widget::on_p22_clicked()
{
    QString str = ui->lineEdit->text();
    qint16 n = ui->spinBox->text().toInt();
    QString res = str+" has resized to: ";
    str.resize(n);
    ui->plainTextEdit->appendPlainText( res+ str);
}


void Widget::on_pushButton_8_clicked()
{
    QString str = ui->lineEdit->text();
    if(ui->comboBox->currentText() == "channel 1"){
        QString l = QString::number(str.length());
        ui->plainTextEdit->appendPlainText(str + " has length of " +l );
    }
    else{
        QString l = QString::number(str.size());
        ui->plainTextEdit->appendPlainText(str + " has size of " +l );
    }
}


void Widget::on_p24_clicked()
{
    QString str = ui->lineEdit->text();
    QString s = str;
    if(channel()){
        str.fill('*');
        out(s + " is filled to: " + str);
    }
    else{
        qint16 n = ui->spinBox->text().toInt();
        str.fill('*',n);
        out(s + "is filled to: " + str + "(size is number in spinbox)");
    }
}


void Widget::on_p31_clicked()
{
    QString str = ui->lineEdit->text();
    QString a = ui->lineEdit_2->text();
    if(str.isEmpty() || a.isEmpty())return;
    if(channel()){
        out("The first place where " + a + " occurs in " +str+" is: " + QString::number(str.indexOf(a)+1));
    }
    else{
        out("The last place where " + a + " occurs in " +str+" is: " + QString::number(str.lastIndexOf(a)+1 ));
    }
}


void Widget::on_p32_clicked()
{
    QString str = ui->lineEdit->text();
    QString a = ui->lineEdit_2->text();
    if(str.isEmpty() || a.isEmpty())return;
    showboolinfo("whether "+str +" contains "+a+" is ",str.contains(a));
}


void Widget::on_p33_clicked()
{
    QString str = ui->lineEdit->text();
    QString a = ui->lineEdit_2->text();
    if(str.isEmpty() || a.isEmpty())return;
    if(channel()){
        showboolinfo("whether "+str+" endswith " +a, str.endsWith(a));
    }
    else{
        showboolinfo("whether "+str+" startswith " +a, str.startsWith(a));
    }
}


void Widget::on_p34_clicked()
{
    QString str = ui->lineEdit->text();
    QString a = ui->lineEdit_2->text();
    if(str.isEmpty() || a.isEmpty())return;
    out(str + " counts " + QString::number(str.count(a))+" " +a );
}


void Widget::on_p41_clicked()
{
    QString str = ui->lineEdit->text();
    QString a = ui->lineEdit_2->text();
    if(str.isEmpty())return;
    if(channel()){str = str.trimmed();}
    else{str = str.simplified();}
    out(str);
}


void Widget::on_p42_clicked()
{
    QString str = ui->lineEdit->text();
    QString a = ui->lineEdit_2->text();
    qint16 n = ui->spinBox->text().toInt();
    str.insert(n,a);
    out(str);
}


void Widget::on_p43_clicked()
{
    QString str = ui->lineEdit->text();
    QString a = ui->lineEdit_2->text();
    if(str.isEmpty())return;
    str.remove(a[0]);
    out(str);

}


void Widget::on_p44_clicked()
{
    QString str = ui->lineEdit->text();
    QString a = ui->lineEdit_2->text();
    if(str.isEmpty() || a.isEmpty())return;
    qint16 n = ui->spinBox->text().toInt();
    if(n>= str.size())out("try smaller n");
    else{
        str.replace(n,str.size(),a);
        out(str);
    }
}

