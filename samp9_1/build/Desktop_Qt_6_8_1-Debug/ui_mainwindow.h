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
#include <QtWidgets/QRadioButton>
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
    QAction *action_open;
    QAction *actQuit;
    QAction *actRecAppend;
    QAction *actRecInsert;
    QAction *actSubmit;
    QAction *actRevert;
    QAction *actRecDelete;
    QAction *actPhoto;
    QAction *actPhotoClear;
    QAction *actScan;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *comboFields;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
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
        action_open = new QAction(MainWindow);
        action_open->setObjectName("action_open");
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::FolderOpen));
        action_open->setIcon(icon);
        action_open->setMenuRole(QAction::MenuRole::NoRole);
        actQuit = new QAction(MainWindow);
        actQuit->setObjectName("actQuit");
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::EditDelete));
        actQuit->setIcon(icon1);
        actQuit->setMenuRole(QAction::MenuRole::NoRole);
        actRecAppend = new QAction(MainWindow);
        actRecAppend->setObjectName("actRecAppend");
        QIcon icon2(QIcon::fromTheme(QIcon::ThemeIcon::ListAdd));
        actRecAppend->setIcon(icon2);
        actRecAppend->setMenuRole(QAction::MenuRole::NoRole);
        actRecInsert = new QAction(MainWindow);
        actRecInsert->setObjectName("actRecInsert");
        QIcon icon3(QIcon::fromTheme(QIcon::ThemeIcon::DocumentNew));
        actRecInsert->setIcon(icon3);
        actRecInsert->setMenuRole(QAction::MenuRole::NoRole);
        actSubmit = new QAction(MainWindow);
        actSubmit->setObjectName("actSubmit");
        QIcon icon4(QIcon::fromTheme(QIcon::ThemeIcon::DocumentPageSetup));
        actSubmit->setIcon(icon4);
        actSubmit->setMenuRole(QAction::MenuRole::NoRole);
        actRevert = new QAction(MainWindow);
        actRevert->setObjectName("actRevert");
        QIcon icon5(QIcon::fromTheme(QIcon::ThemeIcon::EditClear));
        actRevert->setIcon(icon5);
        actRevert->setMenuRole(QAction::MenuRole::NoRole);
        actRecDelete = new QAction(MainWindow);
        actRecDelete->setObjectName("actRecDelete");
        QIcon icon6(QIcon::fromTheme(QIcon::ThemeIcon::GoPrevious));
        actRecDelete->setIcon(icon6);
        actRecDelete->setMenuRole(QAction::MenuRole::NoRole);
        actPhoto = new QAction(MainWindow);
        actPhoto->setObjectName("actPhoto");
        QIcon icon7(QIcon::fromTheme(QIcon::ThemeIcon::ContactNew));
        actPhoto->setIcon(icon7);
        actPhoto->setMenuRole(QAction::MenuRole::NoRole);
        actPhotoClear = new QAction(MainWindow);
        actPhotoClear->setObjectName("actPhotoClear");
        QIcon icon8(QIcon::fromTheme(QIcon::ThemeIcon::ListRemove));
        actPhotoClear->setIcon(icon8);
        actPhotoClear->setMenuRole(QAction::MenuRole::NoRole);
        actScan = new QAction(MainWindow);
        actScan->setObjectName("actScan");
        QIcon icon9(QIcon::fromTheme(QIcon::ThemeIcon::GoUp));
        actScan->setIcon(icon9);
        actScan->setMenuRole(QAction::MenuRole::NoRole);
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
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName("lineEdit");

        verticalLayout->addWidget(lineEdit);

        groupBox_4 = new QGroupBox(groupBox);
        groupBox_4->setObjectName("groupBox_4");
        horizontalLayout_3 = new QHBoxLayout(groupBox_4);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        comboFields = new QComboBox(groupBox_4);
        comboFields->setObjectName("comboFields");

        horizontalLayout_3->addWidget(comboFields);

        radioButton_4 = new QRadioButton(groupBox_4);
        radioButton_4->setObjectName("radioButton_4");

        horizontalLayout_3->addWidget(radioButton_4);

        radioButton_5 = new QRadioButton(groupBox_4);
        radioButton_5->setObjectName("radioButton_5");

        horizontalLayout_3->addWidget(radioButton_5);


        verticalLayout->addWidget(groupBox_4);

        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName("groupBox_3");
        horizontalLayout_2 = new QHBoxLayout(groupBox_3);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        radioButton = new QRadioButton(groupBox_3);
        radioButton->setObjectName("radioButton");

        horizontalLayout_2->addWidget(radioButton);

        radioButton_2 = new QRadioButton(groupBox_3);
        radioButton_2->setObjectName("radioButton_2");

        horizontalLayout_2->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(groupBox_3);
        radioButton_3->setObjectName("radioButton_3");

        horizontalLayout_2->addWidget(radioButton_3);


        verticalLayout->addWidget(groupBox_3);

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

        toolBar->addAction(action_open);
        toolBar->addSeparator();
        toolBar->addAction(actRecAppend);
        toolBar->addAction(actRecInsert);
        toolBar->addAction(actRecDelete);
        toolBar->addSeparator();
        toolBar->addAction(actPhoto);
        toolBar->addAction(actPhotoClear);
        toolBar->addAction(actScan);
        toolBar->addSeparator();
        toolBar->addAction(actSubmit);
        toolBar->addAction(actRevert);
        toolBar->addSeparator();
        toolBar->addAction(actQuit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action_open->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
        actQuit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        actRecAppend->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240", nullptr));
        actRecInsert->setText(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245", nullptr));
        actSubmit->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
        actRevert->setText(QCoreApplication::translate("MainWindow", "\345\217\226\346\266\210", nullptr));
        actRecDelete->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
        actPhoto->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\347\205\247\347\211\207", nullptr));
        actPhotoClear->setText(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244\347\205\247\347\211\207", nullptr));
        actScan->setText(QCoreApplication::translate("MainWindow", "\346\266\250\345\267\245\350\265\204", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\350\241\250\346\240\274\346\225\260\346\215\256", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "GroupBox", nullptr));
        radioButton_4->setText(QCoreApplication::translate("MainWindow", "\345\215\207\345\272\217", nullptr));
        radioButton_5->setText(QCoreApplication::translate("MainWindow", "\351\231\215\345\272\217", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "GroupBox", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "\347\224\267", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "\345\245\263", nullptr));
        radioButton_3->setText(QCoreApplication::translate("MainWindow", "\345\205\250\346\230\276\347\244\272", nullptr));
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
