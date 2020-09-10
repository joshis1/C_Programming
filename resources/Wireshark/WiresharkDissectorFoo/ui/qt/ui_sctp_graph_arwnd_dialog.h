/********************************************************************************
** Form generated from reading UI file 'sctp_graph_arwnd_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCTP_GRAPH_ARWND_DIALOG_H
#define UI_SCTP_GRAPH_ARWND_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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

class Ui_SCTPGraphArwndDialog
{
public:
    QAction *actionGoToPacket;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QCustomPlot *sctpPlot;
    QLabel *hintLabel;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_4;
    QPushButton *saveButton;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SCTPGraphArwndDialog)
    {
        if (SCTPGraphArwndDialog->objectName().isEmpty())
            SCTPGraphArwndDialog->setObjectName(QStringLiteral("SCTPGraphArwndDialog"));
        SCTPGraphArwndDialog->resize(800, 546);
        actionGoToPacket = new QAction(SCTPGraphArwndDialog);
        actionGoToPacket->setObjectName(QStringLiteral("actionGoToPacket"));
        verticalLayout_2 = new QVBoxLayout(SCTPGraphArwndDialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        sctpPlot = new QCustomPlot(SCTPGraphArwndDialog);
        sctpPlot->setObjectName(QStringLiteral("sctpPlot"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(sctpPlot->sizePolicy().hasHeightForWidth());
        sctpPlot->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(sctpPlot);

        hintLabel = new QLabel(SCTPGraphArwndDialog);
        hintLabel->setObjectName(QStringLiteral("hintLabel"));
        hintLabel->setWordWrap(true);

        verticalLayout->addWidget(hintLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_4 = new QPushButton(SCTPGraphArwndDialog);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(pushButton_4);

        saveButton = new QPushButton(SCTPGraphArwndDialog);
        saveButton->setObjectName(QStringLiteral("saveButton"));

        horizontalLayout->addWidget(saveButton);

        horizontalSpacer = new QSpacerItem(428, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(SCTPGraphArwndDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setFocusPolicy(Qt::NoFocus);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(SCTPGraphArwndDialog);
        QObject::connect(buttonBox, SIGNAL(clicked(QAbstractButton*)), SCTPGraphArwndDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(SCTPGraphArwndDialog);
    } // setupUi

    void retranslateUi(QDialog *SCTPGraphArwndDialog)
    {
        SCTPGraphArwndDialog->setWindowTitle(QApplication::translate("SCTPGraphArwndDialog", "SCTP Graph", 0));
        actionGoToPacket->setText(QApplication::translate("SCTPGraphArwndDialog", "goToPacket", 0));
#ifndef QT_NO_TOOLTIP
        actionGoToPacket->setToolTip(QApplication::translate("SCTPGraphArwndDialog", "Go to Packet", 0));
#endif // QT_NO_TOOLTIP
        hintLabel->setText(QApplication::translate("SCTPGraphArwndDialog", "<html><head/><body><p><br/></p></body></html>", 0));
        pushButton_4->setText(QApplication::translate("SCTPGraphArwndDialog", "Reset to full size", 0));
        saveButton->setText(QApplication::translate("SCTPGraphArwndDialog", "Save Graph", 0));
    } // retranslateUi

};

namespace Ui {
    class SCTPGraphArwndDialog: public Ui_SCTPGraphArwndDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCTP_GRAPH_ARWND_DIALOG_H
