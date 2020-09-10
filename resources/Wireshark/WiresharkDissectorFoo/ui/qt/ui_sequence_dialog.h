/********************************************************************************
** Form generated from reading UI file 'sequence_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEQUENCE_DIALOG_H
#define UI_SEQUENCE_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "widgets/elided_label.h"
#include "widgets/qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_SequenceDialog
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
    QAction *actionGoToPacket;
    QAction *actionFlowAny;
    QAction *actionFlowTcp;
    QAction *actionGoToNextPacket;
    QAction *actionGoToPreviousPacket;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QCustomPlot *sequencePlot;
    QScrollBar *verticalScrollBar;
    QScrollBar *horizontalScrollBar;
    QFrame *frame;
    ElidedLabel *hintLabel;
    QFrame *controlFrame;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *displayFilterCheckBox;
    QSpacerItem *horizontalSpacer;
    QLabel *flowLabel;
    QComboBox *flowComboBox;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_3;
    QComboBox *addressComboBox;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *resetButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SequenceDialog)
    {
        if (SequenceDialog->objectName().isEmpty())
            SequenceDialog->setObjectName(QStringLiteral("SequenceDialog"));
        SequenceDialog->resize(679, 568);
        actionReset = new QAction(SequenceDialog);
        actionReset->setObjectName(QStringLiteral("actionReset"));
        actionZoomIn = new QAction(SequenceDialog);
        actionZoomIn->setObjectName(QStringLiteral("actionZoomIn"));
        actionZoomOut = new QAction(SequenceDialog);
        actionZoomOut->setObjectName(QStringLiteral("actionZoomOut"));
        actionMoveUp10 = new QAction(SequenceDialog);
        actionMoveUp10->setObjectName(QStringLiteral("actionMoveUp10"));
        actionMoveLeft10 = new QAction(SequenceDialog);
        actionMoveLeft10->setObjectName(QStringLiteral("actionMoveLeft10"));
        actionMoveRight10 = new QAction(SequenceDialog);
        actionMoveRight10->setObjectName(QStringLiteral("actionMoveRight10"));
        actionMoveDown10 = new QAction(SequenceDialog);
        actionMoveDown10->setObjectName(QStringLiteral("actionMoveDown10"));
        actionMoveUp1 = new QAction(SequenceDialog);
        actionMoveUp1->setObjectName(QStringLiteral("actionMoveUp1"));
        actionMoveLeft1 = new QAction(SequenceDialog);
        actionMoveLeft1->setObjectName(QStringLiteral("actionMoveLeft1"));
        actionMoveRight1 = new QAction(SequenceDialog);
        actionMoveRight1->setObjectName(QStringLiteral("actionMoveRight1"));
        actionMoveDown1 = new QAction(SequenceDialog);
        actionMoveDown1->setObjectName(QStringLiteral("actionMoveDown1"));
        actionGoToPacket = new QAction(SequenceDialog);
        actionGoToPacket->setObjectName(QStringLiteral("actionGoToPacket"));
        actionFlowAny = new QAction(SequenceDialog);
        actionFlowAny->setObjectName(QStringLiteral("actionFlowAny"));
        actionFlowTcp = new QAction(SequenceDialog);
        actionFlowTcp->setObjectName(QStringLiteral("actionFlowTcp"));
        actionGoToNextPacket = new QAction(SequenceDialog);
        actionGoToNextPacket->setObjectName(QStringLiteral("actionGoToNextPacket"));
        actionGoToPreviousPacket = new QAction(SequenceDialog);
        actionGoToPreviousPacket->setObjectName(QStringLiteral("actionGoToPreviousPacket"));
        verticalLayout_2 = new QVBoxLayout(SequenceDialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        sequencePlot = new QCustomPlot(SequenceDialog);
        sequencePlot->setObjectName(QStringLiteral("sequencePlot"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(sequencePlot->sizePolicy().hasHeightForWidth());
        sequencePlot->setSizePolicy(sizePolicy);

        gridLayout->addWidget(sequencePlot, 0, 0, 1, 1);

        verticalScrollBar = new QScrollBar(SequenceDialog);
        verticalScrollBar->setObjectName(QStringLiteral("verticalScrollBar"));
        verticalScrollBar->setOrientation(Qt::Vertical);

        gridLayout->addWidget(verticalScrollBar, 0, 1, 1, 1);

        horizontalScrollBar = new QScrollBar(SequenceDialog);
        horizontalScrollBar->setObjectName(QStringLiteral("horizontalScrollBar"));
        horizontalScrollBar->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalScrollBar, 1, 0, 1, 1);

        frame = new QFrame(SequenceDialog);
        frame->setObjectName(QStringLiteral("frame"));

        gridLayout->addWidget(frame, 1, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        hintLabel = new ElidedLabel(SequenceDialog);
        hintLabel->setObjectName(QStringLiteral("hintLabel"));

        verticalLayout_2->addWidget(hintLabel);

        controlFrame = new QFrame(SequenceDialog);
        controlFrame->setObjectName(QStringLiteral("controlFrame"));
        controlFrame->setFrameShape(QFrame::NoFrame);
        controlFrame->setFrameShadow(QFrame::Plain);
        controlFrame->setLineWidth(0);
        verticalLayout = new QVBoxLayout(controlFrame);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        displayFilterCheckBox = new QCheckBox(controlFrame);
        displayFilterCheckBox->setObjectName(QStringLiteral("displayFilterCheckBox"));

        horizontalLayout_2->addWidget(displayFilterCheckBox);

        horizontalSpacer = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        flowLabel = new QLabel(controlFrame);
        flowLabel->setObjectName(QStringLiteral("flowLabel"));

        horizontalLayout_2->addWidget(flowLabel);

        flowComboBox = new QComboBox(controlFrame);
        flowComboBox->setObjectName(QStringLiteral("flowComboBox"));

        horizontalLayout_2->addWidget(flowComboBox);

        horizontalSpacer_2 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label_3 = new QLabel(controlFrame);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        addressComboBox = new QComboBox(controlFrame);
        addressComboBox->setObjectName(QStringLiteral("addressComboBox"));

        horizontalLayout_2->addWidget(addressComboBox);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        resetButton = new QPushButton(controlFrame);
        resetButton->setObjectName(QStringLiteral("resetButton"));

        horizontalLayout->addWidget(resetButton);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addWidget(controlFrame);

        buttonBox = new QDialogButtonBox(SequenceDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help|QDialogButtonBox::Save);

        verticalLayout_2->addWidget(buttonBox);

        verticalLayout_2->setStretch(0, 1);

        retranslateUi(SequenceDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SequenceDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SequenceDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SequenceDialog);
    } // setupUi

    void retranslateUi(QDialog *SequenceDialog)
    {
        actionReset->setText(QApplication::translate("SequenceDialog", "Reset Diagram", 0));
#ifndef QT_NO_TOOLTIP
        actionReset->setToolTip(QApplication::translate("SequenceDialog", "Reset the diagram to its initial state.", 0));
#endif // QT_NO_TOOLTIP
        actionReset->setShortcut(QApplication::translate("SequenceDialog", "0", 0));
        actionZoomIn->setText(QApplication::translate("SequenceDialog", "Zoom In", 0));
#ifndef QT_NO_TOOLTIP
        actionZoomIn->setToolTip(QApplication::translate("SequenceDialog", "Zoom In", 0));
#endif // QT_NO_TOOLTIP
        actionZoomIn->setShortcut(QApplication::translate("SequenceDialog", "+", 0));
        actionZoomOut->setText(QApplication::translate("SequenceDialog", "Zoom Out", 0));
#ifndef QT_NO_TOOLTIP
        actionZoomOut->setToolTip(QApplication::translate("SequenceDialog", "Zoom Out", 0));
#endif // QT_NO_TOOLTIP
        actionZoomOut->setShortcut(QApplication::translate("SequenceDialog", "-", 0));
        actionMoveUp10->setText(QApplication::translate("SequenceDialog", "Move Up 10 Pixels", 0));
#ifndef QT_NO_TOOLTIP
        actionMoveUp10->setToolTip(QApplication::translate("SequenceDialog", "Move Up 10 Pixels", 0));
#endif // QT_NO_TOOLTIP
        actionMoveUp10->setShortcut(QApplication::translate("SequenceDialog", "Up", 0));
        actionMoveLeft10->setText(QApplication::translate("SequenceDialog", "Move Left 10 Pixels", 0));
#ifndef QT_NO_TOOLTIP
        actionMoveLeft10->setToolTip(QApplication::translate("SequenceDialog", "Move Left 10 Pixels", 0));
#endif // QT_NO_TOOLTIP
        actionMoveLeft10->setShortcut(QApplication::translate("SequenceDialog", "Left", 0));
        actionMoveRight10->setText(QApplication::translate("SequenceDialog", "Move Right 10 Pixels", 0));
#ifndef QT_NO_TOOLTIP
        actionMoveRight10->setToolTip(QApplication::translate("SequenceDialog", "Move Right 10 Pixels", 0));
#endif // QT_NO_TOOLTIP
        actionMoveRight10->setShortcut(QApplication::translate("SequenceDialog", "Right", 0));
        actionMoveDown10->setText(QApplication::translate("SequenceDialog", "Move Down 10 Pixels", 0));
#ifndef QT_NO_TOOLTIP
        actionMoveDown10->setToolTip(QApplication::translate("SequenceDialog", "Move Down 10 Pixels", 0));
#endif // QT_NO_TOOLTIP
        actionMoveDown10->setShortcut(QApplication::translate("SequenceDialog", "Down", 0));
        actionMoveUp1->setText(QApplication::translate("SequenceDialog", "Move Up 1 Pixel", 0));
#ifndef QT_NO_TOOLTIP
        actionMoveUp1->setToolTip(QApplication::translate("SequenceDialog", "Move Up 1 Pixel", 0));
#endif // QT_NO_TOOLTIP
        actionMoveUp1->setShortcut(QApplication::translate("SequenceDialog", "Shift+Up", 0));
        actionMoveLeft1->setText(QApplication::translate("SequenceDialog", "Move Left 1 Pixel", 0));
#ifndef QT_NO_TOOLTIP
        actionMoveLeft1->setToolTip(QApplication::translate("SequenceDialog", "Move Left 1 Pixel", 0));
#endif // QT_NO_TOOLTIP
        actionMoveLeft1->setShortcut(QApplication::translate("SequenceDialog", "Shift+Left", 0));
        actionMoveRight1->setText(QApplication::translate("SequenceDialog", "Move Right 1 Pixel", 0));
#ifndef QT_NO_TOOLTIP
        actionMoveRight1->setToolTip(QApplication::translate("SequenceDialog", "Move Right 1 Pixel", 0));
#endif // QT_NO_TOOLTIP
        actionMoveRight1->setShortcut(QApplication::translate("SequenceDialog", "Shift+Right", 0));
        actionMoveDown1->setText(QApplication::translate("SequenceDialog", "Move Down 1 Pixel", 0));
#ifndef QT_NO_TOOLTIP
        actionMoveDown1->setToolTip(QApplication::translate("SequenceDialog", "Move Down 1 Pixel", 0));
#endif // QT_NO_TOOLTIP
        actionMoveDown1->setShortcut(QApplication::translate("SequenceDialog", "Shift+Down", 0));
        actionGoToPacket->setText(QApplication::translate("SequenceDialog", "Go To Packet Under Cursor", 0));
#ifndef QT_NO_TOOLTIP
        actionGoToPacket->setToolTip(QApplication::translate("SequenceDialog", "Go to packet currently under the cursor", 0));
#endif // QT_NO_TOOLTIP
        actionGoToPacket->setShortcut(QApplication::translate("SequenceDialog", "G", 0));
        actionFlowAny->setText(QApplication::translate("SequenceDialog", "All Flows", 0));
#ifndef QT_NO_TOOLTIP
        actionFlowAny->setToolTip(QApplication::translate("SequenceDialog", "Show flows for all packets", 0));
#endif // QT_NO_TOOLTIP
        actionFlowAny->setShortcut(QApplication::translate("SequenceDialog", "1", 0));
        actionFlowTcp->setText(QApplication::translate("SequenceDialog", "TCP Flows", 0));
#ifndef QT_NO_TOOLTIP
        actionFlowTcp->setToolTip(QApplication::translate("SequenceDialog", "Show only TCP flow information", 0));
#endif // QT_NO_TOOLTIP
        actionFlowTcp->setShortcut(QApplication::translate("SequenceDialog", "1", 0));
        actionGoToNextPacket->setText(QApplication::translate("SequenceDialog", "Go To Next Packet", 0));
#ifndef QT_NO_TOOLTIP
        actionGoToNextPacket->setToolTip(QApplication::translate("SequenceDialog", "Go to the next packet", 0));
#endif // QT_NO_TOOLTIP
        actionGoToNextPacket->setShortcut(QApplication::translate("SequenceDialog", "N", 0));
        actionGoToPreviousPacket->setText(QApplication::translate("SequenceDialog", "Go To Previous Packet", 0));
#ifndef QT_NO_TOOLTIP
        actionGoToPreviousPacket->setToolTip(QApplication::translate("SequenceDialog", "Go to the previous packet", 0));
#endif // QT_NO_TOOLTIP
        actionGoToPreviousPacket->setShortcut(QApplication::translate("SequenceDialog", "P", 0));
#ifndef QT_NO_TOOLTIP
        hintLabel->setToolTip(QApplication::translate("SequenceDialog", "<html><head/><body>\n"
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
"<tr><th>\342\206\221</th><td>Move up 10 pixels</td></th>\n"
"<tr><th>\342\206\223</th><td>Move down 10 pixels</td></th>\n"
"<tr><th><i>Shift+</i>\342\206\222</th><td>Move right 1 pixel</td></th>\n"
"<tr><th><i>Shift+</i>\342\206\220</th><td>Move left 1 pixel</td></th>\n"
"<tr><th><i>Shift+</i>\342\206\221</th><td>Move up 1 pixel</td></th>\n"
"<tr><th><i>Shift+</i>\342\206\223</th><td>Move down 1 pixel</td></th>\n"
"\n"
"<tr><th>g</th><td>Go to packet under cursor</td></th>\n"
"<tr><th>n</th><td>Go to the next packet</td></th>\n"
"<tr><th>p</th><td>Go to the previous packet</td></th>\n"
"\n"
"</tbody></table>\n"
"</body></"
                        "html>", 0));
#endif // QT_NO_TOOLTIP
        hintLabel->setText(QApplication::translate("SequenceDialog", "<small><i>A hint</i></small>", 0));
#ifndef QT_NO_TOOLTIP
        displayFilterCheckBox->setToolTip(QApplication::translate("SequenceDialog", "<html><head/><body><p>Only show flows matching the current display filter</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        displayFilterCheckBox->setText(QApplication::translate("SequenceDialog", "Limit to display filter", 0));
        flowLabel->setText(QApplication::translate("SequenceDialog", "Flow type:", 0));
        label_3->setText(QApplication::translate("SequenceDialog", "Addresses:", 0));
        addressComboBox->clear();
        addressComboBox->insertItems(0, QStringList()
         << QApplication::translate("SequenceDialog", "Any", 0)
         << QApplication::translate("SequenceDialog", "Network", 0)
        );
        resetButton->setText(QApplication::translate("SequenceDialog", "Reset", 0));
        Q_UNUSED(SequenceDialog);
    } // retranslateUi

};

namespace Ui {
    class SequenceDialog: public Ui_SequenceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEQUENCE_DIALOG_H
