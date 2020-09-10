/********************************************************************************
** Form generated from reading UI file 'mtp3_summary_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MTP3_SUMMARY_DIALOG_H
#define UI_MTP3_SUMMARY_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Mtp3SummaryDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *summaryTextEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Mtp3SummaryDialog)
    {
        if (Mtp3SummaryDialog->objectName().isEmpty())
            Mtp3SummaryDialog->setObjectName(QStringLiteral("Mtp3SummaryDialog"));
        Mtp3SummaryDialog->resize(640, 420);
        verticalLayout = new QVBoxLayout(Mtp3SummaryDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        summaryTextEdit = new QTextEdit(Mtp3SummaryDialog);
        summaryTextEdit->setObjectName(QStringLiteral("summaryTextEdit"));
        summaryTextEdit->setReadOnly(true);

        verticalLayout->addWidget(summaryTextEdit);

        buttonBox = new QDialogButtonBox(Mtp3SummaryDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(Mtp3SummaryDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), Mtp3SummaryDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Mtp3SummaryDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Mtp3SummaryDialog);
    } // setupUi

    void retranslateUi(QDialog *Mtp3SummaryDialog)
    {
        Mtp3SummaryDialog->setWindowTitle(QApplication::translate("Mtp3SummaryDialog", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class Mtp3SummaryDialog: public Ui_Mtp3SummaryDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MTP3_SUMMARY_DIALOG_H
