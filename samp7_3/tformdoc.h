#ifndef TFORMDOC_H
#define TFORMDOC_H

#include <QWidget>
#include <QToolBar>
#include <QVBoxLayout>
#include <QFileDialog>
#include <QFontDialog>
namespace Ui {
class TFormDoc;
}

class TFormDoc : public QWidget
{
    Q_OBJECT

public:
    explicit TFormDoc(QWidget *parent = nullptr);
    void loadFromFile(QString& aFileName);
    ~TFormDoc();
private:
    Ui::TFormDoc *ui;
signals:
    void titleChanged(QString title);
private slots:
    void on_actOpen_triggered();
    void on_actFont_triggered();
};

#endif // TFORMDOC_H
