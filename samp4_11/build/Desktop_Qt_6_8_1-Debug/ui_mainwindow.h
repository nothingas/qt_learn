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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *a1;
    QAction *a2;
    QAction *a3;
    QAction *a4;
    QAction *a5;
    QAction *a6;
    QAction *a7;
    QAction *a8;
    QAction *a9;
    QAction *a10;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QToolBox *toolBox;
    QWidget *page;
    QVBoxLayout *verticalLayout_2;
    QToolButton *toolButton;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;
    QToolButton *toolButton_4;
    QToolButton *toolButton_5;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *checkBox_2;
    QToolButton *toolButton_6;
    QToolButton *toolButton_7;
    QSpacerItem *verticalSpacer;
    QWidget *page_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QCheckBox *checkBox;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *toolButton_11;
    QToolButton *toolButton_8;
    QToolButton *toolButton_9;
    QToolButton *toolButton_10;
    QListWidget *listWidget;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        a1 = new QAction(MainWindow);
        a1->setObjectName("a1");
        a1->setCheckable(false);
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::AddressBookNew));
        a1->setIcon(icon);
        a1->setMenuRole(QAction::MenuRole::NoRole);
        a1->setPriority(QAction::Priority::NormalPriority);
        a2 = new QAction(MainWindow);
        a2->setObjectName("a2");
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::ApplicationExit));
        a2->setIcon(icon1);
        a2->setMenuRole(QAction::MenuRole::NoRole);
        a3 = new QAction(MainWindow);
        a3->setObjectName("a3");
        QIcon icon2(QIcon::fromTheme(QIcon::ThemeIcon::DocumentSave));
        a3->setIcon(icon2);
        a3->setMenuRole(QAction::MenuRole::NoRole);
        a4 = new QAction(MainWindow);
        a4->setObjectName("a4");
        QIcon icon3(QIcon::fromTheme(QIcon::ThemeIcon::ListAdd));
        a4->setIcon(icon3);
        a4->setMenuRole(QAction::MenuRole::NoRole);
        a5 = new QAction(MainWindow);
        a5->setObjectName("a5");
        QIcon icon4(QIcon::fromTheme(QIcon::ThemeIcon::EditDelete));
        a5->setIcon(icon4);
        a5->setMenuRole(QAction::MenuRole::NoRole);
        a6 = new QAction(MainWindow);
        a6->setObjectName("a6");
        a6->setMenuRole(QAction::MenuRole::NoRole);
        a7 = new QAction(MainWindow);
        a7->setObjectName("a7");
        a7->setMenuRole(QAction::MenuRole::NoRole);
        a8 = new QAction(MainWindow);
        a8->setObjectName("a8");
        a8->setMenuRole(QAction::MenuRole::NoRole);
        a9 = new QAction(MainWindow);
        a9->setObjectName("a9");
        QIcon icon5(QIcon::fromTheme(QIcon::ThemeIcon::MailReplySender));
        a9->setIcon(icon5);
        a9->setMenuRole(QAction::MenuRole::NoRole);
        a10 = new QAction(MainWindow);
        a10->setObjectName("a10");
        QIcon icon6(QIcon::fromTheme(QIcon::ThemeIcon::DocumentPageSetup));
        a10->setIcon(icon6);
        a10->setMenuRole(QAction::MenuRole::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        toolBox = new QToolBox(centralwidget);
        toolBox->setObjectName("toolBox");
        page = new QWidget();
        page->setObjectName("page");
        page->setGeometry(QRect(0, 0, 155, 409));
        verticalLayout_2 = new QVBoxLayout(page);
        verticalLayout_2->setObjectName("verticalLayout_2");
        toolButton = new QToolButton(page);
        toolButton->setObjectName("toolButton");
        toolButton->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextUnderIcon);
        toolButton->setAutoRaise(true);

        verticalLayout_2->addWidget(toolButton);

        toolButton_2 = new QToolButton(page);
        toolButton_2->setObjectName("toolButton_2");
        toolButton_2->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextUnderIcon);
        toolButton_2->setAutoRaise(true);

        verticalLayout_2->addWidget(toolButton_2);

        toolButton_3 = new QToolButton(page);
        toolButton_3->setObjectName("toolButton_3");
        toolButton_3->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextUnderIcon);
        toolButton_3->setAutoRaise(true);

        verticalLayout_2->addWidget(toolButton_3);

        toolButton_4 = new QToolButton(page);
        toolButton_4->setObjectName("toolButton_4");
        toolButton_4->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextUnderIcon);
        toolButton_4->setAutoRaise(true);

        verticalLayout_2->addWidget(toolButton_4);

        toolButton_5 = new QToolButton(page);
        toolButton_5->setObjectName("toolButton_5");
        toolButton_5->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextUnderIcon);
        toolButton_5->setAutoRaise(true);

        verticalLayout_2->addWidget(toolButton_5);

        QIcon icon7(QIcon::fromTheme(QIcon::ThemeIcon::DocumentOpen));
        toolBox->addItem(page, icon7, QString::fromUtf8("\345\210\227\350\241\250\351\241\271\346\223\215\344\275\234"));
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        page_2->setGeometry(QRect(0, 0, 155, 409));
        verticalLayout_3 = new QVBoxLayout(page_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        checkBox_2 = new QCheckBox(page_2);
        checkBox_2->setObjectName("checkBox_2");

        verticalLayout_3->addWidget(checkBox_2);

        toolButton_6 = new QToolButton(page_2);
        toolButton_6->setObjectName("toolButton_6");
        toolButton_6->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextBesideIcon);
        toolButton_6->setAutoRaise(false);
        toolButton_6->setArrowType(Qt::ArrowType::UpArrow);

        verticalLayout_3->addWidget(toolButton_6);

        toolButton_7 = new QToolButton(page_2);
        toolButton_7->setObjectName("toolButton_7");
        toolButton_7->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextBesideIcon);
        toolButton_7->setAutoRaise(false);
        toolButton_7->setArrowType(Qt::ArrowType::DownArrow);

        verticalLayout_3->addWidget(toolButton_7);

        verticalSpacer = new QSpacerItem(20, 290, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        QIcon icon8(QIcon::fromTheme(QIcon::ThemeIcon::EditRedo));
        toolBox->addItem(page_2, icon8, QString::fromUtf8("\345\210\227\350\241\250\346\216\222\345\272\217"));
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        page_3->setGeometry(QRect(0, 0, 155, 409));
        QIcon icon9(QIcon::fromTheme(QIcon::ThemeIcon::HelpAbout));
        toolBox->addItem(page_3, icon9, QString::fromUtf8("\344\277\241\345\217\267\345\217\221\345\260\204\346\227\266\346\234\272"));

        horizontalLayout->addWidget(toolBox);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout_2->addWidget(lineEdit);

        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName("checkBox");

        horizontalLayout_2->addWidget(checkBox);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        toolButton_11 = new QToolButton(groupBox);
        toolButton_11->setObjectName("toolButton_11");
        toolButton_11->setPopupMode(QToolButton::ToolButtonPopupMode::MenuButtonPopup);
        toolButton_11->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextBesideIcon);
        toolButton_11->setArrowType(Qt::ArrowType::DownArrow);

        horizontalLayout_3->addWidget(toolButton_11);

        toolButton_8 = new QToolButton(groupBox);
        toolButton_8->setObjectName("toolButton_8");

        horizontalLayout_3->addWidget(toolButton_8);

        toolButton_9 = new QToolButton(groupBox);
        toolButton_9->setObjectName("toolButton_9");

        horizontalLayout_3->addWidget(toolButton_9);

        toolButton_10 = new QToolButton(groupBox);
        toolButton_10->setObjectName("toolButton_10");
        toolButton_10->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextBesideIcon);

        horizontalLayout_3->addWidget(toolButton_10);


        verticalLayout->addLayout(horizontalLayout_3);

        listWidget = new QListWidget(groupBox);
        listWidget->setObjectName("listWidget");
        listWidget->setContextMenuPolicy(Qt::ContextMenuPolicy::CustomContextMenu);

        verticalLayout->addWidget(listWidget);


        horizontalLayout->addWidget(groupBox);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 4);
        MainWindow->setCentralWidget(centralwidget);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        toolBar->setTabletTracking(false);
        toolBar->setAutoFillBackground(false);
        toolBar->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        toolBar->addAction(a1);
        toolBar->addAction(a2);
        toolBar->addAction(a3);
        toolBar->addAction(a4);
        toolBar->addAction(a5);

        retranslateUi(MainWindow);

        toolBox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        a1->setText(QCoreApplication::translate("MainWindow", "\345\210\235\345\247\213\345\214\226\345\210\227\350\241\250", nullptr));
