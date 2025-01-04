#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

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

private slots:
    void on_b2_clicked();

    void on_b3_clicked();

    void on_b4_clicked();

    void on_b5_clicked();

    void on_b1_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
