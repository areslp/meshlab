/********************************************************************************
** Form generated from reading UI file 'alignDialog.ui'
**
** Created: Sun Sep 1 18:45:21 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALIGNDIALOG_H
#define UI_ALIGNDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include <QtGui/QToolButton>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_alignDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QFrame *frame;
    QVBoxLayout *verticalLayout_4;
    QTreeWidget *alignTreeWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QToolButton *manualAlignButton;
    QToolButton *glueHereButton;
    QToolButton *glueHereAllButton;
    QToolButton *pointBasedAlignButton;
    QSpacerItem *spacerItem;
    QPushButton *icpButton;
    QVBoxLayout *verticalLayout;
    QToolButton *icpParamButton;
    QToolButton *icpParamCurrentButton;
    QToolButton *recalcButton;
    QToolButton *baseMeshButton;
    QToolButton *hideRevealButton;
    QCheckBox *falseColorCB;
    QCheckBox *pointRenderingCB;
    QSpacerItem *spacerItem1;
    QTextEdit *logTextEdit;

    void setupUi(QWidget *alignDialog)
    {
        if (alignDialog->objectName().isEmpty())
            alignDialog->setObjectName(QString::fromUtf8("alignDialog"));
        alignDialog->resize(461, 713);
        verticalLayout_3 = new QVBoxLayout(alignDialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        frame = new QFrame(alignDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        alignTreeWidget = new QTreeWidget(frame);
        alignTreeWidget->setObjectName(QString::fromUtf8("alignTreeWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(2);
        sizePolicy.setHeightForWidth(alignTreeWidget->sizePolicy().hasHeightForWidth());
        alignTreeWidget->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(10);
        alignTreeWidget->setFont(font);
        alignTreeWidget->setSelectionMode(QAbstractItemView::NoSelection);
        alignTreeWidget->setColumnCount(4);

        verticalLayout_4->addWidget(alignTreeWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        manualAlignButton = new QToolButton(frame);
        manualAlignButton->setObjectName(QString::fromUtf8("manualAlignButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(manualAlignButton->sizePolicy().hasHeightForWidth());
        manualAlignButton->setSizePolicy(sizePolicy1);

        verticalLayout_2->addWidget(manualAlignButton);

        glueHereButton = new QToolButton(frame);
        glueHereButton->setObjectName(QString::fromUtf8("glueHereButton"));
        sizePolicy1.setHeightForWidth(glueHereButton->sizePolicy().hasHeightForWidth());
        glueHereButton->setSizePolicy(sizePolicy1);

        verticalLayout_2->addWidget(glueHereButton);

        glueHereAllButton = new QToolButton(frame);
        glueHereAllButton->setObjectName(QString::fromUtf8("glueHereAllButton"));
        sizePolicy1.setHeightForWidth(glueHereAllButton->sizePolicy().hasHeightForWidth());
        glueHereAllButton->setSizePolicy(sizePolicy1);

        verticalLayout_2->addWidget(glueHereAllButton);

        pointBasedAlignButton = new QToolButton(frame);
        pointBasedAlignButton->setObjectName(QString::fromUtf8("pointBasedAlignButton"));
        sizePolicy1.setHeightForWidth(pointBasedAlignButton->sizePolicy().hasHeightForWidth());
        pointBasedAlignButton->setSizePolicy(sizePolicy1);

        verticalLayout_2->addWidget(pointBasedAlignButton);

        spacerItem = new QSpacerItem(158, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(spacerItem);

        icpButton = new QPushButton(frame);
        icpButton->setObjectName(QString::fromUtf8("icpButton"));

        verticalLayout_2->addWidget(icpButton);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        icpParamButton = new QToolButton(frame);
        icpParamButton->setObjectName(QString::fromUtf8("icpParamButton"));
        sizePolicy1.setHeightForWidth(icpParamButton->sizePolicy().hasHeightForWidth());
        icpParamButton->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(icpParamButton);

        icpParamCurrentButton = new QToolButton(frame);
        icpParamCurrentButton->setObjectName(QString::fromUtf8("icpParamCurrentButton"));
        sizePolicy1.setHeightForWidth(icpParamCurrentButton->sizePolicy().hasHeightForWidth());
        icpParamCurrentButton->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(icpParamCurrentButton);

        recalcButton = new QToolButton(frame);
        recalcButton->setObjectName(QString::fromUtf8("recalcButton"));
        sizePolicy1.setHeightForWidth(recalcButton->sizePolicy().hasHeightForWidth());
        recalcButton->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(recalcButton);

        baseMeshButton = new QToolButton(frame);
        baseMeshButton->setObjectName(QString::fromUtf8("baseMeshButton"));
        sizePolicy1.setHeightForWidth(baseMeshButton->sizePolicy().hasHeightForWidth());
        baseMeshButton->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(baseMeshButton);

        hideRevealButton = new QToolButton(frame);
        hideRevealButton->setObjectName(QString::fromUtf8("hideRevealButton"));
        sizePolicy1.setHeightForWidth(hideRevealButton->sizePolicy().hasHeightForWidth());
        hideRevealButton->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(hideRevealButton);

        falseColorCB = new QCheckBox(frame);
        falseColorCB->setObjectName(QString::fromUtf8("falseColorCB"));
        falseColorCB->setChecked(true);

        verticalLayout->addWidget(falseColorCB);

        pointRenderingCB = new QCheckBox(frame);
        pointRenderingCB->setObjectName(QString::fromUtf8("pointRenderingCB"));

        verticalLayout->addWidget(pointRenderingCB);

        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(spacerItem1);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_4->addLayout(horizontalLayout);

        logTextEdit = new QTextEdit(frame);
        logTextEdit->setObjectName(QString::fromUtf8("logTextEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(1);
        sizePolicy2.setHeightForWidth(logTextEdit->sizePolicy().hasHeightForWidth());
        logTextEdit->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Courier"));
        font1.setPointSize(9);
        logTextEdit->setFont(font1);
        logTextEdit->setReadOnly(true);

        verticalLayout_4->addWidget(logTextEdit);


        verticalLayout_3->addWidget(frame);


        retranslateUi(alignDialog);

        QMetaObject::connectSlotsByName(alignDialog);
    } // setupUi

    void retranslateUi(QWidget *alignDialog)
    {
        alignDialog->setWindowTitle(QApplication::translate("alignDialog", "Align Tool", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = alignTreeWidget->headerItem();
        ___qtreewidgetitem->setText(3, QApplication::translate("alignDialog", "4", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(2, QApplication::translate("alignDialog", "3", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("alignDialog", "2", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("alignDialog", "1", 0, QApplication::UnicodeUTF8));
        manualAlignButton->setText(QApplication::translate("alignDialog", "Manual Rough Glue", 0, QApplication::UnicodeUTF8));
        glueHereButton->setText(QApplication::translate("alignDialog", "Glue Here Mesh", 0, QApplication::UnicodeUTF8));
        glueHereAllButton->setText(QApplication::translate("alignDialog", "Glue Here all Meshes", 0, QApplication::UnicodeUTF8));
        pointBasedAlignButton->setText(QApplication::translate("alignDialog", "Point Based Glueing", 0, QApplication::UnicodeUTF8));
        icpButton->setText(QApplication::translate("alignDialog", "Process", 0, QApplication::UnicodeUTF8));
        icpParamButton->setText(QApplication::translate("alignDialog", "Default ICP Params", 0, QApplication::UnicodeUTF8));
        icpParamCurrentButton->setText(QApplication::translate("alignDialog", "Param Current Arc ", 0, QApplication::UnicodeUTF8));
        recalcButton->setText(QApplication::translate("alignDialog", "Recalc Current Arc", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        baseMeshButton->setToolTip(QApplication::translate("alignDialog", "When pressed it make the current mesh as base mesh, e.g. the one with a Identity as transformation.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        baseMeshButton->setText(QApplication::translate("alignDialog", "Set as Base Mesh", 0, QApplication::UnicodeUTF8));
        hideRevealButton->setText(QApplication::translate("alignDialog", "Hide/Reveal Unglued Mesh", 0, QApplication::UnicodeUTF8));
        falseColorCB->setText(QApplication::translate("alignDialog", "use False Colors", 0, QApplication::UnicodeUTF8));
        pointRenderingCB->setText(QApplication::translate("alignDialog", "use Point Rendering", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class alignDialog: public Ui_alignDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALIGNDIALOG_H
