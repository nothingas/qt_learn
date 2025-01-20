/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_3;
    QToolBox *toolBox;
    QWidget *page;
    QPushButton *pushButton_19;
    QPushButton *pushButton_20;
    QWidget *page_2;
    QPushButton *pushButton_21;
    QPushButton *pushButton_22;
    QPushButton *pushButton_23;
    QWidget *page_3;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QPushButton *pushButton_17;
    QPushButton *pushButton_18;
    QWidget *page_4;
    QPushButton *pushButton_24;
    QPushButton *pushButton_25;
    QWidget *page_5;
    QPushButton *pushButton_26;
    QPushButton *pushButton_27;
    QPushButton *pushButton_28;
    QWidget *page_6;
    QPushButton *pushButton_29;
    QPushButton *pushButton_30;
    QPushButton *pushButton_31;
    QWidget *page_7;
    QPushButton *pushButton_32;
    QPushButton *pushButton_33;
    QPushButton *pushButton_34;
    QPushButton *pushButton_35;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbtopenfile;
    QPushButton *pbtopendir;
    QPushButton *clear;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(641, 691);
        horizontalLayout_2 = new QHBoxLayout(Dialog);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName("groupBox");
        horizontalLayout_3 = new QHBoxLayout(groupBox);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        toolBox = new QToolBox(groupBox);
        toolBox->setObjectName("toolBox");
        page = new QWidget();
        page->setObjectName("page");
        page->setGeometry(QRect(0, 0, 253, 394));
        pushButton_19 = new QPushButton(page);
        pushButton_19->setObjectName("pushButton_19");
        pushButton_19->setGeometry(QRect(20, 30, 88, 26));
        pushButton_20 = new QPushButton(page);
        pushButton_20->setObjectName("pushButton_20");
        pushButton_20->setGeometry(QRect(20, 90, 88, 26));
        toolBox->addItem(page, QString::fromUtf8("QCoreApplication\347\261\273"));
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        page_2->setGeometry(QRect(0, 0, 253, 394));
        pushButton_21 = new QPushButton(page_2);
        pushButton_21->setObjectName("pushButton_21");
        pushButton_21->setGeometry(QRect(30, 40, 88, 26));
        pushButton_22 = new QPushButton(page_2);
        pushButton_22->setObjectName("pushButton_22");
        pushButton_22->setGeometry(QRect(30, 90, 88, 26));
        pushButton_23 = new QPushButton(page_2);
        pushButton_23->setObjectName("pushButton_23");
        pushButton_23->setGeometry(QRect(50, 150, 88, 26));
        toolBox->addItem(page_2, QString::fromUtf8("QFile\347\261\273"));
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        page_3->setGeometry(QRect(0, 0, 253, 394));
        horizontalLayout_4 = new QHBoxLayout(page_3);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        groupBox_5 = new QGroupBox(page_3);
        groupBox_5->setObjectName("groupBox_5");
        gridLayout_2 = new QGridLayout(groupBox_5);
        gridLayout_2->setObjectName("gridLayout_2");
        pushButton = new QPushButton(groupBox_5);
        pushButton->setObjectName("pushButton");

        gridLayout_2->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(groupBox_5);
        pushButton_2->setObjectName("pushButton_2");

        gridLayout_2->addWidget(pushButton_2, 0, 1, 1, 1);

        pushButton_3 = new QPushButton(groupBox_5);
        pushButton_3->setObjectName("pushButton_3");

        gridLayout_2->addWidget(pushButton_3, 1, 0, 1, 1);

        pushButton_4 = new QPushButton(groupBox_5);
        pushButton_4->setObjectName("pushButton_4");

        gridLayout_2->addWidget(pushButton_4, 1, 1, 1, 1);

        pushButton_5 = new QPushButton(groupBox_5);
        pushButton_5->setObjectName("pushButton_5");

        gridLayout_2->addWidget(pushButton_5, 2, 0, 1, 1);

        pushButton_6 = new QPushButton(groupBox_5);
        pushButton_6->setObjectName("pushButton_6");

        gridLayout_2->addWidget(pushButton_6, 2, 1, 1, 1);

        pushButton_7 = new QPushButton(groupBox_5);
        pushButton_7->setObjectName("pushButton_7");

        gridLayout_2->addWidget(pushButton_7, 3, 0, 1, 1);

        pushButton_8 = new QPushButton(groupBox_5);
        pushButton_8->setObjectName("pushButton_8");

        gridLayout_2->addWidget(pushButton_8, 3, 1, 1, 1);

        pushButton_9 = new QPushButton(groupBox_5);
        pushButton_9->setObjectName("pushButton_9");

        gridLayout_2->addWidget(pushButton_9, 4, 0, 1, 1);

        pushButton_10 = new QPushButton(groupBox_5);
        pushButton_10->setObjectName("pushButton_10");

        gridLayout_2->addWidget(pushButton_10, 4, 1, 1, 1);

        pushButton_11 = new QPushButton(groupBox_5);
        pushButton_11->setObjectName("pushButton_11");

        gridLayout_2->addWidget(pushButton_11, 5, 0, 1, 1);

        pushButton_12 = new QPushButton(groupBox_5);
        pushButton_12->setObjectName("pushButton_12");

        gridLayout_2->addWidget(pushButton_12, 5, 1, 1, 1);

        pushButton_13 = new QPushButton(groupBox_5);
        pushButton_13->setObjectName("pushButton_13");

        gridLayout_2->addWidget(pushButton_13, 6, 0, 1, 1);

        pushButton_14 = new QPushButton(groupBox_5);
        pushButton_14->setObjectName("pushButton_14");

        gridLayout_2->addWidget(pushButton_14, 6, 1, 1, 1);

        pushButton_15 = new QPushButton(groupBox_5);
        pushButton_15->setObjectName("pushButton_15");

        gridLayout_2->addWidget(pushButton_15, 7, 0, 1, 1);

        pushButton_16 = new QPushButton(groupBox_5);
        pushButton_16->setObjectName("pushButton_16");

        gridLayout_2->addWidget(pushButton_16, 7, 1, 1, 1);

        pushButton_17 = new QPushButton(groupBox_5);
        pushButton_17->setObjectName("pushButton_17");

        gridLayout_2->addWidget(pushButton_17, 8, 0, 1, 1);

        pushButton_18 = new QPushButton(groupBox_5);
        pushButton_18->setObjectName("pushButton_18");

        gridLayout_2->addWidget(pushButton_18, 8, 1, 1, 1);


        horizontalLayout_4->addWidget(groupBox_5);

        toolBox->addItem(page_3, QString::fromUtf8("QFileInfo\347\261\273"));
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        page_4->setGeometry(QRect(0, 0, 253, 394));
        pushButton_24 = new QPushButton(page_4);
        pushButton_24->setObjectName("pushButton_24");
        pushButton_24->setGeometry(QRect(20, 30, 88, 26));
        pushButton_25 = new QPushButton(page_4);
        pushButton_25->setObjectName("pushButton_25");
        pushButton_25->setGeometry(QRect(30, 100, 88, 26));
        toolBox->addItem(page_4, QString::fromUtf8("QDir\347\261\273"));
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        page_5->setGeometry(QRect(0, 0, 253, 394));
        pushButton_26 = new QPushButton(page_5);
        pushButton_26->setObjectName("pushButton_26");
        pushButton_26->setGeometry(QRect(40, 30, 88, 26));
        pushButton_27 = new QPushButton(page_5);
        pushButton_27->setObjectName("pushButton_27");
        pushButton_27->setGeometry(QRect(40, 110, 88, 26));
        pushButton_28 = new QPushButton(page_5);
        pushButton_28->setObjectName("pushButton_28");
        pushButton_28->setGeometry(QRect(50, 190, 88, 26));
        toolBox->addItem(page_5, QString::fromUtf8("QTemporaryDir\347\261\273"));
        page_6 = new QWidget();
        page_6->setObjectName("page_6");
        page_6->setGeometry(QRect(0, 0, 253, 394));
        pushButton_29 = new QPushButton(page_6);
        pushButton_29->setObjectName("pushButton_29");
        pushButton_29->setGeometry(QRect(40, 30, 88, 26));
        pushButton_30 = new QPushButton(page_6);
        pushButton_30->setObjectName("pushButton_30");
        pushButton_30->setGeometry(QRect(50, 90, 88, 26));
        pushButton_31 = new QPushButton(page_6);
        pushButton_31->setObjectName("pushButton_31");
        pushButton_31->setGeometry(QRect(60, 210, 88, 26));
        toolBox->addItem(page_6, QString::fromUtf8("QTemporaryFile\347\261\273"));
        page_7 = new QWidget();
        page_7->setObjectName("page_7");
        page_7->setGeometry(QRect(0, 0, 253, 394));
        pushButton_32 = new QPushButton(page_7);
        pushButton_32->setObjectName("pushButton_32");
        pushButton_32->setGeometry(QRect(60, 30, 131, 26));
        pushButton_33 = new QPushButton(page_7);
        pushButton_33->setObjectName("pushButton_33");
        pushButton_33->setGeometry(QRect(60, 80, 131, 26));
        pushButton_34 = new QPushButton(page_7);
        pushButton_34->setObjectName("pushButton_34");
        pushButton_34->setGeometry(QRect(60, 140, 131, 26));
        pushButton_35 = new QPushButton(page_7);
        pushButton_35->setObjectName("pushButton_35");
        pushButton_35->setGeometry(QRect(60, 210, 121, 26));
        toolBox->addItem(page_7, QString::fromUtf8("QFileSystemWatcher\347\261\273"));

        horizontalLayout_3->addWidget(toolBox);


        horizontalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Dialog);
        groupBox_2->setObjectName("groupBox_2");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName("verticalLayout");
        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName("groupBox_3");
        horizontalLayout = new QHBoxLayout(groupBox_3);
        horizontalLayout->setObjectName("horizontalLayout");
        pbtopenfile = new QPushButton(groupBox_3);
        pbtopenfile->setObjectName("pbtopenfile");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pbtopenfile->sizePolicy().hasHeightForWidth());
        pbtopenfile->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(pbtopenfile);

        pbtopendir = new QPushButton(groupBox_3);
        pbtopendir->setObjectName("pbtopendir");

        horizontalLayout->addWidget(pbtopendir);

        clear = new QPushButton(groupBox_3);
        clear->setObjectName("clear");

        horizontalLayout->addWidget(clear);


        verticalLayout->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(groupBox_2);
        groupBox_4->setObjectName("groupBox_4");
        gridLayout = new QGridLayout(groupBox_4);
        gridLayout->setObjectName("gridLayout");
        lineEdit = new QLineEdit(groupBox_4);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        label = new QLabel(groupBox_4);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_2 = new QLineEdit(groupBox_4);
        lineEdit_2->setObjectName("lineEdit_2");

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 1);

        plainTextEdit = new QPlainTextEdit(groupBox_4);
        plainTextEdit->setObjectName("plainTextEdit");

        gridLayout->addWidget(plainTextEdit, 3, 1, 1, 1);


        verticalLayout->addWidget(groupBox_4);


        horizontalLayout_2->addWidget(groupBox_2);


        retranslateUi(Dialog);

        toolBox->setCurrentIndex(6);


        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        groupBox->setTitle(QString());
