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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
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
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QTableView *tableView;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        action1 = new QAction(MainWindow);
        action1->setObjectName("action1");
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::FormatIndentLess));
        action1->setIcon(icon);
        action1->setMenuRole(QAction::MenuRole::NoRole);
        action2 = new QAction(MainWindow);
        action2->setObjectName("action2");
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::FormatIndentMore));
        action2->setIcon(icon1);
        action2->setMenuRole(QAction::MenuRole::NoRole);
        action3 = new QAction(MainWindow);
        action3->setObjectName("action3");
        QIcon icon2(QIcon::fromTheme(QIcon::ThemeIcon::GoDown));
        action3->setIcon(icon2);
        action3->setMenuRole(QAction::MenuRole::NoRole);
        action4 = new QAction(MainWindow);
        action4->setObjectName("action4");
        QIcon icon3(QIcon::fromTheme(QIcon::ThemeIcon::EditDelete));
        action4->setIcon(icon3);
        action4->setMenuRole(QAction::MenuRole::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");

        horizontalLayout->addWidget(tableView);

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
        toolBar->addAction(action3);
        toolBar->addAction(action4);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action1->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\350\241\214\345\210\227\346\225\260", nullptr));
        action2->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\350\241\250\345\244\264", nullptr));
        action3->setText(QCoreApplication::translate("MainWindow", "\345\256\232\344\275\215\345\215\225\345\205\203\346\240\274", nullptr));
        action4->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
