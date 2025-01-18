#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->tabWidget->setVisible(false);
    ui->tabWidget->clear();
    ui->tabWidget->setTabsClosable(true);
    this->setCentralWidget(ui->tabWidget);
    this->setWindowState(Qt::WindowMaximized);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawPixmap(0,ui->toolBar->height(),this->width(),this->height()-ui->toolBar->height()-ui->statusbar->height(),
                       QPixmap(":/rsc/backgroung/bg1.jpg"));
    event->accept();
}

void MainWindow::do_changeTabTitle(QString title)
{
    int index = ui->tabWidget->currentIndex();
    ui->tabWidget->setTabText(index,title);
}

void MainWindow::on_action1_triggered()
{
    TFormDoc *formDoc = new TFormDoc(this);
    formDoc->setAttribute(Qt::WA_DeleteOnClose);
    int cur = ui->tabWidget->addTab(formDoc, QString::asprintf("Doc %d",ui->tabWidget->count()));
    ui->tabWidget->setCurrentIndex(cur);
    ui->tabWidget->setVisible(true);
    connect(formDoc, &TFormDoc::titleChanged, this, &MainWindow::do_changeTabTitle);
}


void MainWindow::on_action2_triggered()
{
    TFormDoc *formDoc = new TFormDoc();
    formDoc->setAttribute(Qt::WA_DeleteOnClose);
    formDoc->setWindowTitle("基于 QWidget 的窗口，无父窗口，关闭时删除");
    formDoc->setWindowFlag(Qt::Window, true);
    formDoc->setWindowOpacity(0.9);
    formDoc->show();
}

