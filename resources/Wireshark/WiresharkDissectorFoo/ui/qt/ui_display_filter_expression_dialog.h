/********************************************************************************
** Form generated from reading UI file 'display_filter_expression_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAY_FILTER_EXPRESSION_DIALOG_H
#define UI_DISPLAY_FILTER_EXPRESSION_DIALOG_H

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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include "widgets/display_filter_edit.h"

QT_BEGIN_NAMESPACE

class Ui_DisplayFilterExpressionDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *fieldLabel;
    QTreeWidget *fieldTreeWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *searchLabel;
    QLineEdit *searchLineEdit;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *relationLayout;
    QLabel *relationLabel;
    QListWidget *relationListWidget;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *valueLayout;
    QLabel *valueLabel;
    QLineEdit *valueLineEdit;
    QVBoxLayout *enumLayout;
    QLabel *enumLabel;
    QListWidget *enumListWidget;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *rangeLayout;
    QLabel *rangeLabel;
    QLineEdit *rangeLineEdit;
    DisplayFilterEdit *displayFilterLineEdit;
    QLabel *hintLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DisplayFilterExpressionDialog)
    {
        if (DisplayFilterExpressionDialog->objectName().isEmpty())
            DisplayFilterExpressionDialog->setObjectName(QStringLiteral("DisplayFilterExpressionDialog"));
        DisplayFilterExpressionDialog->resize(657, 588);
        verticalLayout_2 = new QVBoxLayout(DisplayFilterExpressionDialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        fieldLabel = new QLabel(DisplayFilterExpressionDialog);
        fieldLabel->setObjectName(QStringLiteral("fieldLabel"));

        verticalLayout->addWidget(fieldLabel);

        fieldTreeWidget = new QTreeWidget(DisplayFilterExpressionDialog);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        fieldTreeWidget->setHeaderItem(__qtreewidgetitem);
        fieldTreeWidget->setObjectName(QStringLiteral("fieldTreeWidget"));
        fieldTreeWidget->setUniformRowHeights(true);
        fieldTreeWidget->setHeaderHidden(true);

        verticalLayout->addWidget(fieldTreeWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        searchLabel = new QLabel(DisplayFilterExpressionDialog);
        searchLabel->setObjectName(QStringLiteral("searchLabel"));

        horizontalLayout->addWidget(searchLabel);

        searchLineEdit = new QLineEdit(DisplayFilterExpressionDialog);
        searchLineEdit->setObjectName(QStringLiteral("searchLineEdit"));

        horizontalLayout->addWidget(searchLineEdit);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        relationLayout = new QVBoxLayout();
        relationLayout->setObjectName(QStringLiteral("relationLayout"));
        relationLabel = new QLabel(DisplayFilterExpressionDialog);
        relationLabel->setObjectName(QStringLiteral("relationLabel"));

        relationLayout->addWidget(relationLabel);

        relationListWidget = new QListWidget(DisplayFilterExpressionDialog);
        relationListWidget->setObjectName(QStringLiteral("relationListWidget"));

        relationLayout->addWidget(relationListWidget);


        verticalLayout_6->addLayout(relationLayout);

        verticalSpacer = new QSpacerItem(20, 12, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);

        valueLayout = new QVBoxLayout();
        valueLayout->setObjectName(QStringLiteral("valueLayout"));
        valueLabel = new QLabel(DisplayFilterExpressionDialog);
        valueLabel->setObjectName(QStringLiteral("valueLabel"));

        valueLayout->addWidget(valueLabel);

        valueLineEdit = new QLineEdit(DisplayFilterExpressionDialog);
        valueLineEdit->setObjectName(QStringLiteral("valueLineEdit"));

        valueLayout->addWidget(valueLineEdit);


        verticalLayout_6->addLayout(valueLayout);

        enumLayout = new QVBoxLayout();
        enumLayout->setObjectName(QStringLiteral("enumLayout"));
        enumLabel = new QLabel(DisplayFilterExpressionDialog);
        enumLabel->setObjectName(QStringLiteral("enumLabel"));

        enumLayout->addWidget(enumLabel);

        enumListWidget = new QListWidget(DisplayFilterExpressionDialog);
        enumListWidget->setObjectName(QStringLiteral("enumListWidget"));

        enumLayout->addWidget(enumListWidget);


        verticalLayout_6->addLayout(enumLayout);

        verticalSpacer_2 = new QSpacerItem(20, 12, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);

        rangeLayout = new QVBoxLayout();
        rangeLayout->setObjectName(QStringLiteral("rangeLayout"));
        rangeLabel = new QLabel(DisplayFilterExpressionDialog);
        rangeLabel->setObjectName(QStringLiteral("rangeLabel"));

        rangeLayout->addWidget(rangeLabel);

        rangeLineEdit = new QLineEdit(DisplayFilterExpressionDialog);
        rangeLineEdit->setObjectName(QStringLiteral("rangeLineEdit"));

        rangeLayout->addWidget(rangeLineEdit);


        verticalLayout_6->addLayout(rangeLayout);

        verticalLayout_6->setStretch(1, 1);
        verticalLayout_6->setStretch(3, 4);
        verticalLayout_6->setStretch(4, 1);

        horizontalLayout_2->addLayout(verticalLayout_6);


        verticalLayout_2->addLayout(horizontalLayout_2);

        displayFilterLineEdit = new DisplayFilterEdit(DisplayFilterExpressionDialog);
        displayFilterLineEdit->setObjectName(QStringLiteral("displayFilterLineEdit"));
        displayFilterLineEdit->setReadOnly(true);

        verticalLayout_2->addWidget(displayFilterLineEdit);

        hintLabel = new QLabel(DisplayFilterExpressionDialog);
        hintLabel->setObjectName(QStringLiteral("hintLabel"));
        hintLabel->setWordWrap(true);

        verticalLayout_2->addWidget(hintLabel);

        buttonBox = new QDialogButtonBox(DisplayFilterExpressionDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(DisplayFilterExpressionDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), DisplayFilterExpressionDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DisplayFilterExpressionDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(DisplayFilterExpressionDialog);
    } // setupUi

    void retranslateUi(QDialog *DisplayFilterExpressionDialog)
    {
        DisplayFilterExpressionDialog->setWindowTitle(QApplication::translate("DisplayFilterExpressionDialog", "Dialog", 0));
#ifndef QT_NO_TOOLTIP
        fieldLabel->setToolTip(QApplication::translate("DisplayFilterExpressionDialog", "Select a field to start building a display filter.", 0));
#endif // QT_NO_TOOLTIP
        fieldLabel->setText(QApplication::translate("DisplayFilterExpressionDialog", "Field Name", 0));
#ifndef QT_NO_TOOLTIP
        searchLabel->setToolTip(QApplication::translate("DisplayFilterExpressionDialog", "<html><head/><body><p>Search the list of field names.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        searchLabel->setText(QApplication::translate("DisplayFilterExpressionDialog", "Search:", 0));
#ifndef QT_NO_TOOLTIP
        relationLabel->setToolTip(QApplication::translate("DisplayFilterExpressionDialog", "<html><head/><body><p>Relations can be used to restrict fields to specific values. Each relation does the following:</p><table border=\"0\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px;\" cellspacing=\"2\" cellpadding=\"0\"><tr><td><p align=\"center\"><span style=\" font-weight:600;\">is present</span></p></td><td><p>Match any packet that contains this field</p></td></tr><tr><td><p align=\"center\"><span style=\" font-weight:600;\">==, !=, etc.</span></p></td><td><p>Compare the field to a specific value.</p></td></tr><tr><td><p align=\"center\"><span style=\" font-weight:600;\">contains, matches</span></p></td><td><p>Check the field against a string (contains) or a regular expression (matches)</p></td></tr><tr><td><p align=\"center\"><span style=\" font-weight:600;\">in</span></p></td><td><p>Compare the field to a specific set of values</p></td></tr></table></body></html>\n"
"\n"
"", 0));
#endif // QT_NO_TOOLTIP
        relationLabel->setText(QApplication::translate("DisplayFilterExpressionDialog", "Relation", 0));
#ifndef QT_NO_TOOLTIP
        valueLabel->setToolTip(QApplication::translate("DisplayFilterExpressionDialog", "Match against this value.", 0));
#endif // QT_NO_TOOLTIP
        valueLabel->setText(QApplication::translate("DisplayFilterExpressionDialog", "Value", 0));
#ifndef QT_NO_TOOLTIP
        enumLabel->setToolTip(QApplication::translate("DisplayFilterExpressionDialog", "If the field you have selected has a known set of valid values they will be listed here.", 0));
#endif // QT_NO_TOOLTIP
        enumLabel->setText(QApplication::translate("DisplayFilterExpressionDialog", "Predefined Values", 0));
#ifndef QT_NO_TOOLTIP
        rangeLabel->setToolTip(QApplication::translate("DisplayFilterExpressionDialog", "If the field you have selected covers a range of bytes (e.g. you have selected a protocol) you can restrict the match to a range of bytes here.", 0));
#endif // QT_NO_TOOLTIP
        rangeLabel->setText(QApplication::translate("DisplayFilterExpressionDialog", "Range (offset:length)", 0));
        displayFilterLineEdit->setPlaceholderText(QApplication::translate("DisplayFilterExpressionDialog", "No display filter", 0));
        hintLabel->setText(QApplication::translate("DisplayFilterExpressionDialog", "<small><i>A hint.</i></small>", 0));
    } // retranslateUi

};

namespace Ui {
    class DisplayFilterExpressionDialog: public Ui_DisplayFilterExpressionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAY_FILTER_EXPRESSION_DIALOG_H
