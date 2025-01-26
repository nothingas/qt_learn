#ifndef TBATTERY_H
#define TBATTERY_H

#include <QWidget>
#include <QEvent>
#include <QPaintEvent>
#include <QPen>
#include <QBrush>
#include <QPainter>
#include <QSize>
class TBattery : public QWidget
{
    Q_OBJECT
public:
    explicit TBattery(QWidget *parent = nullptr);
    Q_PROPERTY(int powerLevel READ powerLevel WRITE setPowerLevel NOTIFY powerLevelChanged)
    Q_PROPERTY(int warnLevel READ warnLevel WRITE setWarnLevel)
private:
    QColor colorBack = Qt::white;
    QColor colorBorder = Qt::black;
    QColor colorPower = Qt::green;
    QColor colorWarning = Qt::red;
    int m_powerLevel = 60;
    int m_warnLevel = 20;
protected:
    void paintEvent(QPaintEvent *event);
public:
    void setPowerLevel(int pow);
    int powerLevel();
    void setWarnLevel(int warn);
    int warnLevel();
    QSize sizeHint();
signals:
    void powerLevelChanged(int);
};

#endif // TBATTERY_H
