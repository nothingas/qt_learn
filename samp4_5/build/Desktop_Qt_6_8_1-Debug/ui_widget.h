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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *p11;
    QPushButton *p12;
    QPushButton *p13;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *p21;
    QPushButton *p22;
    QPushButton *p23;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *c1;
    QCheckBox *c2;
    QCheckBox *c3;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *r1;
    QRadioButton *r2;
    QRadioButton *r3;
    QLineEdit *textEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->setEnabled(true);
        Widget->resize(400, 209);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Widget->sizePolicy().hasHeightForWidth());
        Widget->setSizePolicy(sizePolicy);
        Widget->setMaximumSize(QSize(800, 700));
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName("groupBox");
        horizontalLayout_5 = new QHBoxLayout(groupBox);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        p11 = new QPushButton(groupBox);
        p11->setObjectName("p11");
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::FormatJustifyLeft));
        p11->setIcon(icon);
        p11->setCheckable(true);
        p11->setAutoExclusive(true);

        horizontalLayout_5->addWidget(p11);

        p12 = new QPushButton(groupBox);
        p12->setObjectName("p12");
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::FormatJustifyFill));
        p12->setIcon(icon1);
        p12->setCheckable(true);
        p12->setAutoExclusive(true);

        horizontalLayout_5->addWidget(p12);

        p13 = new QPushButton(groupBox);
        p13->setObjectName("p13");
        QIcon icon2(QIcon::fromTheme(QIcon::ThemeIcon::FormatJustifyRight));
        p13->setIcon(icon2);
        p13->setCheckable(true);
        p13->setAutoExclusive(true);

        horizontalLayout_5->addWidget(p13);


        verticalLayout->addWidget(groupBox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        p21 = new QPushButton(Widget);
        p21->setObjectName("p21");
        QIcon icon3(QIcon::fromTheme(QIcon::ThemeIcon::FormatTextBold));
        p21->setIcon(icon3);
        p21->setCheckable(true);

        horizontalLayout_2->addWidget(p21);

        p22 = new QPushButton(Widget);
        p22->setObjectName("p22");
        QIcon icon4(QIcon::fromTheme(QIcon::ThemeIcon::FormatTextItalic));
        p22->setIcon(icon4);
        p22->setCheckable(true);

        horizontalLayout_2->addWidget(p22);

        p23 = new QPushButton(Widget);
        p23->setObjectName("p23");
        QIcon icon5(QIcon::fromTheme(QIcon::ThemeIcon::FormatTextUnderline));
        p23->setIcon(icon5);
        p23->setCheckable(true);

        horizontalLayout_2->addWidget(p23);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        c1 = new QCheckBox(Widget);
        c1->setObjectName("c1");

        horizontalLayout_3->addWidget(c1);

        c2 = new QCheckBox(Widget);
        c2->setObjectName("c2");

        horizontalLayout_3->addWidget(c2);

        c3 = new QCheckBox(Widget);
        c3->setObjectName("c3");

        horizontalLayout_3->addWidget(c3);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        r1 = new QRadioButton(Widget);
        r1->setObjectName("r1");

        horizontalLayout_4->addWidget(r1);

        r2 = new QRadioButton(Widget);
        r2->setObjectName("r2");

        horizontalLayout_4->addWidget(r2);

        r3 = new QRadioButton(Widget);
        r3->setObjectName("r3");

        horizontalLayout_4->addWidget(r3);


        verticalLayout->addLayout(horizontalLayout_4);

        textEdit = new QLineEdit(Widget);
        textEdit->setObjectName("textEdit");

        verticalLayout->addWidget(textEdit);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBox->setTitle(QString());
        p11->setText(QCoreApplication::translate("Widget", "\345\261\205\345\267\246", nullptr));
        p12->setText(QCoreApplication::translate("Widget", "\345\261\205\344\270\255", nullptr));
        p13->setText(QCoreApplication::translate("Widget", "\345\261\205\345\217\263", nullptr));
        p21->setText(QCoreApplication::translate("Widget", "\347\262\227\344\275\223", nullptr));
        p22->setText(QCoreApplication::translate("Widget", "\346\226\234\344\275\223", nullptr));
        p23->setText(QCoreApplication::translate("Widget", "\344\270\213\345\210\222\347\272\277", nullptr));
        c1->setText(QCoreApplication::translate("Widget", "Readonly", nullptr));
        c2->setText(QCoreApplication::translate("Widget", "Enabled", nullptr));
        c3->setText(QCoreApplication::translate("Widget", "ClearButtonEnable", nullptr));
        r1->setText(QCoreApplication::translate("Widget", "Black", nullptr));
        r2->setText(QCoreApplication::translate("Widget", "Red", nullptr));
        r3->setText(QCoreApplication::translate("Widget", "Blue", nullptr));
        textEdit->setText(QCoreApplication::translate("Widget", "\346\265\213\350\257\225\346\230\276\347\244\272\346\226\207\346\234\254", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
