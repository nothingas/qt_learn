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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
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
    QWidget *centralwidget;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_2;
    QSlider *horizontalSlider;
    QLabel *label_3;
    QLabel *label_4;
    QSlider *horizontalSlider_2;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QSlider *horizontalSlider_3;
    QGroupBox *groupBox_2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QComboBox *comboBox_2;
    QSpinBox *spinBox;
    QComboBox *comboBox_3;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;
    QGroupBox *groupBox_3;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_8;
    QLabel *label_8;
    QComboBox *comboBox_4;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 716);
        MainWindow->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextBesideIcon);
        action = new QAction(MainWindow);
        action->setObjectName("action");
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::InsertImage));
        action->setIcon(icon);
        action->setMenuRole(QAction::MenuRole::NoRole);
        action_2 = new QAction(MainWindow);
        action_2->setObjectName("action_2");
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::EditRedo));
        action_2->setIcon(icon1);
        action_2->setMenuRole(QAction::MenuRole::NoRole);
        action_3 = new QAction(MainWindow);
        action_3->setObjectName("action_3");
        QIcon icon2(QIcon::fromTheme(QIcon::ThemeIcon::EditCut));
        action_3->setIcon(icon2);
        action_3->setMenuRole(QAction::MenuRole::NoRole);
        action_4 = new QAction(MainWindow);
        action_4->setObjectName("action_4");
        QIcon icon3(QIcon::fromTheme(QIcon::ThemeIcon::MailForward));
        action_4->setIcon(icon3);
        action_4->setMenuRole(QAction::MenuRole::NoRole);
        action_5 = new QAction(MainWindow);
        action_5->setObjectName("action_5");
        QIcon icon4(QIcon::fromTheme(QIcon::ThemeIcon::MediaPlaybackStart));
        action_5->setIcon(icon4);
        action_5->setMenuRole(QAction::MenuRole::NoRole);
        action_6 = new QAction(MainWindow);
        action_6->setObjectName("action_6");
        QIcon icon5(QIcon::fromTheme(QIcon::ThemeIcon::EditClear));
        action_6->setIcon(icon5);
        action_6->setMenuRole(QAction::MenuRole::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox_5 = new QGroupBox(centralwidget);
        groupBox_5->setObjectName("groupBox_5");
        groupBox_5->setGeometry(QRect(10, 10, 339, 641));
        verticalLayout = new QVBoxLayout(groupBox_5);
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(groupBox_5);
        groupBox->setObjectName("groupBox");
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName("gridLayout_2");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        gridLayout_2->addWidget(label, 0, 0, 1, 3);

        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName("comboBox");

        gridLayout_2->addWidget(comboBox, 0, 3, 1, 2);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        gridLayout_2->addWidget(label_2, 1, 0, 1, 2);

        horizontalSlider = new QSlider(groupBox);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setOrientation(Qt::Orientation::Horizontal);

        gridLayout_2->addWidget(horizontalSlider, 1, 2, 1, 2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        gridLayout_2->addWidget(label_3, 2, 0, 2, 2);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");

        gridLayout_2->addWidget(label_4, 4, 0, 1, 1);

        horizontalSlider_2 = new QSlider(groupBox);
        horizontalSlider_2->setObjectName("horizontalSlider_2");
        horizontalSlider_2->setOrientation(Qt::Orientation::Horizontal);

        gridLayout_2->addWidget(horizontalSlider_2, 2, 2, 1, 2);

        groupBox_4 = new QGroupBox(groupBox);
        groupBox_4->setObjectName("groupBox_4");
        gridLayout = new QGridLayout(groupBox_4);
        gridLayout->setObjectName("gridLayout");
        pushButton = new QPushButton(groupBox_4);
        pushButton->setObjectName("pushButton");
        QIcon icon6(QIcon::fromTheme(QIcon::ThemeIcon::GoUp));
        pushButton->setIcon(icon6);

        gridLayout->addWidget(pushButton, 0, 1, 1, 1);

        pushButton_3 = new QPushButton(groupBox_4);
        pushButton_3->setObjectName("pushButton_3");
        QIcon icon7(QIcon::fromTheme(QIcon::ThemeIcon::GoPrevious));
        pushButton_3->setIcon(icon7);

        gridLayout->addWidget(pushButton_3, 1, 0, 1, 1);

        pushButton_5 = new QPushButton(groupBox_4);
        pushButton_5->setObjectName("pushButton_5");
        QIcon icon8(QIcon::fromTheme(QIcon::ThemeIcon::EditUndo));
        pushButton_5->setIcon(icon8);

        gridLayout->addWidget(pushButton_5, 1, 1, 1, 1);

        pushButton_2 = new QPushButton(groupBox_4);
        pushButton_2->setObjectName("pushButton_2");
        QIcon icon9(QIcon::fromTheme(QIcon::ThemeIcon::GoNext));
        pushButton_2->setIcon(icon9);

        gridLayout->addWidget(pushButton_2, 1, 2, 1, 1);

        pushButton_4 = new QPushButton(groupBox_4);
        pushButton_4->setObjectName("pushButton_4");
        QIcon icon10(QIcon::fromTheme(QIcon::ThemeIcon::GoDown));
        pushButton_4->setIcon(icon10);

        gridLayout->addWidget(pushButton_4, 2, 1, 1, 1);


        gridLayout_2->addWidget(groupBox_4, 1, 4, 4, 1);

        horizontalSlider_3 = new QSlider(groupBox);
        horizontalSlider_3->setObjectName("horizontalSlider_3");
        horizontalSlider_3->setOrientation(Qt::Orientation::Horizontal);

        gridLayout_2->addWidget(horizontalSlider_3, 4, 3, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(groupBox_5);
        groupBox_2->setObjectName("groupBox_2");
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 30, 66, 18));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 60, 66, 18));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 90, 66, 18));
        comboBox_2 = new QComboBox(groupBox_2);
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setGeometry(QRect(90, 30, 111, 21));
        spinBox = new QSpinBox(groupBox_2);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(90, 60, 111, 21));
        comboBox_3 = new QComboBox(groupBox_2);
        comboBox_3->setObjectName("comboBox_3");
        comboBox_3->setGeometry(QRect(90, 90, 111, 21));
        checkBox = new QCheckBox(groupBox_2);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(20, 120, 92, 24));
        checkBox_2 = new QCheckBox(groupBox_2);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setGeometry(QRect(20, 150, 92, 24));
        checkBox_3 = new QCheckBox(groupBox_2);
        checkBox_3->setObjectName("checkBox_3");
        checkBox_3->setGeometry(QRect(20, 180, 92, 24));
        checkBox_4 = new QCheckBox(groupBox_2);
        checkBox_4->setObjectName("checkBox_4");
        checkBox_4->setGeometry(QRect(100, 120, 92, 24));
        checkBox_5 = new QCheckBox(groupBox_2);
        checkBox_5->setObjectName("checkBox_5");
        checkBox_5->setGeometry(QRect(110, 150, 131, 24));
        checkBox_6 = new QCheckBox(groupBox_2);
        checkBox_6->setObjectName("checkBox_6");
        checkBox_6->setGeometry(QRect(110, 180, 131, 24));

        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(groupBox_5);
        groupBox_3->setObjectName("groupBox_3");
        checkBox_7 = new QCheckBox(groupBox_3);
        checkBox_7->setObjectName("checkBox_7");
        checkBox_7->setGeometry(QRect(10, 120, 92, 24));
        checkBox_8 = new QCheckBox(groupBox_3);
        checkBox_8->setObjectName("checkBox_8");
        checkBox_8->setGeometry(QRect(101, 120, 161, 24));
        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(20, 50, 66, 18));
        comboBox_4 = new QComboBox(groupBox_3);
        comboBox_4->setObjectName("comboBox_4");
        comboBox_4->setGeometry(QRect(100, 50, 86, 26));

        verticalLayout->addWidget(groupBox_3);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        toolBar->addAction(action);
        toolBar->addAction(action_2);
        toolBar->addAction(action_3);
        toolBar->addSeparator();
        toolBar->addAction(action_4);
        toolBar->addAction(action_5);
        toolBar->addAction(action_6);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\345\272\217\345\210\227\351\242\234\350\211\262", nullptr));
        action_2->setText(QCoreApplication::translate("MainWindow", "\351\207\215\346\226\260\347\224\237\346\210\220", nullptr));
        action_3->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271\346\225\260\345\200\274", nullptr));
        action_4->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\350\241\214", nullptr));
        action_5->setText(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\350\241\214", nullptr));
        action_6->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\350\241\214", nullptr));
        groupBox_5->setTitle(QString());
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\346\227\213\350\275\254\345\222\214\345\271\263\347\247\273", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\351\242\204\350\256\276\350\247\206\350\247\222", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\346\260\264\345\271\263\346\227\213\350\275\254", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\345\236\202\347\233\264\346\227\213\350\275\254", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\347\274\251\346\224\276", nullptr));
        groupBox_4->setTitle(QString());
        pushButton->setText(QString());
        pushButton_3->setText(QString());
        pushButton_5->setText(QString());
        pushButton_2->setText(QString());
        pushButton_4->setText(QString());
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\345\233\276\345\275\242\346\200\273\344\275\223", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\345\233\276\345\275\242\344\270\273\351\242\230", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\345\255\227\344\275\223\345\244\247\345\260\217", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251\346\250\241\345\274\217", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\350\203\214\346\231\257", nullptr));
        checkBox_2->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\345\200\222\345\275\261", nullptr));
        checkBox_3->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\350\275\264\346\240\207\351\242\230", nullptr));
        checkBox_4->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\350\203\214\346\231\257\347\275\221\346\240\274", nullptr));
        checkBox_5->setText(QCoreApplication::translate("MainWindow", "\346\225\260\345\200\274\345\235\220\346\240\207\350\275\264\345\217\215\345\220\221", nullptr));
        checkBox_6->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\350\275\264\346\240\207\347\255\276\350\203\214\346\231\257", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\345\272\217\345\210\227\350\256\276\347\275\256", nullptr));
        checkBox_7->setText(QCoreApplication::translate("MainWindow", "\345\205\211\346\273\221\346\225\210\346\236\234", nullptr));
        checkBox_8->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\351\200\211\344\270\255\346\243\222\346\237\261\347\232\204\346\240\207\347\255\276", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\346\243\222\346\237\261\346\240\267\345\274\217", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
