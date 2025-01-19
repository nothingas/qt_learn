#include "mainwindow.h"

#include <QApplication>
#include "tdialoglogin.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TDialogLogin* login = new TDialogLogin;
    if(login->exec() == QDialog::Accepted)
    {
        MainWindow w;
        w.show();
        return a.exec();
    }
    else
        return 0;


}
