#ifndef TDICETHREAD_H
#define TDICETHREAD_H

#include <QThread>
#include <QRandomGenerator>
#include <QReadWriteLock>
#include <QWaitCondition>
class TDiceThread : public QThread
{
    Q_OBJECT
public:
    explicit TDiceThread(QObject *parent = nullptr);
    void diceBegin();
    void dicePause();
    void stopThread();
protected:
    void run();
private:
    int m_seq = 0;
    int m_diceValue;
    bool m_paused = true;
    bool m_stop = false;
signals:
    void newValue(int seq, int m_diceValue);
};

#endif // TDICETHREAD_H

class TSpinThread:public QThread
{
    Q_OBJECT
protected:
    void run();
public:
    explicit TSpinThread(QObject* parent = nullptr);
signals:
    void newSpin(int val);
};

class TValueThread:public QThread
{
    Q_OBJECT
protected:
    void run();
public:
    explicit TValueThread(QObject *parent = nullptr);
signals:
    void newValue(int seq, int diceValue);
};
