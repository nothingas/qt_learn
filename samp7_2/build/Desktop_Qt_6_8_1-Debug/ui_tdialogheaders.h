/********************************************************************************
** Form generated from reading UI file 'tdialogheaders.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TDIALOGHEADERS_H
#define UI_TDIALOGHEADERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_TDialogHeaders
{
public:
    QGridLayout *gridLayout;
    QListView *listView;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *TDialogHeaders)
    {
        if (TDialogHeaders->objectName().isEmpty())
            TDialogHeaders->setObjectName("TDialogHeaders");
        TDialogHeaders->resize(603, 578);
        gridLayout = new QGridLayout(TDialogHeaders);
        gridLayout->setObjectName("gridLayout");
        listView = new QListView(TDialogHeaders);
        listView->setObjectName("listView");

        gridLayout->addWidget(listView, 0, 0, 1, 2);

        pushButton = new QPushButton(TDialogHeaders);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 1, 0, 1, 1);

        pushButton_2 = new QPushButton(TDialogHeaders);
        pushButton_2->setObjectName("pushButton_2");

        gridLayout->addWidget(pushButton_2, 1, 1, 1, 1);


        retranslateUi(TDialogHeaders);
        QObject::connect(pushButton, &QPushButton::clicked, TDialogHeaders, qOverload<>(&QDialog::accept));
        QObject::connect(pushButton_2, &QPushButton::clicked, TDialogHeaders, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(TDialogHeaders);
    } // setupUi

    void retranslateUi(QDialog *TDialogHeaders)
    {
        TDialogHeaders->setWindowTitle(QCoreApplication::translate("TDialogHeaders", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("TDialogHeaders", "OK", nullptr));
        pushButton_2->setText(QCoreApplication::translate("TDialogHeaders", "Reject", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TDialogHeaders: public Ui_TDialogHeaders {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TDIALOGHEADERS_H
