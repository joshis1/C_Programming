/********************************************************************************
** Form generated from reading UI file 'tap_parameter_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAP_PARAMETER_DIALOG_H
#define UI_TAP_PARAMETER_DIALOG_H

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
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include "widgets/display_filter_edit.h"

QT_BEGIN_NAMESPACE

class Ui_TapParameterDialog
{
public:
    QAction *actionCopyToClipboard;
    QAction *actionSaveAs;
    QVBoxLayout *verticalLayout;
    QTreeWidget *statsTreeWidget;
    QLabel *hintLabel;
    QHBoxLayout *filterLayout;
    QLabel *label;
    DisplayFilterEdit *displayFilterLineEdit;
    QPushButton *applyFilterButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TapParameterDialog)
    {
        if (TapParameterDialog->objectName().isEmpty())
            TapParameterDialog->setObjectName(QStringLiteral("TapParameterDialog"));
        TapParameterDialog->resize(587, 459);
        actionCopyToClipboard = new QAction(TapParameterDialog);
        actionCopyToClipboard->setObjectName(QStringLiteral("actionCopyToClipboard"));
        actionCopyToClipboard->setShortcut(QStringLiteral("Ctrl+C"));
        actionSaveAs = new QAction(TapParameterDialog);
        actionSaveAs->setObjectName(QStringLiteral("actionSaveAs"));
        actionSaveAs->setShortcut(QStringLiteral("Ctrl+S"));
        verticalLayout = new QVBoxLayout(TapParameterDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        statsTreeWidget = new QTreeWidget(TapParameterDialog);
        statsTreeWidget->setObjectName(QStringLiteral("statsTreeWidget"));
        statsTreeWidget->setUniformRowHeights(true);
        statsTreeWidget->setSortingEnabled(true);

        verticalLayout->addWidget(statsTreeWidget);

        hintLabel = new QLabel(TapParameterDialog);
        hintLabel->setObjectName(QStringLiteral("hintLabel"));
        hintLabel->setWordWrap(true);

        verticalLayout->addWidget(hintLabel);

        filterLayout = new QHBoxLayout();
        filterLayout->setObjectName(QStringLiteral("filterLayout"));
        label = new QLabel(TapParameterDialog);
        label->setObjectName(QStringLiteral("label"));

        filterLayout->addWidget(label);

        displayFilterLineEdit = new DisplayFilterEdit(TapParameterDialog);
        displayFilterLineEdit->setObjectName(QStringLiteral("displayFilterLineEdit"));

        filterLayout->addWidget(displayFilterLineEdit);

        applyFilterButton = new QPushButton(TapParameterDialog);
        applyFilterButton->setObjectName(QStringLiteral("applyFilterButton"));

        filterLayout->addWidget(applyFilterButton);

        filterLayout->setStretch(1, 2);

        verticalLayout->addLayout(filterLayout);

        buttonBox = new QDialogButtonBox(TapParameterDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(TapParameterDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), TapParameterDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TapParameterDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(TapParameterDialog);
    } // setupUi

    void retranslateUi(QDialog *TapParameterDialog)
    {
        TapParameterDialog->setWindowTitle(QApplication::translate("TapParameterDialog", "Dialog", 0));
        actionCopyToClipboard->setText(QApplication::translate("TapParameterDialog", "Copy", 0));
#ifndef QT_NO_TOOLTIP
        actionCopyToClipboard->setToolTip(QApplication::translate("TapParameterDialog", "Copy a text representation of the tree to the clipboard", 0));
#endif // QT_NO_TOOLTIP
        actionSaveAs->setText(QApplication::translate("TapParameterDialog", "Save as\342\200\246", 0));
#ifndef QT_NO_TOOLTIP
        actionSaveAs->setToolTip(QApplication::translate("TapParameterDialog", "Save the displayed data in various formats", 0));
#endif // QT_NO_TOOLTIP
        QTreeWidgetItem *___qtreewidgetitem = statsTreeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("TapParameterDialog", "Item", 0));
        hintLabel->setText(QApplication::translate("TapParameterDialog", "<small><i>A hint.</i></small>", 0));
        label->setText(QApplication::translate("TapParameterDialog", "Display filter:", 0));
#ifndef QT_NO_TOOLTIP
        applyFilterButton->setToolTip(QApplication::translate("TapParameterDialog", "Regenerate statistics using this display filter", 0));
#endif // QT_NO_TOOLTIP
        applyFilterButton->setText(QApplication::translate("TapParameterDialog", "Apply", 0));
    } // retranslateUi

};

namespace Ui {
    class TapParameterDialog: public Ui_TapParameterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAP_PARAMETER_DIALOG_H
