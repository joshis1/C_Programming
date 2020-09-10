/********************************************************************************
** Form generated from reading UI file 'tcp_stream_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCP_STREAM_DIALOG_H
#define UI_TCP_STREAM_DIALOG_H

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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include "widgets/qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_TCPStreamDialog
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
    QAction *actionZoomInX;
    QAction *actionZoomOutX;
    QAction *actionZoomInY;
    QAction *actionZoomOutY;
    QVBoxLayout *verticalLayout;
    QCustomPlot *streamPlot;
    QLabel *hintLabel;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *graphTypeComboBox;
    QSpacerItem *horizontalSpacer_1a;
    QLabel *maWindowSizeLabel;
    QDoubleSpinBox *maWindowSizeSpinBox;
    QCheckBox *selectSACKsCheckBox;
    QSpacerItem *horizontalSpacer_1b;
    QLabel *streamNumberLabel;
    QSpinBox *streamNumberSpinBox;
    QPushButton *otherDirectionButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *mouseLabel;
    QRadioButton *dragRadioButton;
    QRadioButton *zoomRadioButton;
    QSpacerItem *horizontalSpacer_2a;
    QCheckBox *bySeqNumberCheckBox;
    QCheckBox *showSegLengthCheckBox;
    QCheckBox *showThroughputCheckBox;
    QCheckBox *showGoodputCheckBox;
    QCheckBox *showRcvWinCheckBox;
    QCheckBox *showBytesOutCheckBox;
    QSpacerItem *horizontalSpacer_2b;
    QPushButton *resetButton;
    QDialogButtonBox *buttonBox;
    QButtonGroup *mouseButtonGroup;

    void setupUi(QDialog *TCPStreamDialog)
    {
        if (TCPStreamDialog->objectName().isEmpty())
            TCPStreamDialog->setObjectName(QStringLiteral("TCPStreamDialog"));
        TCPStreamDialog->resize(850, 640);
        actionReset = new QAction(TCPStreamDialog);
        actionReset->setObjectName(QStringLiteral("actionReset"));
        actionZoomIn = new QAction(TCPStreamDialog);
        actionZoomIn->setObjectName(QStringLiteral("actionZoomIn"));
        actionZoomOut = new QAction(TCPStreamDialog);
        actionZoomOut->setObjectName(QStringLiteral("actionZoomOut"));
        actionMoveUp10 = new QAction(TCPStreamDialog);
        actionMoveUp10->setObjectName(QStringLiteral("actionMoveUp10"));
        actionMoveLeft10 = new QAction(TCPStreamDialog);
        actionMoveLeft10->setObjectName(QStringLiteral("actionMoveLeft10"));
        actionMoveRight10 = new QAction(TCPStreamDialog);
        actionMoveRight10->setObjectName(QStringLiteral("actionMoveRight10"));
        actionMoveDown10 = new QAction(TCPStreamDialog);
        actionMoveDown10->setObjectName(QStringLiteral("actionMoveDown10"));
        actionMoveUp1 = new QAction(TCPStreamDialog);
        actionMoveUp1->setObjectName(QStringLiteral("actionMoveUp1"));
        actionMoveLeft1 = new QAction(TCPStreamDialog);
        actionMoveLeft1->setObjectName(QStringLiteral("actionMoveLeft1"));
        actionMoveRight1 = new QAction(TCPStreamDialog);
        actionMoveRight1->setObjectName(QStringLiteral("actionMoveRight1"));
        actionMoveDown1 = new QAction(TCPStreamDialog);
        actionMoveDown1->setObjectName(QStringLiteral("actionMoveDown1"));
        actionNextStream = new QAction(TCPStreamDialog);
        actionNextStream->setObjectName(QStringLiteral("actionNextStream"));
        actionPreviousStream = new QAction(TCPStreamDialog);
        actionPreviousStream->setObjectName(QStringLiteral("actionPreviousStream"));
        actionSwitchDirection = new QAction(TCPStreamDialog);
        actionSwitchDirection->setObjectName(QStringLiteral("actionSwitchDirection"));
        actionGoToPacket = new QAction(TCPStreamDialog);
        actionGoToPacket->setObjectName(QStringLiteral("actionGoToPacket"));
        actionDragZoom = new QAction(TCPStreamDialog);
        actionDragZoom->setObjectName(QStringLiteral("actionDragZoom"));
        actionToggleSequenceNumbers = new QAction(TCPStreamDialog);
        actionToggleSequenceNumbers->setObjectName(QStringLiteral("actionToggleSequenceNumbers"));
        actionToggleTimeOrigin = new QAction(TCPStreamDialog);
        actionToggleTimeOrigin->setObjectName(QStringLiteral("actionToggleTimeOrigin"));
        actionCrosshairs = new QAction(TCPStreamDialog);
        actionCrosshairs->setObjectName(QStringLiteral("actionCrosshairs"));
        actionRoundTripTime = new QAction(TCPStreamDialog);
        actionRoundTripTime->setObjectName(QStringLiteral("actionRoundTripTime"));
        actionThroughput = new QAction(TCPStreamDialog);
        actionThroughput->setObjectName(QStringLiteral("actionThroughput"));
        actionStevens = new QAction(TCPStreamDialog);
        actionStevens->setObjectName(QStringLiteral("actionStevens"));
        actionWindowScaling = new QAction(TCPStreamDialog);
        actionWindowScaling->setObjectName(QStringLiteral("actionWindowScaling"));
        actionTcptrace = new QAction(TCPStreamDialog);
        actionTcptrace->setObjectName(QStringLiteral("actionTcptrace"));
        actionZoomInX = new QAction(TCPStreamDialog);
        actionZoomInX->setObjectName(QStringLiteral("actionZoomInX"));
        actionZoomOutX = new QAction(TCPStreamDialog);
        actionZoomOutX->setObjectName(QStringLiteral("actionZoomOutX"));
        actionZoomInY = new QAction(TCPStreamDialog);
        actionZoomInY->setObjectName(QStringLiteral("actionZoomInY"));
        actionZoomOutY = new QAction(TCPStreamDialog);
        actionZoomOutY->setObjectName(QStringLiteral("actionZoomOutY"));
        verticalLayout = new QVBoxLayout(TCPStreamDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        streamPlot = new QCustomPlot(TCPStreamDialog);
        streamPlot->setObjectName(QStringLiteral("streamPlot"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(streamPlot->sizePolicy().hasHeightForWidth());
        streamPlot->setSizePolicy(sizePolicy);
        streamPlot->setFocusPolicy(Qt::TabFocus);

        verticalLayout->addWidget(streamPlot);

        hintLabel = new QLabel(TCPStreamDialog);
        hintLabel->setObjectName(QStringLiteral("hintLabel"));
        hintLabel->setWordWrap(true);

        verticalLayout->addWidget(hintLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(TCPStreamDialog);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        graphTypeComboBox = new QComboBox(TCPStreamDialog);
        graphTypeComboBox->setObjectName(QStringLiteral("graphTypeComboBox"));
        graphTypeComboBox->setFrame(false);
        graphTypeComboBox->setFocusPolicy(Qt::TabFocus);

        horizontalLayout->addWidget(graphTypeComboBox);

        horizontalSpacer_1a = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_1a);

        maWindowSizeLabel = new QLabel(TCPStreamDialog);
        maWindowSizeLabel->setObjectName(QStringLiteral("maWindowSizeLabel"));

        horizontalLayout->addWidget(maWindowSizeLabel);

        maWindowSizeSpinBox = new QDoubleSpinBox(TCPStreamDialog);
        maWindowSizeSpinBox->setObjectName(QStringLiteral("maWindowSizeSpinBox"));

        horizontalLayout->addWidget(maWindowSizeSpinBox);

        selectSACKsCheckBox = new QCheckBox(TCPStreamDialog);
        selectSACKsCheckBox->setObjectName(QStringLiteral("selectSACKsCheckBox"));
        selectSACKsCheckBox->setFocusPolicy(Qt::TabFocus);

        horizontalLayout->addWidget(selectSACKsCheckBox);

        horizontalSpacer_1b = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_1b);

        streamNumberLabel = new QLabel(TCPStreamDialog);
        streamNumberLabel->setObjectName(QStringLiteral("streamNumberLabel"));

        horizontalLayout->addWidget(streamNumberLabel);

        streamNumberSpinBox = new QSpinBox(TCPStreamDialog);
        streamNumberSpinBox->setObjectName(QStringLiteral("streamNumberSpinBox"));

        horizontalLayout->addWidget(streamNumberSpinBox);

        otherDirectionButton = new QPushButton(TCPStreamDialog);
        otherDirectionButton->setObjectName(QStringLiteral("otherDirectionButton"));

        horizontalLayout->addWidget(otherDirectionButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        mouseLabel = new QLabel(TCPStreamDialog);
        mouseLabel->setObjectName(QStringLiteral("mouseLabel"));

        horizontalLayout_2->addWidget(mouseLabel);

        dragRadioButton = new QRadioButton(TCPStreamDialog);
        mouseButtonGroup = new QButtonGroup(TCPStreamDialog);
        mouseButtonGroup->setObjectName(QStringLiteral("mouseButtonGroup"));
        mouseButtonGroup->addButton(dragRadioButton);
        dragRadioButton->setObjectName(QStringLiteral("dragRadioButton"));
        dragRadioButton->setCheckable(true);
        dragRadioButton->setFocusPolicy(Qt::TabFocus);

        horizontalLayout_2->addWidget(dragRadioButton);

        zoomRadioButton = new QRadioButton(TCPStreamDialog);
        mouseButtonGroup->addButton(zoomRadioButton);
        zoomRadioButton->setObjectName(QStringLiteral("zoomRadioButton"));
        zoomRadioButton->setCheckable(true);
        zoomRadioButton->setFocusPolicy(Qt::TabFocus);

        horizontalLayout_2->addWidget(zoomRadioButton);

        horizontalSpacer_2a = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2a);

        bySeqNumberCheckBox = new QCheckBox(TCPStreamDialog);
        bySeqNumberCheckBox->setObjectName(QStringLiteral("bySeqNumberCheckBox"));
        bySeqNumberCheckBox->setFocusPolicy(Qt::TabFocus);

        horizontalLayout_2->addWidget(bySeqNumberCheckBox);

        showSegLengthCheckBox = new QCheckBox(TCPStreamDialog);
        showSegLengthCheckBox->setObjectName(QStringLiteral("showSegLengthCheckBox"));
        showSegLengthCheckBox->setFocusPolicy(Qt::TabFocus);

        horizontalLayout_2->addWidget(showSegLengthCheckBox);

        showThroughputCheckBox = new QCheckBox(TCPStreamDialog);
        showThroughputCheckBox->setObjectName(QStringLiteral("showThroughputCheckBox"));
        showThroughputCheckBox->setFocusPolicy(Qt::TabFocus);

        horizontalLayout_2->addWidget(showThroughputCheckBox);

        showGoodputCheckBox = new QCheckBox(TCPStreamDialog);
        showGoodputCheckBox->setObjectName(QStringLiteral("showGoodputCheckBox"));
        showGoodputCheckBox->setFocusPolicy(Qt::TabFocus);

        horizontalLayout_2->addWidget(showGoodputCheckBox);

        showRcvWinCheckBox = new QCheckBox(TCPStreamDialog);
        showRcvWinCheckBox->setObjectName(QStringLiteral("showRcvWinCheckBox"));
        showRcvWinCheckBox->setFocusPolicy(Qt::TabFocus);

        horizontalLayout_2->addWidget(showRcvWinCheckBox);

        showBytesOutCheckBox = new QCheckBox(TCPStreamDialog);
        showBytesOutCheckBox->setObjectName(QStringLiteral("showBytesOutCheckBox"));
        showBytesOutCheckBox->setFocusPolicy(Qt::TabFocus);

        horizontalLayout_2->addWidget(showBytesOutCheckBox);

        horizontalSpacer_2b = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2b);

        resetButton = new QPushButton(TCPStreamDialog);
        resetButton->setObjectName(QStringLiteral("resetButton"));

        horizontalLayout_2->addWidget(resetButton);


        verticalLayout->addLayout(horizontalLayout_2);

        buttonBox = new QDialogButtonBox(TCPStreamDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help|QDialogButtonBox::Save);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(TCPStreamDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), TCPStreamDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TCPStreamDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(TCPStreamDialog);
    } // setupUi

    void retranslateUi(QDialog *TCPStreamDialog)
    {
        TCPStreamDialog->setWindowTitle(QApplication::translate("TCPStreamDialog", "Dialog", 0));
        actionReset->setText(QApplication::translate("TCPStreamDialog", "Reset Graph", 0));
#ifndef QT_NO_TOOLTIP
        actionReset->setToolTip(QApplication::translate("TCPStreamDialog", "Reset the graph to its initial state.", 0));
#endif // QT_NO_TOOLTIP
        actionReset->setShortcut(QApplication::translate("TCPStreamDialog", "0", 0));
        actionZoomIn->setText(QApplication::translate("TCPStreamDialog", "Zoom In", 0));
#ifndef QT_NO_TOOLTIP
        actionZoomIn->setToolTip(QApplication::translate("TCPStreamDialog", "Zoom In", 0));
#endif // QT_NO_TOOLTIP
        actionZoomIn->setShortcut(QApplication::translate("TCPStreamDialog", "+", 0));
        actionZoomOut->setText(QApplication::translate("TCPStreamDialog", "Zoom Out", 0));
#ifndef QT_NO_TOOLTIP
        actionZoomOut->setToolTip(QApplication::translate("TCPStreamDialog", "Zoom Out", 0));
#endif // QT_NO_TOOLTIP
        actionZoomOut->setShortcut(QApplication::translate("TCPStreamDialog", "-", 0));
        actionMoveUp10->setText(QApplication::translate("TCPStreamDialog", "Move Up 10 Pixels", 0));
#ifndef QT_NO_TOOLTIP
        actionMoveUp10->setToolTip(QApplication::translate("TCPStreamDialog", "Move Up 10 Pixels", 0));
#endif // QT_NO_TOOLTIP
        actionMoveUp10->setShortcut(QApplication::translate("TCPStreamDialog", "Up", 0));
        actionMoveLeft10->setText(QApplication::translate("TCPStreamDialog", "Move Left 10 Pixels", 0));
#ifndef QT_NO_TOOLTIP
        actionMoveLeft10->setToolTip(QApplication::translate("TCPStreamDialog", "Move Left 10 Pixels", 0));
#endif // QT_NO_TOOLTIP
        actionMoveLeft10->setShortcut(QApplication::translate("TCPStreamDialog", "Left", 0));
        actionMoveRight10->setText(QApplication::translate("TCPStreamDialog", "Move Right 10 Pixels", 0));
#ifndef QT_NO_TOOLTIP
        actionMoveRight10->setToolTip(QApplication::translate("TCPStreamDialog", "Move Right 10 Pixels", 0));
#endif // QT_NO_TOOLTIP
        actionMoveRight10->setShortcut(QApplication::translate("TCPStreamDialog", "Right", 0));
        actionMoveDown10->setText(QApplication::translate("TCPStreamDialog", "Move Down 10 Pixels", 0));
#ifndef QT_NO_TOOLTIP
        actionMoveDown10->setToolTip(QApplication::translate("TCPStreamDialog", "Move Down 10 Pixels", 0));
#endif // QT_NO_TOOLTIP
        actionMoveDown10->setShortcut(QApplication::translate("TCPStreamDialog", "Down", 0));
        actionMoveUp1->setText(QApplication::translate("TCPStreamDialog", "Move Up 1 Pixel", 0));
#ifndef QT_NO_TOOLTIP
        actionMoveUp1->setToolTip(QApplication::translate("TCPStreamDialog", "Move Up 1 Pixel", 0));
#endif // QT_NO_TOOLTIP
        actionMoveUp1->setShortcut(QApplication::translate("TCPStreamDialog", "Shift+Up", 0));
        actionMoveLeft1->setText(QApplication::translate("TCPStreamDialog", "Move Left 1 Pixel", 0));
#ifndef QT_NO_TOOLTIP
        actionMoveLeft1->setToolTip(QApplication::translate("TCPStreamDialog", "Move Left 1 Pixel", 0));
#endif // QT_NO_TOOLTIP
        actionMoveLeft1->setShortcut(QApplication::translate("TCPStreamDialog", "Shift+Left", 0));
        actionMoveRight1->setText(QApplication::translate("TCPStreamDialog", "Move Right 1 Pixel", 0));
#ifndef QT_NO_TOOLTIP
        actionMoveRight1->setToolTip(QApplication::translate("TCPStreamDialog", "Move Right 1 Pixel", 0));
#endif // QT_NO_TOOLTIP
        actionMoveRight1->setShortcut(QApplication::translate("TCPStreamDialog", "Shift+Right", 0));
        actionMoveDown1->setText(QApplication::translate("TCPStreamDialog", "Move Down 1 Pixel", 0));
#ifndef QT_NO_TOOLTIP
        actionMoveDown1->setToolTip(QApplication::translate("TCPStreamDialog", "Move Down 1 Pixel", 0));
#endif // QT_NO_TOOLTIP
        actionMoveDown1->setShortcut(QApplication::translate("TCPStreamDialog", "Shift+Down", 0));
        actionNextStream->setText(QApplication::translate("TCPStreamDialog", "Next Stream", 0));
#ifndef QT_NO_TOOLTIP
        actionNextStream->setToolTip(QApplication::translate("TCPStreamDialog", "Go to the next stream in the capture", 0));
#endif // QT_NO_TOOLTIP
        actionNextStream->setShortcut(QApplication::translate("TCPStreamDialog", "PgUp", 0));
        actionPreviousStream->setText(QApplication::translate("TCPStreamDialog", "Previous Stream", 0));
#ifndef QT_NO_TOOLTIP
        actionPreviousStream->setToolTip(QApplication::translate("TCPStreamDialog", "Go to the previous stream in the capture", 0));
#endif // QT_NO_TOOLTIP
        actionPreviousStream->setShortcut(QApplication::translate("TCPStreamDialog", "PgDown", 0));
        actionSwitchDirection->setText(QApplication::translate("TCPStreamDialog", "Switch Direction", 0));
#ifndef QT_NO_TOOLTIP
        actionSwitchDirection->setToolTip(QApplication::translate("TCPStreamDialog", "Switch direction (swap TCP endpoints)", 0));
#endif // QT_NO_TOOLTIP
        actionSwitchDirection->setShortcut(QApplication::translate("TCPStreamDialog", "D", 0));
        actionGoToPacket->setText(QApplication::translate("TCPStreamDialog", "Go To Packet Under Cursor", 0));
#ifndef QT_NO_TOOLTIP
        actionGoToPacket->setToolTip(QApplication::translate("TCPStreamDialog", "Go to packet currently under the cursor", 0));
#endif // QT_NO_TOOLTIP
        actionGoToPacket->setShortcut(QApplication::translate("TCPStreamDialog", "G", 0));
        actionDragZoom->setText(QApplication::translate("TCPStreamDialog", "Drag / Zoom", 0));
#ifndef QT_NO_TOOLTIP
        actionDragZoom->setToolTip(QApplication::translate("TCPStreamDialog", "Toggle mouse drag / zoom behavior", 0));
#endif // QT_NO_TOOLTIP
        actionDragZoom->setShortcut(QApplication::translate("TCPStreamDialog", "Z", 0));
        actionToggleSequenceNumbers->setText(QApplication::translate("TCPStreamDialog", "Relative / Absolute Sequence Numbers", 0));
#ifndef QT_NO_TOOLTIP
        actionToggleSequenceNumbers->setToolTip(QApplication::translate("TCPStreamDialog", "Toggle relative / absolute sequence numbers", 0));
#endif // QT_NO_TOOLTIP
        actionToggleSequenceNumbers->setShortcut(QApplication::translate("TCPStreamDialog", "S", 0));
        actionToggleTimeOrigin->setText(QApplication::translate("TCPStreamDialog", "Capture / Session Time Origin", 0));
#ifndef QT_NO_TOOLTIP
        actionToggleTimeOrigin->setToolTip(QApplication::translate("TCPStreamDialog", "Toggle capture / session time origin", 0));
#endif // QT_NO_TOOLTIP
        actionToggleTimeOrigin->setShortcut(QApplication::translate("TCPStreamDialog", "T", 0));
        actionCrosshairs->setText(QApplication::translate("TCPStreamDialog", "Crosshairs", 0));
#ifndef QT_NO_TOOLTIP
        actionCrosshairs->setToolTip(QApplication::translate("TCPStreamDialog", "Toggle crosshairs", 0));
#endif // QT_NO_TOOLTIP
        actionCrosshairs->setShortcut(QApplication::translate("TCPStreamDialog", "Space", 0));
        actionRoundTripTime->setText(QApplication::translate("TCPStreamDialog", "Round Trip Time", 0));
#ifndef QT_NO_TOOLTIP
        actionRoundTripTime->setToolTip(QApplication::translate("TCPStreamDialog", "Switch to the Round Trip Time graph", 0));
#endif // QT_NO_TOOLTIP
        actionRoundTripTime->setShortcut(QApplication::translate("TCPStreamDialog", "1", 0));
        actionThroughput->setText(QApplication::translate("TCPStreamDialog", "Throughput", 0));
#ifndef QT_NO_TOOLTIP
        actionThroughput->setToolTip(QApplication::translate("TCPStreamDialog", "Switch to the Throughput graph", 0));
#endif // QT_NO_TOOLTIP
        actionThroughput->setShortcut(QApplication::translate("TCPStreamDialog", "2", 0));
        actionStevens->setText(QApplication::translate("TCPStreamDialog", "Time / Sequence (Stevens)", 0));
#ifndef QT_NO_TOOLTIP
        actionStevens->setToolTip(QApplication::translate("TCPStreamDialog", "Switch to the Stevens-style Time / Sequence graph", 0));
#endif // QT_NO_TOOLTIP
        actionStevens->setShortcut(QApplication::translate("TCPStreamDialog", "3", 0));
        actionWindowScaling->setText(QApplication::translate("TCPStreamDialog", "Window Scaling", 0));
#ifndef QT_NO_TOOLTIP
        actionWindowScaling->setToolTip(QApplication::translate("TCPStreamDialog", "Switch to the Window Scaling graph", 0));
#endif // QT_NO_TOOLTIP
        actionWindowScaling->setShortcut(QApplication::translate("TCPStreamDialog", "5", 0));
        actionTcptrace->setText(QApplication::translate("TCPStreamDialog", "Time / Sequence (tcptrace)", 0));
#ifndef QT_NO_TOOLTIP
        actionTcptrace->setToolTip(QApplication::translate("TCPStreamDialog", "Switch to the tcptrace-style Time / Sequence graph", 0));
#endif // QT_NO_TOOLTIP
        actionTcptrace->setShortcut(QApplication::translate("TCPStreamDialog", "4", 0));
        actionZoomInX->setText(QApplication::translate("TCPStreamDialog", "Zoom In X Axis", 0));
#ifndef QT_NO_TOOLTIP
        actionZoomInX->setToolTip(QApplication::translate("TCPStreamDialog", "Zoom In X Axis", 0));
#endif // QT_NO_TOOLTIP
        actionZoomInX->setShortcut(QApplication::translate("TCPStreamDialog", "X", 0));
        actionZoomOutX->setText(QApplication::translate("TCPStreamDialog", "Zoom Out X Axis", 0));
#ifndef QT_NO_TOOLTIP
        actionZoomOutX->setToolTip(QApplication::translate("TCPStreamDialog", "Zoom Out X Axis", 0));
#endif // QT_NO_TOOLTIP
        actionZoomOutX->setShortcut(QApplication::translate("TCPStreamDialog", "Shift+X", 0));
        actionZoomInY->setText(QApplication::translate("TCPStreamDialog", "Zoom In Y Axis", 0));
#ifndef QT_NO_TOOLTIP
        actionZoomInY->setToolTip(QApplication::translate("TCPStreamDialog", "Zoom In Y Axis", 0));
#endif // QT_NO_TOOLTIP
        actionZoomInY->setShortcut(QApplication::translate("TCPStreamDialog", "Y", 0));
        actionZoomOutY->setText(QApplication::translate("TCPStreamDialog", "Zoom Out Y Axis", 0));
#ifndef QT_NO_TOOLTIP
        actionZoomOutY->setToolTip(QApplication::translate("TCPStreamDialog", "Zoom Out Y Axis", 0));
#endif // QT_NO_TOOLTIP
        actionZoomOutY->setShortcut(QApplication::translate("TCPStreamDialog", "Shift+Y", 0));
#ifndef QT_NO_TOOLTIP
        hintLabel->setToolTip(QApplication::translate("TCPStreamDialog", "<html><head/><body>\n"
"\n"
"<h3>Valuable and amazing time-saving keyboard shortcuts</h3>\n"
"<table><tbody>\n"
"\n"
"<tr><th>+</th><td>Zoom in</td></th>\n"
"<tr><th>-</th><td>Zoom out</td></th>\n"
"<tr><th>x</th><td>Zoom in X axis</td></th>\n"
"<tr><th>X</th><td>Zoom out X axis</td></th>\n"
"<tr><th>y</th><td>Zoom in Y axis</td></th>\n"
"<tr><th>Y</th><td>Zoom out Y axis</td></th>\n"
"<tr><th>0</th><td>Reset graph to its initial state</td></th>\n"
"\n"
"<tr><th>\342\206\222</th><td>Move right 10 pixels</td></th>\n"
"<tr><th>\342\206\220</th><td>Move left 10 pixels</td></th>\n"
"<tr><th>\342\206\221</th><td>Move up 10 pixels</td></th>\n"
"<tr><th>\342\206\223</th><td>Move down 10 pixels</td></th>\n"
"<tr><th><i>Shift+</i>\342\206\222</th><td>Move right 1 pixel</td></th>\n"
"<tr><th><i>Shift+</i>\342\206\220</th><td>Move left 1 pixel</td></th>\n"
"<tr><th><i>Shift+</i>\342\206\221</th><td>Move up 1 pixel</td></th>\n"
"<tr><th><i>Shift+</i>\342\206\223</th><td>Move down 1 pixel</td></th>\n"
"\n"
"<tr><th><i>Pg U"
                        "p</i></th><td>Next stream</td></th>\n"
"<tr><th><i>Pg Dn</i></th><td>Previous stream</td></th>\n"
"<tr><th>d</th><td>Switch direction (swap TCP endpoints)</td></th>\n"
"<tr><th>g</th><td>Go to packet under cursor</td></th>\n"
"\n"
"<tr><th>z</th><td>Toggle mouse drag / zoom</td></th>\n"
"<tr><th>s</th><td>Toggle relative / absolute sequence numbers</td></th>\n"
"<tr><th>t</th><td>Toggle capture / session time origin</td></th>\n"
"<tr><th>Space</th><td>Toggle crosshairs</td></th>\n"
"\n"
"<tr><th>1</th><td>Round Trip Time graph</td></th>\n"
"<tr><th>2</th><td>Throughput graph</td></th>\n"
"<tr><th>3</th><td>Stevens-style Time / Sequence graph</td></th>\n"
"<tr><th>4</th><td>tcptrace-style Time / Sequence graph</td></th>\n"
"<tr><th>5</th><td>Window Scaling graph</td></th>\n"
"\n"
"</tbody></table>\n"
"</body></html>", 0));
#endif // QT_NO_TOOLTIP
        hintLabel->setText(QApplication::translate("TCPStreamDialog", "<small><i>Mouse over for shortcuts</i></small>", 0));
        label->setText(QApplication::translate("TCPStreamDialog", "Type", 0));
        maWindowSizeLabel->setText(QApplication::translate("TCPStreamDialog", "MA Window (s)", 0));
#ifndef QT_NO_TOOLTIP
        selectSACKsCheckBox->setToolTip(QApplication::translate("TCPStreamDialog", "Allow SACK segments as well as data packets to be selected by clicking on the graph", 0));
#endif // QT_NO_TOOLTIP
        selectSACKsCheckBox->setText(QApplication::translate("TCPStreamDialog", "Select SACKs", 0));
        streamNumberLabel->setText(QApplication::translate("TCPStreamDialog", "Stream", 0));
#ifndef QT_NO_TOOLTIP
        otherDirectionButton->setToolTip(QApplication::translate("TCPStreamDialog", "<html><head/><body><p>Switch the direction of the connection (view the opposite flow).</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        otherDirectionButton->setText(QApplication::translate("TCPStreamDialog", "Switch Direction", 0));
        mouseLabel->setText(QApplication::translate("TCPStreamDialog", "Mouse", 0));
#ifndef QT_NO_TOOLTIP
        dragRadioButton->setToolTip(QApplication::translate("TCPStreamDialog", "Drag using the mouse button.", 0));
#endif // QT_NO_TOOLTIP
        dragRadioButton->setText(QApplication::translate("TCPStreamDialog", "drags", 0));
#ifndef QT_NO_TOOLTIP
        zoomRadioButton->setToolTip(QApplication::translate("TCPStreamDialog", "Select using the mouse button.", 0));
#endif // QT_NO_TOOLTIP
        zoomRadioButton->setText(QApplication::translate("TCPStreamDialog", "zooms", 0));
#ifndef QT_NO_TOOLTIP
        bySeqNumberCheckBox->setToolTip(QApplication::translate("TCPStreamDialog", "Display Round Trip Time vs Sequence Number", 0));
#endif // QT_NO_TOOLTIP
        bySeqNumberCheckBox->setText(QApplication::translate("TCPStreamDialog", "RTT By Sequence Number", 0));
#ifndef QT_NO_TOOLTIP
        showSegLengthCheckBox->setToolTip(QApplication::translate("TCPStreamDialog", "Display graph of Segment Length vs Time", 0));
#endif // QT_NO_TOOLTIP
        showSegLengthCheckBox->setText(QApplication::translate("TCPStreamDialog", "Segment Length", 0));
#ifndef QT_NO_TOOLTIP
        showThroughputCheckBox->setToolTip(QApplication::translate("TCPStreamDialog", "Display graph of Mean Transmitted Bytes vs Time", 0));
#endif // QT_NO_TOOLTIP
        showThroughputCheckBox->setText(QApplication::translate("TCPStreamDialog", "Throughput", 0));
#ifndef QT_NO_TOOLTIP
        showGoodputCheckBox->setToolTip(QApplication::translate("TCPStreamDialog", "Display graph of Mean ACKed Bytes vs Time", 0));
#endif // QT_NO_TOOLTIP
        showGoodputCheckBox->setText(QApplication::translate("TCPStreamDialog", "Goodput", 0));
#ifndef QT_NO_TOOLTIP
        showRcvWinCheckBox->setToolTip(QApplication::translate("TCPStreamDialog", "Display graph of Receive Window Size vs Time", 0));
#endif // QT_NO_TOOLTIP
        showRcvWinCheckBox->setText(QApplication::translate("TCPStreamDialog", "Rcv Win", 0));
#ifndef QT_NO_TOOLTIP
        showBytesOutCheckBox->setToolTip(QApplication::translate("TCPStreamDialog", "Display graph of Outstanding Bytes vs Time", 0));
#endif // QT_NO_TOOLTIP
        showBytesOutCheckBox->setText(QApplication::translate("TCPStreamDialog", "Bytes Out", 0));
#ifndef QT_NO_TOOLTIP
        resetButton->setToolTip(QApplication::translate("TCPStreamDialog", "<html><head/><body><p>Reset the graph to its initial state.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        resetButton->setText(QApplication::translate("TCPStreamDialog", "Reset", 0));
    } // retranslateUi

};

namespace Ui {
    class TCPStreamDialog: public Ui_TCPStreamDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCP_STREAM_DIALOG_H
