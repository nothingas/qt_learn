#include "widget.h"
#include "ui_widget.h"
#include "QString"
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    this->setFixedSize(600,800);
    totallayout = new QVBoxLayout(this);

    gpbox1 = new QGroupBox();
    gpbox2 = new QGroupBox("其他测试和功能");
    gpbox3 = new QGroupBox("结果显示");
    gpbox4 = new QGroupBox("QChar特性判断");
    layout1 = new QGridLayout(gpbox1);
    layout2 = new QGridLayout(gpbox2);
    layout3 = new QHBoxLayout(gpbox3);
    layout4 = new QVBoxLayout(gpbox4);


    splitter1 = new QSplitter();
    splitter1->setOrientation(Qt::Horizontal);
    splitter1->setOpaqueResize(false);
    splitter1->setHandleWidth(8);
    splitter1->setStretchFactor(0,3);
    splitter1->setStretchFactor(1,2);

    //add_layout:
    totallayout->addWidget(gpbox1);
    totallayout->addWidget(gpbox2);

    totallayout->addWidget(splitter1);
    splitter1->addWidget(gpbox3);
    splitter1->addWidget(gpbox4);
    totallayout->addWidget(splitter1);


    //set-stretch:
    layout1->setRowStretch(0,1);
    layout1->setRowStretch(1,1);
    layout1->setColumnStretch(0,1);
    layout1->setColumnStretch(1,3);
    layout1->setColumnStretch(2,3);

    layout2->setRowStretch(1,1);
    layout2->setColumnStretch(0,1);
    layout2->setColumnStretch(1,1);

    totallayout->setStretch(0,1);
    totallayout->setStretch(1,1);
    totallayout->setStretch(2,2);




    //add_zujian:
    btn1 = new QPushButton("每个字符的Unicode");
    btn2 = new QPushButton("单个字符特性判断");
    btn3 = new QPushButton("与Latin1的转换");
    btn4 = new QPushButton("与UTF-16的转换");
    btn5 = new QPushButton("Qchar比较和转换");
    btn6 = new QPushButton("清空文本框");

    text1 = new QLineEdit;
    text2 = new QLineEdit;

    text3 = new QPlainTextEdit;

    str1 = new QLabel("输入字符串");
    str2 = new QLabel("输入单个字符");
    ck1 = new QCheckBox("isDigit");
    ck2 = new QCheckBox("isLetter");
    ck3 = new QCheckBox("isLetterOrNumber");
    ck4 = new QCheckBox("isUpper");
    ck5 = new QCheckBox("isLower");
    ck6 = new QCheckBox("isMark");
    ck7 = new QCheckBox("isSpace");
    ck8 = new QCheckBox("isSymbol");
    ck9 = new QCheckBox("isPunct");
    layout1->addWidget(str1);
    layout1->addWidget(text1);
    layout1->addWidget(btn1);
    layout1->addWidget(str2);
    layout1->addWidget(text2);
    layout1->addWidget(btn2);



    layout2->addWidget(btn3);
    layout2->addWidget(btn4);
    layout2->addWidget(btn5);
    layout2->addWidget(btn6);

    layout3->addWidget(text3);

    layout4->addWidget(ck1);
    layout4->addWidget(ck2);
    layout4->addWidget(ck3);
    layout4->addWidget(ck4);
    layout4->addWidget(ck5);
    layout4->addWidget(ck6);
    layout4->addWidget(ck7);
    layout4->addWidget(ck8);
    layout4->addWidget(ck9);
    //ui->setupUi(this);
    iniSignalSlots();

}
//Slots:
void Widget::btn1_GetChars(){
    QString str =  text1->text();
    if(str.isEmpty())return;
    text3->clear();
    for(qint16 i=0; i<str.size();i++)
    {
        QChar ch = str.at(i);
        char16_t unicode = ch.unicode();
        QString Strch(ch);
        QString info = Strch + QString::asprintf("\t, Unicode is equal to 0x%X ",unicode);
        text3->appendPlainText(info);
    }
}

void Widget::btn2_CharJudge()
{
    QString str = text2->text();
    if(str.isEmpty())return;
    QChar ch = str.at(0);

    QString strch(ch);
    text3->appendPlainText(ch);

    ck1->setChecked(ch.isDigit());
    ck2->setChecked(ch.isLetter());
    ck3->setChecked(ch.isLetterOrNumber());
    ck4->setChecked(ch.isUpper());
    ck5->setChecked(ch.isLower());
    ck6->setChecked(ch.isMark());
    ck7->setChecked(ch.isSpace());
    ck8->setChecked(ch.isSymbol());
    ck9->setChecked(ch.isPunct());
}

void Widget::btn3_transferLatin()
{
    QString str = "Dimple";
    text3->clear();
    text3->appendPlainText(str);
    QChar chP = QChar::fromLatin1('P');
    str[0] = chP;
    text3->appendPlainText(str);
}

void Widget::btn4_transferutf16()
{
    QString str = "hello,北京";
    text3->clear();
    text3->appendPlainText(str);
    QString str2 = "青岛";
    char16_t ch1 = str2[0].unicode();
    char16_t ch2 = str2[1].unicode();
    str[6] = QChar(ch1);
    str[7] = QChar(ch2);
    text3->appendPlainText(str);

}

void Widget::btn5_qchartransfer()
{
    QString str= "他们来自于河南或河北";
    text3->clear();
    text3->appendPlainText(str);

    QString HuStr= "河to湖";
    QChar hu = QChar(HuStr[3].unicode());
    QChar he = QChar(HuStr[0].unicode());
    for(qint16 i=0;i<str.size();i++)
    {
        if(str[i] == he)str[i] = hu;
    }
    text3->appendPlainText(str);

}

void Widget::btn6_clear()
{
    text3->clear();
}

void Widget::iniSignalSlots()
{
    connect(btn1, SIGNAL(clicked()), this, SLOT(btn1_GetChars()));
    connect(btn2, SIGNAL(clicked()), this, SLOT(btn2_CharJudge())  );
    connect(btn3, SIGNAL(clicked()), this, SLOT(btn3_transferLatin()) );
    connect(btn4,SIGNAL(clicked()), this , SLOT(btn4_transferutf16()) );
    connect(btn5, SIGNAL(clicked()), this , SLOT(btn5_qchartransfer()) );
    connect(btn6, SIGNAL(clicked()), this , SLOT(btn6_clear())  );
}



Widget::~Widget()
{
    delete ui;
}
