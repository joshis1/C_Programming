/********************************************************************************
** Form generated from reading UI file 'sctp_graph_byte_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCTP_GRAPH_BYTE_DIALOG_H
#define UI_SCTP_GRAPH_BYTE_DIALOG_H

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

class Ui_SCTPGraphByteDialog
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

    void setupUi(QDialog *SCTPGraphByteDialog)
    {
        if (SCTPGraphByteDialog->objectName().isEmpty())
            SCTPGraphByteDialog->setObjectName(QStringLiteral("SCTPGraphByteDialog"));
        SCTPGraphByteDialog->resize(800, 546);
        actionGoToPacket = new QAction(SCTPGraphByteDialog);
        actionGoToPacket->setObjectName(QStringLiteral("actionGoToPacket"));
        verticalLayout_2 = new QVBoxLayout(SCTPGraphByteDialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        sctpPlot = new QCustomPlot(SCTPGraphByteDialog);
        sctpPlot->setObjectName(QStringLiteral("sctpPlot"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(sctpPlot->sizePolicy().hasHeightForWidth());
        sctpPlot->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(sctpPlot);

        hintLabel = new QLabel(SCTPGraphByteDialog);
        hintLabel->setObjectName(QStringLiteral("hintLabel"));
        hintLabel->setWordWrap(true);

        verticalLayout->addWidget(hintLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_4 = new QPushButton(SCTPGraphByteDialog);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(pushButton_4);

        saveButton = new QPushButton(SCTPGraphByteDialog);
        saveButton->setObjectName(QStringLiteral("saveButton"));

        horizontalLayout->addWidget(saveButton);

        horizontalSpacer = new QSpacerItem(428, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(SCTPGraphByteDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setFocusPolicy(Qt::NoFocus);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(SCTPGraphByteDialog);
        QObject::connect(buttonBox, SIGNAL(clicked(QAbstractButton*)), SCTPGraphByteDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(SCTPGraphByteDialog);
    } // setupUi

    void retranslateUi(QDialog *SCTPGraphByteDialog)
    {
        SCTPGraphByteDialog->setWindowTitle(QApplication::translate("SCTPGraphByteDialog", "SCTP Graph", 0));
        actionGoToPacket->setText(QApplication::translate("SCTPGraphByteDialog", "goToPacket", 0));
#ifndef QT_NO_TOOLTIP
        actionGoToPacket->setToolTip(QApplication::translate("SCTPGraphByteDialog", "Go to Packet", 0));
#endif // QT_NO_TOOLTIP
        hintLabel->setText(QApplication::translate("SCTPGraphByteDialog", "<html><head/><body><p><br/></p></body></html>", 0));
        pushButton_4->setText(QApplication::translate("SCTPGraphByteDialog", "Reset to full size", 0));
        saveButton->setText(QApplication::translate("SCTPGraphByteDialog", "Save Graph", 0));
    } // retranslateUi

};

namespace Ui {
    class SCTPGraphByteDialog: public Ui_SCTPGraphByteDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCTP_GRAPH_BYTE_DIALOG_H
