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

    void on_p12_clicked();

    void on_p13_clicked();



    void on_p21_clicked(bool checked);

    void on_p22_clicked(bool checked);

    void on_p23_clicked(bool checked);

    void on_c1_clicked(bool checked);

    void on_c2_clicked(bool checked);

    void on_c3_clicked(bool checked);

    void on_r1_clicked();

    void on_r2_clicked();

    void on_r3_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
