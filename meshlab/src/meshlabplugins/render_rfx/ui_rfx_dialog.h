/********************************************************************************
** Form generated from reading UI file 'rfx_dialog.ui'
**
** Created: Thu Jan 24 17:05:56 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RFX_DIALOG_H
#define UI_RFX_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RfxDock
{
public:
    QGridLayout *gridLayout;
    QWidget *RfxDockContents;
    QGridLayout *gridLayout_6;
    QComboBox *comboPasses;
    QTabWidget *tabWidget;
    QWidget *tabUniform;
    QGridLayout *gridLayout_2;
    QScrollArea *scrollUniforms;
    QWidget *scrollUniformsContents;
    QVBoxLayout *verticalLayout;
    QWidget *tabTextures;
    QGridLayout *gridLayout_5;
    QComboBox *comboTextures;
    QGroupBox *BoxTextureProps;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_7;
    QHBoxLayout *horizontalLayout;
    QLineEdit *EditTexFile;
    QPushButton *btnChangeTexture;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *TexInfoBox;
    QGridLayout *gridLayout_9;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lblPreview;
    QVBoxLayout *infoTexLayout;
    QTableWidget *TexStatesTable;
    QWidget *tabStates;
    QGridLayout *gridLayout_10;
    QTableWidget *glStatesTable;
    QWidget *tabVertex;
    QGridLayout *gridLayout_3;
    QTextEdit *textVert;
    QWidget *tabFragment;
    QGridLayout *gridLayout_4;
    QTextEdit *textFrag;
    QWidget *tabCompileLog;
    QGridLayout *gridLayout_11;
    QTextEdit *textLog;

    void setupUi(QWidget *RfxDock)
    {
        if (RfxDock->objectName().isEmpty())
            RfxDock->setObjectName(QString::fromUtf8("RfxDock"));
        RfxDock->resize(492, 464);
        gridLayout = new QGridLayout(RfxDock);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        RfxDockContents = new QWidget(RfxDock);
        RfxDockContents->setObjectName(QString::fromUtf8("RfxDockContents"));
        gridLayout_6 = new QGridLayout(RfxDockContents);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        comboPasses = new QComboBox(RfxDockContents);
        comboPasses->setObjectName(QString::fromUtf8("comboPasses"));

        gridLayout_6->addWidget(comboPasses, 0, 0, 1, 1);

        tabWidget = new QTabWidget(RfxDockContents);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabUniform = new QWidget();
        tabUniform->setObjectName(QString::fromUtf8("tabUniform"));
        gridLayout_2 = new QGridLayout(tabUniform);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        scrollUniforms = new QScrollArea(tabUniform);
        scrollUniforms->setObjectName(QString::fromUtf8("scrollUniforms"));
        scrollUniforms->setWidgetResizable(true);
        scrollUniformsContents = new QWidget();
        scrollUniformsContents->setObjectName(QString::fromUtf8("scrollUniformsContents"));
        scrollUniformsContents->setGeometry(QRect(0, 0, 430, 347));
        verticalLayout = new QVBoxLayout(scrollUniformsContents);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        scrollUniforms->setWidget(scrollUniformsContents);

        gridLayout_2->addWidget(scrollUniforms, 0, 0, 1, 1);

        tabWidget->addTab(tabUniform, QString());
        tabTextures = new QWidget();
        tabTextures->setObjectName(QString::fromUtf8("tabTextures"));
        gridLayout_5 = new QGridLayout(tabTextures);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        comboTextures = new QComboBox(tabTextures);
        comboTextures->setObjectName(QString::fromUtf8("comboTextures"));

        gridLayout_5->addWidget(comboTextures, 0, 0, 1, 1);

        BoxTextureProps = new QGroupBox(tabTextures);
        BoxTextureProps->setObjectName(QString::fromUtf8("BoxTextureProps"));
        gridLayout_8 = new QGridLayout(BoxTextureProps);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        EditTexFile = new QLineEdit(BoxTextureProps);
        EditTexFile->setObjectName(QString::fromUtf8("EditTexFile"));
        EditTexFile->setReadOnly(true);

        horizontalLayout->addWidget(EditTexFile);

        btnChangeTexture = new QPushButton(BoxTextureProps);
        btnChangeTexture->setObjectName(QString::fromUtf8("btnChangeTexture"));
        btnChangeTexture->setAutoDefault(false);

        horizontalLayout->addWidget(btnChangeTexture);


        gridLayout_7->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        TexInfoBox = new QGroupBox(BoxTextureProps);
        TexInfoBox->setObjectName(QString::fromUtf8("TexInfoBox"));
        gridLayout_9 = new QGridLayout(TexInfoBox);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lblPreview = new QLabel(TexInfoBox);
        lblPreview->setObjectName(QString::fromUtf8("lblPreview"));
        lblPreview->setFrameShape(QFrame::NoFrame);
        lblPreview->setFrameShadow(QFrame::Plain);

        horizontalLayout_3->addWidget(lblPreview);

        infoTexLayout = new QVBoxLayout();
        infoTexLayout->setObjectName(QString::fromUtf8("infoTexLayout"));

        horizontalLayout_3->addLayout(infoTexLayout);


        gridLayout_9->addLayout(horizontalLayout_3, 0, 0, 1, 1);


        horizontalLayout_2->addWidget(TexInfoBox);


        gridLayout_7->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        TexStatesTable = new QTableWidget(BoxTextureProps);
        TexStatesTable->setObjectName(QString::fromUtf8("TexStatesTable"));
        TexStatesTable->setAutoScroll(false);
        TexStatesTable->setWordWrap(false);
        TexStatesTable->setColumnCount(0);

        gridLayout_7->addWidget(TexStatesTable, 2, 0, 1, 1);


        gridLayout_8->addLayout(gridLayout_7, 0, 0, 1, 1);


        gridLayout_5->addWidget(BoxTextureProps, 1, 0, 1, 1);

        tabWidget->addTab(tabTextures, QString());
        tabStates = new QWidget();
        tabStates->setObjectName(QString::fromUtf8("tabStates"));
        gridLayout_10 = new QGridLayout(tabStates);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        glStatesTable = new QTableWidget(tabStates);
        glStatesTable->setObjectName(QString::fromUtf8("glStatesTable"));
        glStatesTable->setAutoScroll(false);
        glStatesTable->setWordWrap(false);

        gridLayout_10->addWidget(glStatesTable, 0, 0, 1, 1);

        tabWidget->addTab(tabStates, QString());
        tabVertex = new QWidget();
        tabVertex->setObjectName(QString::fromUtf8("tabVertex"));
        gridLayout_3 = new QGridLayout(tabVertex);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        textVert = new QTextEdit(tabVertex);
        textVert->setObjectName(QString::fromUtf8("textVert"));
        sizePolicy.setHeightForWidth(textVert->sizePolicy().hasHeightForWidth());
        textVert->setSizePolicy(sizePolicy);
        textVert->setLineWrapMode(QTextEdit::NoWrap);
        textVert->setReadOnly(true);
        textVert->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(textVert, 0, 0, 1, 1);

        tabWidget->addTab(tabVertex, QString());
        tabFragment = new QWidget();
        tabFragment->setObjectName(QString::fromUtf8("tabFragment"));
        gridLayout_4 = new QGridLayout(tabFragment);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        textFrag = new QTextEdit(tabFragment);
        textFrag->setObjectName(QString::fromUtf8("textFrag"));
        sizePolicy.setHeightForWidth(textFrag->sizePolicy().hasHeightForWidth());
        textFrag->setSizePolicy(sizePolicy);
        textFrag->setLineWrapMode(QTextEdit::NoWrap);
        textFrag->setReadOnly(true);
        textFrag->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_4->addWidget(textFrag, 0, 0, 1, 1);

        tabWidget->addTab(tabFragment, QString());
        tabCompileLog = new QWidget();
        tabCompileLog->setObjectName(QString::fromUtf8("tabCompileLog"));
        gridLayout_11 = new QGridLayout(tabCompileLog);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        textLog = new QTextEdit(tabCompileLog);
        textLog->setObjectName(QString::fromUtf8("textLog"));
        textLog->setLineWrapMode(QTextEdit::NoWrap);
        textLog->setReadOnly(true);

        gridLayout_11->addWidget(textLog, 0, 0, 1, 1);

        tabWidget->addTab(tabCompileLog, QString());

        gridLayout_6->addWidget(tabWidget, 1, 0, 1, 1);


        gridLayout->addWidget(RfxDockContents, 0, 0, 1, 1);


        retranslateUi(RfxDock);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(RfxDock);
    } // setupUi

    void retranslateUi(QWidget *RfxDock)
    {
        RfxDock->setWindowTitle(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabUniform), QApplication::translate("RfxDock", "Uniforms", 0, QApplication::UnicodeUTF8));
        BoxTextureProps->setTitle(QString());
        btnChangeTexture->setText(QApplication::translate("RfxDock", "Browse", 0, QApplication::UnicodeUTF8));
        TexInfoBox->setTitle(QString());
        lblPreview->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabTextures), QApplication::translate("RfxDock", "Textures", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabStates), QApplication::translate("RfxDock", "GL States", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabVertex), QApplication::translate("RfxDock", "Vertex Program", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabFragment), QApplication::translate("RfxDock", "Fragment Program", 0, QApplication::UnicodeUTF8));
        textLog->setPlainText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabCompileLog), QApplication::translate("RfxDock", "Log", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class RfxDock: public Ui_RfxDock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RFX_DIALOG_H
