/********************************************************************************
** Form generated from reading UI file 'column_preferences_frame.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLUMN_PREFERENCES_FRAME_H
#define UI_COLUMN_PREFERENCES_FRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ColumnPreferencesFrame
{
public:
    QVBoxLayout *verticalLayout;
    QTreeWidget *columnTreeWidget;
    QHBoxLayout *horizontalLayout;
    QToolButton *newToolButton;
    QToolButton *deleteToolButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QFrame *ColumnPreferencesFrame)
    {
        if (ColumnPreferencesFrame->objectName().isEmpty())
            ColumnPreferencesFrame->setObjectName(QStringLiteral("ColumnPreferencesFrame"));
        ColumnPreferencesFrame->resize(550, 350);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ColumnPreferencesFrame->sizePolicy().hasHeightForWidth());
        ColumnPreferencesFrame->setSizePolicy(sizePolicy);
        ColumnPreferencesFrame->setLineWidth(0);
        verticalLayout = new QVBoxLayout(ColumnPreferencesFrame);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        columnTreeWidget = new QTreeWidget(ColumnPreferencesFrame);
        columnTreeWidget->setObjectName(QStringLiteral("columnTreeWidget"));

        verticalLayout->addWidget(columnTreeWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        newToolButton = new QToolButton(ColumnPreferencesFrame);
        newToolButton->setObjectName(QStringLiteral("newToolButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/stock/plus-8.png"), QSize(), QIcon::Normal, QIcon::Off);
        newToolButton->setIcon(icon);

        horizontalLayout->addWidget(newToolButton);

        deleteToolButton = new QToolButton(ColumnPreferencesFrame);
        deleteToolButton->setObjectName(QStringLiteral("deleteToolButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/stock/minus-8.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteToolButton->setIcon(icon1);

        horizontalLayout->addWidget(deleteToolButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ColumnPreferencesFrame);

        QMetaObject::connectSlotsByName(ColumnPreferencesFrame);
    } // setupUi

    void retranslateUi(QFrame *ColumnPreferencesFrame)
    {
        ColumnPreferencesFrame->setWindowTitle(QApplication::translate("ColumnPreferencesFrame", "Frame", 0));
        QTreeWidgetItem *___qtreewidgetitem = columnTreeWidget->headerItem();
        ___qtreewidgetitem->setText(4, QApplication::translate("ColumnPreferencesFrame", "Field Occurrence", 0));
        ___qtreewidgetitem->setText(3, QApplication::translate("ColumnPreferencesFrame", "Fields", 0));
        ___qtreewidgetitem->setText(2, QApplication::translate("ColumnPreferencesFrame", "Type", 0));
        ___qtreewidgetitem->setText(1, QApplication::translate("ColumnPreferencesFrame", "Title", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("ColumnPreferencesFrame", "Displayed", 0));
    } // retranslateUi

};

namespace Ui {
    class ColumnPreferencesFrame: public Ui_ColumnPreferencesFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLUMN_PREFERENCES_FRAME_H
