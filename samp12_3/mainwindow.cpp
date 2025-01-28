#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->chartView);
    lab_chartXY = new QLabel("Chart X=,  Y=  ");
    lab_chartXY->setMinimumWidth(200);
    ui->statusbar->addWidget(lab_chartXY);

    lab_hoverXY = new QLabel("Hovered X=, Y= ");
    lab_hoverXY->setMinimumWidth(200);
    ui->statusbar->addWidget(lab_hoverXY);

    lab_clickXY = new QLabel("Clicked X=, Y= ");
    lab_clickXY->setMinimumWidth(200);
    ui->statusbar->addWidget(lab_clickXY);

    createChart();
    prepareData();
    connect(ui->chartView, SIGNAL(mouseMovePoint(QPoint)), this, SLOT(do_mouseMovePoint(QPoint)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::createChart()
{
    chart = new QChart();
    ui->chartView->setChart(chart);
    ui->chartView->setRenderHint(QPainter::Antialiasing);
    ui->chartView->setCursor(Qt::CrossCursor);

    QLineSeries *series0 = new QLineSeries();
    series0->setName("LineSeries 曲线");
    series0->setPointsVisible(true);
    series0->setMarkerSize(5);
    series0->setSelectedColor(Qt::blue);
    connect(series0,&QLineSeries::clicked, this, &MainWindow::do_series_clicked);
    connect(series0,&QLineSeries::hovered, this, &MainWindow::do_series_hovered);

    QSplineSeries *series1 = new QSplineSeries();
    series1->setName("SplineSeries 曲线");
    series1->setPointsVisible(true);
    series1->setMarkerSize(5);
    series1->setSelectedColor(Qt::blue);
    connect(series1,&QSplineSeries::clicked, this, &MainWindow::do_series_clicked);
    connect(series1,&QSplineSeries::hovered, this, &MainWindow::do_series_hovered);

    QPen pen(Qt::black);
    pen.setStyle(Qt::DotLine);
    pen.setWidth(2);
    series0->setPen(pen);
    pen.setStyle(Qt::SolidLine);
    series1->setPen(pen);
    chart->addSeries(series0);
    chart->addSeries(series1);

    QValueAxis *axisX = new QValueAxis;
    axisX->setRange(0, 10);
    axisX->setLabelFormat("%.1f");
    axisX->setTickCount(11);
    axisX->setMinorTickCount(2);
    axisX->setTitleText("time(secs)");

    QValueAxis *axisY = new QValueAxis;
    axisY->setRange(-2, 2);
    axisY->setLabelFormat("%.2f");
    axisY->setTickCount(5);
    axisY->setMinorTickCount(2);
    axisY->setTitleText("value");

    chart->addAxis(axisX,Qt::AlignBottom);
    chart->addAxis(axisY,Qt::AlignLeft);
    series0->attachAxis(axisX);
    series0->attachAxis(axisY);
    series1->attachAxis(axisX);
    series1->attachAxis(axisY);
    foreach (QLegendMarker* marker, chart->legend()->markers())
    connect(marker, SIGNAL(clicked()), this, SLOT(do_legendMarkerClicked()));
}

void MainWindow::prepareData()
{
    QLineSeries *series0= (QLineSeries *)chart->series().at(0);
    QSplineSeries *series1= (QSplineSeries *)chart->series().at(1);
    qreal t=0, y1,y2, intv=0.5;
    int cnt= 21;
    for(int i=0; i<cnt; i++)
    {
        int rd= QRandomGenerator::global()->bounded(-5,6);
        //随机整数，[-5,5]
        y1= qSin(2*t)+rd/50;
        series0->append(t,y1);
        rd= QRandomGenerator::global()->bounded(-5,6);
        //随机整数，[-5,5]
        y2= qSin(2*t+20)+rd/50;
        series1->append(t,y2);
        t += intv;
    }
}

int MainWindow::getIndexFromX(QXYSeries *series, qreal xValue, qreal tol)
{
    QList<QPointF> points= series->points();
    //返回数据点的列表
    int index= -1;
    for (int i=0; i<points.count(); i++)
    {
        qreal dx= xValue - points.at(i).x();
        if (qAbs(dx) <= tol)
        {
            index= i;
            break;
        }
    }
    return index;
    //-1 表示没有找到
}

void MainWindow::do_legendMarkerClicked()
{
    QLegendMarker* marker= qobject_cast<QLegendMarker*> (sender());
    marker->series()->setVisible(!marker->series()->isVisible());
    marker->setVisible(true);
    qreal alpha = 1.0;
    if(!marker->series()->isVisible())alpha = 0.5;

    QBrush brush = marker->labelBrush();
    QColor color = brush.color();
    color.setAlphaF(alpha);
    brush.setColor(color);
    marker->setLabelBrush(brush);

    brush= marker->brush();
    color= brush.color();
    color.setAlphaF(alpha);
    brush.setColor(color);
    marker->setBrush(brush);
}

void MainWindow::do_mouseMovePoint(QPoint point)
{
    QPointF pt= chart->mapToValue(point);
    QString str= QString::asprintf("Chart X=%.1f,Y=%.2f",pt.x(),pt.y());
    lab_chartXY->setText(str);
}

void MainWindow::do_series_clicked(const QPointF &point)
{
    QString str= QString::asprintf("Clicked X=%.1f,Y=%.2f",point.x(),point.y());
    lab_clickXY->setText(str);
    QLineSeries *series= qobject_cast<QLineSeries*> (sender());
    int index= getIndexFromX(series, point.x());
    if (index<0) return;
    bool isSelected= series->isPointSelected(index);
    series->setPointSelected(index,!isSelected);
}

void MainWindow::do_series_hovered(const QPointF &point, bool state)
{
    QString str= "Series X=, Y=";
    if (state)str= QString::asprintf("Hovered X=%.1f,Y=%.2f",point.x(),point.y());
    lab_hoverXY->setText(str);
    QLineSeries *series= qobject_cast<QLineSeries*> (sender());
    QPen pen= series->pen();
    if (state)
        pen.setColor(Qt::red);
    else
        pen.setColor(Qt::black);
    series->setPen(pen);
}

void MainWindow::on_dragMode_currentIndexChanged(int index)
{
    ui->chartView->setDragMode(QGraphicsView::DragMode(index));
}


void MainWindow::on_comboBox_2_currentIndexChanged(int index)
{
    ui->chartView->setCustomZoomRect(index == 4);
    QFlags<QChartView::RubberBand> flags = QChartView::ClickThroughRubberBand;
    switch(index)
    {
    case 0:
        ui->chartView->setRubberBand(QChartView::NoRubberBand);
        return;
    case 1:
        flags |= QChartView::VerticalRubberBand;
        //垂直方向选择
        break;
    case 2:
        flags |= QChartView::HorizontalRubberBand;
        //水平方向选择
        break;
    case 3:
    case 4:
        flags |= QChartView::RectangleRubberBand;
        //矩形框选
    }
    ui->chartView->setRubberBand(flags);

}

