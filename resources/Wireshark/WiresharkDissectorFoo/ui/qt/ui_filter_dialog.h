/********************************************************************************
** Form generated from reading UI file 'filter_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILTER_DIALOG_H
#define UI_FILTER_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include "widgets/elided_label.h"

QT_BEGIN_NAMESPACE

class Ui_FilterDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTreeWidget *filterTreeWidget;
    QHBoxLayout *horizontalLayout;
    QToolButton *newToolButton;
    QToolButton *deleteToolButton;
    QToolButton *copyToolButton;
    QSpacerItem *horizontalSpacer;
    ElidedLabel *pathLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *FilterDialog)
    {
        if (FilterDialog->objectName().isEmpty())
            FilterDialog->setObjectName(QStringLiteral("FilterDialog"));
        FilterDialog->resize(584, 390);
        verticalLayout = new QVBoxLayout(FilterDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        filterTreeWidget = new QTreeWidget(FilterDialog);
        filterTreeWidget->setObjectName(QStringLiteral("filterTreeWidget"));
        filterTreeWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);
        filterTreeWidget->setTextElideMode(Qt::ElideMiddle);
        filterTreeWidget->setIndentation(0);
        filterTreeWidget->setRootIsDecorated(false);

        verticalLayout->addWidget(filterTreeWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        newToolButton = new QToolButton(FilterDialog);
        newToolButton->setObjectName(QStringLiteral("newToolButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/stock/plus-8.png"), QSize(), QIcon::Normal, QIcon::Off);
        newToolButton->setIcon(icon);

        horizontalLayout->addWidget(newToolButton);

        deleteToolButton = new QToolButton(FilterDialog);
        deleteToolButton->setObjectName(QStringLiteral("deleteToolButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/stock/minus-8.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteToolButton->setIcon(icon1);
        deleteToolButton->setEnabled(false);

        horizontalLayout->addWidget(deleteToolButton);

        copyToolButton = new QToolButton(FilterDialog);
        copyToolButton->setObjectName(QStringLiteral("copyToolButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/stock/copy-8.png"), QSize(), QIcon::Normal, QIcon::Off);
        copyToolButton->setIcon(icon2);
        copyToolButton->setEnabled(false);

        horizontalLayout->addWidget(copyToolButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pathLabel = new ElidedLabel(FilterDialog);
        pathLabel->setObjectName(QStringLiteral("pathLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pathLabel->sizePolicy().hasHeightForWidth());
        pathLabel->setSizePolicy(sizePolicy);
        pathLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pathLabel->setOpenExternalLinks(true);

        horizontalLayout->addWidget(pathLabel);

        horizontalLayout->setStretch(4, 1);

        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(FilterDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(FilterDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), FilterDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), FilterDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(FilterDialog);
    } // setupUi

    void retranslateUi(QDialog *FilterDialog)
    {
        FilterDialog->setWindowTitle(QApplication::translate("FilterDialog", "Dialog", 0));
        QTreeWidgetItem *___qtreewidgetitem = filterTreeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("FilterDialog", "Filter", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("FilterDialog", "Name", 0));
#ifndef QT_NO_TOOLTIP
        newToolButton->setToolTip(QApplication::translate("FilterDialog", "Create a new filter.", 0));
#endif // QT_NO_TOOLTIP
        newToolButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        deleteToolButton->setToolTip(QApplication::translate("FilterDialog", "Remove this filter.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        copyToolButton->setToolTip(QApplication::translate("FilterDialog", "Copy this filter.", 0));
#endif // QT_NO_TOOLTIP
        copyToolButton->setText(QString());
        pathLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FilterDialog: public Ui_FilterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILTER_DIALOG_H
