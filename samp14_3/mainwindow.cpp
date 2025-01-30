#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    threadA = new TDiceThread(this);
    threadValue = new TValueThread(this);
    threadSpin = new TSpinThread(this);
    connect(threadA,&TDiceThread::started, this, &MainWindow::do_threadA_started);
    connect(threadA,&TDiceThread::finished,this, &MainWindow::do_threadA_finished);
    connect(threadValue,&TValueThread::newValue,this,&MainWindow::do_newValue);
    connect(threadSpin,&TSpinThread::newSpin,this,&MainWindow::do_newSpin);
}

void MainWindow::do_threadA_started()
{
    ui->statusbar->showMessage("Thread 状态：thread started");
    ui->actionthread_on->setEnabled(false);
    ui->actionstart->setEnabled(true);
    ui->actionend->setEnabled(true);
}

void MainWindow::do_threadA_finished()
{
    ui->statusbar->showMessage("Thread 状态：thread finished");
    ui->actionthread_on->setEnabled(true);
    ui->actionend->setEnabled(false);
    ui->actionthread_on->setEnabled(false);
    ui->actionpause->setEnabled(false);
}
/*
void MainWindow::do_threadA_newValue(int seq, int diceValue)
{
    QString str = QString::asprintf("第 %d 次掷骰子，点数为：%d",seq,diceValue);
    ui->plainTextEdit->appendPlainText(str);
    ui->spinBox->setValue(diceValue);
}
*/

void MainWindow::do_newSpin(int diceValue)
{
    ui->spinBox->setValue(diceValue);
}

void MainWindow::do_newValue(int seq, int diceValue)
{
    QString str= QString::asprintf("第 %d 次掷骰子，点数为：%d",seq,diceValue);
    ui->plainTextEdit->appendPlainText(str);
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    if(threadA->isRunning())
    {
        threadA->terminate();
        threadA->wait();
    }
    event->accept();
}

void MainWindow::on_actionthread_on_triggered()
{

    threadValue->start();
    if(!threadSpin->isRunning())
        threadSpin->start();
    if(!threadA->isRunning())
    threadA->start();
}

void MainWindow::on_actionend_triggered()
{
    threadA->terminate();
    threadA->wait();
}


void MainWindow::on_actionpause_triggered()
{
    threadA->dicePause();
    ui->actionstart->setEnabled(true);
    ui->actionpause->setEnabled(false);
}


void MainWindow::on_actionstart_triggered()
{
    threadA->diceBegin();
    ui->actionstart->setEnabled(false);
    ui->actionpause->setEnabled(true);
}


void MainWindow::on_actionclear_triggered()
{
    ui->plainTextEdit->clear();
}


void MainWindow::on_actionclose_triggered()
{
    this->close();
}

