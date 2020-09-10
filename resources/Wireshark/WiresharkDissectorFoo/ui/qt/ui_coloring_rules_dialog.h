/********************************************************************************
** Form generated from reading UI file 'coloring_rules_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLORING_RULES_DIALOG_H
#define UI_COLORING_RULES_DIALOG_H

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
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include "widgets/elided_label.h"
#include "widgets/tabnav_tree_view.h"

QT_BEGIN_NAMESPACE

class Ui_ColoringRulesDialog
{
public:
    QVBoxLayout *verticalLayout;
    TabnavTreeView *coloringRulesTreeView;
    QLabel *hintLabel;
    QHBoxLayout *horizontalLayout;
    QToolButton *newToolButton;
    QToolButton *deleteToolButton;
    QToolButton *copyToolButton;
    QToolButton *clearToolButton;
    QPushButton *fGPushButton;
    QPushButton *bGPushButton;
    QPushButton *displayFilterPushButton;
    QSpacerItem *horizontalSpacer;
    ElidedLabel *pathLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ColoringRulesDialog)
    {
        if (ColoringRulesDialog->objectName().isEmpty())
            ColoringRulesDialog->setObjectName(QStringLiteral("ColoringRulesDialog"));
        ColoringRulesDialog->resize(650, 480);
        verticalLayout = new QVBoxLayout(ColoringRulesDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        coloringRulesTreeView = new TabnavTreeView(ColoringRulesDialog);
        coloringRulesTreeView->setObjectName(QStringLiteral("coloringRulesTreeView"));
        coloringRulesTreeView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        coloringRulesTreeView->setTextElideMode(Qt::ElideMiddle);
        coloringRulesTreeView->setRootIsDecorated(false);
        coloringRulesTreeView->setUniformRowHeights(true);
        coloringRulesTreeView->setItemsExpandable(false);
        coloringRulesTreeView->setExpandsOnDoubleClick(false);
        coloringRulesTreeView->setDragEnabled(true);
        coloringRulesTreeView->setDropIndicatorShown(true);
        coloringRulesTreeView->setDragDropMode(QAbstractItemView::InternalMove);

        verticalLayout->addWidget(coloringRulesTreeView);

        hintLabel = new QLabel(ColoringRulesDialog);
        hintLabel->setObjectName(QStringLiteral("hintLabel"));
        hintLabel->setWordWrap(true);

        verticalLayout->addWidget(hintLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        newToolButton = new QToolButton(ColoringRulesDialog);
        newToolButton->setObjectName(QStringLiteral("newToolButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/stock/plus-8.png"), QSize(), QIcon::Normal, QIcon::Off);
        newToolButton->setIcon(icon);

        horizontalLayout->addWidget(newToolButton);

        deleteToolButton = new QToolButton(ColoringRulesDialog);
        deleteToolButton->setObjectName(QStringLiteral("deleteToolButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/stock/minus-8.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteToolButton->setIcon(icon1);
        deleteToolButton->setEnabled(false);

        horizontalLayout->addWidget(deleteToolButton);

        copyToolButton = new QToolButton(ColoringRulesDialog);
        copyToolButton->setObjectName(QStringLiteral("copyToolButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/stock/copy-8.png"), QSize(), QIcon::Normal, QIcon::Off);
        copyToolButton->setIcon(icon2);
        copyToolButton->setEnabled(false);

        horizontalLayout->addWidget(copyToolButton);

        clearToolButton = new QToolButton(ColoringRulesDialog);
        clearToolButton->setObjectName(QStringLiteral("clearToolButton"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/stock/delete_list.png"), QSize(), QIcon::Normal, QIcon::Off);
        clearToolButton->setIcon(icon3);
        clearToolButton->setEnabled(false);

        horizontalLayout->addWidget(clearToolButton);

        fGPushButton = new QPushButton(ColoringRulesDialog);
        fGPushButton->setObjectName(QStringLiteral("fGPushButton"));
        fGPushButton->setStyleSheet(QStringLiteral("QPushButton { border: 1px solid palette(Dark); }"));
        fGPushButton->setAutoDefault(false);
        fGPushButton->setFlat(true);
        fGPushButton->setVisible(false);

        horizontalLayout->addWidget(fGPushButton);

        bGPushButton = new QPushButton(ColoringRulesDialog);
        bGPushButton->setObjectName(QStringLiteral("bGPushButton"));
        bGPushButton->setStyleSheet(QStringLiteral("QPushButton { border: 1px solid palette(Dark); }"));
        bGPushButton->setAutoDefault(false);
        bGPushButton->setFlat(true);
        bGPushButton->setVisible(false);

        horizontalLayout->addWidget(bGPushButton);

        displayFilterPushButton = new QPushButton(ColoringRulesDialog);
        displayFilterPushButton->setObjectName(QStringLiteral("displayFilterPushButton"));
        displayFilterPushButton->setAutoDefault(false);
        displayFilterPushButton->setVisible(false);

        horizontalLayout->addWidget(displayFilterPushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pathLabel = new ElidedLabel(ColoringRulesDialog);
        pathLabel->setObjectName(QStringLiteral("pathLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pathLabel->sizePolicy().hasHeightForWidth());
        pathLabel->setSizePolicy(sizePolicy);
        pathLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pathLabel->setOpenExternalLinks(true);

        horizontalLayout->addWidget(pathLabel);

        horizontalLayout->setStretch(8, 1);

        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(ColoringRulesDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ColoringRulesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ColoringRulesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ColoringRulesDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ColoringRulesDialog);
    } // setupUi

    void retranslateUi(QDialog *ColoringRulesDialog)
    {
        ColoringRulesDialog->setWindowTitle(QApplication::translate("ColoringRulesDialog", "Dialog", 0));
        hintLabel->setText(QApplication::translate("ColoringRulesDialog", "<small><i>A hint.</i></small>", 0));
#ifndef QT_NO_TOOLTIP
        newToolButton->setToolTip(QApplication::translate("ColoringRulesDialog", "Add a new coloring rule.", 0));
#endif // QT_NO_TOOLTIP
        newToolButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        deleteToolButton->setToolTip(QApplication::translate("ColoringRulesDialog", "Delete this coloring rule.", 0));
#endif // QT_NO_TOOLTIP
        deleteToolButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        copyToolButton->setToolTip(QApplication::translate("ColoringRulesDialog", "Duplicate this coloring rule.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        clearToolButton->setToolTip(QApplication::translate("ColoringRulesDialog", "Clear all coloring rules.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        fGPushButton->setToolTip(QApplication::translate("ColoringRulesDialog", "Set the foreground color for this rule.", 0));
#endif // QT_NO_TOOLTIP
        fGPushButton->setText(QApplication::translate("ColoringRulesDialog", "Foreground", 0));
#ifndef QT_NO_TOOLTIP
        bGPushButton->setToolTip(QApplication::translate("ColoringRulesDialog", "Set the background color for this rule.", 0));
#endif // QT_NO_TOOLTIP
        bGPushButton->setText(QApplication::translate("ColoringRulesDialog", "Background", 0));
#ifndef QT_NO_TOOLTIP
        displayFilterPushButton->setToolTip(QApplication::translate("ColoringRulesDialog", "Set the display filter using this rule.", 0));
#endif // QT_NO_TOOLTIP
        displayFilterPushButton->setText(QApplication::translate("ColoringRulesDialog", "Apply as filter", 0));
        pathLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ColoringRulesDialog: public Ui_ColoringRulesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLORING_RULES_DIALOG_H
