/********************************************************************************
** Form generated from reading UI file 'shaderDialog.ui'
**
** Created: Thu Jan 24 17:05:47 2013
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
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShaderDialogClass
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout;
    QComboBox *displayBox;
    QLabel *label;
    QCheckBox *enableCheckBox;
    QSlider *enSlider;
    QLabel *enLabel;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *invertCheckBox;
    QGridLayout *gridLayout_3;
    QLabel *litLabel1;
    QLabel *litLabel2;
    QCheckBox *litCheckBox;
    QPushButton *loadButton1;
    QPushButton *loadButton2;
    QLabel *litIcon1;
    QLabel *litIcon2;
    QHBoxLayout *horizontalLayout;
    QLabel *transitionTitle;
    QSlider *transitionSlider;
    QLabel *transitionLabel;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ShaderDialogClass)
    {
        if (ShaderDialogClass->objectName().isEmpty())
            ShaderDialogClass->setObjectName(QString::fromUtf8("ShaderDialogClass"));
        ShaderDialogClass->resize(381, 566);
        verticalLayout_2 = new QVBoxLayout(ShaderDialogClass);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame = new QFrame(ShaderDialogClass);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        displayBox = new QComboBox(groupBox);
        displayBox->setObjectName(QString::fromUtf8("displayBox"));

        gridLayout->addWidget(displayBox, 2, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        enableCheckBox = new QCheckBox(groupBox);
        enableCheckBox->setObjectName(QString::fromUtf8("enableCheckBox"));
        enableCheckBox->setLayoutDirection(Qt::LeftToRight);
        enableCheckBox->setChecked(true);

        gridLayout->addWidget(enableCheckBox, 0, 0, 1, 1);

        enSlider = new QSlider(groupBox);
        enSlider->setObjectName(QString::fromUtf8("enSlider"));
        enSlider->setMaximum(100);
        enSlider->setValue(50);
        enSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(enSlider, 3, 1, 1, 1);

        enLabel = new QLabel(groupBox);
        enLabel->setObjectName(QString::fromUtf8("enLabel"));
        enLabel->setLayoutDirection(Qt::LeftToRight);
        enLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(enLabel, 3, 2, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        invertCheckBox = new QCheckBox(groupBox);
        invertCheckBox->setObjectName(QString::fromUtf8("invertCheckBox"));

        gridLayout->addWidget(invertCheckBox, 0, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout);


        verticalLayout->addWidget(groupBox);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        litLabel1 = new QLabel(frame);
        litLabel1->setObjectName(QString::fromUtf8("litLabel1"));
        litLabel1->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout_3->addWidget(litLabel1, 2, 0, 1, 1);

        litLabel2 = new QLabel(frame);
        litLabel2->setObjectName(QString::fromUtf8("litLabel2"));
        litLabel2->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout_3->addWidget(litLabel2, 2, 1, 1, 1);

        litCheckBox = new QCheckBox(frame);
        litCheckBox->setObjectName(QString::fromUtf8("litCheckBox"));
        litCheckBox->setLayoutDirection(Qt::LeftToRight);
        litCheckBox->setChecked(true);

        gridLayout_3->addWidget(litCheckBox, 0, 0, 1, 1);

        loadButton1 = new QPushButton(frame);
        loadButton1->setObjectName(QString::fromUtf8("loadButton1"));

        gridLayout_3->addWidget(loadButton1, 3, 0, 1, 1);

        loadButton2 = new QPushButton(frame);
        loadButton2->setObjectName(QString::fromUtf8("loadButton2"));

        gridLayout_3->addWidget(loadButton2, 3, 1, 1, 1);

        litIcon1 = new QLabel(frame);
        litIcon1->setObjectName(QString::fromUtf8("litIcon1"));
        litIcon1->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(litIcon1, 1, 0, 1, 1);

        litIcon2 = new QLabel(frame);
        litIcon2->setObjectName(QString::fromUtf8("litIcon2"));
        litIcon2->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(litIcon2, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        transitionTitle = new QLabel(frame);
        transitionTitle->setObjectName(QString::fromUtf8("transitionTitle"));

        horizontalLayout->addWidget(transitionTitle);

        transitionSlider = new QSlider(frame);
        transitionSlider->setObjectName(QString::fromUtf8("transitionSlider"));
        transitionSlider->setMaximum(100);
        transitionSlider->setValue(50);
        transitionSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(transitionSlider);

        transitionLabel = new QLabel(frame);
        transitionLabel->setObjectName(QString::fromUtf8("transitionLabel"));

        horizontalLayout->addWidget(transitionLabel);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_2->addWidget(frame);


        retranslateUi(ShaderDialogClass);

        QMetaObject::connectSlotsByName(ShaderDialogClass);
    } // setupUi

    void retranslateUi(QWidget *ShaderDialogClass)
    {
        ShaderDialogClass->setWindowTitle(QApplication::translate("ShaderDialogClass", "Form", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("ShaderDialogClass", "Radiance Scaling parameters", 0, QApplication::UnicodeUTF8));
        displayBox->clear();
        displayBox->insertItems(0, QStringList()
         << QApplication::translate("ShaderDialogClass", "Lambertian Radiance Scaling", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ShaderDialogClass", "Lit Sphere Radiance Scaling", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ShaderDialogClass", "Colored Descriptor", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ShaderDialogClass", "Grey Descriptor", 0, QApplication::UnicodeUTF8)
        );
        label->setText(QApplication::translate("ShaderDialogClass", "Display Mode:", 0, QApplication::UnicodeUTF8));
        enableCheckBox->setText(QApplication::translate("ShaderDialogClass", "Enable Radiance Scaling", 0, QApplication::UnicodeUTF8));
        enLabel->setText(QApplication::translate("ShaderDialogClass", "0.5", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ShaderDialogClass", "Enhancement:", 0, QApplication::UnicodeUTF8));
        invertCheckBox->setText(QApplication::translate("ShaderDialogClass", "Invert Effect", 0, QApplication::UnicodeUTF8));
        litLabel1->setText(QApplication::translate("ShaderDialogClass", "Convexities", 0, QApplication::UnicodeUTF8));
        litLabel2->setText(QApplication::translate("ShaderDialogClass", "Concavities", 0, QApplication::UnicodeUTF8));
        litCheckBox->setText(QApplication::translate("ShaderDialogClass", "Use 2 Lit Spheres", 0, QApplication::UnicodeUTF8));
        loadButton1->setText(QApplication::translate("ShaderDialogClass", "Load", 0, QApplication::UnicodeUTF8));
        loadButton2->setText(QApplication::translate("ShaderDialogClass", "Load", 0, QApplication::UnicodeUTF8));
        litIcon1->setText(QString());
        litIcon2->setText(QString());
        transitionTitle->setText(QApplication::translate("ShaderDialogClass", "Transition:", 0, QApplication::UnicodeUTF8));
        transitionLabel->setText(QApplication::translate("ShaderDialogClass", "0.5", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ShaderDialogClass: public Ui_ShaderDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHADERDIALOG_H
