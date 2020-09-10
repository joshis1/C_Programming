/********************************************************************************
** Form generated from reading UI file 'sctp_graph_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCTP_GRAPH_DIALOG_H
#define UI_SCTP_GRAPH_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "widgets/qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_SCTPGraphDialog
{
public:
    QAction *actionGoToPacket;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QCustomPlot *sctpPlot;
    QHBoxLayout *horizontalLayout;
    QLabel *hintLabel;
    QCheckBox *relativeTsn;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *saveButton;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SCTPGraphDialog)
    {
        if (SCTPGraphDialog->objectName().isEmpty())
            SCTPGraphDialog->setObjectName(QStringLiteral("SCTPGraphDialog"));
        SCTPGraphDialog->resize(800, 546);
        actionGoToPacket = new QAction(SCTPGraphDialog);
        actionGoToPacket->setObjectName(QStringLiteral("actionGoToPacket"));
        verticalLayout_2 = new QVBoxLayout(SCTPGraphDialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        sctpPlot = new QCustomPlot(SCTPGraphDialog);
        sctpPlot->setObjectName(QStringLiteral("sctpPlot"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(sctpPlot->sizePolicy().hasHeightForWidth());
        sctpPlot->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(sctpPlot);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        hintLabel = new QLabel(SCTPGraphDialog);
        hintLabel->setObjectName(QStringLiteral("hintLabel"));
        hintLabel->setMinimumSize(QSize(300, 0));

        horizontalLayout->addWidget(hintLabel, 0, Qt::AlignLeft);

        relativeTsn = new QCheckBox(SCTPGraphDialog);
        relativeTsn->setObjectName(QStringLiteral("relativeTsn"));

        horizontalLayout->addWidget(relativeTsn, 0, Qt::AlignRight);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton = new QPushButton(SCTPGraphDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(SCTPGraphDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(SCTPGraphDialog);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_2->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(SCTPGraphDialog);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_2->addWidget(pushButton_4);

        saveButton = new QPushButton(SCTPGraphDialog);
        saveButton->setObjectName(QStringLiteral("saveButton"));

        horizontalLayout_2->addWidget(saveButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(SCTPGraphDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setFocusPolicy(Qt::NoFocus);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        horizontalLayout_2->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(SCTPGraphDialog);
        QObject::connect(buttonBox, SIGNAL(clicked(QAbstractButton*)), SCTPGraphDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(SCTPGraphDialog);
    } // setupUi

    void retranslateUi(QDialog *SCTPGraphDialog)
    {
        SCTPGraphDialog->setWindowTitle(QApplication::translate("SCTPGraphDialog", "SCTP Graph", 0));
        actionGoToPacket->setText(QApplication::translate("SCTPGraphDialog", "goToPacket", 0));
#ifndef QT_NO_TOOLTIP
        actionGoToPacket->setToolTip(QApplication::translate("SCTPGraphDialog", "Go to Packet", 0));
#endif // QT_NO_TOOLTIP
        relativeTsn->setText(QApplication::translate("SCTPGraphDialog", "Relative TSNs", 0));
        pushButton->setText(QApplication::translate("SCTPGraphDialog", "Only SACKs", 0));
        pushButton_2->setText(QApplication::translate("SCTPGraphDialog", "Only TSNs", 0));
        pushButton_3->setText(QApplication::translate("SCTPGraphDialog", "Show both", 0));
        pushButton_4->setText(QApplication::translate("SCTPGraphDialog", "Reset to full size", 0));
        saveButton->setText(QApplication::translate("SCTPGraphDialog", "Save Graph", 0));
    } // retranslateUi

};

namespace Ui {
    class SCTPGraphDialog: public Ui_SCTPGraphDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCTP_GRAPH_DIALOG_H
