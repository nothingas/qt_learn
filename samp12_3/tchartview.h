#ifndef TCHARTVIEW_H
#define TCHARTVIEW_H


#include <QChartView>
#include <QObject>
#include <QWidget>
#include <QEvent>
#include <QMouseEvent>
class TChartView : public QChartView
{
    Q_OBJECT
public:
    TChartView(QWidget *parent = nullptr);
    ~TChartView();
    void setCustomZoomRect(bool custom);
private:
    QPoint beginPoint;
    QPoint endPoint;
    bool m_customZoom = false;
protected:
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void keyPressEvent(QKeyEvent *event);
    void wheelEvent(QWheelEvent *event);
signals:
    void mouseMovePoint(QPoint point);

};

#endif // TCHARTVIEW_H
