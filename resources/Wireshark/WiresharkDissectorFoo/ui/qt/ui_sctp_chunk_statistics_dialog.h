/********************************************************************************
** Form generated from reading UI file 'sctp_chunk_statistics_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCTP_CHUNK_STATISTICS_DIALOG_H
#define UI_SCTP_CHUNK_STATISTICS_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_SCTPChunkStatisticsDialog
{
public:
    QAction *actionHideChunkType;
    QAction *actionChunkTypePreferences;
    QAction *actionShowAllChunkTypes;
    QDialogButtonBox *buttonBox;
    QTableWidget *tableWidget;
    QPushButton *pushButton;

    void setupUi(QDialog *SCTPChunkStatisticsDialog)
    {
        if (SCTPChunkStatisticsDialog->objectName().isEmpty())
            SCTPChunkStatisticsDialog->setObjectName(QStringLiteral("SCTPChunkStatisticsDialog"));
        SCTPChunkStatisticsDialog->resize(519, 504);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SCTPChunkStatisticsDialog->sizePolicy().hasHeightForWidth());
        SCTPChunkStatisticsDialog->setSizePolicy(sizePolicy);
        actionHideChunkType = new QAction(SCTPChunkStatisticsDialog);
        actionHideChunkType->setObjectName(QStringLiteral("actionHideChunkType"));
        actionChunkTypePreferences = new QAction(SCTPChunkStatisticsDialog);
        actionChunkTypePreferences->setObjectName(QStringLiteral("actionChunkTypePreferences"));
        actionShowAllChunkTypes = new QAction(SCTPChunkStatisticsDialog);
        actionShowAllChunkTypes->setObjectName(QStringLiteral("actionShowAllChunkTypes"));
        buttonBox = new QDialogButtonBox(SCTPChunkStatisticsDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(310, 470, 191, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Close);
        tableWidget = new QTableWidget(SCTPChunkStatisticsDialog);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(30, 30, 471, 431));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setAlternatingRowColors(true);
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->setRowCount(0);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setCascadingSectionResizes(false);
        pushButton = new QPushButton(SCTPChunkStatisticsDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(130, 470, 181, 32));

        retranslateUi(SCTPChunkStatisticsDialog);
        QObject::connect(buttonBox, SIGNAL(clicked(QAbstractButton*)), SCTPChunkStatisticsDialog, SLOT(close()));
        QObject::connect(buttonBox, SIGNAL(clicked(QAbstractButton*)), SCTPChunkStatisticsDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(SCTPChunkStatisticsDialog);
    } // setupUi

    void retranslateUi(QDialog *SCTPChunkStatisticsDialog)
    {
        SCTPChunkStatisticsDialog->setWindowTitle(QApplication::translate("SCTPChunkStatisticsDialog", "Dialog", 0));
        actionHideChunkType->setText(QApplication::translate("SCTPChunkStatisticsDialog", "Hide Chunk Type", 0));
#ifndef QT_NO_TOOLTIP
        actionHideChunkType->setToolTip(QApplication::translate("SCTPChunkStatisticsDialog", "Remove the chunk type from the table", 0));
#endif // QT_NO_TOOLTIP
        actionChunkTypePreferences->setText(QApplication::translate("SCTPChunkStatisticsDialog", "Chunk Type Preferences", 0));
#ifndef QT_NO_TOOLTIP
        actionChunkTypePreferences->setToolTip(QApplication::translate("SCTPChunkStatisticsDialog", "Go to the chunk type preferences dialog to show or hide other chunk types", 0));
#endif // QT_NO_TOOLTIP
        actionShowAllChunkTypes->setText(QApplication::translate("SCTPChunkStatisticsDialog", "Show All Registered Chunk Types", 0));
#ifndef QT_NO_TOOLTIP
        actionShowAllChunkTypes->setToolTip(QApplication::translate("SCTPChunkStatisticsDialog", "Show all chunk types with defined names", 0));
#endif // QT_NO_TOOLTIP
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("SCTPChunkStatisticsDialog", "Association", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("SCTPChunkStatisticsDialog", "Endpoint 1", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("SCTPChunkStatisticsDialog", "Endpoint 2", 0));
        pushButton->setText(QApplication::translate("SCTPChunkStatisticsDialog", "Save Chunk Type Order", 0));
    } // retranslateUi

};

namespace Ui {
    class SCTPChunkStatisticsDialog: public Ui_SCTPChunkStatisticsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCTP_CHUNK_STATISTICS_DIALOG_H
