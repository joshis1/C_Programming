/********************************************************************************
** Form generated from reading UI file 'export_pdu_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPORT_PDU_DIALOG_H
#define UI_EXPORT_PDU_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include "widgets/display_filter_edit.h"

QT_BEGIN_NAMESPACE

class Ui_ExportPDUDialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    DisplayFilterEdit *displayFilterLineEdit;
    QComboBox *comboBox;

    void setupUi(QDialog *ExportPDUDialog)
    {
        if (ExportPDUDialog->objectName().isEmpty())
            ExportPDUDialog->setObjectName(QStringLiteral("ExportPDUDialog"));
        ExportPDUDialog->resize(393, 158);
        buttonBox = new QDialogButtonBox(ExportPDUDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 100, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        layoutWidget = new QWidget(ExportPDUDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(16, 20, 361, 29));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        displayFilterLineEdit = new DisplayFilterEdit(layoutWidget);
        displayFilterLineEdit->setObjectName(QStringLiteral("displayFilterLineEdit"));

        horizontalLayout->addWidget(displayFilterLineEdit);

        comboBox = new QComboBox(ExportPDUDialog);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(10, 60, 120, 30));

        retranslateUi(ExportPDUDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ExportPDUDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ExportPDUDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ExportPDUDialog);
    } // setupUi

    void retranslateUi(QDialog *ExportPDUDialog)
    {
        ExportPDUDialog->setWindowTitle(QApplication::translate("ExportPDUDialog", "Dialog", 0));
        label->setText(QApplication::translate("ExportPDUDialog", "Display filter:", 0));
    } // retranslateUi

};

namespace Ui {
    class ExportPDUDialog: public Ui_ExportPDUDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPORT_PDU_DIALOG_H
