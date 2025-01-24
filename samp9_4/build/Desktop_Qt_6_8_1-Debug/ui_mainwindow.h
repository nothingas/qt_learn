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
    QAction *action;
    QAction *action_2;
    QAction *action_3;
    QAction *action_4;
    QAction *action_5;
    QAction *action_6;
    QAction *action_7;
    QAction *action_8;
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
        MainWindow->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextUnderIcon);
        action = new QAction(MainWindow);
        action->setObjectName("action");
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::FolderOpen));
        action->setIcon(icon);
        action->setMenuRole(QAction::MenuRole::NoRole);
        action_2 = new QAction(MainWindow);
        action_2->setObjectName("action_2");
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::ListAdd));
        action_2->setIcon(icon1);
        action_2->setMenuRole(QAction::MenuRole::NoRole);
        action_3 = new QAction(MainWindow);
        action_3->setObjectName("action_3");
        QIcon icon2(QIcon::fromTheme(QIcon::ThemeIcon::MailForward));
        action_3->setIcon(icon2);
        action_3->setMenuRole(QAction::MenuRole::NoRole);
        action_4 = new QAction(MainWindow);
        action_4->setObjectName("action_4");
        QIcon icon3(QIcon::fromTheme(QIcon::ThemeIcon::EditClear));
        action_4->setIcon(icon3);
        action_4->setMenuRole(QAction::MenuRole::NoRole);
        action_5 = new QAction(MainWindow);
        action_5->setObjectName("action_5");
        QIcon icon4(QIcon::fromTheme(QIcon::ThemeIcon::DocumentSave));
        action_5->setIcon(icon4);
        action_5->setMenuRole(QAction::MenuRole::NoRole);
        action_6 = new QAction(MainWindow);
        action_6->setObjectName("action_6");
        QIcon icon5(QIcon::fromTheme(QIcon::ThemeIcon::EditRedo));
        action_6->setIcon(icon5);
        action_6->setMenuRole(QAction::MenuRole::NoRole);
        action_7 = new QAction(MainWindow);
        action_7->setObjectName("action_7");
        QIcon icon6(QIcon::fromTheme(QIcon::ThemeIcon::FormatIndentLess));
        action_7->setIcon(icon6);
        action_7->setMenuRole(QAction::MenuRole::NoRole);
        action_8 = new QAction(MainWindow);
        action_8->setObjectName("action_8");
        QIcon icon7(QIcon::fromTheme(QIcon::ThemeIcon::GoNext));
        action_8->setIcon(icon7);
        action_8->setMenuRole(QAction::MenuRole::NoRole);
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
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        toolBar->addAction(action);
        toolBar->addSeparator();
        toolBar->addAction(action_2);
        toolBar->addAction(action_3);
        toolBar->addAction(action_4);
        toolBar->addSeparator();
        toolBar->addAction(action_5);
        toolBar->addAction(action_6);
        toolBar->addSeparator();
        toolBar->addAction(action_7);
        toolBar->addAction(action_8);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
        action_2->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240", nullptr));
        action_3->setText(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245", nullptr));
        action_4->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
        action_5->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
        action_6->setText(QCoreApplication::translate("MainWindow", "\345\217\226\346\266\210", nullptr));
        action_7->setText(QCoreApplication::translate("MainWindow", "\345\255\227\346\256\265\345\210\227\350\241\250", nullptr));
        action_8->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
