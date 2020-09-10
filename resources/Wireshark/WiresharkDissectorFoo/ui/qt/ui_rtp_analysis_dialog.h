/********************************************************************************
** Form generated from reading UI file 'rtp_analysis_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RTP_ANALYSIS_DIALOG_H
#define UI_RTP_ANALYSIS_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "progress_frame.h"
#include "widgets/qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_RtpAnalysisDialog
{
public:
    QAction *actionSaveAudioUnsync;
    QAction *actionSaveForwardAudioUnsync;
    QAction *actionSaveReverseAudioUnsync;
    QAction *actionSaveCsv;
    QAction *actionSaveForwardCsv;
    QAction *actionSaveReverseCsv;
    QAction *actionSaveGraph;
    QAction *actionGoToPacket;
    QAction *actionNextProblem;
    QAction *actionSaveAudioSyncStream;
    QAction *actionSaveForwardAudioSyncStream;
    QAction *actionSaveReverseAudioSyncStream;
    QAction *actionSaveAudioSyncFile;
    QAction *actionSaveForwardAudioSyncFile;
    QAction *actionSaveReverseAudioSyncFile;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *statisticsLabel;
    QSpacerItem *verticalSpacer;
    QTabWidget *tabWidget;
    QTreeWidget *forwardTreeWidget;
    QTreeWidget *reverseTreeWidget;
    QWidget *graphTab;
    QVBoxLayout *verticalLayout_2;
    QCustomPlot *streamGraph;
    QHBoxLayout *forwardHorizontalLayout;
    QCheckBox *fJitterCheckBox;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *fDiffCheckBox;
    QSpacerItem *horizontalSpacer_5;
    QCheckBox *fDeltaCheckBox;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *reverseHorizontalLayout;
    QCheckBox *rJitterCheckBox;
    QSpacerItem *horizontalSpacer_4;
    QCheckBox *rDiffCheckBox;
    QSpacerItem *horizontalSpacer_6;
    QCheckBox *rDeltaCheckBox;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *hintLabel;
    ProgressFrame *progressFrame;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RtpAnalysisDialog)
    {
        if (RtpAnalysisDialog->objectName().isEmpty())
            RtpAnalysisDialog->setObjectName(QStringLiteral("RtpAnalysisDialog"));
        RtpAnalysisDialog->resize(650, 475);
        actionSaveAudioUnsync = new QAction(RtpAnalysisDialog);
        actionSaveAudioUnsync->setObjectName(QStringLiteral("actionSaveAudioUnsync"));
        actionSaveForwardAudioUnsync = new QAction(RtpAnalysisDialog);
        actionSaveForwardAudioUnsync->setObjectName(QStringLiteral("actionSaveForwardAudioUnsync"));
        actionSaveReverseAudioUnsync = new QAction(RtpAnalysisDialog);
        actionSaveReverseAudioUnsync->setObjectName(QStringLiteral("actionSaveReverseAudioUnsync"));
        actionSaveCsv = new QAction(RtpAnalysisDialog);
        actionSaveCsv->setObjectName(QStringLiteral("actionSaveCsv"));
        actionSaveForwardCsv = new QAction(RtpAnalysisDialog);
        actionSaveForwardCsv->setObjectName(QStringLiteral("actionSaveForwardCsv"));
        actionSaveReverseCsv = new QAction(RtpAnalysisDialog);
        actionSaveReverseCsv->setObjectName(QStringLiteral("actionSaveReverseCsv"));
        actionSaveGraph = new QAction(RtpAnalysisDialog);
        actionSaveGraph->setObjectName(QStringLiteral("actionSaveGraph"));
        actionGoToPacket = new QAction(RtpAnalysisDialog);
        actionGoToPacket->setObjectName(QStringLiteral("actionGoToPacket"));
        actionNextProblem = new QAction(RtpAnalysisDialog);
        actionNextProblem->setObjectName(QStringLiteral("actionNextProblem"));
        actionSaveAudioSyncStream = new QAction(RtpAnalysisDialog);
        actionSaveAudioSyncStream->setObjectName(QStringLiteral("actionSaveAudioSyncStream"));
        actionSaveForwardAudioSyncStream = new QAction(RtpAnalysisDialog);
        actionSaveForwardAudioSyncStream->setObjectName(QStringLiteral("actionSaveForwardAudioSyncStream"));
        actionSaveReverseAudioSyncStream = new QAction(RtpAnalysisDialog);
        actionSaveReverseAudioSyncStream->setObjectName(QStringLiteral("actionSaveReverseAudioSyncStream"));
        actionSaveAudioSyncFile = new QAction(RtpAnalysisDialog);
        actionSaveAudioSyncFile->setObjectName(QStringLiteral("actionSaveAudioSyncFile"));
        actionSaveForwardAudioSyncFile = new QAction(RtpAnalysisDialog);
        actionSaveForwardAudioSyncFile->setObjectName(QStringLiteral("actionSaveForwardAudioSyncFile"));
        actionSaveReverseAudioSyncFile = new QAction(RtpAnalysisDialog);
        actionSaveReverseAudioSyncFile->setObjectName(QStringLiteral("actionSaveReverseAudioSyncFile"));
        verticalLayout_3 = new QVBoxLayout(RtpAnalysisDialog);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        statisticsLabel = new QLabel(RtpAnalysisDialog);
        statisticsLabel->setObjectName(QStringLiteral("statisticsLabel"));
        statisticsLabel->setTextFormat(Qt::RichText);
        statisticsLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout->addWidget(statisticsLabel);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

        tabWidget = new QTabWidget(RtpAnalysisDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        forwardTreeWidget = new QTreeWidget();
        forwardTreeWidget->setObjectName(QStringLiteral("forwardTreeWidget"));
        forwardTreeWidget->setRootIsDecorated(false);
        forwardTreeWidget->setUniformRowHeights(true);
        forwardTreeWidget->setItemsExpandable(false);
        forwardTreeWidget->setSortingEnabled(true);
        forwardTreeWidget->setExpandsOnDoubleClick(false);
        tabWidget->addTab(forwardTreeWidget, QString());
        reverseTreeWidget = new QTreeWidget();
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        reverseTreeWidget->setHeaderItem(__qtreewidgetitem);
        reverseTreeWidget->setObjectName(QStringLiteral("reverseTreeWidget"));
        reverseTreeWidget->setRootIsDecorated(false);
        reverseTreeWidget->setUniformRowHeights(true);
        reverseTreeWidget->setItemsExpandable(false);
        reverseTreeWidget->setSortingEnabled(true);
        tabWidget->addTab(reverseTreeWidget, QString());
        graphTab = new QWidget();
        graphTab->setObjectName(QStringLiteral("graphTab"));
        verticalLayout_2 = new QVBoxLayout(graphTab);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        streamGraph = new QCustomPlot(graphTab);
        streamGraph->setObjectName(QStringLiteral("streamGraph"));

        verticalLayout_2->addWidget(streamGraph);

        forwardHorizontalLayout = new QHBoxLayout();
        forwardHorizontalLayout->setObjectName(QStringLiteral("forwardHorizontalLayout"));
        fJitterCheckBox = new QCheckBox(graphTab);
        fJitterCheckBox->setObjectName(QStringLiteral("fJitterCheckBox"));

        forwardHorizontalLayout->addWidget(fJitterCheckBox);

        horizontalSpacer_3 = new QSpacerItem(10, 5, QSizePolicy::Expanding, QSizePolicy::Minimum);

        forwardHorizontalLayout->addItem(horizontalSpacer_3);

        fDiffCheckBox = new QCheckBox(graphTab);
        fDiffCheckBox->setObjectName(QStringLiteral("fDiffCheckBox"));

        forwardHorizontalLayout->addWidget(fDiffCheckBox);

        horizontalSpacer_5 = new QSpacerItem(10, 5, QSizePolicy::Expanding, QSizePolicy::Minimum);

        forwardHorizontalLayout->addItem(horizontalSpacer_5);

        fDeltaCheckBox = new QCheckBox(graphTab);
        fDeltaCheckBox->setObjectName(QStringLiteral("fDeltaCheckBox"));

        forwardHorizontalLayout->addWidget(fDeltaCheckBox);

        horizontalSpacer = new QSpacerItem(10, 5, QSizePolicy::Expanding, QSizePolicy::Minimum);

        forwardHorizontalLayout->addItem(horizontalSpacer);

        forwardHorizontalLayout->setStretch(5, 1);

        verticalLayout_2->addLayout(forwardHorizontalLayout);

        reverseHorizontalLayout = new QHBoxLayout();
        reverseHorizontalLayout->setObjectName(QStringLiteral("reverseHorizontalLayout"));
        rJitterCheckBox = new QCheckBox(graphTab);
        rJitterCheckBox->setObjectName(QStringLiteral("rJitterCheckBox"));

        reverseHorizontalLayout->addWidget(rJitterCheckBox);

        horizontalSpacer_4 = new QSpacerItem(10, 5, QSizePolicy::Expanding, QSizePolicy::Minimum);

        reverseHorizontalLayout->addItem(horizontalSpacer_4);

        rDiffCheckBox = new QCheckBox(graphTab);
        rDiffCheckBox->setObjectName(QStringLiteral("rDiffCheckBox"));

        reverseHorizontalLayout->addWidget(rDiffCheckBox);

        horizontalSpacer_6 = new QSpacerItem(10, 5, QSizePolicy::Expanding, QSizePolicy::Minimum);

        reverseHorizontalLayout->addItem(horizontalSpacer_6);

        rDeltaCheckBox = new QCheckBox(graphTab);
        rDeltaCheckBox->setObjectName(QStringLiteral("rDeltaCheckBox"));

        reverseHorizontalLayout->addWidget(rDeltaCheckBox);

        horizontalSpacer_2 = new QSpacerItem(10, 5, QSizePolicy::Expanding, QSizePolicy::Minimum);

        reverseHorizontalLayout->addItem(horizontalSpacer_2);

        reverseHorizontalLayout->setStretch(5, 1);

        verticalLayout_2->addLayout(reverseHorizontalLayout);

        verticalLayout_2->setStretch(0, 1);
        tabWidget->addTab(graphTab, QString());

        horizontalLayout->addWidget(tabWidget);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        hintLabel = new QLabel(RtpAnalysisDialog);
        hintLabel->setObjectName(QStringLiteral("hintLabel"));
        hintLabel->setWordWrap(true);

        horizontalLayout_2->addWidget(hintLabel);

        progressFrame = new ProgressFrame(RtpAnalysisDialog);
        progressFrame->setObjectName(QStringLiteral("progressFrame"));
        progressFrame->setFrameShape(QFrame::NoFrame);
        progressFrame->setFrameShadow(QFrame::Plain);

        horizontalLayout_2->addWidget(progressFrame);

        horizontalLayout_2->setStretch(0, 1);

        verticalLayout_3->addLayout(horizontalLayout_2);

        buttonBox = new QDialogButtonBox(RtpAnalysisDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help|QDialogButtonBox::Save);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(RtpAnalysisDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), RtpAnalysisDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RtpAnalysisDialog, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(RtpAnalysisDialog);
    } // setupUi

    void retranslateUi(QDialog *RtpAnalysisDialog)
    {
        RtpAnalysisDialog->setWindowTitle(QApplication::translate("RtpAnalysisDialog", "Dialog", 0));
        actionSaveAudioUnsync->setText(QApplication::translate("RtpAnalysisDialog", "Unsynchronized Forward and Reverse Audio", 0));
#ifndef QT_NO_TOOLTIP
        actionSaveAudioUnsync->setToolTip(QApplication::translate("RtpAnalysisDialog", "Save the unsynchronized audio data for both channels.", 0));
#endif // QT_NO_TOOLTIP
        actionSaveForwardAudioUnsync->setText(QApplication::translate("RtpAnalysisDialog", "Unsynchronized Forward Stream Audio", 0));
#ifndef QT_NO_TOOLTIP
        actionSaveForwardAudioUnsync->setToolTip(QApplication::translate("RtpAnalysisDialog", "Save the unsynchronized forward stream audio data.", 0));
#endif // QT_NO_TOOLTIP
        actionSaveReverseAudioUnsync->setText(QApplication::translate("RtpAnalysisDialog", "Unsynchronized Reverse Stream Audio", 0));
#ifndef QT_NO_TOOLTIP
        actionSaveReverseAudioUnsync->setToolTip(QApplication::translate("RtpAnalysisDialog", "Save the unsynchronized reverse stream audio data.", 0));
#endif // QT_NO_TOOLTIP
        actionSaveCsv->setText(QApplication::translate("RtpAnalysisDialog", "CSV", 0));
#ifndef QT_NO_TOOLTIP
        actionSaveCsv->setToolTip(QApplication::translate("RtpAnalysisDialog", "Save both tables as CSV.", 0));
#endif // QT_NO_TOOLTIP
        actionSaveForwardCsv->setText(QApplication::translate("RtpAnalysisDialog", "Forward Stream CSV", 0));
#ifndef QT_NO_TOOLTIP
        actionSaveForwardCsv->setToolTip(QApplication::translate("RtpAnalysisDialog", "Save the forward table as CSV.", 0));
#endif // QT_NO_TOOLTIP
        actionSaveReverseCsv->setText(QApplication::translate("RtpAnalysisDialog", "Reverse Stream CSV", 0));
#ifndef QT_NO_TOOLTIP
        actionSaveReverseCsv->setToolTip(QApplication::translate("RtpAnalysisDialog", "Save the reverse table as CSV.", 0));
#endif // QT_NO_TOOLTIP
        actionSaveGraph->setText(QApplication::translate("RtpAnalysisDialog", "Save Graph", 0));
#ifndef QT_NO_TOOLTIP
        actionSaveGraph->setToolTip(QApplication::translate("RtpAnalysisDialog", "Save the graph image.", 0));
#endif // QT_NO_TOOLTIP
        actionGoToPacket->setText(QApplication::translate("RtpAnalysisDialog", "Go to Packet", 0));
#ifndef QT_NO_TOOLTIP
        actionGoToPacket->setToolTip(QApplication::translate("RtpAnalysisDialog", "Select the corresponding packet in the packet list.", 0));
#endif // QT_NO_TOOLTIP
        actionGoToPacket->setShortcut(QApplication::translate("RtpAnalysisDialog", "G", 0));
        actionNextProblem->setText(QApplication::translate("RtpAnalysisDialog", "Next Problem Packet", 0));
#ifndef QT_NO_TOOLTIP
        actionNextProblem->setToolTip(QApplication::translate("RtpAnalysisDialog", "Go to the next problem packet", 0));
#endif // QT_NO_TOOLTIP
        actionNextProblem->setShortcut(QApplication::translate("RtpAnalysisDialog", "N", 0));
        actionSaveAudioSyncStream->setText(QApplication::translate("RtpAnalysisDialog", "Stream Synchronized Forward and Reverse Audio", 0));
#ifndef QT_NO_TOOLTIP
        actionSaveAudioSyncStream->setToolTip(QApplication::translate("RtpAnalysisDialog", "Save the audio data for both channels synchronized to start of earlier stream.", 0));
#endif // QT_NO_TOOLTIP
        actionSaveForwardAudioSyncStream->setText(QApplication::translate("RtpAnalysisDialog", "Stream Synchronized Forward Stream Audio", 0));
#ifndef QT_NO_TOOLTIP
        actionSaveForwardAudioSyncStream->setToolTip(QApplication::translate("RtpAnalysisDialog", "Save the forward stream audio data synchronized to start of earlier stream.", 0));
#endif // QT_NO_TOOLTIP
        actionSaveReverseAudioSyncStream->setText(QApplication::translate("RtpAnalysisDialog", "Stream Synchronized Reverse Stream Audio", 0));
#ifndef QT_NO_TOOLTIP
        actionSaveReverseAudioSyncStream->setToolTip(QApplication::translate("RtpAnalysisDialog", "Save the reverse stream audio data synchronized to start of earlier stream.", 0));
#endif // QT_NO_TOOLTIP
        actionSaveAudioSyncFile->setText(QApplication::translate("RtpAnalysisDialog", "File Synchronized Forward and Reverse Audio", 0));
#ifndef QT_NO_TOOLTIP
        actionSaveAudioSyncFile->setToolTip(QApplication::translate("RtpAnalysisDialog", "Save the audio data for both channels synchronized to start of file.", 0));
#endif // QT_NO_TOOLTIP
        actionSaveForwardAudioSyncFile->setText(QApplication::translate("RtpAnalysisDialog", "File Synchronized Forward Stream Audio", 0));
#ifndef QT_NO_TOOLTIP
        actionSaveForwardAudioSyncFile->setToolTip(QApplication::translate("RtpAnalysisDialog", "Save the forward stream audio data synchronized to start of file.", 0));
#endif // QT_NO_TOOLTIP
        actionSaveReverseAudioSyncFile->setText(QApplication::translate("RtpAnalysisDialog", "File Synchronized Reverse Stream Audio", 0));
#ifndef QT_NO_TOOLTIP
        actionSaveReverseAudioSyncFile->setToolTip(QApplication::translate("RtpAnalysisDialog", "Save the reverse stream audio data synchronized to start of file.", 0));
#endif // QT_NO_TOOLTIP
        statisticsLabel->setText(QApplication::translate("RtpAnalysisDialog", "<html><head/><body><p><span style=\" font-size:medium; font-weight:600;\">Forward</span></p><p><span style=\" font-size:medium; font-weight:600;\">Reverse</span></p></body></html>", 0));
        QTreeWidgetItem *___qtreewidgetitem = forwardTreeWidget->headerItem();
        ___qtreewidgetitem->setText(7, QApplication::translate("RtpAnalysisDialog", "Status", 0));
        ___qtreewidgetitem->setText(6, QApplication::translate("RtpAnalysisDialog", "Marker", 0));
        ___qtreewidgetitem->setText(5, QApplication::translate("RtpAnalysisDialog", "Bandwidth", 0));
        ___qtreewidgetitem->setText(4, QApplication::translate("RtpAnalysisDialog", "Skew", 0));
        ___qtreewidgetitem->setText(3, QApplication::translate("RtpAnalysisDialog", "Jitter (ms)", 0));
        ___qtreewidgetitem->setText(2, QApplication::translate("RtpAnalysisDialog", "Delta (ms)", 0));
        ___qtreewidgetitem->setText(1, QApplication::translate("RtpAnalysisDialog", "Sequence", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("RtpAnalysisDialog", "Packet", 0));
        tabWidget->setTabText(tabWidget->indexOf(forwardTreeWidget), QApplication::translate("RtpAnalysisDialog", "Forward", 0));
        tabWidget->setTabText(tabWidget->indexOf(reverseTreeWidget), QApplication::translate("RtpAnalysisDialog", "Reverse", 0));
#ifndef QT_NO_TOOLTIP
        fJitterCheckBox->setToolTip(QApplication::translate("RtpAnalysisDialog", "<html><head/><body><p>Show or hide forward jitter values.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        fJitterCheckBox->setText(QApplication::translate("RtpAnalysisDialog", "Forward Jitter", 0));
#ifndef QT_NO_TOOLTIP
        fDiffCheckBox->setToolTip(QApplication::translate("RtpAnalysisDialog", "<html><head/><body><p>Show or hide forward difference values.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        fDiffCheckBox->setText(QApplication::translate("RtpAnalysisDialog", "Forward Difference", 0));
#ifndef QT_NO_TOOLTIP
        fDeltaCheckBox->setToolTip(QApplication::translate("RtpAnalysisDialog", "<html><head/><body><p>Show or hide forward delta values.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        fDeltaCheckBox->setText(QApplication::translate("RtpAnalysisDialog", "Forward Delta", 0));
#ifndef QT_NO_TOOLTIP
        rJitterCheckBox->setToolTip(QApplication::translate("RtpAnalysisDialog", "<html><head/><body><p>Show or hide reverse jitter values.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        rJitterCheckBox->setText(QApplication::translate("RtpAnalysisDialog", "Reverse Jitter", 0));
#ifndef QT_NO_TOOLTIP
        rDiffCheckBox->setToolTip(QApplication::translate("RtpAnalysisDialog", "<html><head/><body><p>Show or hide reverse difference values.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        rDiffCheckBox->setText(QApplication::translate("RtpAnalysisDialog", "Reverse Difference", 0));
#ifndef QT_NO_TOOLTIP
        rDeltaCheckBox->setToolTip(QApplication::translate("RtpAnalysisDialog", "<html><head/><body><p>Show or hide reverse delta values.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        rDeltaCheckBox->setText(QApplication::translate("RtpAnalysisDialog", "Reverse Delta", 0));
        tabWidget->setTabText(tabWidget->indexOf(graphTab), QApplication::translate("RtpAnalysisDialog", "Graph", 0));
        hintLabel->setText(QApplication::translate("RtpAnalysisDialog", "<small><i>A hint.</i></small>", 0));
    } // retranslateUi

};

namespace Ui {
    class RtpAnalysisDialog: public Ui_RtpAnalysisDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RTP_ANALYSIS_DIALOG_H
