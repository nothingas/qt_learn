#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>
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
    Ui::MainWindow *ui;
    QMediaPlayer *player;
    QString durationTime;
    QString positionTime;

private slots:
    void do_stateChanged(QMediaPlayer::PlaybackState state);
    void do_durationChanged(qint64 duration);
    void do_positionChanged(qint64 position);
    void on_actionopen_triggered();
    void on_actionpause_triggered();
    void on_actionplay_triggered();
    void on_actionstop_triggered();
    void on_horizontalSlider_2_valueChanged(int value);
    void on_horizontalSlider_valueChanged(int value);
};
#endif // MAINWINDOW_H
