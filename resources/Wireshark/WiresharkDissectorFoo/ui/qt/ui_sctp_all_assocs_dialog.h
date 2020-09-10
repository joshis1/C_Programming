/********************************************************************************
** Form generated from reading UI file 'sctp_all_assocs_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCTP_ALL_ASSOCS_DIALOG_H
#define UI_SCTP_ALL_ASSOCS_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SCTPAllAssocsDialog
{
public:
    QAction *actionReset;
    QAction *actionZoomIn;
    QAction *actionZoomOut;
    QAction *actionMoveUp10;
    QAction *actionMoveLeft10;
    QAction *actionMoveRight10;
    QAction *actionMoveDown10;
    QAction *actionMoveUp1;
    QAction *actionMoveLeft1;
    QAction *actionMoveRight1;
    QAction *actionMoveDown1;
    QAction *actionNextStream;
    QAction *actionPreviousStream;
    QAction *actionSwitchDirection;
    QAction *actionGoToPacket;
    QAction *actionDragZoom;
    QAction *actionToggleSequenceNumbers;
    QAction *actionToggleTimeOrigin;
    QAction *actionCrosshairs;
    QAction *actionRoundTripTime;
    QAction *actionThroughput;
    QAction *actionStevens;
    QAction *actionWindowScaling;
    QAction *actionTcptrace;
    QVBoxLayout *verticalLayout;
    QTableWidget *assocList;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *setFilterButton;
    QPushButton *analyseButton;
    QSpacerItem *horizontalSpacer_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SCTPAllAssocsDialog)
    {
        if (SCTPAllAssocsDialog->objectName().isEmpty())
            SCTPAllAssocsDialog->setObjectName(QStringLiteral("SCTPAllAssocsDialog"));
        SCTPAllAssocsDialog->resize(685, 300);
        actionReset = new QAction(SCTPAllAssocsDialog);
        actionReset->setObjectName(QStringLiteral("actionReset"));
        actionZoomIn = new QAction(SCTPAllAssocsDialog);
        actionZoomIn->setObjectName(QStringLiteral("actionZoomIn"));
        actionZoomOut = new QAction(SCTPAllAssocsDialog);
        actionZoomOut->setObjectName(QStringLiteral("actionZoomOut"));
        actionMoveUp10 = new QAction(SCTPAllAssocsDialog);
        actionMoveUp10->setObjectName(QStringLiteral("actionMoveUp10"));
        actionMoveLeft10 = new QAction(SCTPAllAssocsDialog);
        actionMoveLeft10->setObjectName(QStringLiteral("actionMoveLeft10"));
        actionMoveRight10 = new QAction(SCTPAllAssocsDialog);
        actionMoveRight10->setObjectName(QStringLiteral("actionMoveRight10"));
        actionMoveDown10 = new QAction(SCTPAllAssocsDialog);
        actionMoveDown10->setObjectName(QStringLiteral("actionMoveDown10"));
        actionMoveUp1 = new QAction(SCTPAllAssocsDialog);
        actionMoveUp1->setObjectName(QStringLiteral("actionMoveUp1"));
        actionMoveLeft1 = new QAction(SCTPAllAssocsDialog);
        actionMoveLeft1->setObjectName(QStringLiteral("actionMoveLeft1"));
        actionMoveRight1 = new QAction(SCTPAllAssocsDialog);
        actionMoveRight1->setObjectName(QStringLiteral("actionMoveRight1"));
        actionMoveDown1 = new QAction(SCTPAllAssocsDialog);
        actionMoveDown1->setObjectName(QStringLiteral("actionMoveDown1"));
        actionNextStream = new QAction(SCTPAllAssocsDialog);
        actionNextStream->setObjectName(QStringLiteral("actionNextStream"));
        actionPreviousStream = new QAction(SCTPAllAssocsDialog);
        actionPreviousStream->setObjectName(QStringLiteral("actionPreviousStream"));
        actionSwitchDirection = new QAction(SCTPAllAssocsDialog);
        actionSwitchDirection->setObjectName(QStringLiteral("actionSwitchDirection"));
        actionGoToPacket = new QAction(SCTPAllAssocsDialog);
        actionGoToPacket->setObjectName(QStringLiteral("actionGoToPacket"));
        actionDragZoom = new QAction(SCTPAllAssocsDialog);
        actionDragZoom->setObjectName(QStringLiteral("actionDragZoom"));
        actionToggleSequenceNumbers = new QAction(SCTPAllAssocsDialog);
        actionToggleSequenceNumbers->setObjectName(QStringLiteral("actionToggleSequenceNumbers"));
        actionToggleTimeOrigin = new QAction(SCTPAllAssocsDialog);
        actionToggleTimeOrigin->setObjectName(QStringLiteral("actionToggleTimeOrigin"));
        actionCrosshairs = new QAction(SCTPAllAssocsDialog);
        actionCrosshairs->setObjectName(QStringLiteral("actionCrosshairs"));
        actionRoundTripTime = new QAction(SCTPAllAssocsDialog);
        actionRoundTripTime->setObjectName(QStringLiteral("actionRoundTripTime"));
        actionThroughput = new QAction(SCTPAllAssocsDialog);
        actionThroughput->setObjectName(QStringLiteral("actionThroughput"));
        actionStevens = new QAction(SCTPAllAssocsDialog);
        actionStevens->setObjectName(QStringLiteral("actionStevens"));
        actionWindowScaling = new QAction(SCTPAllAssocsDialog);
        actionWindowScaling->setObjectName(QStringLiteral("actionWindowScaling"));
        actionTcptrace = new QAction(SCTPAllAssocsDialog);
        actionTcptrace->setObjectName(QStringLiteral("actionTcptrace"));
        verticalLayout = new QVBoxLayout(SCTPAllAssocsDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        assocList = new QTableWidget(SCTPAllAssocsDialog);
        if (assocList->columnCount() < 6)
            assocList->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        assocList->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        assocList->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        assocList->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        assocList->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        assocList->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        assocList->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        if (assocList->rowCount() < 2)
            assocList->setRowCount(2);
        assocList->setObjectName(QStringLiteral("assocList"));
        assocList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        assocList->setProperty("showDropIndicator", QVariant(false));
        assocList->setDragDropOverwriteMode(false);
        assocList->setAlternatingRowColors(true);
        assocList->setSelectionMode(QAbstractItemView::SingleSelection);
        assocList->setSelectionBehavior(QAbstractItemView::SelectRows);
        assocList->setSortingEnabled(true);
        assocList->setWordWrap(false);
        assocList->setRowCount(2);
        assocList->setColumnCount(6);
        assocList->horizontalHeader()->setDefaultSectionSize(120);
        assocList->horizontalHeader()->setMinimumSectionSize(50);
        assocList->horizontalHeader()->setStretchLastSection(true);

        verticalLayout->addWidget(assocList);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        setFilterButton = new QPushButton(SCTPAllAssocsDialog);
        setFilterButton->setObjectName(QStringLiteral("setFilterButton"));
        setFilterButton->setEnabled(false);
        setFilterButton->setFocusPolicy(Qt::ClickFocus);

        horizontalLayout_2->addWidget(setFilterButton);

        analyseButton = new QPushButton(SCTPAllAssocsDialog);
        analyseButton->setObjectName(QStringLiteral("analyseButton"));
        analyseButton->setEnabled(false);
        analyseButton->setFocusPolicy(Qt::ClickFocus);

        horizontalLayout_2->addWidget(analyseButton);

        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        buttonBox = new QDialogButtonBox(SCTPAllAssocsDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        horizontalLayout_2->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(SCTPAllAssocsDialog);
        QObject::connect(buttonBox, SIGNAL(clicked(QAbstractButton*)), SCTPAllAssocsDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(SCTPAllAssocsDialog);
    } // setupUi

    void retranslateUi(QDialog *SCTPAllAssocsDialog)
    {
        SCTPAllAssocsDialog->setWindowTitle(QApplication::translate("SCTPAllAssocsDialog", "Wireshark - SCTP Associations", 0));
        actionReset->setText(QApplication::translate("SCTPAllAssocsDialog", "Reset Graph", 0));
#ifndef QT_NO_TOOLTIP
        actionReset->setToolTip(QApplication::translate("SCTPAllAssocsDialog", "Reset the graph to its initial state.", 0));
#endif // QT_NO_TOOLTIP
        actionReset->setShortcut(QApplication::translate("SCTPAllAssocsDialog", "0", 0));
        actionZoomIn->setText(QApplication::translate("SCTPAllAssocsDialog", "Zoom In", 0));
#ifndef QT_NO_TOOLTIP
        actionZoomIn->setToolTip(QApplication::translate("SCTPAllAssocsDialog", "Zoom In", 0));
#endif // QT_NO_TOOLTIP
        actionZoomIn->setShortcut(QApplication::translate("SCTPAllAssocsDialog", "+", 0));
        actionZoomOut->setText(QApplication::translate("SCTPAllAssocsDialog", "Zoom Out", 0));
#ifndef QT_NO_TOOLTIP
        actionZoomOut->setToolTip(QApplication::translate("SCTPAllAssocsDialog", "Zoom Out", 0));
#endif // QT_NO_TOOLTIP
        actionZoomOut->setShortcut(QApplication::translate("SCTPAllAssocsDialog", "-", 0));
        actionMoveUp10->setText(QApplication::translate("SCTPAllAssocsDialog", "Move Up 10 Pixels", 0));
#ifndef QT_NO_TOOLTIP
        actionMoveUp10->setToolTip(QApplication::translate("SCTPAllAssocsDialog", "Move Up 10 Pixels", 0));
#endif // QT_NO_TOOLTIP
        actionMoveUp10->setShortcut(QApplication::translate("SCTPAllAssocsDialog", "Up", 0));
        actionMoveLeft10->setText(QApplication::translate("SCTPAllAssocsDialog", "Move Left 10 Pixels", 0));
#ifndef QT_NO_TOOLTIP
        actionMoveLeft10->setToolTip(QApplication::translate("SCTPAllAssocsDialog", "Move Left 10 Pixels", 0));
#endif // QT_NO_TOOLTIP
        actionMoveLeft10->setShortcut(QApplication::translate("SCTPAllAssocsDialog", "Left", 0));
        actionMoveRight10->setText(QApplication::translate("SCTPAllAssocsDialog", "Move Right 10 Pixels", 0));
#ifndef QT_NO_TOOLTIP
        actionMoveRight10->setToolTip(QApplication::translate("SCTPAllAssocsDialog", "Move Right 10 Pixels", 0));
#endif // QT_NO_TOOLTIP
        actionMoveRight10->setShortcut(QApplication::translate("SCTPAllAssocsDialog", "Right", 0));
        actionMoveDown10->setText(QApplication::translate("SCTPAllAssocsDialog", "Move Down 10 Pixels", 0));
#ifndef QT_NO_TOOLTIP
        actionMoveDown10->setToolTip(QApplication::translate("SCTPAllAssocsDialog", "Move Down 10 Pixels", 0));
#endif // QT_NO_TOOLTIP
        actionMoveDown10->setShortcut(QApplication::translate("SCTPAllAssocsDialog", "Down", 0));
        actionMoveUp1->setText(QApplication::translate("SCTPAllAssocsDialog", "Move Up 1 Pixel", 0));
#ifndef QT_NO_TOOLTIP
        actionMoveUp1->setToolTip(QApplication::translate("SCTPAllAssocsDialog", "Move Up 1 Pixel", 0));
#endif // QT_NO_TOOLTIP
        actionMoveUp1->setShortcut(QApplication::translate("SCTPAllAssocsDialog", "Shift+Up", 0));
        actionMoveLeft1->setText(QApplication::translate("SCTPAllAssocsDialog", "Move Left 1 Pixel", 0));
#ifndef QT_NO_TOOLTIP
        actionMoveLeft1->setToolTip(QApplication::translate("SCTPAllAssocsDialog", "Move Left 1 Pixel", 0));
#endif // QT_NO_TOOLTIP
        actionMoveLeft1->setShortcut(QApplication::translate("SCTPAllAssocsDialog", "Shift+Left", 0));
        actionMoveRight1->setText(QApplication::translate("SCTPAllAssocsDialog", "Move Right 1 Pixel", 0));
#ifndef QT_NO_TOOLTIP
        actionMoveRight1->setToolTip(QApplication::translate("SCTPAllAssocsDialog", "Move Right 1 Pixel", 0));
#endif // QT_NO_TOOLTIP
        actionMoveRight1->setShortcut(QApplication::translate("SCTPAllAssocsDialog", "Shift+Right", 0));
        actionMoveDown1->setText(QApplication::translate("SCTPAllAssocsDialog", "Move Down 1 Pixel", 0));
#ifndef QT_NO_TOOLTIP
        actionMoveDown1->setToolTip(QApplication::translate("SCTPAllAssocsDialog", "Move Down 1 Pixel", 0));
#endif // QT_NO_TOOLTIP
        actionMoveDown1->setShortcut(QApplication::translate("SCTPAllAssocsDialog", "Shift+Down", 0));
        actionNextStream->setText(QApplication::translate("SCTPAllAssocsDialog", "Next Stream", 0));
#ifndef QT_NO_TOOLTIP
        actionNextStream->setToolTip(QApplication::translate("SCTPAllAssocsDialog", "Go to the next stream in the capture", 0));
#endif // QT_NO_TOOLTIP
        actionNextStream->setShortcut(QApplication::translate("SCTPAllAssocsDialog", "PgUp", 0));
        actionPreviousStream->setText(QApplication::translate("SCTPAllAssocsDialog", "Previous Stream", 0));
#ifndef QT_NO_TOOLTIP
        actionPreviousStream->setToolTip(QApplication::translate("SCTPAllAssocsDialog", "Go to the previous stream in the capture", 0));
#endif // QT_NO_TOOLTIP
        actionPreviousStream->setShortcut(QApplication::translate("SCTPAllAssocsDialog", "PgDown", 0));
        actionSwitchDirection->setText(QApplication::translate("SCTPAllAssocsDialog", "Switch Direction", 0));
#ifndef QT_NO_TOOLTIP
        actionSwitchDirection->setToolTip(QApplication::translate("SCTPAllAssocsDialog", "Switch direction (swap TCP endpoints)", 0));
#endif // QT_NO_TOOLTIP
        actionSwitchDirection->setShortcut(QApplication::translate("SCTPAllAssocsDialog", "D", 0));
        actionGoToPacket->setText(QApplication::translate("SCTPAllAssocsDialog", "Go To Packet Under Cursor", 0));
#ifndef QT_NO_TOOLTIP
        actionGoToPacket->setToolTip(QApplication::translate("SCTPAllAssocsDialog", "Go to packet currently under the cursor", 0));
#endif // QT_NO_TOOLTIP
        actionGoToPacket->setShortcut(QApplication::translate("SCTPAllAssocsDialog", "G", 0));
        actionDragZoom->setText(QApplication::translate("SCTPAllAssocsDialog", "Drag / Zoom", 0));
#ifndef QT_NO_TOOLTIP
        actionDragZoom->setToolTip(QApplication::translate("SCTPAllAssocsDialog", "Toggle mouse drag / zoom behavior", 0));
#endif // QT_NO_TOOLTIP
        actionDragZoom->setShortcut(QApplication::translate("SCTPAllAssocsDialog", "Z", 0));
        actionToggleSequenceNumbers->setText(QApplication::translate("SCTPAllAssocsDialog", "Relative / Absolute Sequence Numbers", 0));
#ifndef QT_NO_TOOLTIP
        actionToggleSequenceNumbers->setToolTip(QApplication::translate("SCTPAllAssocsDialog", "Toggle relative / absolute sequence numbers", 0));
#endif // QT_NO_TOOLTIP
        actionToggleSequenceNumbers->setShortcut(QApplication::translate("SCTPAllAssocsDialog", "S", 0));
        actionToggleTimeOrigin->setText(QApplication::translate("SCTPAllAssocsDialog", "Capture / Session Time Origin", 0));
#ifndef QT_NO_TOOLTIP
        actionToggleTimeOrigin->setToolTip(QApplication::translate("SCTPAllAssocsDialog", "Toggle capture / session time origin", 0));
#endif // QT_NO_TOOLTIP
        actionToggleTimeOrigin->setShortcut(QApplication::translate("SCTPAllAssocsDialog", "T", 0));
        actionCrosshairs->setText(QApplication::translate("SCTPAllAssocsDialog", "Crosshairs", 0));
#ifndef QT_NO_TOOLTIP
        actionCrosshairs->setToolTip(QApplication::translate("SCTPAllAssocsDialog", "Toggle crosshairs", 0));
#endif // QT_NO_TOOLTIP
        actionCrosshairs->setShortcut(QApplication::translate("SCTPAllAssocsDialog", "Space", 0));
        actionRoundTripTime->setText(QApplication::translate("SCTPAllAssocsDialog", "Round Trip Time", 0));
#ifndef QT_NO_TOOLTIP
        actionRoundTripTime->setToolTip(QApplication::translate("SCTPAllAssocsDialog", "Switch to the Round Trip Time graph", 0));
#endif // QT_NO_TOOLTIP
        actionRoundTripTime->setShortcut(QApplication::translate("SCTPAllAssocsDialog", "1", 0));
        actionThroughput->setText(QApplication::translate("SCTPAllAssocsDialog", "Throughput", 0));
#ifndef QT_NO_TOOLTIP
        actionThroughput->setToolTip(QApplication::translate("SCTPAllAssocsDialog", "Switch to the Throughput graph", 0));
#endif // QT_NO_TOOLTIP
        actionThroughput->setShortcut(QApplication::translate("SCTPAllAssocsDialog", "2", 0));
        actionStevens->setText(QApplication::translate("SCTPAllAssocsDialog", "Time / Sequence (Stevens)", 0));
#ifndef QT_NO_TOOLTIP
        actionStevens->setToolTip(QApplication::translate("SCTPAllAssocsDialog", "Switch to the Stevens-style Time / Sequence graph", 0));
#endif // QT_NO_TOOLTIP
        actionStevens->setShortcut(QApplication::translate("SCTPAllAssocsDialog", "3", 0));
        actionWindowScaling->setText(QApplication::translate("SCTPAllAssocsDialog", "Window Scaling", 0));
#ifndef QT_NO_TOOLTIP
        actionWindowScaling->setToolTip(QApplication::translate("SCTPAllAssocsDialog", "Switch to the Window Scaling graph", 0));
#endif // QT_NO_TOOLTIP
        actionWindowScaling->setShortcut(QApplication::translate("SCTPAllAssocsDialog", "5", 0));
        actionTcptrace->setText(QApplication::translate("SCTPAllAssocsDialog", "Time / Sequence (tcptrace)", 0));
#ifndef QT_NO_TOOLTIP
        actionTcptrace->setToolTip(QApplication::translate("SCTPAllAssocsDialog", "Switch to the tcptrace-style Time / Sequence graph", 0));
#endif // QT_NO_TOOLTIP
        actionTcptrace->setShortcut(QApplication::translate("SCTPAllAssocsDialog", "4", 0));
        QTableWidgetItem *___qtablewidgetitem = assocList->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("SCTPAllAssocsDialog", "ID", 0));
        QTableWidgetItem *___qtablewidgetitem1 = assocList->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("SCTPAllAssocsDialog", "Port 1", 0));
        QTableWidgetItem *___qtablewidgetitem2 = assocList->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("SCTPAllAssocsDialog", "Port 2", 0));
        QTableWidgetItem *___qtablewidgetitem3 = assocList->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("SCTPAllAssocsDialog", "Number of Packets", 0));
        QTableWidgetItem *___qtablewidgetitem4 = assocList->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("SCTPAllAssocsDialog", "Number of DATA Chunks", 0));
        QTableWidgetItem *___qtablewidgetitem5 = assocList->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("SCTPAllAssocsDialog", "Number of Bytes", 0));
        setFilterButton->setText(QApplication::translate("SCTPAllAssocsDialog", "Filter Selected Association", 0));
        analyseButton->setText(QApplication::translate("SCTPAllAssocsDialog", "Analyze", 0));
    } // retranslateUi

};

namespace Ui {
    class SCTPAllAssocsDialog: public Ui_SCTPAllAssocsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCTP_ALL_ASSOCS_DIALOG_H
