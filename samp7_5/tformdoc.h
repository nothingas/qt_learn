#ifndef TFORMDOC_H
#define TFORMDOC_H

#include <QWidget>
#include <QFontDialog>
#include <QFile>
#include <QFileInfo>
namespace Ui {
class TFormDoc;
}

class TFormDoc : public QWidget
{
    Q_OBJECT

public:
    explicit TFormDoc(QWidget *parent = nullptr);
    ~TFormDoc();

private:
    Ui::TFormDoc *ui;
private:
    QString m_filename;
    bool m_fileOpened= false;
public:
    void
    loadFromFile(QString& aFileName);
    void
    saveToFile();
    QString currentFileName();
    bool
    isFileOpened();
    void
    setEditFont();
    void
    textCut();
    void
    textCopy();
    void
    textPaste();

};

#endif // TFORMDOC_H