#if QT_CONFIG(whatsthis)
        a1->setWhatsThis(QCoreApplication::translate("MainWindow", "\345\210\235\345\247\213\345\214\226\345\210\227\350\241\250", nullptr));
#endif // QT_CONFIG(whatsthis)
        a2->setText(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244\345\210\227\350\241\250", nullptr));
        a3->setText(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\351\241\271", nullptr));
        a4->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\351\241\271", nullptr));
        a5->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\345\275\223\345\211\215\351\241\271", nullptr));
        a6->setText(QCoreApplication::translate("MainWindow", "\345\205\250\351\200\211", nullptr));
        a7->setText(QCoreApplication::translate("MainWindow", "\345\205\250\344\270\215\351\200\211", nullptr));
        a8->setText(QCoreApplication::translate("MainWindow", "\345\217\215\351\200\211", nullptr));
        a9->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        a10->setText(QCoreApplication::translate("MainWindow", "\351\241\271\351\200\211\346\213\251", nullptr));
        toolButton->setText(QCoreApplication::translate("MainWindow", "tBtnLisiIni", nullptr));
        toolButton_2->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolButton_3->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolButton_4->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolButton_5->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolBox->setItemText(toolBox->indexOf(page), QCoreApplication::translate("MainWindow", "\345\210\227\350\241\250\351\241\271\346\223\215\344\275\234", nullptr));
        checkBox_2->setText(QCoreApplication::translate("MainWindow", "\345\205\201\350\256\270\346\216\222\345\272\217", nullptr));
        toolButton_6->setText(QCoreApplication::translate("MainWindow", "\345\215\207\345\272\217\346\216\222\345\272\217", nullptr));
        toolButton_7->setText(QCoreApplication::translate("MainWindow", "\351\231\215\345\272\217\346\216\222\345\272\217", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_2), QCoreApplication::translate("MainWindow", "\345\210\227\350\241\250\346\216\222\345\272\217", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_3), QCoreApplication::translate("MainWindow", "\344\277\241\345\217\267\345\217\221\345\260\204\346\227\266\346\234\272", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("MainWindow", "\345\275\223\345\211\215\351\241\271\345\217\230\345\214\226", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "\351\241\271\345\217\257\347\274\226\350\276\221", nullptr));
        toolButton_11->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolButton_8->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolButton_9->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolButton_10->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
