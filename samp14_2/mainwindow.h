#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "tdicethread.h"
#include <QEvent>
#include <QCloseEvent>
#include <QTimer>
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
private:
    Ui::MainWindow *ui;
    TDiceThread * threadA;
    QTimer *timer;

    int m_seq = 0;
    int m_diceValue = 1;
private slots:
    void do_timeOut();
    void do_threadA_started();
    void do_threadA_finished();
    void on_actionthread_on_triggered();

    void on_actionend_triggered();

    void on_actionpause_triggered();

    void on_actionstart_triggered();

    void on_actionclear_triggered();

    void on_actionclose_triggered();

protected:
    void closeEvent(QCloseEvent* event);
};
#endif // MAINWINDOW_H
