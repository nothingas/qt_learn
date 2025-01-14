#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->label->setScaledContents(true);
    this->setAcceptDrops(true);
    ui->plainTextEdit->setAcceptDrops(false);
    ui->label->setAcceptDrops(false);
}

void Widget::dragEnterEvent(QDragEnterEvent *event){
    ui->plainTextEdit->clear();
    ui->plainTextEdit->appendPlainText("dragEnterEvent 事件 mimeData()->formats()");
    for(int i=0; i<event->mimeData()->formats().size(); i++)
        ui->plainTextEdit->appendPlainText(event->mimeData()->formats().at(i));

    ui->plainTextEdit->appendPlainText("\n dragEnterEvent 事件 mimeData()->urls()");
    for(int i=0; i<event->mimeData()->urls().size(); i++)
    {
        QUrl url= event->mimeData()->urls().at(i);
        //带路径文件名
        ui->plainTextEdit->appendPlainText(url.path());
    }

    if (event->mimeData()->hasUrls())
    {
        QString filename= event->mimeData()->urls().at(0).fileName(); //获取文件名
        QFileInfo fileInfo(filename);
        //获取文件信息
        QString ext= fileInfo.suffix().toUpper();
        //获取文件后缀
        if (ext == "JPG")
            event->acceptProposedAction();
        //接受拖动操作
        else
            event->ignore();
        //忽略事件
    }
    else event->ignore();
}

void Widget::resizeEvent(QResizeEvent *event){
    QSize sz= ui->plainTextEdit->size();
    ui->plainTextEdit->resize(this->width()-10,sz.height());
    //只改变宽度
    ui->label->resize(this->width()-10,this->height()-sz.height()-20);
    //改变宽度和高度
    event->accept();
}
void Widget::dropEvent(QDropEvent *event){
    QString filename= event->mimeData()->urls().at(0).path();
    filename= filename.right(filename.length()-1);
    QPixmap pixmap(filename);
    ui->label->setPixmap(pixmap);
    event->accept();
}

Widget::~Widget()
{
    delete ui;
}
