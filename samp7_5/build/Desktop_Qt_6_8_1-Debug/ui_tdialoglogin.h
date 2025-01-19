/********************************************************************************
** Form generated from reading UI file 'tdialoglogin.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TDIALOGLOGIN_H
#define UI_TDIALOGLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TDialogLogin
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QCheckBox *checkBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *TDialogLogin)
    {
        if (TDialogLogin->objectName().isEmpty())
            TDialogLogin->setObjectName("TDialogLogin");
        TDialogLogin->resize(614, 437);
        verticalLayout = new QVBoxLayout(TDialogLogin);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(TDialogLogin);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        groupBox = new QGroupBox(TDialogLogin);
        groupBox->setObjectName("groupBox");
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        horizontalLayout->addWidget(label_3);

        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName("lineEdit_2");

        horizontalLayout->addWidget(lineEdit_2);

        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName("checkBox");

        horizontalLayout->addWidget(checkBox);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addWidget(groupBox);

        verticalLayout->setStretch(0, 5);
        verticalLayout->setStretch(1, 1);

        retranslateUi(TDialogLogin);

        QMetaObject::connectSlotsByName(TDialogLogin);
    } // setupUi

    void retranslateUi(QDialog *TDialogLogin)
    {
        TDialogLogin->setWindowTitle(QCoreApplication::translate("TDialogLogin", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("TDialogLogin", "TextLabel", nullptr));
        groupBox->setTitle(QString());
        label_2->setText(QCoreApplication::translate("TDialogLogin", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_3->setText(QCoreApplication::translate("TDialogLogin", "\345\257\206\347\240\201", nullptr));
        checkBox->setText(QCoreApplication::translate("TDialogLogin", "\344\277\235\345\255\230\347\224\250\346\210\267\345\220\215", nullptr));
        pushButton->setText(QCoreApplication::translate("TDialogLogin", "\347\241\256\345\256\232", nullptr));
        pushButton_2->setText(QCoreApplication::translate("TDialogLogin", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TDialogLogin: public Ui_TDialogLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TDIALOGLOGIN_H
