#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    labViewCord = new QLabel("View 坐标：", this);
    labViewCord->setMinimumWidth(150);
    ui->statusBar->addWidget(labViewCord);

    labSceneCord = new QLabel("Scene 坐标：", this);
    labSceneCord->setMinimumWidth(150);
    ui->statusBar->addWidget(labSceneCord);

    labItemCord= new QLabel("Item 坐标：", this);
    labItemCord->setMinimumWidth(150);
    ui->statusBar->addWidget(labItemCord);

    ui->view->setCursor(Qt::CrossCursor);
    ui->view->setMouseTracking(true);
    ui->view->setDragMode(QGraphicsView::RubberBandDrag);

    connect(ui->view,SIGNAL(mouseMovePoint(QPoint)),this,SLOT(do_mouseMovePoint(QPoint)) );
    connect(ui->view,SIGNAL(mouseClicked(QPoint)),this,SLOT(do_mouseClicked(QPoint)));
    iniGraphicsSystem();
}

void MainWindow::iniGraphicsSystem()
{
    QRectF rect(-200,-100,400,200);
    scene = new QGraphicsScene(rect,this);
    ui->view->setScene(scene);
    QGraphicsRectItem* item = new QGraphicsRectItem(rect);
    item->setFlags(QGraphicsItem::ItemIsSelectable | QGraphicsItem::ItemIsFocusable);

    QPen pen;
    pen.setWidth(2);
    item->setPen(pen);
    scene->addItem(item);

    QGraphicsEllipseItem* item2 = new QGraphicsEllipseItem(-100,-50,200,100);

    item2->setPos(0,0);
    item2->setBrush(QBrush(Qt::blue));
    item2->setFlag(QGraphicsItem::ItemIsMovable);
    item2->setFlag(QGraphicsItem::ItemIsSelectable);
    item2->setFlag(QGraphicsItem::ItemIsFocusable);
    scene->addItem(item2);

    QGraphicsEllipseItem *item3=new QGraphicsEllipseItem(-50,-50,100,100);
    item3->setPos(rect.right(),rect.bottom());
    item3->setBrush(QBrush(Qt::red));
    item3->setFlag(QGraphicsItem::ItemIsMovable);
    item3->setFlag(QGraphicsItem::ItemIsSelectable);
    item3->setFlag(QGraphicsItem::ItemIsFocusable);
    scene->addItem(item3);
    scene->clearSelection();

}


void MainWindow::do_mouseMovePoint(QPoint point)
{
    labViewCord->setText(QString::asprintf("View 坐标：%d,%d",point.x(),point.y()));
    QPointF pointScene= ui->view->mapToScene(point);
    labSceneCord->setText(QString::asprintf("Scene 坐标：%.0f,%.0f",pointScene.x(),pointScene.y() ));
}

void MainWindow::do_mouseClicked(QPoint point)
{
    QPointF pointScene = ui->view->mapToScene(point);
    QGraphicsItem *item= NULL;
    item= scene->itemAt(pointScene,ui->view->transform());
    if(! item==NULL){
        QPointF pointItem = item->mapFromScene(pointScene);
        labItemCord->setText(QString::asprintf("Item 坐标：%.0f,%.0f" ,pointItem.x(),pointItem.y() ));
    }
}


void MainWindow::resizeEvent(QResizeEvent *event)
{
    QString str = QString::asprintf("Graphics View 坐标，左上角总是(0,0)，宽度=%d，高度=%d",ui->view->width(),ui->view->height());
    ui->labViewSize->setText(str);
    QRectF rectF= ui->view->sceneRect();
    QString str2= QString::asprintf("QGraphicsView::sceneRect=(Left,Top,Width,Height)"
                                     "=%.0f,%.0f,%.0f,%.0f", rectF.left(), rectF.top(), rectF.width(), rectF.height());
    ui->labSceneRect->setText(str2);
    event->accept();

}






