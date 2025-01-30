#include "tdicethread.h"

TDiceThread::TDiceThread(QObject *parent):QThread{parent}
{
}

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
    m_stop = false;
    m_paused = false;
    m_seq = 0;
    while(!m_stop)
    {
        if(!m_paused)
        {
            mutex.lock();
            m_diceValue = 0;
            for(int i=0; i<5; i++)
            m_diceValue += QRandomGenerator::global()->bounded(1,7);
            m_diceValue = m_diceValue/5;
            m_seq++;
            mutex.unlock();
        }
        msleep(500);
    }
    quit();
}

bool TDiceThread::readValue(int *seq, int *diceValue)
{
    if(mutex.tryLock(100))
    {
        *seq = m_seq;
        *diceValue = m_diceValue;
        mutex.unlock();
        return true;
    }
    else
        return false;
}
