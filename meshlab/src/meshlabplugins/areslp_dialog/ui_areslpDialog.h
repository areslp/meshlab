/********************************************************************************
** Form generated from reading UI file 'areslpDialog.ui'
**
** Created: Sun Sep 1 19:40:28 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARESLPDIALOG_H
#define UI_ARESLPDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_areslpDialog
{
public:
    QPushButton *buttonok;
    QLineEdit *pointset;
    QLabel *label;
    QLineEdit *faceset;
    QLabel *label_2;
    QLineEdit *patchset;
    QLabel *label_3;

    void setupUi(QWidget *areslpDialog)
    {
        if (areslpDialog->objectName().isEmpty())
            areslpDialog->setObjectName(QString::fromUtf8("areslpDialog"));
        areslpDialog->resize(591, 221);
        buttonok = new QPushButton(areslpDialog);
        buttonok->setObjectName(QString::fromUtf8("buttonok"));
        buttonok->setGeometry(QRect(440, 170, 129, 27));
        pointset = new QLineEdit(areslpDialog);
        pointset->setObjectName(QString::fromUtf8("pointset"));
        pointset->setGeometry(QRect(110, 22, 431, 28));
        label = new QLabel(areslpDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 10, 129, 52));
        faceset = new QLineEdit(areslpDialog);
        faceset->setObjectName(QString::fromUtf8("faceset"));
        faceset->setGeometry(QRect(110, 74, 431, 28));
        label_2 = new QLabel(areslpDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 80, 53, 18));
        patchset = new QLineEdit(areslpDialog);
        patchset->setObjectName(QString::fromUtf8("patchset"));
        patchset->setGeometry(QRect(110, 124, 431, 28));
        label_3 = new QLabel(areslpDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 130, 53, 18));

        retranslateUi(areslpDialog);

        QMetaObject::connectSlotsByName(areslpDialog);
    } // setupUi

    void retranslateUi(QWidget *areslpDialog)
    {
        areslpDialog->setWindowTitle(QApplication::translate("areslpDialog", "Form", 0, QApplication::UnicodeUTF8));
        buttonok->setText(QApplication::translate("areslpDialog", "OK", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("areslpDialog", "Point Set:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("areslpDialog", "Face Set:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("areslpDialog", "Patch Set:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class areslpDialog: public Ui_areslpDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARESLPDIALOG_H
