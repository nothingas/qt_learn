#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    createChart();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::createChart()
{
    QChartView* chartView = new QChartView(this);
    QChart* chart = new QChart();
    chart->setTitle("简单函数曲线");
    chartView->setChart(chart);
    this->setCentralWidget(chartView);

    QLineSeries* series0 = new QLineSeries();
    QLineSeries *series1 = new QLineSeries();
    series0->setName("Sin");
    series1->setName("Cos");
    chart->addSeries(series0);
    chart->addSeries(series1);

    qreal t=0,y1,y2, intv = 0.1;
    int cnt = 100;
    for(int i=0;i<cnt;i++)
    {
        y1 = qSin(t);
        series0->append(t,y1);
        y2 = qCos(t);
        series1->append(t,y2);
        chart->addSeries(series0);
        chart->addSeries(series1);
        t+=intv;
    }

    QValueAxis *axisX = new QValueAxis;
    axisX->setRange(0,10);
    axisX->setTitleText("时间(秒)");
    QValueAxis *axisY = new QValueAxis;
    axisY->setRange(-2,2);
    axisY->setTitleText("数值");

    chart->addAxis(axisX, Qt::AlignBottom);
    chart->addAxis(axisY, Qt::AlignLeft);
    series0->attachAxis(axisX);
    series0->attachAxis(axisY);
    series1->attachAxis(axisX);
    series1->attachAxis(axisY);
}
