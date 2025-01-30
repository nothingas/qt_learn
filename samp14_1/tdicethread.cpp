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
            m_diceValue = QRandomGenerator::global()->bounded(1,7);
            m_seq++;
            emit newValue(m_seq,m_diceValue);
        }
        msleep(500);
    }
    quit();
}
