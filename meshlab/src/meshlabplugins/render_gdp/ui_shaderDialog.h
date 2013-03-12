/********************************************************************************
** Form generated from reading UI file 'shaderDialog.ui'
**
** Created: Thu Jan 24 17:05:38 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHADERDIALOG_H
#define UI_SHADERDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShaderDialogClass
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *uvTab;
    QWidget *varListLayer;
    QHBoxLayout *hboxLayout;
    QWidget *textureTab;
    QWidget *glTab;
    QWidget *vpTab;
    QHBoxLayout *horizontalLayout_2;
    QTextBrowser *vpTextBrowser;
    QWidget *fpTab;
    QHBoxLayout *horizontalLayout;
    QTextBrowser *fpTextBrowser;
    QHBoxLayout *bottomRowLayout;
    QSpacerItem *spacer;
    QPushButton *okButton;

    void setupUi(QWidget *ShaderDialogClass)
    {
        if (ShaderDialogClass->objectName().isEmpty())
            ShaderDialogClass->setObjectName(QString::fromUtf8("ShaderDialogClass"));
        ShaderDialogClass->resize(601, 541);
        verticalLayout_2 = new QVBoxLayout(ShaderDialogClass);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame = new QFrame(ShaderDialogClass);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(frame);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        uvTab = new QWidget();
        uvTab->setObjectName(QString::fromUtf8("uvTab"));
        varListLayer = new QWidget(uvTab);
        varListLayer->setObjectName(QString::fromUtf8("varListLayer"));
        varListLayer->setGeometry(QRect(10, 20, 171, 20));
        hboxLayout = new QHBoxLayout(varListLayer);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget->addTab(uvTab, QString());
        textureTab = new QWidget();
        textureTab->setObjectName(QString::fromUtf8("textureTab"));
        tabWidget->addTab(textureTab, QString());
        glTab = new QWidget();
        glTab->setObjectName(QString::fromUtf8("glTab"));
        tabWidget->addTab(glTab, QString());
        vpTab = new QWidget();
        vpTab->setObjectName(QString::fromUtf8("vpTab"));
        horizontalLayout_2 = new QHBoxLayout(vpTab);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        vpTextBrowser = new QTextBrowser(vpTab);
        vpTextBrowser->setObjectName(QString::fromUtf8("vpTextBrowser"));

        horizontalLayout_2->addWidget(vpTextBrowser);

        tabWidget->addTab(vpTab, QString());
        fpTab = new QWidget();
        fpTab->setObjectName(QString::fromUtf8("fpTab"));
        horizontalLayout = new QHBoxLayout(fpTab);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        fpTextBrowser = new QTextBrowser(fpTab);
        fpTextBrowser->setObjectName(QString::fromUtf8("fpTextBrowser"));

        horizontalLayout->addWidget(fpTextBrowser);

        tabWidget->addTab(fpTab, QString());

        verticalLayout->addWidget(tabWidget);

        bottomRowLayout = new QHBoxLayout();
        bottomRowLayout->setObjectName(QString::fromUtf8("bottomRowLayout"));
        spacer = new QSpacerItem(QSizePolicy::Expanding, QSizePolicy::Minimum);

        bottomRowLayout->addItem(spacer);

        okButton = new QPushButton(frame);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        bottomRowLayout->addWidget(okButton);


        verticalLayout->addLayout(bottomRowLayout);


        verticalLayout_2->addWidget(frame);


        retranslateUi(ShaderDialogClass);

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(ShaderDialogClass);
    } // setupUi

    void retranslateUi(QWidget *ShaderDialogClass)
    {
        ShaderDialogClass->setWindowTitle(QApplication::translate("ShaderDialogClass", "Form", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(uvTab), QApplication::translate("ShaderDialogClass", "Uniform Variables", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(textureTab), QApplication::translate("ShaderDialogClass", "Textures", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(glTab), QApplication::translate("ShaderDialogClass", "OpenGL Status", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(vpTab), QApplication::translate("ShaderDialogClass", "Vertex Program", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(fpTab), QApplication::translate("ShaderDialogClass", "Fragment Program", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("ShaderDialogClass", "Close Shader", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ShaderDialogClass: public Ui_ShaderDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHADERDIALOG_H
