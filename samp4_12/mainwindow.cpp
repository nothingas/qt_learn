#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    statusbarshow();
    buildTreeHeader();
    iniTree();
    setCentralWidget(ui->scrollArea);
}

void MainWindow::statusbarshow(){
    labNodeText= new QLabel("节点标题",this);
    labNodeText->setMinimumWidth(200);
    ui->statusbar->addWidget(labNodeText);
    spinRatio= new QSpinBox(this);
    //用于显示图片缩放比例的 QSpinBox 组件
    spinRatio->setRange(0,10000);
    spinRatio->setValue(100);
    spinRatio->setSuffix(" %");
    spinRatio->setReadOnly(true);
    spinRatio->setButtonSymbols(QAbstractSpinBox::NoButtons);//不显示右侧调节按钮
    ui->statusbar->addPermanentWidget(spinRatio);
    labFileName= new QLabel("文件名",this);
    ui->statusbar->addPermanentWidget(labFileName);
}

void MainWindow::buildTreeHeader(){
    ui->treeWidget->clear();
    QTreeWidgetItem* header = new QTreeWidgetItem();
    header->setText(MainWindow::colItem,
                    "目录和文件");
    header->setText(MainWindow::colItemType, "节点类型");
    header->setText(MainWindow::colDate,
                    "最后修改日期");
    header->setTextAlignment(colItem,
                             Qt::AlignHCenter | Qt::AlignVCenter);
    header->setTextAlignment(colItemType, Qt::AlignHCenter | Qt::AlignVCenter);
    ui->treeWidget->setHeaderItem(header);

}
void MainWindow::iniTree(){
    QIcon icon(":/icon/icon1.ico");
    QTreeWidgetItem* item = new QTreeWidgetItem(MainWindow::itTopItem);
    item->setIcon(MainWindow::colItem,icon);
    item->setText(MainWindow::colItem, "图片");
    item->setText(MainWindow::colItemType, "Top Item");
    item->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable
                   | Qt::ItemIsEnabled | Qt::ItemIsAutoTristate);
    item->setCheckState(MainWindow::colItem, Qt::Checked);
    ui->treeWidget->addTopLevelItem(item);
}

MainWindow::~MainWindow()
{
    delete ui;
}


QString MainWindow::getFinalFolderName(const QString &fullPathName){
    int cnt= fullPathName.length();
    //字符串长度
    int i= fullPathName.lastIndexOf("/");
    //最后一次出现的位置
    QString str= fullPathName.right(cnt-i-1);
    //qDebug("%s --- %s  ", fullPathName.toLocal8Bit().data(),str.toLocal8Bit().data());
    //获取最后的文件夹名称
    return str;
}

void MainWindow::addFolderItem(QTreeWidgetItem *parItem, QString dirName){
    QIcon icon(":/icon/icon2");
    QString labNodeText = getFinalFolderName(dirName);
    QTreeWidgetItem *item= new QTreeWidgetItem(MainWindow::itGroupItem);
    item->setIcon(colItem,icon);
    item->setText(colItem, labNodeText);
    item->setText(colItemType, "Group Item");
    item->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable
                   | Qt::ItemIsEnabled | Qt::ItemIsAutoTristate);
    item->setCheckState(colItem, Qt::Checked);
    item->setData(colItem,Qt::UserRole,QVariant(dirName));
    parItem->addChild(item);
}

void MainWindow::addImageItem(QTreeWidgetItem *parItem, QString aFilename){
    QIcon icon(":/icon/icon3");
    QFileInfo fileInfo(aFilename);
    QString NodeText = fileInfo.fileName();
    QDateTime birthDate = fileInfo.lastModified();

    QTreeWidgetItem* item;
    item = new QTreeWidgetItem(MainWindow::itImageItem);
    item->setIcon(colItem,icon);
    item->setText(colItem,NodeText);
    item->setText(colItemType, "Image Item");
    item->setText(colDate, birthDate.toString("yyyy-MM-dd"));
    item->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable
                   | Qt::ItemIsEnabled | Qt::ItemIsAutoTristate);
    item->setCheckState(colItem,Qt::Checked);
    item->setData(colItem, Qt::UserRole, QVariant(aFilename));
    parItem->addChild(item);
}

void MainWindow::displayImage(QTreeWidgetItem *item){
    QString filename= item->data(colItem,Qt::UserRole).toString(); //节点存储的文件名
    labFileName->setText(filename);
    //状态栏显示
    labNodeText->setText(item->text(colItem));
    //状态栏显示
    m_pixmap.load(filename);
    //从文件加载图片
    ui->actZoomFitH->trigger();
    //触发 triggered()信号，运行其关联的槽函数
    ui->actZoomFitH->setEnabled(true);
    ui->actZoomFitW->setEnabled(true);
    ui->actZoomIn->setEnabled(true);
    ui->actZoomOut->setEnabled(true);
    ui->actZoomRealSize->setEnabled(true);
}

void MainWindow::deleteItem(QTreeWidgetItem *parItem, QTreeWidgetItem *item){
    if(item->childCount()>0){
        int n = item->childCount();
        QTreeWidgetItem *tempParItem = item;
        for(int i=0;i<n;i++){
            deleteItem(tempParItem, tempParItem->child(i));
        }
    }
    parItem->removeChild(item);
    delete item;
}

