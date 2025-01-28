#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <tchartview.h>
#include <QLabel>
#include <QXYSeries>
#include <QLineSeries>
#include <QSplineSeries>
#include <QValueAxis>
#include <QLegendMarker>
#include <QLegend>
#include <QRandomGenerator>
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
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QChart *chart;
    QLabel *lab_chartXY;
    QLabel *lab_hoverXY;
    QLabel *lab_clickXY;
    void createChart();
    void prepareData();
    int getIndexFromX(QXYSeries *series, qreal xValue, qreal tol=0.05);
private slots:
    void do_legendMarkerClicked();
    void do_mouseMovePoint(QPoint point);
    void do_series_clicked(const QPointF &point);
    void do_series_hovered(const QPointF &point, bool state);
    void on_dragMode_currentIndexChanged(int index);
    void on_comboBox_2_currentIndexChanged(int index);
};
#endif // MAINWINDOW_H
