#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    setPalette(QPalette(Qt::white));
    setAutoFillBackground(true);
    this->resize(400,300);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setRenderHint(QPainter::TextAntialiasing);
    int W = this->width();
    int H = this->height();
    QRect rect(W/4,H/4,W/2,H/2);

    QPen pen;
    pen.setWidth(3);
    pen.setColor(Qt::red);
    pen.setStyle(Qt::SolidLine);
    pen.setCapStyle(Qt::FlatCap);
    pen.setJoinStyle(Qt::BevelJoin);
    painter.setPen(pen);

    QBrush brush;
    brush.setColor(Qt::yellow);
    brush.setStyle(Qt::SolidPattern);


    QPixmap texturePixmap("");
    QBrush brush2;
    brush2.setStyle(Qt::TexturePattern);
    brush.setTexture(texturePixmap);

    QLinearGradient lineargrand(rect.left(),rect.top(),rect.right(),rect.bottom());
    lineargrand.setColorAt(0,Qt::red);
    lineargrand.setColorAt(0.5,Qt::green);
    lineargrand.setColorAt(1,Qt::white);

    QRadialGradient radial(W/2,H/2 ,qMax(W/5,H/5),W/2,H/2);
    radial.setColorAt(0,Qt::red);
    radial.setColorAt(1,Qt::yellow);
    radial.setSpread(QGradient::PadSpread);

    painter.setBrush(radial);
    painter.drawRect(rect);
    event-> accept();
}
