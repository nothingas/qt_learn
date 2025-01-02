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
    void on_p11_clicked();

    void on_p5_clicked();

    void on_p12_clicked();

    void on_p13_clicked();

    void on_p14_clicked();

    void on_p21_clicked();

    void on_p22_clicked();

    void on_pushButton_8_clicked();

    void on_p24_clicked();

    void on_p31_clicked();

    void on_p32_clicked();

    void on_p33_clicked();

    void on_p34_clicked();

    void on_p41_clicked();

    void on_p42_clicked();

    void on_p43_clicked();

    void on_p44_clicked();

private:
    void setsize();
    void showboolinfo(QString str, bool b);
    void out(QString str);
    bool channel();
    Ui::Widget *ui;
};
#endif // WIDGET_H
