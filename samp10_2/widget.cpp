#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    setPalette(QPalette(Qt::red));
    setAutoFillBackground(true);
    resize(600,400);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setRenderHint(QPainter::TextAntialiasing);

    QPen pen;
    pen.setWidth(2);
    pen.setColor(Qt::yellow);
    pen.setStyle(Qt::SolidLine);
    pen.setCapStyle(Qt::FlatCap);
    pen.setJoinStyle(Qt::BevelJoin);
    painter.setPen(pen);



    QPainterPath star;
    qreal R = 100;
    qreal d = 3.14159265/5;
    QPoint points[5] =
        {QPoint(0,0),QPoint(R,0),QPoint(R-R*qCos(d),R*qSin(d)),QPoint(R-R*qCos(d)+R*qCos(2*d),R*qSin(d)-R*qSin(2*d)
),QPoint(R-R*qCos(d)+2*R*qCos(2*d) ,R*qSin(d) )};

    star.moveTo(points[0]);
    for(int i=1;i<5;i++){
        star.lineTo(points[i]);
    }
    star.lineTo(points[0]);
    star.setFillRule(Qt::WindingFill);


    //star 1:
    painter.save();
    painter.translate(40,80);
    painter.fillPath(star,Qt::yellow);
    painter.restore();
    //star2:
    painter.save();
    painter.translate(140,20);
    painter.scale(0.3,0.3);
    painter.rotate(60);
    painter.fillPath(star,Qt::yellow);
    painter.restore();
    //star3:
    painter.save();
    painter.translate(180,60);
    painter.scale(0.3,0.3);
    painter.rotate(20);
    painter.fillPath(star,Qt::yellow);
    painter.restore();
    //star4:
    painter.save();
    painter.translate(180,120);
    painter.scale(0.3,0.3);
    painter.rotate(-20);
    painter.fillPath(star,Qt::yellow);
    painter.restore();
    //star5:
    painter.save();
    painter.translate(140,160);
    painter.scale(0.3,0.3);
    painter.rotate(-60);
    painter.fillPath(star,Qt::yellow);
    painter.restore();
}