#if QT_CONFIG(tooltip)
        pushButton_19->setToolTip(QCoreApplication::translate("Dialog", "\350\277\224\345\233\236\345\272\224\347\224\250\347\250\213\345\272\217\345\220\215\347\247\260", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_19->setText(QCoreApplication::translate("Dialog", "applicationName()", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_20->setToolTip(QCoreApplication::translate("Dialog", "\347\273\204\347\273\207\345\220\215", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_20->setText(QCoreApplication::translate("Dialog", "OrganizationName", nullptr));
        toolBox->setItemText(toolBox->indexOf(page), QCoreApplication::translate("Dialog", "QCoreApplication\347\261\273", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_21->setToolTip(QCoreApplication::translate("Dialog", "//\345\260\206\346\226\207\344\273\266\347\247\273\351\231\244\345\210\260\345\233\236\346\224\266\347\253\231", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_21->setText(QCoreApplication::translate("Dialog", "moveToTrash", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_22->setToolTip(QCoreApplication::translate("Dialog", "same to above", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_22->setText(QCoreApplication::translate("Dialog", "exists()", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_23->setToolTip(QCoreApplication::translate("Dialog", "\345\210\240\351\231\244\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_23->setText(QCoreApplication::translate("Dialog", "remove()", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_2), QCoreApplication::translate("Dialog", "QFile\347\261\273", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("Dialog", "\346\226\207\344\273\266\344\277\241\346\201\257", nullptr));
#if QT_CONFIG(tooltip)
        pushButton->setToolTip(QCoreApplication::translate("Dialog", "\350\277\224\345\233\236\346\226\207\344\273\266\346\211\200\345\234\250\350\267\257\345\276\204\357\274\214\345\205\266\345\256\203\344\270\215\346\274\224\347\244\272", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton->setText(QCoreApplication::translate("Dialog", "path", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dialog", "PushButton", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Dialog", "PushButton", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Dialog", "PushButton", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Dialog", "PushButton", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Dialog", "PushButton", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Dialog", "PushButton", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Dialog", "PushButton", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Dialog", "PushButton", nullptr));
        pushButton_10->setText(QCoreApplication::translate("Dialog", "PushButton", nullptr));
        pushButton_11->setText(QCoreApplication::translate("Dialog", "PushButton", nullptr));
        pushButton_12->setText(QCoreApplication::translate("Dialog", "PushButton", nullptr));
        pushButton_13->setText(QCoreApplication::translate("Dialog", "PushButton", nullptr));
        pushButton_14->setText(QCoreApplication::translate("Dialog", "PushButton", nullptr));
        pushButton_15->setText(QCoreApplication::translate("Dialog", "PushButton", nullptr));
        pushButton_16->setText(QCoreApplication::translate("Dialog", "PushButton", nullptr));
        pushButton_17->setText(QCoreApplication::translate("Dialog", "PushButton", nullptr));
        pushButton_18->setText(QCoreApplication::translate("Dialog", "PushButton", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_3), QCoreApplication::translate("Dialog", "QFileInfo\347\261\273", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_24->setToolTip(QCoreApplication::translate("Dialog", "\345\233\236\351\251\261\345\212\250\345\231\250\345\210\227\350\241\250", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_24->setText(QCoreApplication::translate("Dialog", "drives()", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_25->setToolTip(QCoreApplication::translate("Dialog", "\345\210\227\345\207\272\344\270\200\344\270\252\347\233\256\345\275\225\344\270\213\347\232\204\346\211\200\346\234\211\345\255\220\n"
"\347\233\256\345\275\225", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_25->setText(QCoreApplication::translate("Dialog", "entryList()", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_4), QCoreApplication::translate("Dialog", "QDir\347\261\273", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_26->setToolTip(QCoreApplication::translate("Dialog", "\345\234\250\347\263\273\347\273\237\344\270\264\346\227\266\347\233\256\345\275\225\344\270\213\345\210\233\345\273\272\344\270\264\346\227\266\347\233\256\345\275\225", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_26->setText(QCoreApplication::translate("Dialog", "create()", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_27->setToolTip(QCoreApplication::translate("Dialog", "\345\234\250\346\214\207\345\256\232\347\233\256\345\275\225\344\270\213\345\210\233\345\273\272\344\270\264\346\227\266\346\226\207\344\273\266\345\244\271", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_27->setText(QCoreApplication::translate("Dialog", "PushButton", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_28->setToolTip(QCoreApplication::translate("Dialog", "\345\234\250\345\275\223\345\211\215\347\233\256\345\275\225\344\270\213\345\210\233\345\273\272\344\270\264\346\227\266\346\226\207\344\273\266\345\244\271", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_28->setText(QCoreApplication::translate("Dialog", "PushButton", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_5), QCoreApplication::translate("Dialog", "QTemporaryDir\347\261\273", nullptr));
        pushButton_29->setText(QCoreApplication::translate("Dialog", "create()", nullptr));
        pushButton_30->setText(QCoreApplication::translate("Dialog", "PushButton", nullptr));
        pushButton_31->setText(QCoreApplication::translate("Dialog", "PushButton", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_6), QCoreApplication::translate("Dialog", "QTemporaryFile\347\261\273", nullptr));
        pushButton_32->setText(QCoreApplication::translate("Dialog", "addpath()", nullptr));
        pushButton_33->setText(QCoreApplication::translate("Dialog", "removepath()", nullptr));
        pushButton_34->setText(QCoreApplication::translate("Dialog", "directories", nullptr));
        pushButton_35->setText(QCoreApplication::translate("Dialog", "files()", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_7), QCoreApplication::translate("Dialog", "QFileSystemWatcher\347\261\273", nullptr));
        groupBox_2->setTitle(QString());
        groupBox_3->setTitle(QString());
        pbtopenfile->setText(QCoreApplication::translate("Dialog", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
        pbtopendir->setText(QCoreApplication::translate("Dialog", "\346\211\223\345\274\200\347\233\256\345\275\225", nullptr));
        clear->setText(QCoreApplication::translate("Dialog", "\346\270\205\351\231\244\346\226\207\346\234\254\346\241\206", nullptr));
        groupBox_4->setTitle(QString());
        label->setText(QCoreApplication::translate("Dialog", "\346\226\207\344\273\266", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "\344\277\241\346\201\257", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "\347\233\256\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
