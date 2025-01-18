/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action1;
    QAction *action2;
    QAction *action3;
    QAction *action4;
    QAction *action5;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        action1 = new QAction(MainWindow);
        action1->setObjectName("action1");
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::EditCopy));
        action1->setIcon(icon);
        action1->setMenuRole(QAction::MenuRole::NoRole);
        action2 = new QAction(MainWindow);
        action2->setObjectName("action2");
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::EditPaste));
        action2->setIcon(icon1);
        action2->setMenuRole(QAction::MenuRole::NoRole);
        action3 = new QAction(MainWindow);
        action3->setObjectName("action3");
        QIcon icon2(QIcon::fromTheme(QIcon::ThemeIcon::MailMarkRead));
        action3->setIcon(icon2);
        action3->setMenuRole(QAction::MenuRole::NoRole);
        action4 = new QAction(MainWindow);
        action4->setObjectName("action4");
        QIcon icon3(QIcon::fromTheme(QIcon::ThemeIcon::MailMessageNew));
        action4->setIcon(icon3);
        action4->setMenuRole(QAction::MenuRole::NoRole);
        action5 = new QAction(MainWindow);
        action5->setObjectName("action5");
        QIcon icon4(QIcon::fromTheme(QIcon::ThemeIcon::EditClear));
        action5->setIcon(icon4);
        action5->setMenuRole(QAction::MenuRole::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(60, 170, 127, 80));
        tab = new QWidget();
        tab->setObjectName("tab");
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        toolBar->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        toolBar->addAction(action1);
        toolBar->addAction(action2);
        toolBar->addSeparator();
        toolBar->addAction(action3);
        toolBar->addAction(action4);
        toolBar->addSeparator();
        toolBar->addAction(action5);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action1->setText(QCoreApplication::translate("MainWindow", "\345\265\214\345\205\245\345\274\217Widget", nullptr));
        action2->setText(QCoreApplication::translate("MainWindow", "\347\213\254\347\253\213Widget", nullptr));
        action3->setText(QCoreApplication::translate("MainWindow", "\345\265\214\345\205\245\345\274\217Mainwindow", nullptr));
        action4->setText(QCoreApplication::translate("MainWindow", "\347\213\254\347\253\213Mainwindow", nullptr));
        action5->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
