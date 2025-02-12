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
#include <QtMultimediaWidgets/QVideoWidget>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionopen;
    QAction *actionpause;
    QAction *actionplay;
    QAction *actionstop;
    QAction *actionfullscreen;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QVideoWidget *widget;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QSlider *horizontalSlider;
    QSlider *horizontalSlider_2;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        actionopen = new QAction(MainWindow);
        actionopen->setObjectName("actionopen");
        actionopen->setMenuRole(QAction::MenuRole::NoRole);
        actionpause = new QAction(MainWindow);
        actionpause->setObjectName("actionpause");
        actionpause->setMenuRole(QAction::MenuRole::NoRole);
        actionplay = new QAction(MainWindow);
        actionplay->setObjectName("actionplay");
        actionplay->setMenuRole(QAction::MenuRole::NoRole);
        actionstop = new QAction(MainWindow);
        actionstop->setObjectName("actionstop");
        actionstop->setMenuRole(QAction::MenuRole::NoRole);
        actionfullscreen = new QAction(MainWindow);
        actionfullscreen->setObjectName("actionfullscreen");
        actionfullscreen->setMenuRole(QAction::MenuRole::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        widget = new QVideoWidget(centralwidget);
        widget->setObjectName("widget");

        verticalLayout->addWidget(widget);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSlider = new QSlider(groupBox);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setOrientation(Qt::Orientation::Horizontal);

        horizontalLayout->addWidget(horizontalSlider);

        horizontalSlider_2 = new QSlider(groupBox);
        horizontalSlider_2->setObjectName("horizontalSlider_2");
        horizontalSlider_2->setOrientation(Qt::Orientation::Horizontal);

        horizontalLayout->addWidget(horizontalSlider_2);

        horizontalLayout->setStretch(0, 3);
        horizontalLayout->setStretch(1, 1);

        verticalLayout->addWidget(groupBox);

        verticalLayout->setStretch(0, 8);
        verticalLayout->setStretch(1, 1);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        toolBar->addAction(actionopen);
        toolBar->addAction(actionpause);
        toolBar->addAction(actionplay);
        toolBar->addAction(actionstop);
        toolBar->addSeparator();
        toolBar->addAction(actionfullscreen);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionopen->setText(QCoreApplication::translate("MainWindow", "open", nullptr));
        actionpause->setText(QCoreApplication::translate("MainWindow", "pause", nullptr));
        actionplay->setText(QCoreApplication::translate("MainWindow", "play", nullptr));
        actionstop->setText(QCoreApplication::translate("MainWindow", "stop", nullptr));
#if QT_CONFIG(tooltip)
        actionstop->setToolTip(QCoreApplication::translate("MainWindow", "stop", nullptr));
#endif // QT_CONFIG(tooltip)
        actionfullscreen->setText(QCoreApplication::translate("MainWindow", "fullscreen", nullptr));
        groupBox->setTitle(QString());
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
