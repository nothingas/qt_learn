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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include <tchartview.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *action_2;
    QAction *action_3;
    QAction *action_4;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *dragMode;
    QLabel *rubberBand;
    QComboBox *comboBox_2;
    TChartView *chartView;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        action = new QAction(MainWindow);
        action->setObjectName("action");
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::EditClear));
        action->setIcon(icon);
        action->setMenuRole(QAction::MenuRole::NoRole);
        action_2 = new QAction(MainWindow);
        action_2->setObjectName("action_2");
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::ZoomIn));
        action_2->setIcon(icon1);
        action_2->setMenuRole(QAction::MenuRole::NoRole);
        action_3 = new QAction(MainWindow);
        action_3->setObjectName("action_3");
        QIcon icon2(QIcon::fromTheme(QIcon::ThemeIcon::ZoomOut));
        action_3->setIcon(icon2);
        action_3->setMenuRole(QAction::MenuRole::NoRole);
        action_4 = new QAction(MainWindow);
        action_4->setObjectName("action_4");
        QIcon icon3(QIcon::fromTheme(QIcon::ThemeIcon::ZoomFitBest));
        action_4->setIcon(icon3);
        action_4->setMenuRole(QAction::MenuRole::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        dragMode = new QComboBox(centralwidget);
        dragMode->setObjectName("dragMode");

        gridLayout->addWidget(dragMode, 0, 1, 1, 1);

        rubberBand = new QLabel(centralwidget);
        rubberBand->setObjectName("rubberBand");

        gridLayout->addWidget(rubberBand, 0, 2, 1, 1);

        comboBox_2 = new QComboBox(centralwidget);
        comboBox_2->setObjectName("comboBox_2");

        gridLayout->addWidget(comboBox_2, 0, 3, 1, 1);

        chartView = new TChartView(centralwidget);
        chartView->setObjectName("chartView");

        gridLayout->addWidget(chartView, 1, 0, 1, 4);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        toolBar->addAction(action);
        toolBar->addSeparator();
        toolBar->addAction(action_2);
        toolBar->addAction(action_3);
        toolBar->addAction(action_4);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\345\217\226\346\266\210\351\200\211\347\202\271", nullptr));
        action_2->setText(QCoreApplication::translate("MainWindow", "\346\224\276\345\244\247", nullptr));
        action_3->setText(QCoreApplication::translate("MainWindow", "\347\274\251\345\260\217", nullptr));
        action_4->setText(QCoreApplication::translate("MainWindow", "\345\256\236\351\231\205\345\244\247\345\260\217", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Drag Mode", nullptr));
        rubberBand->setText(QCoreApplication::translate("MainWindow", "Rubber Band", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
