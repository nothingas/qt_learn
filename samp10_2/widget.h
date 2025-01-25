#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QApplication>
#include <QPainter>
#include <QPaintEvent>
#include <QPainterPath>
#include <qtransform.h>
#include <qpoint.h>
#include <qline.h>
#include <qevent.h>
#include <qbrush.h>
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
    void paintEvent(QPaintEvent* event);
};
#endif // WIDGET_H
