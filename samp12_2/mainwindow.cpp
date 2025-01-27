#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    createChart();
    prepareData();
    updateFromChart();
    //this->setCentralWidget(ui->splitter);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::createChart()
{
    chart = new QChart;
    chart->setTitle(tr("简单函数曲线"));
    ui->chartView->setChart(chart);
    ui->chartView->setRenderHint(QPainter::Antialiasing);

    QLineSeries *series0 = new QLineSeries();
    QLineSeries *series1 = new QLineSeries();
    series0->setName("Sin 曲线");
    series1->setName("Cos 曲线");
    curSeries = series0;

    QPen pen;
    pen.setStyle(Qt::DotLine);
    pen.setWidth(2);
    pen.setColor(Qt::red);
    series0->setPen(pen);

    pen.setStyle(Qt::SolidLine);
    pen.setColor(Qt::blue);
    series1->setPen(pen);

    chart->addSeries(series0);
    chart->addSeries(series1);

    QValueAxis *axisX = new QValueAxis;
    curAxis = axisX;
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

    series0->attachAxis(axisX);
    series0->attachAxis(axisY);
    series1->attachAxis(axisX);
    series1->attachAxis(axisY);
}

void MainWindow::prepareData()
{
    QLineSeries *series0= static_cast<QLineSeries *>(chart->series().at(0));
    QLineSeries *series1= static_cast<QLineSeries *>(chart->series().at(1));
    series0->clear();
    series1->clear();
    qreal t =0,y1,y2,intv = 0.1;
    int cnt =100;
    for(int i=0;i<cnt;i++)
    {
        int rd= QRandomGenerator::global()->bounded(-5,6);
        //随机整数，[-5,5]
        y1= qSin(t)+rd/50.0;
        series0->append(t,y1);
        //序列添加数据点
        rd= QRandomGenerator::global()->bounded(-5,6);
        //随机整数，[-5,5]
        y2= qCos(t)+rd/50.0;
        series1->append(t,y2);
        //序列添加数据点
        t += intv;
    }
}

void MainWindow::updateFromChart()
{
    QChart *curChart= ui->chartView->chart();
    ui->editTitle->setText(curChart->title());
    QMargins mg = curChart->margins();
    ui->spinMarginLeft->setValue(mg.left());
    ui->spinMarginRight->setValue(mg.right());
    ui->spinMarginTop->setValue(mg.top());
    ui->spinMarginBottom->setValue(mg.bottom());
}


void MainWindow::on_pushButton_clicked()
{
    QString str = ui->editTitle->text();
    chart->setTitle(str);
}



void MainWindow::on_pushButton_2_clicked()
{
    QMargins mgs;
    mgs.setLeft(ui->spinMarginLeft->value());
    mgs.setRight(ui->spinMarginRight->value());
    mgs.setTop(ui->spinMarginTop->value());
    mgs.setBottom(ui->spinMarginBottom->value());
    chart->setMargins(mgs);
}


void MainWindow::on_comboBox_currentIndexChanged(int index)
{
    chart->setAnimationOptions(QChart::AnimationOptions(index));
}
void MainWindow::on_comboBox_2_currentIndexChanged(int index)
{
    chart->setTheme(QChart::ChartTheme(index));
}


void MainWindow::on_radioButton_clicked()
{
    if(ui->radioButton->isChecked())curSeries = static_cast<QLineSeries *>(chart->series().at(0));
    else curSeries= static_cast<QLineSeries *>(chart->series().at(1));

    ui->lineEdit->setText(curSeries->name());
    ui->checkBox->setChecked(curSeries->useOpenGL());
    ui->horizontalSlider->setValue(curSeries->opacity()*10);
}


void MainWindow::on_radioButton_2_clicked()
{
    on_radioButton_clicked();
}


void MainWindow::on_pushButton_3_clicked()
{
    curSeries->setName(ui->lineEdit->text());
}



void MainWindow::on_pushButton_4_clicked()
{
    QColor color;
    color = QColorDialog::getColor(color);
    if(color.isValid())curSeries->setColor(color);
}


void MainWindow::on_pushButton_5_clicked()
{
    QPen pen = curSeries->pen();
    bool ok = false;
    pen = TPenDialog::getPen(pen, &ok);
    if(ok)curSeries->setPen(pen);
}


void MainWindow::on_doubleSpinBox_valueChanged(double arg1)
{
    curSeries->setMarkerSize(arg1);
}


void MainWindow::on_pushButton_6_clicked()
{
    QColor color= QColorDialog::getColor();
    if (color.isValid())
        curSeries->setBrush(QBrush(color));
}


void MainWindow::on_radioButton_3_clicked()
{
    curSeries->setPointLabelsFormat("@yPoint");
}


void MainWindow::on_radioButton_4_clicked()
{
    curSeries->setPointLabelsFormat("(@xPoint,@yPoint)");
}

