/********************************************************************************
** Form generated from reading UI file 'tformdoc.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TFORMDOC_H
#define UI_TFORMDOC_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TFormDoc
{
public:
    QAction *actOpen;
    QAction *actCut;
    QAction *actCopy;
    QAction *actPaste;
    QAction *actFont;
    QAction *actClose;
    QAction *actUndo;
    QAction *actRedo;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *TFormDoc)
    {
        if (TFormDoc->objectName().isEmpty())
            TFormDoc->setObjectName("TFormDoc");
        TFormDoc->resize(400, 300);
        actOpen = new QAction(TFormDoc);
        actOpen->setObjectName("actOpen");
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::FolderNew));
        actOpen->setIcon(icon);
        actOpen->setMenuRole(QAction::MenuRole::NoRole);
        actCut = new QAction(TFormDoc);
        actCut->setObjectName("actCut");
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::EditCut));
        actCut->setIcon(icon1);
        actCut->setMenuRole(QAction::MenuRole::NoRole);
        actCopy = new QAction(TFormDoc);
        actCopy->setObjectName("actCopy");
        QIcon icon2(QIcon::fromTheme(QIcon::ThemeIcon::DocumentRevert));
        actCopy->setIcon(icon2);
        actCopy->setMenuRole(QAction::MenuRole::NoRole);
        actPaste = new QAction(TFormDoc);
        actPaste->setObjectName("actPaste");
        QIcon icon3(QIcon::fromTheme(QIcon::ThemeIcon::EditPaste));
        actPaste->setIcon(icon3);
        actPaste->setMenuRole(QAction::MenuRole::NoRole);
        actFont = new QAction(TFormDoc);
        actFont->setObjectName("actFont");
        QIcon icon4(QIcon::fromTheme(QIcon::ThemeIcon::FormatTextBold));
        actFont->setIcon(icon4);
        actFont->setMenuRole(QAction::MenuRole::NoRole);
        actClose = new QAction(TFormDoc);
        actClose->setObjectName("actClose");
        QIcon icon5(QIcon::fromTheme(QIcon::ThemeIcon::EditDelete));
        actClose->setIcon(icon5);
        actClose->setMenuRole(QAction::MenuRole::NoRole);
        actUndo = new QAction(TFormDoc);
        actUndo->setObjectName("actUndo");
        QIcon icon6(QIcon::fromTheme(QIcon::ThemeIcon::EditUndo));
        actUndo->setIcon(icon6);
        actUndo->setMenuRole(QAction::MenuRole::NoRole);
        actRedo = new QAction(TFormDoc);
        actRedo->setObjectName("actRedo");
        QIcon icon7(QIcon::fromTheme(QIcon::ThemeIcon::EditRedo));
        actRedo->setIcon(icon7);
        actRedo->setMenuRole(QAction::MenuRole::NoRole);
        plainTextEdit = new QPlainTextEdit(TFormDoc);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(50, 90, 251, 181));

        retranslateUi(TFormDoc);

        QMetaObject::connectSlotsByName(TFormDoc);
    } // setupUi

    void retranslateUi(QWidget *TFormDoc)
    {
        TFormDoc->setWindowTitle(QCoreApplication::translate("TFormDoc", "Form", nullptr));
        actOpen->setText(QCoreApplication::translate("TFormDoc", "\346\211\223\345\274\200", nullptr));
        actCut->setText(QCoreApplication::translate("TFormDoc", "\345\211\252\345\210\207", nullptr));
        actCopy->setText(QCoreApplication::translate("TFormDoc", "\345\244\215\345\210\266", nullptr));
        actPaste->setText(QCoreApplication::translate("TFormDoc", "\347\262\230\350\264\264", nullptr));
        actFont->setText(QCoreApplication::translate("TFormDoc", "\345\255\227\344\275\223", nullptr));
        actClose->setText(QCoreApplication::translate("TFormDoc", "\345\205\263\351\227\255", nullptr));
        actUndo->setText(QCoreApplication::translate("TFormDoc", "\346\222\244\351\224\200", nullptr));
        actRedo->setText(QCoreApplication::translate("TFormDoc", "\346\201\242\345\244\215", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TFormDoc: public Ui_TFormDoc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TFORMDOC_H
