#include "tchartview.h"

TChartView::TChartView(QWidget *parent):QChartView(parent)
{
    this->setMouseTracking(true);
    this->setDragMode(QGraphicsView::NoDrag);
    this->setRubberBand(QChartView::NoRubberBand);
}
TChartView::~TChartView(){}

void TChartView::setCustomZoomRect(bool custom)
{
    m_customZoom= custom;
}

void TChartView::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)beginPoint = event->pos();
    QChartView::mousePressEvent(event);
}

void TChartView::mouseReleaseEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
        endPoint = event->pos();
        if((this->dragMode() == QGraphicsView::ScrollHandDrag) && (this->rubberBand() == QChartView::NoRubberBand))
            chart()->scroll(beginPoint.x()-endPoint.x(),endPoint.y()-beginPoint.y());
        else if(m_customZoom && this->dragMode() == QGraphicsView::RubberBandDrag)
        {
            QRect rectF;
            rectF.setTopLeft(beginPoint);
            rectF.setBottomRight(endPoint);
            this->chart()->zoomIn(rectF);
        }
    }
    QChartView::mouseReleaseEvent(event);
}

void TChartView::mouseMoveEvent(QMouseEvent *event)
{
    QPoint point = event->pos();
    emit mouseMovePoint(point);
    QChartView::mouseMoveEvent(event);
}

void TChartView::keyPressEvent(QKeyEvent *event)
{
    switch(event->key())
    {
    case Qt::Key_Left:
        chart()->scroll(10, 0);
        break;
    case Qt::Key_Right:
        chart()->scroll(-10, 0);
        break;
    case Qt::Key_Up:
        chart()->scroll(0, -10);
        break;
    case Qt::Key_Down:
        chart()->scroll(0, 10);
        break;
    case Qt::Key_PageUp:
        chart()->scroll(0, -50);
        break;
    case Qt::Key_PageDown:
        chart()->scroll(0, 50);
        break;
    case Qt::Key_Escape:
        chart()->zoomReset();
        break;
    default:
        QGraphicsView::keyPressEvent(event);
    }
}

void TChartView::wheelEvent(QWheelEvent *event)
{
    QPoint numDegrees = event->angleDelta()/8;
    if(!numDegrees.isNull())
    {
        QPoint numSteps = numDegrees/15;
        int stepY = numSteps.y();
        if(stepY > 0)chart()->zoom(1.1*stepY);
        else chart()->zoom(-0.9*stepY);
    }
    event->accept();
}
















