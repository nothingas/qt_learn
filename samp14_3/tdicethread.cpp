#include "tdicethread.h"
TDiceThread::TDiceThread(QObject *parent):QThread{parent}
{
}
TValueThread::TValueThread(QObject *parent):QThread{parent}
{}
TSpinThread::TSpinThread(QObject *parent):QThread{parent}
{}


QReadWriteLock rwLocker;
QWaitCondition waiter;
int seq = 0, diceValue = 0;

void TDiceThread::diceBegin()
{
    m_paused = false;
}

void TDiceThread::dicePause()
{
    m_paused = true;
}

void TDiceThread::stopThread()
{
    m_stop = true;
}

void TDiceThread::run()
{
    seq = 0;
    while(1)
    {
        rwLocker.lockForWrite();
        diceValue = QRandomGenerator::global()->bounded(1,7);
        seq++;
        rwLocker.unlock();
        waiter.wakeAll();
        msleep(500);
    }
}

void TValueThread::run()
{
    while(1)
    {
        rwLocker.lockForRead();
        waiter.wait(&rwLocker);
        emit newValue(seq,diceValue);
        rwLocker.unlock();
    }
}

void TSpinThread::run()
{
    while(1)
    {
        rwLocker.lockForRead();
        waiter.wait(&rwLocker);
        emit newSpin(diceValue);
        rwLocker.unlock();
    }
}
