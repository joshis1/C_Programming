/********************************************************************************
** Form generated from reading UI file 'dissector_tables_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISSECTOR_TABLES_DIALOG_H
#define UI_DISSECTOR_TABLES_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include "widgets/dissector_tables_view.h"

QT_BEGIN_NAMESPACE

class Ui_DissectorTablesDialog
{
public:
    QVBoxLayout *verticalLayout;
    DissectorTablesTreeView *tableTree;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *txtSearchLine;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DissectorTablesDialog)
    {
        if (DissectorTablesDialog->objectName().isEmpty())
            DissectorTablesDialog->setObjectName(QStringLiteral("DissectorTablesDialog"));
        DissectorTablesDialog->resize(400, 300);
        verticalLayout = new QVBoxLayout(DissectorTablesDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableTree = new DissectorTablesTreeView(DissectorTablesDialog);
        tableTree->setObjectName(QStringLiteral("tableTree"));
        tableTree->setUniformRowHeights(true);

        verticalLayout->addWidget(tableTree);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(DissectorTablesDialog);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        txtSearchLine = new QLineEdit(DissectorTablesDialog);
        txtSearchLine->setObjectName(QStringLiteral("txtSearchLine"));

        horizontalLayout->addWidget(txtSearchLine);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(DissectorTablesDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(DissectorTablesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), DissectorTablesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DissectorTablesDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(DissectorTablesDialog);
    } // setupUi

    void retranslateUi(QDialog *DissectorTablesDialog)
    {
        DissectorTablesDialog->setWindowTitle(QApplication::translate("DissectorTablesDialog", "Dialog", 0));
        label->setText(QApplication::translate("DissectorTablesDialog", "Search:", 0));
    } // retranslateUi

};

namespace Ui {
    class DissectorTablesDialog: public Ui_DissectorTablesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISSECTOR_TABLES_DIALOG_H
