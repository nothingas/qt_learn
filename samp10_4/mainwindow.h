#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "tgraphicsview.h"
#include <QGraphicsScene>
#include <QLabel>
#include <QResizeEvent>
#include <QRect>
#include <QGraphicsRectItem>
#include <QGraphicsScene>
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
    QGraphicsScene* scene;
    Ui::MainWindow *ui;
    QLabel *labViewCord;
    QLabel *labSceneCord;
    QLabel *labItemCord;
    void iniGraphicsSystem();
protected:
    void resizeEvent(QResizeEvent* event);
private slots:
    void do_mouseMovePoint(QPoint point);
    void do_mouseClicked(QPoint point);
};
#endif // MAINWINDOW_H
