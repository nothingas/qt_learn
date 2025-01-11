#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <qtreewidget.h>
#include "qlabel.h"
#include "qspinbox.h"
#include "qfiledialog.h"
#include "qdebug.h"
#include <QDateTime>

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

private slots:
    void on_treeWidget_itemChanged(QTreeWidgetItem *item, int column);

    void on_treeWidget_itemSelectionChanged();

    void on_actAddFolder_triggered();

    void on_actAddFiles_triggered();

    void on_treeWidget_currentItemChanged(QTreeWidgetItem *current, QTreeWidgetItem *previous);

    void on_actDeleteItem_triggered();

    void on_actScanItem_triggered();

    void on_actZoomFitH_triggered();

    void on_actZoomIn_triggered();

    void on_actZoomOut_triggered();

    void on_actZoomRealSize_triggered();

    void on_actZoomFitW_triggered();

    void on_actDocKFloat_triggered(bool checked);

    void on_actDockVisible_triggered(bool checked);

    void on_actQuit_triggered();

private:
    Ui::MainWindow *ui;
    enum TreeItemType{itTopItem=1001, itGroupItem, itImageItem};
    enum TreeColNum{colItem=0, colItemType, colDate};
    QLabel *labFileName;
    //用于状态栏上显示文件名
    QLabel *labNodeText;
    //用于状态栏上显示节点标题
    QSpinBox *spinRatio;
    //用于状态栏上显示图片缩放比例
    QPixmap m_pixmap;
    //当前的图片
    float m_ratio;
    //当前图片缩放比例

    void statusbarshow();
    void buildTreeHeader();
    void iniTree();

    void addFolderItem(QTreeWidgetItem* parItem, QString dirName);
    QString getFinalFolderName(const QString &fullPathName);
    void addImageItem(QTreeWidgetItem *parItem, QString aFilename);
    void displayImage(QTreeWidgetItem *item);
    void deleteItem(QTreeWidgetItem *parItem, QTreeWidgetItem *item);
    void DoSomethingWhenScan(QTreeWidgetItem* item);

};
#endif // MAINWINDOW_H
