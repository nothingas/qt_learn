#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->horizontalSlider->setRange(10,500);
    ui->horizontalSlider_2->setRange(-180,180);
    ui->horizontalSlider_3->setRange(-180,180);
    iniGraph3D();
    QSplitter *splitter = new QSplitter(Qt::Horizontal);
    splitter->addWidget(ui->groupBox_5);
    splitter->addWidget(graphContainer);
    this->setCentralWidget(splitter);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::iniGraph3D()
{
    graph3D = new Q3DBars();
    graphContainer = QWidget::createWindowContainer(graph3D,this);
    graph3D->scene()->activeCamera()->setCameraPreset(Q3DCamera::CameraPresetFrontHigh);

    QValue3DAxis *axisV= new QValue3DAxis;
    axisV->setTitle("销量");
    axisV->setTitleVisible(true);
    axisV->setLabelFormat("%d");
    graph3D->setValueAxis(axisV);

    QCategory3DAxis* axisRow = new QCategory3DAxis;
    axisRow->setTitle("row axis");
    axisRow->setTitleVisible(true);
    graph3D->setRowAxis(axisRow);

    QCategory3DAxis *axisCol= new QCategory3DAxis;
    axisCol->setTitle("column axis");
    axisCol->setTitleVisible(true);
    graph3D->setColumnAxis(axisCol);

    series= new QBar3DSeries;
    series->setMesh(QAbstract3DSeries::MeshCylinder);
    series->setItemLabelFormat("(@rowLabel,@colLabel): %d");
    graph3D->addSeries(series);

    QBarDataArray *dataArray = new QBarDataArray;
    for(int i=0;i<3;i++)
    {
        QBarDataRow *dataRow = new QBarDataRow;
        for(int j=1;j<=5;j++)
        {
            quint32 value = QRandomGenerator::global()->bounded(5,15);
            QBarDataItem *dataItem = new QBarDataItem;
            dataItem->setValue(value);
            dataRow->append(*dataItem);
        }
        dataArray->append(dataRow);
    }

    QStringList rowLabs;
    rowLabs << "Week1" << "Week2"<<"Week3";
    series->dataProxy()->setRowLabels(rowLabs);
    QStringList colLabs;
    colLabs << "Mon" << "Tue" << "Wed" << "Thur"<<"Fri";
    series->dataProxy()->setColumnLabels(colLabs);
    series->dataProxy()->resetArray(dataArray);
    connect(series,&QBar3DSeries::selectedBarChanged,
            this,&MainWindow::do_barSelected);
}

void MainWindow::do_barSelected(const QPoint &position)
{
    if (position.x()<0 || position.y()<0)
    {
        ui->action_3->setEnabled(false);
        return;
    }
    ui->action_3->setEnabled(true);
    const QBarDataItem *bar= series->dataProxy()->itemAt(position);
    QString info= QString::asprintf("选中的棒柱，Row=%d, Column=%d, Value=%.1f",
                                     position.x(),position.y(),bar->value());
    ui->statusbar->showMessage(info);
}

void MainWindow::on_action_2_triggered()
{
    QBarDataProxy* dataProxy = new QBarDataProxy;
    int rowCount = series->dataProxy()->rowCount();
    for(int i=0;i<rowCount;i++)
    {
        QBarDataRow* dataRow = new QBarDataRow;
        for(int j=1;j<=5;j++)
        {
            quint32 value = QRandomGenerator::global()->bounded(5,15);
            QBarDataItem *dataItem = new QBarDataItem;
            dataItem->setValue(value);
            dataRow->append(*dataItem);
        }
        QString rowstr = QString("第%1 周").arg(i+1);
        dataProxy->addRow(dataRow,rowstr);
    }
    QStringList colLabs= series->dataProxy()->columnLabels();
    dataProxy->setColumnLabels(colLabs);
    series->dataProxy()->resetArray();
    series->setDataProxy(dataProxy);
}


