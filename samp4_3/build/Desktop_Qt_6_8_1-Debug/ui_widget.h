/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QPushButton *b2;
    QLabel *label;
    QLineEdit *l2;
    QLabel *label_2;
    QLineEdit *l3;
    QPushButton *b1;
    QLineEdit *l1;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QLabel *label_5;
    QLineEdit *l4;
    QLabel *label_4;
    QLineEdit *l6;
    QPushButton *b5;
    QPushButton *b3;
    QLineEdit *l5;
    QPushButton *b4;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName("groupBox");
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName("gridLayout_2");
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        gridLayout_2->addWidget(label_3, 1, 2, 1, 1);

        b2 = new QPushButton(groupBox);
        b2->setObjectName("b2");

        gridLayout_2->addWidget(b2, 3, 2, 1, 2);

        label = new QLabel(groupBox);
        label->setObjectName("label");

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        l2 = new QLineEdit(groupBox);
        l2->setObjectName("l2");

        gridLayout_2->addWidget(l2, 0, 3, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        gridLayout_2->addWidget(label_2, 0, 2, 1, 1);

        l3 = new QLineEdit(groupBox);
        l3->setObjectName("l3");

        gridLayout_2->addWidget(l3, 1, 3, 1, 1);

        b1 = new QPushButton(groupBox);
        b1->setObjectName("b1");

        gridLayout_2->addWidget(b1, 3, 1, 1, 1);

        l1 = new QLineEdit(groupBox);
        l1->setObjectName("l1");

        gridLayout_2->addWidget(l1, 0, 1, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName("gridLayout");
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        l4 = new QLineEdit(groupBox_2);
        l4->setObjectName("l4");

        gridLayout->addWidget(l4, 0, 1, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        l6 = new QLineEdit(groupBox_2);
        l6->setObjectName("l6");

        gridLayout->addWidget(l6, 2, 1, 1, 1);

        b5 = new QPushButton(groupBox_2);
        b5->setObjectName("b5");

        gridLayout->addWidget(b5, 2, 3, 1, 1);

        b3 = new QPushButton(groupBox_2);
        b3->setObjectName("b3");

        gridLayout->addWidget(b3, 0, 3, 1, 1);

        l5 = new QLineEdit(groupBox_2);
        l5->setObjectName("l5");

        gridLayout->addWidget(l5, 1, 1, 1, 1);

        b4 = new QPushButton(groupBox_2);
        b4->setObjectName("b4");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(b4->sizePolicy().hasHeightForWidth());
        b4->setSizePolicy(sizePolicy);

        gridLayout->addWidget(b4, 1, 2, 1, 2);


        verticalLayout->addWidget(groupBox_2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "\346\225\260\345\200\274\350\276\223\345\205\245\345\222\214\350\276\223\345\207\272", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\346\200\273\344\273\267", nullptr));
        b2->setText(QCoreApplication::translate("Widget", "\350\256\241\347\256\227\346\200\273\344\273\267", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\346\225\260\351\207\217", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\345\215\225\344\273\267", nullptr));
        b1->setText(QCoreApplication::translate("Widget", "qDebug()\346\265\213\350\257\225", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "\350\277\233\345\210\266\350\275\254\346\215\242", nullptr));
        label_6->setText(QCoreApplication::translate("Widget", "\345\215\201\345\205\255\350\277\233\345\210\266", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "\344\272\214\350\277\233\345\210\266", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "\345\215\201\350\277\233\345\210\266", nullptr));
        b5->setText(QCoreApplication::translate("Widget", "\345\215\201\345\205\255\350\277\233\345\210\266--> \345\205\266\344\273\226\350\277\233\345\210\266", nullptr));
        b3->setText(QCoreApplication::translate("Widget", "\345\215\201\350\277\233\345\210\266--> \345\205\266\344\273\226\350\277\233\345\210\266", nullptr));
        b4->setText(QCoreApplication::translate("Widget", "\344\272\214\350\277\233\345\210\266--> \345\205\266\344\273\226\350\277\233\345\210\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
