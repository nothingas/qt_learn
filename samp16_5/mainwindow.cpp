#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileInfo>
#include <QAudioOutput>
#include <QLabel>
#include <QDir>
#include <QFileDialog>
#include "qvideowidget.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    player = new QMediaPlayer(this);
    QAudioOutput *audioOutput = new QAudioOutput(this);
    player->setAudioOutput(audioOutput);
    player->setVideoOutput(ui->widget);

    connect(player,&QMediaPlayer::playbackStateChanged,this,&MainWindow::do_stateChanged);
    connect(player,&QMediaPlayer::positionChanged,this,&MainWindow::do_positionChanged);
    connect(player,&QMediaPlayer::durationChanged,this,&MainWindow::do_durationChanged);

    //QLabel labCurMedia = new QLabel;
    //ui->statusbar->addWidget(labCurMedia);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionopen_triggered()
{
    QString curPath = QDir::homePath();
    QString dlgTitle = "选择视频文件";
    QString filter = "视频文件(*.wmv, *.mp4);;所有文件(*.*)";
    QString aFile= QFileDialog::getOpenFileName(this,dlgTitle,curPath,filter);
    if(aFile.isEmpty())return;
    QFileInfo fileInfo(aFile);
    player->setSource(QUrl::fromLocalFile(aFile));
    player->play();
}

void MainWindow::do_durationChanged(qint64 duration){}
void MainWindow::do_positionChanged(qint64 position){}
void MainWindow::do_stateChanged(QMediaPlayer::PlaybackState state){}

void MainWindow::on_actionpause_triggered()
{
    player->play();
}
void MainWindow::on_actionplay_triggered()
{
    player->pause();
}
void MainWindow::on_actionstop_triggered()
{
    player->stop();
}


void MainWindow::on_horizontalSlider_2_valueChanged(int value)
{
    player->audioOutput()->setVolume(value/100.0);
}


void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    player->setPosition(value);
}

