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

void Widget::paintEvent(QPaintEvent *event){
    Q_UNUSED(event);
    QPainter painter(this);
    painter.drawPixmap(0,0,this->width(),this->height(),QPixmap("") );
}

void Widget::closeEvent(QCloseEvent *event){
    QString dlgTitle = "消息框";
    QString strInfo = "确定要退出吗？";
    QMessageBox::StandardButton result = QMessageBox::question(this,dlgTitle,strInfo,QMessageBox::Yes|QMessageBox::No | QMessageBox::Cancel);
    if(result == QMessageBox::Yes){event->accept();}
    else{event->ignore();}
}

void Widget::mousePressEvent(QMouseEvent *event){
    if(event->button()==Qt::LeftButton){
        QPoint pt = event->pos();
        QPointF relaPt = event->position();
        QPointF winPt = event->scenePosition();
        QPointF globPt = event->globalPosition();
        QString str = QString::asprintf("pos()=(%d,%d)", pt.x(),pt.y());
        str= str + QString::asprintf("\nposition()=(%.0f,%.0f)", relaPt.x(),relaPt.y());
        str= str + QString::asprintf("\nglobalPosition()=(%.0f,%.0f)",globPt.x(),globPt.y());
        ui->labMove->setText(str);
        ui->labMove->adjustSize();
        ui->labMove->move(event->pos());
    }
    QWidget::mousePressEvent(event);
}
void Widget::keyPressEvent(QKeyEvent *event)
{
    QPoint pt = ui->labMove->pos();
    int a = event->key();
    if(a==Qt::Key_A || a==Qt::Key_Left){ui->labMove->move(pt.x()-20, pt.y());}
    if(a == Qt::Key_D || a == Qt::Key_Right){ui->labMove->move(pt.x()+20, pt.y());}
    if(a == Qt::Key_W || a== Qt::Key_Up){ui->labMove->move(pt.x(),pt.y()-20);}
    if(a==Qt::Key_S || a== Qt::Key_Down){ui->labMove->move(pt.x(),pt.y()+20);}
    event->accept();
}

void Widget::showEvent(QShowEvent *event){
    Q_UNUSED(event);
    qDebug("showEvent()函数被触发");
}

void Widget::hideEvent(QHideEvent *event){
    Q_UNUSED(event);
    qDebug("hideEvent()函数被触发");
}







