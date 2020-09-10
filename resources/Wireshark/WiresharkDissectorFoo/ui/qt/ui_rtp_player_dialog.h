/********************************************************************************
** Form generated from reading UI file 'rtp_player_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RTP_PLAYER_DIALOG_H
#define UI_RTP_PLAYER_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include "widgets/qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_RtpPlayerDialog
{
public:
    QAction *actionReset;
    QAction *actionZoomIn;
    QAction *actionZoomOut;
    QAction *actionMoveLeft10;
    QAction *actionMoveRight10;
    QAction *actionMoveLeft1;
    QAction *actionMoveRight1;
    QAction *actionGoToPacket;
    QAction *actionDragZoom;
    QAction *actionToggleTimeOrigin;
    QAction *actionCrosshairs;
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QCustomPlot *audioPlot;
    QTreeWidget *streamTreeWidget;
    QLabel *hintLabel;
    QHBoxLayout *horizontalLayout;
    QToolButton *playButton;
    QSpacerItem *horizontalSpacer_4;
    QToolButton *stopButton;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_3;
    QComboBox *outputDeviceComboBox;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QDoubleSpinBox *jitterSpinBox;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QComboBox *timingComboBox;
    QSpacerItem *horizontalSpacer;
    QCheckBox *todCheckBox;
    QSpacerItem *horizontalSpacer_5;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RtpPlayerDialog)
    {
        if (RtpPlayerDialog->objectName().isEmpty())
            RtpPlayerDialog->setObjectName(QStringLiteral("RtpPlayerDialog"));
        RtpPlayerDialog->resize(750, 600);
        actionReset = new QAction(RtpPlayerDialog);
        actionReset->setObjectName(QStringLiteral("actionReset"));
        actionZoomIn = new QAction(RtpPlayerDialog);
        actionZoomIn->setObjectName(QStringLiteral("actionZoomIn"));
        actionZoomOut = new QAction(RtpPlayerDialog);
        actionZoomOut->setObjectName(QStringLiteral("actionZoomOut"));
        actionMoveLeft10 = new QAction(RtpPlayerDialog);
        actionMoveLeft10->setObjectName(QStringLiteral("actionMoveLeft10"));
        actionMoveRight10 = new QAction(RtpPlayerDialog);
        actionMoveRight10->setObjectName(QStringLiteral("actionMoveRight10"));
        actionMoveLeft1 = new QAction(RtpPlayerDialog);
        actionMoveLeft1->setObjectName(QStringLiteral("actionMoveLeft1"));
        actionMoveRight1 = new QAction(RtpPlayerDialog);
        actionMoveRight1->setObjectName(QStringLiteral("actionMoveRight1"));
        actionGoToPacket = new QAction(RtpPlayerDialog);
        actionGoToPacket->setObjectName(QStringLiteral("actionGoToPacket"));
        actionDragZoom = new QAction(RtpPlayerDialog);
        actionDragZoom->setObjectName(QStringLiteral("actionDragZoom"));
        actionToggleTimeOrigin = new QAction(RtpPlayerDialog);
        actionToggleTimeOrigin->setObjectName(QStringLiteral("actionToggleTimeOrigin"));
        actionCrosshairs = new QAction(RtpPlayerDialog);
        actionCrosshairs->setObjectName(QStringLiteral("actionCrosshairs"));
        verticalLayout = new QVBoxLayout(RtpPlayerDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        splitter = new QSplitter(RtpPlayerDialog);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        audioPlot = new QCustomPlot(splitter);
        audioPlot->setObjectName(QStringLiteral("audioPlot"));
        splitter->addWidget(audioPlot);
        streamTreeWidget = new QTreeWidget(splitter);
        streamTreeWidget->setObjectName(QStringLiteral("streamTreeWidget"));
        streamTreeWidget->setRootIsDecorated(false);
        streamTreeWidget->setUniformRowHeights(true);
        streamTreeWidget->setItemsExpandable(false);
        splitter->addWidget(streamTreeWidget);

        verticalLayout->addWidget(splitter);

        hintLabel = new QLabel(RtpPlayerDialog);
        hintLabel->setObjectName(QStringLiteral("hintLabel"));
        hintLabel->setWordWrap(true);

        verticalLayout->addWidget(hintLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        playButton = new QToolButton(RtpPlayerDialog);
        playButton->setObjectName(QStringLiteral("playButton"));

        horizontalLayout->addWidget(playButton);

        horizontalSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        stopButton = new QToolButton(RtpPlayerDialog);
        stopButton->setObjectName(QStringLiteral("stopButton"));

        horizontalLayout->addWidget(stopButton);

        horizontalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        label_3 = new QLabel(RtpPlayerDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        outputDeviceComboBox = new QComboBox(RtpPlayerDialog);
        outputDeviceComboBox->setObjectName(QStringLiteral("outputDeviceComboBox"));

        horizontalLayout->addWidget(outputDeviceComboBox);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        horizontalLayout->setStretch(6, 1);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(RtpPlayerDialog);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        jitterSpinBox = new QDoubleSpinBox(RtpPlayerDialog);
        jitterSpinBox->setObjectName(QStringLiteral("jitterSpinBox"));
        jitterSpinBox->setDecimals(0);
        jitterSpinBox->setMaximum(500);
        jitterSpinBox->setSingleStep(5);
        jitterSpinBox->setValue(50);

        horizontalLayout_2->addWidget(jitterSpinBox);

        horizontalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label_2 = new QLabel(RtpPlayerDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        timingComboBox = new QComboBox(RtpPlayerDialog);
        timingComboBox->setObjectName(QStringLiteral("timingComboBox"));

        horizontalLayout_2->addWidget(timingComboBox);

        horizontalSpacer = new QSpacerItem(20, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        todCheckBox = new QCheckBox(RtpPlayerDialog);
        todCheckBox->setObjectName(QStringLiteral("todCheckBox"));

        horizontalLayout_2->addWidget(todCheckBox);

        horizontalSpacer_5 = new QSpacerItem(48, 24, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        horizontalLayout_2->setStretch(7, 1);

        verticalLayout->addLayout(horizontalLayout_2);

        buttonBox = new QDialogButtonBox(RtpPlayerDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(RtpPlayerDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), RtpPlayerDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RtpPlayerDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(RtpPlayerDialog);
    } // setupUi

    void retranslateUi(QDialog *RtpPlayerDialog)
    {
        RtpPlayerDialog->setWindowTitle(QApplication::translate("RtpPlayerDialog", "RTP Player", 0));
        actionReset->setText(QApplication::translate("RtpPlayerDialog", "Reset Graph", 0));
#ifndef QT_NO_TOOLTIP
        actionReset->setToolTip(QApplication::translate("RtpPlayerDialog", "Reset the graph to its initial state.", 0));
#endif // QT_NO_TOOLTIP
        actionReset->setShortcut(QApplication::translate("RtpPlayerDialog", "0", 0));
        actionZoomIn->setText(QApplication::translate("RtpPlayerDialog", "Zoom In", 0));
#ifndef QT_NO_TOOLTIP
        actionZoomIn->setToolTip(QApplication::translate("RtpPlayerDialog", "Zoom In", 0));
#endif // QT_NO_TOOLTIP
        actionZoomIn->setShortcut(QApplication::translate("RtpPlayerDialog", "+", 0));
        actionZoomOut->setText(QApplication::translate("RtpPlayerDialog", "Zoom Out", 0));
#ifndef QT_NO_TOOLTIP
        actionZoomOut->setToolTip(QApplication::translate("RtpPlayerDialog", "Zoom Out", 0));
#endif // QT_NO_TOOLTIP
        actionZoomOut->setShortcut(QApplication::translate("RtpPlayerDialog", "-", 0));
        actionMoveLeft10->setText(QApplication::translate("RtpPlayerDialog", "Move Left 10 Pixels", 0));
#ifndef QT_NO_TOOLTIP
        actionMoveLeft10->setToolTip(QApplication::translate("RtpPlayerDialog", "Move Left 10 Pixels", 0));
#endif // QT_NO_TOOLTIP
        actionMoveLeft10->setShortcut(QApplication::translate("RtpPlayerDialog", "Left", 0));
        actionMoveRight10->setText(QApplication::translate("RtpPlayerDialog", "Move Right 10 Pixels", 0));
#ifndef QT_NO_TOOLTIP
        actionMoveRight10->setToolTip(QApplication::translate("RtpPlayerDialog", "Move Right 10 Pixels", 0));
#endif // QT_NO_TOOLTIP
        actionMoveRight10->setShortcut(QApplication::translate("RtpPlayerDialog", "Right", 0));
        actionMoveLeft1->setText(QApplication::translate("RtpPlayerDialog", "Move Left 1 Pixels", 0));
#ifndef QT_NO_TOOLTIP
        actionMoveLeft1->setToolTip(QApplication::translate("RtpPlayerDialog", "Move Left 1 Pixels", 0));
#endif // QT_NO_TOOLTIP
        actionMoveLeft1->setShortcut(QApplication::translate("RtpPlayerDialog", "Shift+Left", 0));
        actionMoveRight1->setText(QApplication::translate("RtpPlayerDialog", "Move Right 1 Pixels", 0));
#ifndef QT_NO_TOOLTIP
        actionMoveRight1->setToolTip(QApplication::translate("RtpPlayerDialog", "Move Right 1 Pixels", 0));
#endif // QT_NO_TOOLTIP
        actionMoveRight1->setShortcut(QApplication::translate("RtpPlayerDialog", "Shift+Right", 0));
        actionGoToPacket->setText(QApplication::translate("RtpPlayerDialog", "Go To Packet Under Cursor", 0));
#ifndef QT_NO_TOOLTIP
        actionGoToPacket->setToolTip(QApplication::translate("RtpPlayerDialog", "Go to packet currently under the cursor", 0));
#endif // QT_NO_TOOLTIP
        actionGoToPacket->setShortcut(QApplication::translate("RtpPlayerDialog", "G", 0));
        actionDragZoom->setText(QApplication::translate("RtpPlayerDialog", "Drag / Zoom", 0));
#ifndef QT_NO_TOOLTIP
        actionDragZoom->setToolTip(QApplication::translate("RtpPlayerDialog", "Toggle mouse drag / zoom behavior", 0));
#endif // QT_NO_TOOLTIP
        actionDragZoom->setShortcut(QApplication::translate("RtpPlayerDialog", "Z", 0));
        actionToggleTimeOrigin->setText(QApplication::translate("RtpPlayerDialog", "Capture / Session Time Origin", 0));
#ifndef QT_NO_TOOLTIP
        actionToggleTimeOrigin->setToolTip(QApplication::translate("RtpPlayerDialog", "Toggle capture / session time origin", 0));
#endif // QT_NO_TOOLTIP
        actionToggleTimeOrigin->setShortcut(QApplication::translate("RtpPlayerDialog", "T", 0));
        actionCrosshairs->setText(QApplication::translate("RtpPlayerDialog", "Crosshairs", 0));
#ifndef QT_NO_TOOLTIP
        actionCrosshairs->setToolTip(QApplication::translate("RtpPlayerDialog", "Toggle crosshairs", 0));
#endif // QT_NO_TOOLTIP
        actionCrosshairs->setShortcut(QApplication::translate("RtpPlayerDialog", "Space", 0));
        QTreeWidgetItem *___qtreewidgetitem = streamTreeWidget->headerItem();
        ___qtreewidgetitem->setText(9, QApplication::translate("RtpPlayerDialog", "Payloads", 0));
        ___qtreewidgetitem->setText(8, QApplication::translate("RtpPlayerDialog", "Sample Rate (Hz)", 0));
        ___qtreewidgetitem->setText(7, QApplication::translate("RtpPlayerDialog", "Time Span (s)", 0));
        ___qtreewidgetitem->setText(6, QApplication::translate("RtpPlayerDialog", "Packets", 0));
        ___qtreewidgetitem->setText(5, QApplication::translate("RtpPlayerDialog", "Setup Frame", 0));
        ___qtreewidgetitem->setText(4, QApplication::translate("RtpPlayerDialog", "SSRC", 0));
        ___qtreewidgetitem->setText(3, QApplication::translate("RtpPlayerDialog", "Destination Port", 0));
        ___qtreewidgetitem->setText(2, QApplication::translate("RtpPlayerDialog", "Destination Address", 0));
        ___qtreewidgetitem->setText(1, QApplication::translate("RtpPlayerDialog", "Source Port", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("RtpPlayerDialog", "Source Address", 0));
#ifndef QT_NO_TOOLTIP
        hintLabel->setToolTip(QApplication::translate("RtpPlayerDialog", "<html><head/><body>\n"
"\n"
"<h3>Valuable and amazing time-saving keyboard shortcuts</h3>\n"
"<table><tbody>\n"
"\n"
"<tr><th>+</th><td>Zoom in</td></th>\n"
"<tr><th>-</th><td>Zoom out</td></th>\n"
"<tr><th>0</th><td>Reset graph to its initial state</td></th>\n"
"\n"
"<tr><th>\342\206\222</th><td>Move right 10 pixels</td></th>\n"
"<tr><th>\342\206\220</th><td>Move left 10 pixels</td></th>\n"
"<tr><th><i>Shift+</i>\342\206\222</th><td>Move right 1 pixel</td></th>\n"
"<tr><th><i>Shift+</i>\342\206\220</th><td>Move left 1 pixel</td></th>\n"
"\n"
"<tr><th>g</th><td>Go to packet under cursor</td></th>\n"
"\n"
"<tr><th>z</th><td>Toggle mouse drag / zoom</td></th>\n"
"<tr><th>t</th><td>Toggle capture / session time origin</td></th>\n"
"<tr><th>Space</th><td>Toggle crosshairs</td></th>\n"
"\n"
"</tbody></table>\n"
"</body></html>", 0));
#endif // QT_NO_TOOLTIP
        hintLabel->setText(QApplication::translate("RtpPlayerDialog", "<small><i>No audio</i></small>", 0));
        playButton->setText(QString());
        stopButton->setText(QString());
        label_3->setText(QApplication::translate("RtpPlayerDialog", "Output Device:", 0));
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("RtpPlayerDialog", "<html><head/><body><p><br/></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("RtpPlayerDialog", "Jitter Buffer:", 0));
#ifndef QT_NO_TOOLTIP
        jitterSpinBox->setToolTip(QApplication::translate("RtpPlayerDialog", "The simulated jitter buffer in milliseconds.", 0));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("RtpPlayerDialog", "Playback Timing:", 0));
        timingComboBox->clear();
        timingComboBox->insertItems(0, QStringList()
         << QApplication::translate("RtpPlayerDialog", "Jitter Buffer", 0)
         << QApplication::translate("RtpPlayerDialog", "RTP Timestamp", 0)
         << QApplication::translate("RtpPlayerDialog", "Uninterrupted Mode", 0)
        );
#ifndef QT_NO_TOOLTIP
        timingComboBox->setToolTip(QApplication::translate("RtpPlayerDialog", "<strong>Jitter Buffer</strong>: Use jitter buffer to simulate the RTP stream as heard by the end user.\n"
"<br/>\n"
"<strong>RTP Timestamp</strong>: Use RTP Timestamp instead of the arriving packet time. This will not reproduce the RTP stream as the user heard it, but is useful when the RTP is being tunneled and the original packet timing is missing.\n"
"<br/>\n"
"<strong>Uninterrupted Mode</strong>: Ignore the RTP Timestamp. Play the stream as it is completed. This is useful when the RTP timestamp is missing.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        todCheckBox->setToolTip(QApplication::translate("RtpPlayerDialog", "<html><head/><body><p>View the timestamps as time of day (checked) or seconds since beginning of capture (unchecked).</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        todCheckBox->setText(QApplication::translate("RtpPlayerDialog", "Time of Day", 0));
    } // retranslateUi

};

namespace Ui {
    class RtpPlayerDialog: public Ui_RtpPlayerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RTP_PLAYER_DIALOG_H
