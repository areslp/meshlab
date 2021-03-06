/********************************************************************************
** Form generated from reading UI file 'pickpointsDialog.ui'
**
** Created: Sun Sep 1 18:44:56 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PICKPOINTSDIALOG_H
#define UI_PICKPOINTSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pickpointsDialog
{
public:
    QHBoxLayout *horizontalLayout_5;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *pickPointModeRadioButton;
    QRadioButton *movePointRadioButton;
    QRadioButton *selectPointRadioButton;
    QVBoxLayout *verticalLayout;
    QPushButton *loadPointsButton;
    QPushButton *saveButton;
    QTreeWidget *pickedPointsTreeWidget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *renamePointButton;
    QPushButton *removePointButton;
    QPushButton *clearPointButton;
    QPushButton *removeAllPointsButton;
    QPushButton *undoButton;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QCheckBox *defaultTemplateCheckBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *saveTemplateButton;
    QPushButton *loadTemplateButton;
    QPushButton *clearTemplateButton;
    QPushButton *addPointToTemplateButton;
    QLabel *label;
    QLabel *templateNameLabel;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *showNormalCheckBox;
    QLabel *label_2;
    QRadioButton *pinRadioButton;
    QRadioButton *lineRadioButton;

    void setupUi(QWidget *pickpointsDialog)
    {
        if (pickpointsDialog->objectName().isEmpty())
            pickpointsDialog->setObjectName(QString::fromUtf8("pickpointsDialog"));
        pickpointsDialog->resize(563, 559);
        horizontalLayout_5 = new QHBoxLayout(pickpointsDialog);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        frame = new QFrame(pickpointsDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout_4 = new QHBoxLayout(groupBox);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pickPointModeRadioButton = new QRadioButton(groupBox);
        pickPointModeRadioButton->setObjectName(QString::fromUtf8("pickPointModeRadioButton"));
        pickPointModeRadioButton->setChecked(true);

        horizontalLayout_4->addWidget(pickPointModeRadioButton);

        movePointRadioButton = new QRadioButton(groupBox);
        movePointRadioButton->setObjectName(QString::fromUtf8("movePointRadioButton"));

        horizontalLayout_4->addWidget(movePointRadioButton);

        selectPointRadioButton = new QRadioButton(groupBox);
        selectPointRadioButton->setObjectName(QString::fromUtf8("selectPointRadioButton"));

        horizontalLayout_4->addWidget(selectPointRadioButton);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        loadPointsButton = new QPushButton(frame);
        loadPointsButton->setObjectName(QString::fromUtf8("loadPointsButton"));

        verticalLayout->addWidget(loadPointsButton);

        saveButton = new QPushButton(frame);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));

        verticalLayout->addWidget(saveButton);


        gridLayout_2->addLayout(verticalLayout, 0, 1, 1, 1);

        pickedPointsTreeWidget = new QTreeWidget(frame);
        pickedPointsTreeWidget->setObjectName(QString::fromUtf8("pickedPointsTreeWidget"));
        pickedPointsTreeWidget->setColumnCount(5);

        gridLayout_2->addWidget(pickedPointsTreeWidget, 1, 0, 1, 2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        renamePointButton = new QPushButton(frame);
        renamePointButton->setObjectName(QString::fromUtf8("renamePointButton"));

        horizontalLayout_3->addWidget(renamePointButton);

        removePointButton = new QPushButton(frame);
        removePointButton->setObjectName(QString::fromUtf8("removePointButton"));

        horizontalLayout_3->addWidget(removePointButton);

        clearPointButton = new QPushButton(frame);
        clearPointButton->setObjectName(QString::fromUtf8("clearPointButton"));

        horizontalLayout_3->addWidget(clearPointButton);

        removeAllPointsButton = new QPushButton(frame);
        removeAllPointsButton->setObjectName(QString::fromUtf8("removeAllPointsButton"));

        horizontalLayout_3->addWidget(removeAllPointsButton);

        undoButton = new QPushButton(frame);
        undoButton->setObjectName(QString::fromUtf8("undoButton"));

        horizontalLayout_3->addWidget(undoButton);


        gridLayout_2->addLayout(horizontalLayout_3, 2, 0, 1, 2);

        groupBox_2 = new QGroupBox(frame);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        defaultTemplateCheckBox = new QCheckBox(groupBox_2);
        defaultTemplateCheckBox->setObjectName(QString::fromUtf8("defaultTemplateCheckBox"));

        gridLayout->addWidget(defaultTemplateCheckBox, 0, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        saveTemplateButton = new QPushButton(groupBox_2);
        saveTemplateButton->setObjectName(QString::fromUtf8("saveTemplateButton"));

        horizontalLayout->addWidget(saveTemplateButton);

        loadTemplateButton = new QPushButton(groupBox_2);
        loadTemplateButton->setObjectName(QString::fromUtf8("loadTemplateButton"));

        horizontalLayout->addWidget(loadTemplateButton);

        clearTemplateButton = new QPushButton(groupBox_2);
        clearTemplateButton->setObjectName(QString::fromUtf8("clearTemplateButton"));

        horizontalLayout->addWidget(clearTemplateButton);

        addPointToTemplateButton = new QPushButton(groupBox_2);
        addPointToTemplateButton->setObjectName(QString::fromUtf8("addPointToTemplateButton"));

        horizontalLayout->addWidget(addPointToTemplateButton);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 2);

        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        templateNameLabel = new QLabel(groupBox_2);
        templateNameLabel->setObjectName(QString::fromUtf8("templateNameLabel"));
        QPalette palette;
        QBrush brush(QColor(0, 0, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(127, 125, 123, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        templateNameLabel->setPalette(palette);

        gridLayout->addWidget(templateNameLabel, 2, 1, 1, 1);


        gridLayout_2->addWidget(groupBox_2, 3, 0, 1, 2);

        groupBox_3 = new QGroupBox(frame);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        showNormalCheckBox = new QCheckBox(groupBox_3);
        showNormalCheckBox->setObjectName(QString::fromUtf8("showNormalCheckBox"));
        showNormalCheckBox->setChecked(true);

        horizontalLayout_2->addWidget(showNormalCheckBox);

        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        pinRadioButton = new QRadioButton(groupBox_3);
        pinRadioButton->setObjectName(QString::fromUtf8("pinRadioButton"));
        pinRadioButton->setChecked(true);

        horizontalLayout_2->addWidget(pinRadioButton);

        lineRadioButton = new QRadioButton(groupBox_3);
        lineRadioButton->setObjectName(QString::fromUtf8("lineRadioButton"));

        horizontalLayout_2->addWidget(lineRadioButton);


        gridLayout_2->addWidget(groupBox_3, 4, 0, 1, 2);


        horizontalLayout_5->addWidget(frame);


        retranslateUi(pickpointsDialog);

        QMetaObject::connectSlotsByName(pickpointsDialog);
    } // setupUi

    void retranslateUi(QWidget *pickpointsDialog)
    {
        pickpointsDialog->setWindowTitle(QApplication::translate("pickpointsDialog", "Form", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("pickpointsDialog", "Mode: ", 0, QApplication::UnicodeUTF8));
        pickPointModeRadioButton->setText(QApplication::translate("pickpointsDialog", "Pick Point", 0, QApplication::UnicodeUTF8));
        movePointRadioButton->setText(QApplication::translate("pickpointsDialog", "Move Point", 0, QApplication::UnicodeUTF8));
        selectPointRadioButton->setText(QApplication::translate("pickpointsDialog", "Select Point", 0, QApplication::UnicodeUTF8));
        loadPointsButton->setText(QApplication::translate("pickpointsDialog", "Load Points From File", 0, QApplication::UnicodeUTF8));
        saveButton->setText(QApplication::translate("pickpointsDialog", "Save", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = pickedPointsTreeWidget->headerItem();
        ___qtreewidgetitem->setText(4, QApplication::translate("pickpointsDialog", "5", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(3, QApplication::translate("pickpointsDialog", "4", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(2, QApplication::translate("pickpointsDialog", "3", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("pickpointsDialog", "2", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("pickpointsDialog", "1", 0, QApplication::UnicodeUTF8));
        renamePointButton->setText(QApplication::translate("pickpointsDialog", "Rename Point", 0, QApplication::UnicodeUTF8));
        removePointButton->setText(QApplication::translate("pickpointsDialog", "Remove Point", 0, QApplication::UnicodeUTF8));
        clearPointButton->setText(QApplication::translate("pickpointsDialog", "Clear Point", 0, QApplication::UnicodeUTF8));
        removeAllPointsButton->setText(QApplication::translate("pickpointsDialog", "Remove All Points", 0, QApplication::UnicodeUTF8));
        undoButton->setText(QApplication::translate("pickpointsDialog", "Undo last move", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("pickpointsDialog", "Template Controls", 0, QApplication::UnicodeUTF8));
        defaultTemplateCheckBox->setText(QApplication::translate("pickpointsDialog", "Save this as your default template", 0, QApplication::UnicodeUTF8));
        saveTemplateButton->setText(QApplication::translate("pickpointsDialog", "Save", 0, QApplication::UnicodeUTF8));
        loadTemplateButton->setText(QApplication::translate("pickpointsDialog", "Load", 0, QApplication::UnicodeUTF8));
        clearTemplateButton->setText(QApplication::translate("pickpointsDialog", "Clear", 0, QApplication::UnicodeUTF8));
        addPointToTemplateButton->setText(QApplication::translate("pickpointsDialog", "Add Point", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("pickpointsDialog", "Template Name:", 0, QApplication::UnicodeUTF8));
        templateNameLabel->setText(QApplication::translate("pickpointsDialog", "TextLabel", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("pickpointsDialog", "Normal Options", 0, QApplication::UnicodeUTF8));
        showNormalCheckBox->setText(QApplication::translate("pickpointsDialog", "Show Normal?", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("pickpointsDialog", "Draw as a:  ", 0, QApplication::UnicodeUTF8));
        pinRadioButton->setText(QApplication::translate("pickpointsDialog", "Pin", 0, QApplication::UnicodeUTF8));
        lineRadioButton->setText(QApplication::translate("pickpointsDialog", "Line", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class pickpointsDialog: public Ui_pickpointsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PICKPOINTSDIALOG_H