void MainWindow::DoSomethingWhenScan(QTreeWidgetItem *item){
    QString str = "*" + item->text(colItem);
    item->setText(colItem,str);
    if(item->childCount()>0){
        for(int i = 0; i<item->childCount();i++){DoSomethingWhenScan(item->child(i));}
    }
}

void MainWindow::on_treeWidget_itemChanged(QTreeWidgetItem *item, int column)
{
    Q_UNUSED(item);
    Q_UNUSED(column);
    qDebug("itemChanged() is emitted");
}


void MainWindow::on_treeWidget_itemSelectionChanged()
{
    qDebug("itemSelectionChanged() is emitted");
}


void MainWindow::on_actAddFolder_triggered()
{
    QString dir= QFileDialog::getExistingDirectory();
    if(dir.isEmpty())return;
    QTreeWidgetItem *parItem = ui->treeWidget->currentItem();
    if(parItem == nullptr)return;
    if(parItem->type() != itImageItem){addFolderItem(parItem,dir);}
}

void MainWindow::on_actAddFiles_triggered()
{
    QStringList files= QFileDialog::getOpenFileNames(this,"选择文件","","Images(*.jpg)");
    if(files.isEmpty())return;
    QTreeWidgetItem* parItem, *item;
    item = ui->treeWidget->currentItem();
    if(item == nullptr){item = ui->treeWidget->topLevelItem(0);}
    if(item->type() == itImageItem){parItem = item->parent();}
    else{parItem = item;}
    for (int i= 0; i < files.size(); ++i)
    //文件列表
    {
        QString aFilename= files.at(i);
        //获取一个文件名
        addImageItem(parItem, aFilename);
        //添加一个图片节点
    }
    parItem->setExpanded(true);
}




void MainWindow::on_treeWidget_currentItemChanged(QTreeWidgetItem *current, QTreeWidgetItem *previous)
{
    Q_UNUSED(previous);
    if(current == nullptr || current == previous)return;
    int var = current->type();
    switch(var)
    {
    case itTopItem:
        ui->actAddFolder->setEnabled(true);
        ui->actAddFiles->setEnabled(true);
        ui->actDeleteItem->setEnabled(false);
        break;
    case itGroupItem:
        ui->actAddFolder->setEnabled(true);
        ui->actAddFiles->setEnabled(true);
        ui->actDeleteItem->setEnabled(true);
        break;
    case itImageItem:
        ui->actAddFolder->setEnabled(false);
        ui->actAddFiles->setEnabled(true);
        ui->actDeleteItem->setEnabled(true);
        displayImage(current);
        break;
    }
}


void MainWindow::on_actDeleteItem_triggered()
{
    QTreeWidgetItem* item = ui->treeWidget->currentItem();
    if(item == nullptr)return;
    QTreeWidgetItem *parItem = item->parent();
    deleteItem(parItem,item);
}


void MainWindow::on_actScanItem_triggered()
{
    for(int i = 0; i< ui->treeWidget->topLevelItemCount();i++){
        QTreeWidgetItem *item= ui->treeWidget->topLevelItem(i);
        DoSomethingWhenScan(item);
    }
}


void MainWindow::on_actZoomFitH_triggered()
{
    int H= ui->scrollArea->height();
    int realH= m_pixmap.height();
    m_ratio= float(H)/realH;
    spinRatio->setValue(100*m_ratio);
    QPixmap pix= m_pixmap.scaledToHeight(H-30);
    ui->labPic->setPixmap(pix);
}


void MainWindow::on_actZoomIn_triggered()
{
    m_ratio= m_ratio*1.2;
    spinRatio->setValue(100*m_ratio);
    int w = m_ratio*m_pixmap.width();
    int h = m_ratio*m_pixmap.height();
    QPixmap pix = m_pixmap.scaled(w,h);
    ui->labPic->setPixmap(pix);
}


void MainWindow::on_actZoomOut_triggered()
{
    m_ratio= m_ratio*0.83;
    spinRatio->setValue(100*m_ratio);
    int w = m_ratio*m_pixmap.width();
    int h = m_ratio*m_pixmap.height();
    QPixmap pix = m_pixmap.scaled(w,h);
    ui->labPic->setPixmap(pix);
}


void MainWindow::on_actZoomRealSize_triggered()
{
    m_ratio= 1;
    spinRatio->setValue(100);
    ui->labPic->setPixmap(m_pixmap);
}


void MainWindow::on_actZoomFitW_triggered()
{
    int W = ui->scrollArea->width();
    int Wreal = m_pixmap.width();
    m_ratio = float(W)/Wreal;
    spinRatio->setValue(m_ratio*100);
    QPixmap pix = m_pixmap.scaledToWidth(W-30);
    ui->labPic->setPixmap(pix);
}


void MainWindow::on_actDocKFloat_triggered(bool checked)
{
    ui->dockWidget->setFloating(checked);
}


void MainWindow::on_actDockVisible_triggered(bool checked)
{
    ui->dockWidget->setVisible(checked);
}


void MainWindow::on_actQuit_triggered()
{
    this->close();
}

