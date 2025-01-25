#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    setPalette(QPalette(Qt::white));
    setAutoFillBackground(true);
    this->resize(300,300);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    int W = width();
    int H = height();
    int side = qMin(W,H);
    QRect rect((W-side)/2, (H-side)/2,side,side);//视口矩形区
    painter.drawRect(rect);
    painter.setViewport(rect);
    painter.setWindow(-100,-100,200,200);

    QPen pen;
    pen.setWidth(1);
    pen.setColor(Qt::red);
    pen.setStyle(Qt::SolidLine);
    pen.setCapStyle(Qt::FlatCap);
    pen.setJoinStyle(Qt::BevelJoin);
    painter.setPen(pen);

    QLinearGradient linegradient(0,0,100,0);
    linegradient.setColorAt(0,Qt::yellow);
    linegradient.setColorAt(1,Qt::green);
    linegradient.setSpread(QGradient::PadSpread);
    painter.setBrush(linegradient);

    painter.setCompositionMode(QPainter::CompositionMode_Difference);


    for(int i=0; i<36; i++)
    {
        painter.drawEllipse(QPoint(50,0),50,50);
        painter.rotate(10);
    }
    event->accept();
}
