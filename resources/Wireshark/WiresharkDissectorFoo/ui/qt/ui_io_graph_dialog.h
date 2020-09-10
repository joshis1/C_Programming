/********************************************************************************
** Form generated from reading UI file 'io_graph_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IO_GRAPH_DIALOG_H
#define UI_IO_GRAPH_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include "widgets/elided_label.h"
#include "widgets/qcustomplot.h"
#include "widgets/tabnav_tree_view.h"

QT_BEGIN_NAMESPACE

class Ui_IOGraphDialog
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
    QAction *actionDragZoom;
    QAction *actionToggleTimeOrigin;
    QAction *actionCrosshairs;
    QAction *actionZoomInX;
    QAction *actionZoomOutX;
    QAction *actionZoomInY;
    QAction *actionZoomOutY;
    QVBoxLayout *verticalLayout;
    QCustomPlot *ioPlot;
    ElidedLabel *hintLabel;
    TabnavTreeView *graphUat;
    QHBoxLayout *horizontalLayout;
    QToolButton *newToolButton;
    QToolButton *deleteToolButton;
    QToolButton *copyToolButton;
    QToolButton *clearToolButton;
    QSpacerItem *horizontalSpacer_4;
    QLabel *mouseLabel;
    QRadioButton *dragRadioButton;
    QRadioButton *zoomRadioButton;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_2;
    QComboBox *intervalComboBox;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *todCheckBox;
    QSpacerItem *horizontalSpacer_5;
    QCheckBox *logCheckBox;
    QSpacerItem *horizontalSpacer;
    QPushButton *resetButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *IOGraphDialog)
    {
        if (IOGraphDialog->objectName().isEmpty())
            IOGraphDialog->setObjectName(QStringLiteral("IOGraphDialog"));
        IOGraphDialog->resize(850, 640);
        actionReset = new QAction(IOGraphDialog);
        actionReset->setObjectName(QStringLiteral("actionReset"));
        actionZoomIn = new QAction(IOGraphDialog);
        actionZoomIn->setObjectName(QStringLiteral("actionZoomIn"));
        actionZoomOut = new QAction(IOGraphDialog);
        actionZoomOut->setObjectName(QStringLiteral("actionZoomOut"));
        actionMoveUp10 = new QAction(IOGraphDialog);
        actionMoveUp10->setObjectName(QStringLiteral("actionMoveUp10"));
        actionMoveLeft10 = new QAction(IOGraphDialog);
        actionMoveLeft10->setObjectName(QStringLiteral("actionMoveLeft10"));
        actionMoveRight10 = new QAction(IOGraphDialog);
        actionMoveRight10->setObjectName(QStringLiteral("actionMoveRight10"));
        actionMoveDown10 = new QAction(IOGraphDialog);
        actionMoveDown10->setObjectName(QStringLiteral("actionMoveDown10"));
        actionMoveUp1 = new QAction(IOGraphDialog);
        actionMoveUp1->setObjectName(QStringLiteral("actionMoveUp1"));
        actionMoveLeft1 = new QAction(IOGraphDialog);
        actionMoveLeft1->setObjectName(QStringLiteral("actionMoveLeft1"));
        actionMoveRight1 = new QAction(IOGraphDialog);
        actionMoveRight1->setObjectName(QStringLiteral("actionMoveRight1"));
        actionMoveDown1 = new QAction(IOGraphDialog);
        actionMoveDown1->setObjectName(QStringLiteral("actionMoveDown1"));
        actionGoToPacket = new QAction(IOGraphDialog);
        actionGoToPacket->setObjectName(QStringLiteral("actionGoToPacket"));
        actionDragZoom = new QAction(IOGraphDialog);
        actionDragZoom->setObjectName(QStringLiteral("actionDragZoom"));
        actionToggleTimeOrigin = new QAction(IOGraphDialog);
        actionToggleTimeOrigin->setObjectName(QStringLiteral("actionToggleTimeOrigin"));
        actionCrosshairs = new QAction(IOGraphDialog);
        actionCrosshairs->setObjectName(QStringLiteral("actionCrosshairs"));
        actionZoomInX = new QAction(IOGraphDialog);
        actionZoomInX->setObjectName(QStringLiteral("actionZoomInX"));
        actionZoomOutX = new QAction(IOGraphDialog);
        actionZoomOutX->setObjectName(QStringLiteral("actionZoomOutX"));
        actionZoomInY = new QAction(IOGraphDialog);
        actionZoomInY->setObjectName(QStringLiteral("actionZoomInY"));
        actionZoomOutY = new QAction(IOGraphDialog);
        actionZoomOutY->setObjectName(QStringLiteral("actionZoomOutY"));
        verticalLayout = new QVBoxLayout(IOGraphDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        ioPlot = new QCustomPlot(IOGraphDialog);
        ioPlot->setObjectName(QStringLiteral("ioPlot"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(4);
        sizePolicy.setHeightForWidth(ioPlot->sizePolicy().hasHeightForWidth());
        ioPlot->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(ioPlot);

        hintLabel = new ElidedLabel(IOGraphDialog);
        hintLabel->setObjectName(QStringLiteral("hintLabel"));

        verticalLayout->addWidget(hintLabel);

        graphUat = new TabnavTreeView(IOGraphDialog);
        graphUat->setObjectName(QStringLiteral("graphUat"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(graphUat->sizePolicy().hasHeightForWidth());
        graphUat->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(graphUat);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        newToolButton = new QToolButton(IOGraphDialog);
        newToolButton->setObjectName(QStringLiteral("newToolButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/stock/plus-8.png"), QSize(), QIcon::Normal, QIcon::Off);
        newToolButton->setIcon(icon);

        horizontalLayout->addWidget(newToolButton);

        deleteToolButton = new QToolButton(IOGraphDialog);
        deleteToolButton->setObjectName(QStringLiteral("deleteToolButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/stock/minus-8.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteToolButton->setIcon(icon1);

        horizontalLayout->addWidget(deleteToolButton);

        copyToolButton = new QToolButton(IOGraphDialog);
        copyToolButton->setObjectName(QStringLiteral("copyToolButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/stock/copy-8.png"), QSize(), QIcon::Normal, QIcon::Off);
        copyToolButton->setIcon(icon2);

        horizontalLayout->addWidget(copyToolButton);

        clearToolButton = new QToolButton(IOGraphDialog);
        clearToolButton->setObjectName(QStringLiteral("clearToolButton"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/stock/delete_list.png"), QSize(), QIcon::Normal, QIcon::Off);
        clearToolButton->setIcon(icon3);
        clearToolButton->setEnabled(false);

        horizontalLayout->addWidget(clearToolButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        mouseLabel = new QLabel(IOGraphDialog);
        mouseLabel->setObjectName(QStringLiteral("mouseLabel"));

        horizontalLayout->addWidget(mouseLabel);

        dragRadioButton = new QRadioButton(IOGraphDialog);
        dragRadioButton->setObjectName(QStringLiteral("dragRadioButton"));
        dragRadioButton->setCheckable(true);

        horizontalLayout->addWidget(dragRadioButton);

        zoomRadioButton = new QRadioButton(IOGraphDialog);
        zoomRadioButton->setObjectName(QStringLiteral("zoomRadioButton"));
        zoomRadioButton->setCheckable(true);

        horizontalLayout->addWidget(zoomRadioButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        label_2 = new QLabel(IOGraphDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        intervalComboBox = new QComboBox(IOGraphDialog);
        intervalComboBox->setObjectName(QStringLiteral("intervalComboBox"));

        horizontalLayout->addWidget(intervalComboBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        todCheckBox = new QCheckBox(IOGraphDialog);
        todCheckBox->setObjectName(QStringLiteral("todCheckBox"));

        horizontalLayout->addWidget(todCheckBox);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        logCheckBox = new QCheckBox(IOGraphDialog);
        logCheckBox->setObjectName(QStringLiteral("logCheckBox"));

        horizontalLayout->addWidget(logCheckBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        resetButton = new QPushButton(IOGraphDialog);
        resetButton->setObjectName(QStringLiteral("resetButton"));

        horizontalLayout->addWidget(resetButton);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(IOGraphDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help|QDialogButtonBox::Save);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(IOGraphDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), IOGraphDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), IOGraphDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(IOGraphDialog);
    } // setupUi

    void retranslateUi(QDialog *IOGraphDialog)
    {
        IOGraphDialog->setWindowTitle(QApplication::translate("IOGraphDialog", "Dialog", 0));
        actionReset->setText(QApplication::translate("IOGraphDialog", "Reset Graph", 0));
#ifndef QT_NO_TOOLTIP
        actionReset->setToolTip(QApplication::translate("IOGraphDialog", "Reset the graph to its initial state.", 0));
#endif // QT_NO_TOOLTIP
        actionReset->setShortcut(QApplication::translate("IOGraphDialog", "0", 0));
        actionZoomIn->setText(QApplication::translate("IOGraphDialog", "Zoom In", 0));
#ifndef QT_NO_TOOLTIP
        actionZoomIn->setToolTip(QApplication::translate("IOGraphDialog", "Zoom In", 0));
#endif // QT_NO_TOOLTIP
        actionZoomIn->setShortcut(QApplication::translate("IOGraphDialog", "+", 0));
        actionZoomOut->setText(QApplication::translate("IOGraphDialog", "Zoom Out", 0));
#ifndef QT_NO_TOOLTIP
        actionZoomOut->setToolTip(QApplication::translate("IOGraphDialog", "Zoom Out", 0));
#endif // QT_NO_TOOLTIP
        actionZoomOut->setShortcut(QApplication::translate("IOGraphDialog", "-", 0));
        actionMoveUp10->setText(QApplication::translate("IOGraphDialog", "Move Up 10 Pixels", 0));
#ifndef QT_NO_TOOLTIP
        actionMoveUp10->setToolTip(QApplication::translate("IOGraphDialog", "Move Up 10 Pixels", 0));
#endif // QT_NO_TOOLTIP
        actionMoveUp10->setShortcut(QApplication::translate("IOGraphDialog", "Up", 0));
        actionMoveLeft10->setText(QApplication::translate("IOGraphDialog", "Move Left 10 Pixels", 0));
#ifndef QT_NO_TOOLTIP
        actionMoveLeft10->setToolTip(QApplication::translate("IOGraphDialog", "Move Left 10 Pixels", 0));
#endif // QT_NO_TOOLTIP
        actionMoveLeft10->setShortcut(QApplication::translate("IOGraphDialog", "Left", 0));
        actionMoveRight10->setText(QApplication::translate("IOGraphDialog", "Move Right 10 Pixels", 0));
#ifndef QT_NO_TOOLTIP
        actionMoveRight10->setToolTip(QApplication::translate("IOGraphDialog", "Move Right 10 Pixels", 0));
#endif // QT_NO_TOOLTIP
        actionMoveRight10->setShortcut(QApplication::translate("IOGraphDialog", "Right", 0));
        actionMoveDown10->setText(QApplication::translate("IOGraphDialog", "Move Down 10 Pixels", 0));
#ifndef QT_NO_TOOLTIP
        actionMoveDown10->setToolTip(QApplication::translate("IOGraphDialog", "Move Down 10 Pixels", 0));
#endif // QT_NO_TOOLTIP
        actionMoveDown10->setShortcut(QApplication::translate("IOGraphDialog", "Down", 0));
        actionMoveUp1->setText(QApplication::translate("IOGraphDialog", "Move Up 1 Pixel", 0));
#ifndef QT_NO_TOOLTIP
        actionMoveUp1->setToolTip(QApplication::translate("IOGraphDialog", "Move Up 1 Pixel", 0));
#endif // QT_NO_TOOLTIP
        actionMoveUp1->setShortcut(QApplication::translate("IOGraphDialog", "Shift+Up", 0));
        actionMoveLeft1->setText(QApplication::translate("IOGraphDialog", "Move Left 1 Pixel", 0));
#ifndef QT_NO_TOOLTIP
        actionMoveLeft1->setToolTip(QApplication::translate("IOGraphDialog", "Move Left 1 Pixel", 0));
#endif // QT_NO_TOOLTIP
        actionMoveLeft1->setShortcut(QApplication::translate("IOGraphDialog", "Shift+Left", 0));
        actionMoveRight1->setText(QApplication::translate("IOGraphDialog", "Move Right 1 Pixel", 0));
#ifndef QT_NO_TOOLTIP
        actionMoveRight1->setToolTip(QApplication::translate("IOGraphDialog", "Move Right 1 Pixel", 0));
#endif // QT_NO_TOOLTIP
        actionMoveRight1->setShortcut(QApplication::translate("IOGraphDialog", "Shift+Right", 0));
        actionMoveDown1->setText(QApplication::translate("IOGraphDialog", "Move Down 1 Pixel", 0));
#ifndef QT_NO_TOOLTIP
        actionMoveDown1->setToolTip(QApplication::translate("IOGraphDialog", "Move down 1 Pixel", 0));
#endif // QT_NO_TOOLTIP
        actionMoveDown1->setShortcut(QApplication::translate("IOGraphDialog", "Shift+Down", 0));
        actionGoToPacket->setText(QApplication::translate("IOGraphDialog", "Go To Packet Under Cursor", 0));
#ifndef QT_NO_TOOLTIP
        actionGoToPacket->setToolTip(QApplication::translate("IOGraphDialog", "Go to packet currently under the cursor", 0));
#endif // QT_NO_TOOLTIP
        actionGoToPacket->setShortcut(QApplication::translate("IOGraphDialog", "G", 0));
        actionDragZoom->setText(QApplication::translate("IOGraphDialog", "Drag / Zoom", 0));
#ifndef QT_NO_TOOLTIP
        actionDragZoom->setToolTip(QApplication::translate("IOGraphDialog", "Toggle mouse drag / zoom behavior", 0));
#endif // QT_NO_TOOLTIP
        actionDragZoom->setShortcut(QApplication::translate("IOGraphDialog", "Z", 0));
        actionToggleTimeOrigin->setText(QApplication::translate("IOGraphDialog", "Capture / Session Time Origin", 0));
#ifndef QT_NO_TOOLTIP
        actionToggleTimeOrigin->setToolTip(QApplication::translate("IOGraphDialog", "Toggle capture / session time origin", 0));
#endif // QT_NO_TOOLTIP
        actionToggleTimeOrigin->setShortcut(QApplication::translate("IOGraphDialog", "T", 0));
        actionCrosshairs->setText(QApplication::translate("IOGraphDialog", "Crosshairs", 0));
#ifndef QT_NO_TOOLTIP
        actionCrosshairs->setToolTip(QApplication::translate("IOGraphDialog", "Toggle crosshairs", 0));
#endif // QT_NO_TOOLTIP
        actionCrosshairs->setShortcut(QApplication::translate("IOGraphDialog", "Space", 0));
        actionZoomInX->setText(QApplication::translate("IOGraphDialog", "Zoom In X Axis", 0));
#ifndef QT_NO_TOOLTIP
        actionZoomInX->setToolTip(QApplication::translate("IOGraphDialog", "Zoom In X Axis", 0));
#endif // QT_NO_TOOLTIP
        actionZoomInX->setShortcut(QApplication::translate("IOGraphDialog", "X", 0));
        actionZoomOutX->setText(QApplication::translate("IOGraphDialog", "Zoom Out X Axis", 0));
#ifndef QT_NO_TOOLTIP
        actionZoomOutX->setToolTip(QApplication::translate("IOGraphDialog", "Zoom Out X Axis", 0));
#endif // QT_NO_TOOLTIP
        actionZoomOutX->setShortcut(QApplication::translate("IOGraphDialog", "Shift+X", 0));
        actionZoomInY->setText(QApplication::translate("IOGraphDialog", "Zoom In Y Axis", 0));
#ifndef QT_NO_TOOLTIP
        actionZoomInY->setToolTip(QApplication::translate("IOGraphDialog", "Zoom In Y Axis", 0));
#endif // QT_NO_TOOLTIP
        actionZoomInY->setShortcut(QApplication::translate("IOGraphDialog", "Y", 0));
        actionZoomOutY->setText(QApplication::translate("IOGraphDialog", "Zoom Out Y Axis", 0));
#ifndef QT_NO_TOOLTIP
        actionZoomOutY->setToolTip(QApplication::translate("IOGraphDialog", "Zoom Out Y Axis", 0));
#endif // QT_NO_TOOLTIP
        actionZoomOutY->setShortcut(QApplication::translate("IOGraphDialog", "Shift+Y", 0));
#ifndef QT_NO_TOOLTIP
        hintLabel->setToolTip(QApplication::translate("IOGraphDialog", "<html><head/><body>\n"
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
"<tr><th>g</th><"
                        "td>Go to packet under cursor</td></th>\n"
"\n"
"<tr><th>z</th><td>Toggle mouse drag / zoom</td></th>\n"
"<tr><th>t</th><td>Toggle capture / session time origin</td></th>\n"
"<tr><th>Space</th><td>Toggle crosshairs</td></th>\n"
"\n"
"</tbody></table>\n"
"</body></html>", 0));
#endif // QT_NO_TOOLTIP
        hintLabel->setText(QString());
#ifndef QT_NO_TOOLTIP
        newToolButton->setToolTip(QApplication::translate("IOGraphDialog", "Add a new graph.", 0));
#endif // QT_NO_TOOLTIP
        newToolButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        deleteToolButton->setToolTip(QApplication::translate("IOGraphDialog", "Remove this graph.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        copyToolButton->setToolTip(QApplication::translate("IOGraphDialog", "Duplicate this graph.", 0));
#endif // QT_NO_TOOLTIP
        copyToolButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        clearToolButton->setToolTip(QApplication::translate("IOGraphDialog", "Clear all graphs.", 0));
#endif // QT_NO_TOOLTIP
        mouseLabel->setText(QApplication::translate("IOGraphDialog", "Mouse", 0));
#ifndef QT_NO_TOOLTIP
        dragRadioButton->setToolTip(QApplication::translate("IOGraphDialog", "Drag using the mouse button.", 0));
#endif // QT_NO_TOOLTIP
        dragRadioButton->setText(QApplication::translate("IOGraphDialog", "drags", 0));
#ifndef QT_NO_TOOLTIP
        zoomRadioButton->setToolTip(QApplication::translate("IOGraphDialog", "Select using the mouse button.", 0));
#endif // QT_NO_TOOLTIP
        zoomRadioButton->setText(QApplication::translate("IOGraphDialog", "zooms", 0));
        label_2->setText(QApplication::translate("IOGraphDialog", "Interval", 0));
        todCheckBox->setText(QApplication::translate("IOGraphDialog", "Time of day", 0));
        logCheckBox->setText(QApplication::translate("IOGraphDialog", "Log scale", 0));
        resetButton->setText(QApplication::translate("IOGraphDialog", "Reset", 0));
    } // retranslateUi

};

namespace Ui {
    class IOGraphDialog: public Ui_IOGraphDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IO_GRAPH_DIALOG_H
