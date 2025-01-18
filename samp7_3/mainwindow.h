#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>
#include <QPaintEvent>
#include "tformdoc.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
protected:
    void paintEvent(QPaintEvent* event);

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void do_changeTabTitle(QString title);

    void on_action1_triggered();

    void on_action2_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
