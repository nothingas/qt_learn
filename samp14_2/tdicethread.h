#ifndef TDICETHREAD_H
#define TDICETHREAD_H

#include <QThread>
#include <QRandomGenerator>
#include <QMutex>
class TDiceThread : public QThread
{
    Q_OBJECT
public:
    explicit TDiceThread(QObject *parent = nullptr);
    void diceBegin();
    void dicePause();
    void stopThread();
    bool readValue(int *seq, int *diceValue);
protected:
    void run();
private:
    QMutex mutex;
    int m_seq = 0;
    int m_diceValue;
    bool m_paused = true;
    bool m_stop = false;
};

#endif // TDICETHREAD_H
