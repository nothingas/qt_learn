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
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *act_open;
    QAction *action;
    QAction *action_2;
    QAction *action_3;
    QAction *action_4;
    QAction *action_5;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_2;
    QSpinBox *dbSpinEmpNo;
    QLineEdit *dbEditName;
    QComboBox *dbComboSex;
    QDateEdit *dbEditBirth;
    QComboBox *dbComboProvince;
    QComboBox *dbComboDep;
    QSpinBox *dbSpinSalary;
    QLabel *label;
    QPlainTextEdit *dbEditMemo;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(882, 753);
        MainWindow->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextUnderIcon);
        act_open = new QAction(MainWindow);
        act_open->setObjectName("act_open");
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::FolderOpen));
        act_open->setIcon(icon);
        act_open->setMenuRole(QAction::MenuRole::NoRole);
        action = new QAction(MainWindow);
        action->setObjectName("action");
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::MediaSkipBackward));
        action->setIcon(icon1);
        action->setMenuRole(QAction::MenuRole::NoRole);
        action_2 = new QAction(MainWindow);
        action_2->setObjectName("action_2");
        QIcon icon2(QIcon::fromTheme(QIcon::ThemeIcon::MediaSeekBackward));
        action_2->setIcon(icon2);
        action_2->setMenuRole(QAction::MenuRole::NoRole);
        action_3 = new QAction(MainWindow);
        action_3->setObjectName("action_3");
        QIcon icon3(QIcon::fromTheme(QIcon::ThemeIcon::MediaSeekForward));
        action_3->setIcon(icon3);
        action_3->setMenuRole(QAction::MenuRole::NoRole);
        action_4 = new QAction(MainWindow);
        action_4->setObjectName("action_4");
        QIcon icon4(QIcon::fromTheme(QIcon::ThemeIcon::MediaSkipForward));
        action_4->setIcon(icon4);
        action_4->setMenuRole(QAction::MenuRole::NoRole);
        action_5 = new QAction(MainWindow);
        action_5->setObjectName("action_5");
        QIcon icon5(QIcon::fromTheme(QIcon::ThemeIcon::EditClear));
        action_5->setIcon(icon5);
        action_5->setMenuRole(QAction::MenuRole::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        tableView = new QTableView(groupBox);
        tableView->setObjectName("tableView");

        verticalLayout->addWidget(tableView);


        horizontalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName("gridLayout");
        groupBox_5 = new QGroupBox(groupBox_2);
        groupBox_5->setObjectName("groupBox_5");
        verticalLayout_2 = new QVBoxLayout(groupBox_5);
        verticalLayout_2->setObjectName("verticalLayout_2");
        dbSpinEmpNo = new QSpinBox(groupBox_5);
        dbSpinEmpNo->setObjectName("dbSpinEmpNo");

        verticalLayout_2->addWidget(dbSpinEmpNo);

        dbEditName = new QLineEdit(groupBox_5);
        dbEditName->setObjectName("dbEditName");

        verticalLayout_2->addWidget(dbEditName);

        dbComboSex = new QComboBox(groupBox_5);
        dbComboSex->setObjectName("dbComboSex");

        verticalLayout_2->addWidget(dbComboSex);

        dbEditBirth = new QDateEdit(groupBox_5);
        dbEditBirth->setObjectName("dbEditBirth");

        verticalLayout_2->addWidget(dbEditBirth);

        dbComboProvince = new QComboBox(groupBox_5);
        dbComboProvince->setObjectName("dbComboProvince");

        verticalLayout_2->addWidget(dbComboProvince);

        dbComboDep = new QComboBox(groupBox_5);
        dbComboDep->setObjectName("dbComboDep");

        verticalLayout_2->addWidget(dbComboDep);

        dbSpinSalary = new QSpinBox(groupBox_5);
        dbSpinSalary->setObjectName("dbSpinSalary");

        verticalLayout_2->addWidget(dbSpinSalary);


        gridLayout->addWidget(groupBox_5, 0, 0, 1, 1);

        label = new QLabel(groupBox_2);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 1, 1, 1);

        dbEditMemo = new QPlainTextEdit(groupBox_2);
        dbEditMemo->setObjectName("dbEditMemo");

        gridLayout->addWidget(dbEditMemo, 1, 0, 1, 2);

        gridLayout->setRowStretch(0, 1);
        gridLayout->setRowStretch(1, 1);
        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 1);

        horizontalLayout->addWidget(groupBox_2);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 3);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        toolBar->addAction(act_open);
        toolBar->addSeparator();
        toolBar->addAction(action);
        toolBar->addAction(action_2);
        toolBar->addSeparator();
        toolBar->addAction(action_3);
        toolBar->addAction(action_4);
        toolBar->addSeparator();
        toolBar->addAction(action_5);
        toolBar->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        act_open->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\225\260\346\215\256\345\272\223", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\351\246\226\350\256\260\345\275\225", nullptr));
        action_2->setText(QCoreApplication::translate("MainWindow", "\345\211\215\344\270\200\350\256\260\345\275\225", nullptr));
        action_3->setText(QCoreApplication::translate("MainWindow", "\345\220\216\344\270\200\350\256\260\345\275\225", nullptr));
        action_4->setText(QCoreApplication::translate("MainWindow", "\345\260\276\350\256\260\345\275\225", nullptr));
        action_5->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\350\241\250\346\240\274\346\225\260\346\215\256", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\345\275\223\345\211\215\350\256\260\345\275\225", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "GroupBox", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