void MainWindow::on_action_3_triggered()
{
    QPoint position = series->selectedBar();
    if(position.x()<0 || position.y()<0)return;
    QBarDataItem bar= *(series->dataProxy()->itemAt(position));
    qreal value = bar.value();
    bool ok;
    value = QInputDialog::getInt(this, "输入数值","更改棒柱数值" , value, 0, 50, 1, &ok);
    if(ok)
    {
        bar.setValue(value);
        series->dataProxy()->setItem(position,bar);
    }
}


void MainWindow::on_action_4_triggered()
{
    QString rowLabel = QInputDialog::getText(this, "输入字符串", "请输入行标签");
    if(rowLabel.isEmpty())return;
    QBarDataRow *dataRow = new QBarDataRow;
    for(int j=1; j<=5;j++)
    {
        quint32 value = QRandomGenerator::global()->bounded(15,25);
        QBarDataItem *dataItem = new QBarDataItem;
        dataItem->setValue(value);
        dataRow->append(*dataItem);
    }
    series->dataProxy()->addRow(dataRow,rowLabel);
}

void MainWindow::on_action_5_triggered()
{
    QString rowLabel = QInputDialog::getText(this, "输入字符串", "请输入行标签");
    QPoint position = series->selectedBar();
    if(position.x()<0 || position.y()<0)return;
    int rowIndex = position.x();
    QBarDataRow *dataRow = new QBarDataRow;
    for(int j=1; j<=5;j++)
    {
        quint32 value = QRandomGenerator::global()->bounded(15,25);
        QBarDataItem *dataItem = new QBarDataItem;
        dataItem->setValue(value);
        dataRow->append(*dataItem);
    }
    series->dataProxy()->insertRow(rowIndex,dataRow,rowLabel);
}


void MainWindow::on_action_6_triggered()
{
    QPoint position = series->selectedBar();
    if(position.x()<0 || position.y()<0)return;
    int rowIndex = position.x();
    int removeCount =1;
    int removeLabels= true;
    series->dataProxy()->removeRows(rowIndex, removeCount, removeLabels);
}


void MainWindow::on_comboBox_currentIndexChanged(int index)
{
    Q3DCamera::CameraPreset cameraPos= Q3DCamera::CameraPreset(index);
    graph3D->scene()->activeCamera()->setCameraPreset(cameraPos);
}


void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    graph3D->scene()->activeCamera()->setXRotation(value);
}


void MainWindow::on_horizontalSlider_2_valueChanged(int value)
{
    graph3D->scene()->activeCamera()->setYRotation(value);
}


void MainWindow::on_horizontalSlider_3_valueChanged(int value)
{
    graph3D->scene()->activeCamera()->setZoomLevel(value);
}


void MainWindow::on_pushButton_5_clicked()
{
    graph3D->scene()->activeCamera()->setCameraPreset(Q3DCamera::CameraPresetFrontHigh);
}


void MainWindow::on_pushButton_clicked()
{
    QVector3D target3D= graph3D->scene()->activeCamera()->target();
    qreal z= target3D.z();
    target3D.setZ(z-0.1);
    graph3D->scene()->activeCamera()->setTarget(target3D);
}


void MainWindow::on_pushButton_4_clicked()
{
    QVector3D target3D= graph3D->scene()->activeCamera()->target();
    qreal z= target3D.z();
    target3D.setZ(z+0.1);
    graph3D->scene()->activeCamera()->setTarget(target3D);
}


void MainWindow::on_pushButton_3_clicked()
{
    QVector3D target3D= graph3D->scene()->activeCamera()->target();
    qreal x= target3D.x();
    target3D.setX(x+0.1);
    graph3D->scene()->activeCamera()->setTarget(target3D);
}


void MainWindow::on_pushButton_2_clicked()
{
    QVector3D target3D= graph3D->scene()->activeCamera()->target();
    qreal x= target3D.x();
    target3D.setX(x-0.1);
    graph3D->scene()->activeCamera()->setTarget(target3D);
}

