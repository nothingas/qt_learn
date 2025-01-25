#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <qpainter.h>
#include <qrect.h>
#include <qpen.h>
#include <qbrush.h>
#include <qfont.h>
#include <QPaintEvent>
#include <QLinearGradient>
#include <QRadialGradient>
#include <QGradient>
QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;
protected:
    void paintEvent(QPaintEvent *event);

};
#endif // WIDGET_H
