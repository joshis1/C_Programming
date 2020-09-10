/********************************************************************************
** Form generated from reading UI file 'rtp_stream_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RTP_STREAM_DIALOG_H
#define UI_RTP_STREAM_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RtpStreamDialog
{
public:
    QAction *actionFindReverse;
    QAction *actionMarkPackets;
    QAction *actionSelectNone;
    QAction *actionGoToSetup;
    QAction *actionPrepareFilter;
    QAction *actionExportAsRtpDump;
    QAction *actionAnalyze;
    QAction *actionCopyAsCsv;
    QAction *actionCopyAsYaml;
    QVBoxLayout *verticalLayout;
    QTreeWidget *streamTreeWidget;
    QLabel *hintLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RtpStreamDialog)
    {
        if (RtpStreamDialog->objectName().isEmpty())
            RtpStreamDialog->setObjectName(QStringLiteral("RtpStreamDialog"));
        RtpStreamDialog->resize(600, 460);
        actionFindReverse = new QAction(RtpStreamDialog);
        actionFindReverse->setObjectName(QStringLiteral("actionFindReverse"));
        actionMarkPackets = new QAction(RtpStreamDialog);
        actionMarkPackets->setObjectName(QStringLiteral("actionMarkPackets"));
        actionSelectNone = new QAction(RtpStreamDialog);
        actionSelectNone->setObjectName(QStringLiteral("actionSelectNone"));
        actionGoToSetup = new QAction(RtpStreamDialog);
        actionGoToSetup->setObjectName(QStringLiteral("actionGoToSetup"));
        actionPrepareFilter = new QAction(RtpStreamDialog);
        actionPrepareFilter->setObjectName(QStringLiteral("actionPrepareFilter"));
        actionExportAsRtpDump = new QAction(RtpStreamDialog);
        actionExportAsRtpDump->setObjectName(QStringLiteral("actionExportAsRtpDump"));
        actionAnalyze = new QAction(RtpStreamDialog);
        actionAnalyze->setObjectName(QStringLiteral("actionAnalyze"));
        actionCopyAsCsv = new QAction(RtpStreamDialog);
        actionCopyAsCsv->setObjectName(QStringLiteral("actionCopyAsCsv"));
        actionCopyAsYaml = new QAction(RtpStreamDialog);
        actionCopyAsYaml->setObjectName(QStringLiteral("actionCopyAsYaml"));
        verticalLayout = new QVBoxLayout(RtpStreamDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        streamTreeWidget = new QTreeWidget(RtpStreamDialog);
        streamTreeWidget->setObjectName(QStringLiteral("streamTreeWidget"));
        streamTreeWidget->setSelectionMode(QAbstractItemView::MultiSelection);
        streamTreeWidget->setTextElideMode(Qt::ElideMiddle);
        streamTreeWidget->setRootIsDecorated(false);
        streamTreeWidget->setUniformRowHeights(true);
        streamTreeWidget->setItemsExpandable(false);
        streamTreeWidget->setSortingEnabled(true);
        streamTreeWidget->setExpandsOnDoubleClick(false);
        streamTreeWidget->header()->setDefaultSectionSize(50);

        verticalLayout->addWidget(streamTreeWidget);

        hintLabel = new QLabel(RtpStreamDialog);
        hintLabel->setObjectName(QStringLiteral("hintLabel"));
        hintLabel->setWordWrap(true);

        verticalLayout->addWidget(hintLabel);

        buttonBox = new QDialogButtonBox(RtpStreamDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(RtpStreamDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), RtpStreamDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RtpStreamDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(RtpStreamDialog);
    } // setupUi

    void retranslateUi(QDialog *RtpStreamDialog)
    {
        RtpStreamDialog->setWindowTitle(QApplication::translate("RtpStreamDialog", "Dialog", 0));
        actionFindReverse->setText(QApplication::translate("RtpStreamDialog", "Find Reverse", 0));
#ifndef QT_NO_TOOLTIP
        actionFindReverse->setToolTip(QApplication::translate("RtpStreamDialog", "Find the reverse stream matching the selected forward stream.", 0));
#endif // QT_NO_TOOLTIP
        actionFindReverse->setShortcut(QApplication::translate("RtpStreamDialog", "R", 0));
        actionMarkPackets->setText(QApplication::translate("RtpStreamDialog", "Mark Packets", 0));
#ifndef QT_NO_TOOLTIP
        actionMarkPackets->setToolTip(QApplication::translate("RtpStreamDialog", "Mark the packets of the selected stream(s).", 0));
#endif // QT_NO_TOOLTIP
        actionMarkPackets->setShortcut(QApplication::translate("RtpStreamDialog", "M", 0));
        actionSelectNone->setText(QApplication::translate("RtpStreamDialog", "Select None", 0));
#ifndef QT_NO_TOOLTIP
        actionSelectNone->setToolTip(QApplication::translate("RtpStreamDialog", "Undo stream selection.", 0));
#endif // QT_NO_TOOLTIP
        actionGoToSetup->setText(QApplication::translate("RtpStreamDialog", "Go To Setup", 0));
#ifndef QT_NO_TOOLTIP
        actionGoToSetup->setToolTip(QApplication::translate("RtpStreamDialog", "Go to the setup packet for this stream.", 0));
#endif // QT_NO_TOOLTIP
        actionGoToSetup->setShortcut(QApplication::translate("RtpStreamDialog", "G", 0));
        actionPrepareFilter->setText(QApplication::translate("RtpStreamDialog", "Prepare Filter", 0));
#ifndef QT_NO_TOOLTIP
        actionPrepareFilter->setToolTip(QApplication::translate("RtpStreamDialog", "Prepare a filter matching the selected stream(s).", 0));
#endif // QT_NO_TOOLTIP
        actionPrepareFilter->setShortcut(QApplication::translate("RtpStreamDialog", "P", 0));
        actionExportAsRtpDump->setText(QApplication::translate("RtpStreamDialog", "Export As RTPDump", 0));
#ifndef QT_NO_TOOLTIP
        actionExportAsRtpDump->setToolTip(QApplication::translate("RtpStreamDialog", "Export the stream payload as rtpdump", 0));
#endif // QT_NO_TOOLTIP
        actionExportAsRtpDump->setShortcut(QApplication::translate("RtpStreamDialog", "E", 0));
        actionAnalyze->setText(QApplication::translate("RtpStreamDialog", "Analyze", 0));
#ifndef QT_NO_TOOLTIP
        actionAnalyze->setToolTip(QApplication::translate("RtpStreamDialog", "Open the analysis window for the selected stream(s)", 0));
#endif // QT_NO_TOOLTIP
        actionCopyAsCsv->setText(QApplication::translate("RtpStreamDialog", "Copy as CSV", 0));
#ifndef QT_NO_TOOLTIP
        actionCopyAsCsv->setToolTip(QApplication::translate("RtpStreamDialog", "Copy stream list as CSV.", 0));
#endif // QT_NO_TOOLTIP
        actionCopyAsYaml->setText(QApplication::translate("RtpStreamDialog", "Copy as YAML", 0));
#ifndef QT_NO_TOOLTIP
        actionCopyAsYaml->setToolTip(QApplication::translate("RtpStreamDialog", "Copy stream list as YAML.", 0));
#endif // QT_NO_TOOLTIP
        QTreeWidgetItem *___qtreewidgetitem = streamTreeWidget->headerItem();
        ___qtreewidgetitem->setText(11, QApplication::translate("RtpStreamDialog", "Status", 0));
        ___qtreewidgetitem->setText(10, QApplication::translate("RtpStreamDialog", "Mean Jitter", 0));
        ___qtreewidgetitem->setText(9, QApplication::translate("RtpStreamDialog", "Max Jitter", 0));
        ___qtreewidgetitem->setText(8, QApplication::translate("RtpStreamDialog", "Max Delta (ms)", 0));
        ___qtreewidgetitem->setText(7, QApplication::translate("RtpStreamDialog", "Lost", 0));
        ___qtreewidgetitem->setText(6, QApplication::translate("RtpStreamDialog", "Packets", 0));
        ___qtreewidgetitem->setText(5, QApplication::translate("RtpStreamDialog", "Payload", 0));
        ___qtreewidgetitem->setText(4, QApplication::translate("RtpStreamDialog", "SSRC", 0));
        ___qtreewidgetitem->setText(3, QApplication::translate("RtpStreamDialog", "Destination Port", 0));
        ___qtreewidgetitem->setText(2, QApplication::translate("RtpStreamDialog", "Destination Address", 0));
        ___qtreewidgetitem->setText(1, QApplication::translate("RtpStreamDialog", "Source Port", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("RtpStreamDialog", "Source Address", 0));
        hintLabel->setText(QApplication::translate("RtpStreamDialog", "<small><i>A hint.</i></small>", 0));
    } // retranslateUi

};

namespace Ui {
    class RtpStreamDialog: public Ui_RtpStreamDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RTP_STREAM_DIALOG_H
