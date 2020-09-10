/********************************************************************************
** Form generated from reading UI file 'print_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINT_DIALOG_H
#define UI_PRINT_DIALOG_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "packet_format_group_box.h"
#include "packet_range_group_box.h"

QT_BEGIN_NAMESPACE

class Ui_PrintDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *previewLayout;
    QVBoxLayout *verticalLayout;
    PacketFormatGroupBox *formatGroupBox;
    QCheckBox *formFeedCheckBox;
    QSpacerItem *verticalSpacer;
    QLabel *zoomLabel;
    PacketRangeGroupBox *rangeGroupBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PrintDialog)
    {
        if (PrintDialog->objectName().isEmpty())
            PrintDialog->setObjectName(QStringLiteral("PrintDialog"));
        PrintDialog->resize(496, 328);
        verticalLayout_2 = new QVBoxLayout(PrintDialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        previewLayout = new QHBoxLayout();
        previewLayout->setObjectName(QStringLiteral("previewLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formatGroupBox = new PacketFormatGroupBox(PrintDialog);
        formatGroupBox->setObjectName(QStringLiteral("formatGroupBox"));
        formatGroupBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        formatGroupBox->setFlat(true);

        verticalLayout->addWidget(formatGroupBox);

        formFeedCheckBox = new QCheckBox(PrintDialog);
        formFeedCheckBox->setObjectName(QStringLiteral("formFeedCheckBox"));

        verticalLayout->addWidget(formFeedCheckBox);

        verticalSpacer = new QSpacerItem(118, 28, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        zoomLabel = new QLabel(PrintDialog);
        zoomLabel->setObjectName(QStringLiteral("zoomLabel"));
        zoomLabel->setEnabled(false);

        verticalLayout->addWidget(zoomLabel);


        previewLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(previewLayout);

        rangeGroupBox = new PacketRangeGroupBox(PrintDialog);
        rangeGroupBox->setObjectName(QStringLiteral("rangeGroupBox"));
        rangeGroupBox->setFlat(true);

        verticalLayout_2->addWidget(rangeGroupBox);

        buttonBox = new QDialogButtonBox(PrintDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(PrintDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PrintDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PrintDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(PrintDialog);
    } // setupUi

    void retranslateUi(QDialog *PrintDialog)
    {
        formatGroupBox->setTitle(QApplication::translate("PrintDialog", "Packet Format", 0));
        formFeedCheckBox->setText(QApplication::translate("PrintDialog", "Print each packet on a new page", 0));
#ifndef QT_NO_TOOLTIP
        zoomLabel->setToolTip(QApplication::translate("PrintDialog", "<html><head/><body><p>Use the &quot;+&quot; and &quot;-&quot; keys to zoom the preview in and out. Use the &quot;0&quot; key to reset the zoom level.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        zoomLabel->setText(QApplication::translate("PrintDialog", "<html><head/><body><p><span style=\" font-size:small; font-style:italic;\">+ and - zoom, 0 resets</span></p></body></html>", 0));
        rangeGroupBox->setTitle(QApplication::translate("PrintDialog", "Packet Range", 0));
        Q_UNUSED(PrintDialog);
    } // retranslateUi

};

namespace Ui {
    class PrintDialog: public Ui_PrintDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINT_DIALOG_H
