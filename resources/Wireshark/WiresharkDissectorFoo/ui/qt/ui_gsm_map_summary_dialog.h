/********************************************************************************
** Form generated from reading UI file 'gsm_map_summary_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GSM_MAP_SUMMARY_DIALOG_H
#define UI_GSM_MAP_SUMMARY_DIALOG_H

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

class Ui_GsmMapSummaryDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *summaryTextEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *GsmMapSummaryDialog)
    {
        if (GsmMapSummaryDialog->objectName().isEmpty())
            GsmMapSummaryDialog->setObjectName(QStringLiteral("GsmMapSummaryDialog"));
        GsmMapSummaryDialog->resize(640, 420);
        verticalLayout = new QVBoxLayout(GsmMapSummaryDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        summaryTextEdit = new QTextEdit(GsmMapSummaryDialog);
        summaryTextEdit->setObjectName(QStringLiteral("summaryTextEdit"));
        summaryTextEdit->setReadOnly(true);

        verticalLayout->addWidget(summaryTextEdit);

        buttonBox = new QDialogButtonBox(GsmMapSummaryDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(GsmMapSummaryDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), GsmMapSummaryDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), GsmMapSummaryDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(GsmMapSummaryDialog);
    } // setupUi

    void retranslateUi(QDialog *GsmMapSummaryDialog)
    {
        GsmMapSummaryDialog->setWindowTitle(QApplication::translate("GsmMapSummaryDialog", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class GsmMapSummaryDialog: public Ui_GsmMapSummaryDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GSM_MAP_SUMMARY_DIALOG_H
