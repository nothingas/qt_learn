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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
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
    QAction *action6;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QHBoxLayout *horizontalLayout_2;
    QPlainTextEdit *plainTextEdit;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout_3;
    QPlainTextEdit *plainTextEdit_2;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextUnderIcon);
        action1 = new QAction(MainWindow);
        action1->setObjectName("action1");
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::DocumentNew));
        action1->setIcon(icon);
        action1->setMenuRole(QAction::MenuRole::NoRole);
        action2 = new QAction(MainWindow);
        action2->setObjectName("action2");
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::DocumentSave));
        action2->setIcon(icon1);
        action2->setMenuRole(QAction::MenuRole::NoRole);
        action3 = new QAction(MainWindow);
        action3->setObjectName("action3");
        QIcon icon2(QIcon::fromTheme(QIcon::ThemeIcon::DocumentSaveAs));
        action3->setIcon(icon2);
        action3->setMenuRole(QAction::MenuRole::NoRole);
        action4 = new QAction(MainWindow);
        action4->setObjectName("action4");
        QIcon icon3(QIcon::fromTheme(QIcon::ThemeIcon::DocumentOpen));
        action4->setIcon(icon3);
        action4->setMenuRole(QAction::MenuRole::NoRole);
        action5 = new QAction(MainWindow);
        action5->setObjectName("action5");
        QIcon icon4(QIcon::fromTheme(QIcon::ThemeIcon::FolderNew));
        action5->setIcon(icon4);
        action5->setMenuRole(QAction::MenuRole::NoRole);
        action6 = new QAction(MainWindow);
        action6->setObjectName("action6");
        QIcon icon5(QIcon::fromTheme(QIcon::ThemeIcon::EditClear));
        action6->setIcon(icon5);
        action6->setMenuRole(QAction::MenuRole::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tab = new QWidget();
        tab->setObjectName("tab");
        horizontalLayout_2 = new QHBoxLayout(tab);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        plainTextEdit = new QPlainTextEdit(tab);
        plainTextEdit->setObjectName("plainTextEdit");

        horizontalLayout_2->addWidget(plainTextEdit);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        horizontalLayout_3 = new QHBoxLayout(tab_2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        plainTextEdit_2 = new QPlainTextEdit(tab_2);
        plainTextEdit_2->setObjectName("plainTextEdit_2");

        horizontalLayout_3->addWidget(plainTextEdit_2);

        tabWidget->addTab(tab_2, QString());

        horizontalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        toolBar->addAction(action1);
        toolBar->addAction(action2);
        toolBar->addAction(action3);
        toolBar->addSeparator();
        toolBar->addAction(action4);
        toolBar->addAction(action5);
        toolBar->addSeparator();
        toolBar->addAction(action6);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action1->setText(QCoreApplication::translate("MainWindow", "QFile_open", nullptr));
        action2->setText(QCoreApplication::translate("MainWindow", "QFile_Save", nullptr));
        action3->setText(QCoreApplication::translate("MainWindow", "QSaveFile_Save", nullptr));
        action4->setText(QCoreApplication::translate("MainWindow", "QTextStream_open", nullptr));
        action5->setText(QCoreApplication::translate("MainWindow", "QTextStream_Save", nullptr));
        action6->setText(QCoreApplication::translate("MainWindow", "quit", nullptr));
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
