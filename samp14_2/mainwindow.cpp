#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    threadA = new TDiceThread(this);
    connect(threadA,&TDiceThread::started, this, &MainWindow::do_threadA_started);
    connect(threadA,&TDiceThread::finished,this, &MainWindow::do_threadA_finished);
    timer = new QTimer(this);
    timer->setInterval(200);
    timer->stop();
    connect(timer,&QTimer::timeout,this,&MainWindow::do_timeOut);
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

void MainWindow::do_timeOut()
{
    int tmpSeq = 0, tmpValue = 0;
    bool valid = threadA->readValue(&tmpSeq,&tmpValue);
    if(valid && (tmpSeq != m_seq))
    {
        m_seq = tmpSeq;
        m_diceValue = tmpValue;
        QString str = QString::asprintf("第 %d 次掷骰子，点数为：%d",m_seq,m_diceValue);
        ui->plainTextEdit->appendPlainText(str);
        ui->spinBox->setValue(m_diceValue);
    }
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
    threadA->start();
}

void MainWindow::on_actionend_triggered()
{
    threadA->stopThread();
}


void MainWindow::on_actionpause_triggered()
{
    threadA->dicePause();
    timer->stop();
    ui->actionstart->setEnabled(true);
    ui->actionpause->setEnabled(false);
}


void MainWindow::on_actionstart_triggered()
{
    threadA->diceBegin();
    timer->start();
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
