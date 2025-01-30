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
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionthread_on;
    QAction *actionstart;
    QAction *actionpause;
    QAction *actionend;
    QAction *actionclear;
    QAction *actionclose;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QPlainTextEdit *plainTextEdit;
    QSpinBox *spinBox;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(342, 260);
        actionthread_on = new QAction(MainWindow);
        actionthread_on->setObjectName("actionthread_on");
        actionthread_on->setMenuRole(QAction::MenuRole::NoRole);
        actionstart = new QAction(MainWindow);
        actionstart->setObjectName("actionstart");
        actionstart->setMenuRole(QAction::MenuRole::NoRole);
        actionpause = new QAction(MainWindow);
        actionpause->setObjectName("actionpause");
        actionpause->setMenuRole(QAction::MenuRole::NoRole);
        actionend = new QAction(MainWindow);
        actionend->setObjectName("actionend");
        actionend->setMenuRole(QAction::MenuRole::NoRole);
        actionclear = new QAction(MainWindow);
        actionclear->setObjectName("actionclear");
        actionclear->setMenuRole(QAction::MenuRole::NoRole);
        actionclose = new QAction(MainWindow);
        actionclose->setObjectName("actionclose");
        actionclose->setMenuRole(QAction::MenuRole::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName("plainTextEdit");

        horizontalLayout->addWidget(plainTextEdit);

        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName("spinBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(spinBox->sizePolicy().hasHeightForWidth());
        spinBox->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(spinBox);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        toolBar->addAction(actionthread_on);
        toolBar->addAction(actionstart);
        toolBar->addAction(actionpause);
        toolBar->addAction(actionend);
        toolBar->addAction(actionclear);
        toolBar->addAction(actionclose);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionthread_on->setText(QCoreApplication::translate("MainWindow", "thread_on", nullptr));
        actionstart->setText(QCoreApplication::translate("MainWindow", "start", nullptr));
        actionpause->setText(QCoreApplication::translate("MainWindow", "pause", nullptr));
        actionend->setText(QCoreApplication::translate("MainWindow", "end", nullptr));
        actionclear->setText(QCoreApplication::translate("MainWindow", "clear", nullptr));
        actionclose->setText(QCoreApplication::translate("MainWindow", "close", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
