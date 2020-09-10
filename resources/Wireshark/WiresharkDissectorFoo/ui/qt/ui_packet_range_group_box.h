/********************************************************************************
** Form generated from reading UI file 'packet_range_group_box.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PACKET_RANGE_GROUP_BOX_H
#define UI_PACKET_RANGE_GROUP_BOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include "widgets/syntax_line_edit.h"

QT_BEGIN_NAMESPACE

class Ui_PacketRangeGroupBox
{
public:
    QGridLayout *gridLayout;
    QLabel *selectedDisplayedLabel;
    QRadioButton *displayedButton;
    QLabel *allCapturedLabel;
    QRadioButton *markedButton;
    QRadioButton *rangeButton;
    QLabel *rangeDisplayedLabel;
    QCheckBox *ignoredCheckBox;
    QLabel *markedDisplayedLabel;
    QRadioButton *ftlMarkedButton;
    QLabel *selectedCapturedLabel;
    QRadioButton *allButton;
    QLabel *ftlCapturedLabel;
    QLabel *allDisplayedLabel;
    QLabel *rangeCapturedLabel;
    QRadioButton *selectedButton;
    QRadioButton *capturedButton;
    QLabel *markedCapturedLabel;
    QSpacerItem *horizontalSpacer_3;
    SyntaxLineEdit *rangeLineEdit;
    QLabel *ftlDisplayedLabel;
    QLabel *ignoredCapturedLabel;
    QLabel *ignoredDisplayedLabel;
    QButtonGroup *packetSelectionButtonGroup;
    QButtonGroup *capturedDisplayedButtonGroup;

    void setupUi(QGroupBox *PacketRangeGroupBox)
    {
        if (PacketRangeGroupBox->objectName().isEmpty())
            PacketRangeGroupBox->setObjectName(QStringLiteral("PacketRangeGroupBox"));
        PacketRangeGroupBox->resize(454, 241);
        gridLayout = new QGridLayout(PacketRangeGroupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        selectedDisplayedLabel = new QLabel(PacketRangeGroupBox);
        selectedDisplayedLabel->setObjectName(QStringLiteral("selectedDisplayedLabel"));
        selectedDisplayedLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(selectedDisplayedLabel, 2, 3, 1, 1);

        displayedButton = new QRadioButton(PacketRangeGroupBox);
        capturedDisplayedButtonGroup = new QButtonGroup(PacketRangeGroupBox);
        capturedDisplayedButtonGroup->setObjectName(QStringLiteral("capturedDisplayedButtonGroup"));
        capturedDisplayedButtonGroup->addButton(displayedButton);
        displayedButton->setObjectName(QStringLiteral("displayedButton"));
        displayedButton->setCheckable(true);

        gridLayout->addWidget(displayedButton, 0, 3, 1, 1);

        allCapturedLabel = new QLabel(PacketRangeGroupBox);
        allCapturedLabel->setObjectName(QStringLiteral("allCapturedLabel"));
        allCapturedLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(allCapturedLabel, 1, 2, 1, 1);

        markedButton = new QRadioButton(PacketRangeGroupBox);
        packetSelectionButtonGroup = new QButtonGroup(PacketRangeGroupBox);
        packetSelectionButtonGroup->setObjectName(QStringLiteral("packetSelectionButtonGroup"));
        packetSelectionButtonGroup->addButton(markedButton);
        markedButton->setObjectName(QStringLiteral("markedButton"));

        gridLayout->addWidget(markedButton, 3, 0, 1, 2);

        rangeButton = new QRadioButton(PacketRangeGroupBox);
        packetSelectionButtonGroup->addButton(rangeButton);
        rangeButton->setObjectName(QStringLiteral("rangeButton"));

        gridLayout->addWidget(rangeButton, 5, 0, 1, 1);

        rangeDisplayedLabel = new QLabel(PacketRangeGroupBox);
        rangeDisplayedLabel->setObjectName(QStringLiteral("rangeDisplayedLabel"));
        rangeDisplayedLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(rangeDisplayedLabel, 5, 3, 1, 1);

        ignoredCheckBox = new QCheckBox(PacketRangeGroupBox);
        ignoredCheckBox->setObjectName(QStringLiteral("ignoredCheckBox"));

        gridLayout->addWidget(ignoredCheckBox, 7, 0, 1, 2);

        markedDisplayedLabel = new QLabel(PacketRangeGroupBox);
        markedDisplayedLabel->setObjectName(QStringLiteral("markedDisplayedLabel"));
        markedDisplayedLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(markedDisplayedLabel, 3, 3, 1, 1);

        ftlMarkedButton = new QRadioButton(PacketRangeGroupBox);
        packetSelectionButtonGroup->addButton(ftlMarkedButton);
        ftlMarkedButton->setObjectName(QStringLiteral("ftlMarkedButton"));

        gridLayout->addWidget(ftlMarkedButton, 4, 0, 1, 2);

        selectedCapturedLabel = new QLabel(PacketRangeGroupBox);
        selectedCapturedLabel->setObjectName(QStringLiteral("selectedCapturedLabel"));
        selectedCapturedLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(selectedCapturedLabel, 2, 2, 1, 1);

        allButton = new QRadioButton(PacketRangeGroupBox);
        packetSelectionButtonGroup->addButton(allButton);
        allButton->setObjectName(QStringLiteral("allButton"));

        gridLayout->addWidget(allButton, 1, 0, 1, 2);

        ftlCapturedLabel = new QLabel(PacketRangeGroupBox);
        ftlCapturedLabel->setObjectName(QStringLiteral("ftlCapturedLabel"));
        ftlCapturedLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(ftlCapturedLabel, 4, 2, 1, 1);

        allDisplayedLabel = new QLabel(PacketRangeGroupBox);
        allDisplayedLabel->setObjectName(QStringLiteral("allDisplayedLabel"));
        allDisplayedLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(allDisplayedLabel, 1, 3, 1, 1);

        rangeCapturedLabel = new QLabel(PacketRangeGroupBox);
        rangeCapturedLabel->setObjectName(QStringLiteral("rangeCapturedLabel"));
        rangeCapturedLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(rangeCapturedLabel, 5, 2, 1, 1);

        selectedButton = new QRadioButton(PacketRangeGroupBox);
        packetSelectionButtonGroup->addButton(selectedButton);
        selectedButton->setObjectName(QStringLiteral("selectedButton"));

        gridLayout->addWidget(selectedButton, 2, 0, 1, 2);

        capturedButton = new QRadioButton(PacketRangeGroupBox);
        capturedDisplayedButtonGroup->addButton(capturedButton);
        capturedButton->setObjectName(QStringLiteral("capturedButton"));
        capturedButton->setCheckable(true);

        gridLayout->addWidget(capturedButton, 0, 2, 1, 1);

        markedCapturedLabel = new QLabel(PacketRangeGroupBox);
        markedCapturedLabel->setObjectName(QStringLiteral("markedCapturedLabel"));
        markedCapturedLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(markedCapturedLabel, 3, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(63, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 0, 1, 1);

        rangeLineEdit = new SyntaxLineEdit(PacketRangeGroupBox);
        rangeLineEdit->setObjectName(QStringLiteral("rangeLineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(rangeLineEdit->sizePolicy().hasHeightForWidth());
        rangeLineEdit->setSizePolicy(sizePolicy);

        gridLayout->addWidget(rangeLineEdit, 5, 1, 1, 1);

        ftlDisplayedLabel = new QLabel(PacketRangeGroupBox);
        ftlDisplayedLabel->setObjectName(QStringLiteral("ftlDisplayedLabel"));
        ftlDisplayedLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(ftlDisplayedLabel, 4, 3, 1, 1);

        ignoredCapturedLabel = new QLabel(PacketRangeGroupBox);
        ignoredCapturedLabel->setObjectName(QStringLiteral("ignoredCapturedLabel"));
        ignoredCapturedLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(ignoredCapturedLabel, 7, 2, 1, 1);

        ignoredDisplayedLabel = new QLabel(PacketRangeGroupBox);
        ignoredDisplayedLabel->setObjectName(QStringLiteral("ignoredDisplayedLabel"));
        ignoredDisplayedLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(ignoredDisplayedLabel, 7, 3, 1, 1);


        retranslateUi(PacketRangeGroupBox);

        QMetaObject::connectSlotsByName(PacketRangeGroupBox);
    } // setupUi

    void retranslateUi(QGroupBox *PacketRangeGroupBox)
    {
        PacketRangeGroupBox->setWindowTitle(QApplication::translate("PacketRangeGroupBox", "Form", 0));
        PacketRangeGroupBox->setTitle(QApplication::translate("PacketRangeGroupBox", "Packet Range", 0));
        selectedDisplayedLabel->setText(QApplication::translate("PacketRangeGroupBox", "-", 0));
        displayedButton->setText(QApplication::translate("PacketRangeGroupBox", "Displayed", 0));
        allCapturedLabel->setText(QApplication::translate("PacketRangeGroupBox", "-", 0));
        markedButton->setText(QApplication::translate("PacketRangeGroupBox", "&Marked packets only", 0));
        rangeButton->setText(QApplication::translate("PacketRangeGroupBox", "&Range:", 0));
        rangeDisplayedLabel->setText(QApplication::translate("PacketRangeGroupBox", "-", 0));
        ignoredCheckBox->setText(QApplication::translate("PacketRangeGroupBox", "Remove &ignored packets", 0));
        markedDisplayedLabel->setText(QApplication::translate("PacketRangeGroupBox", "-", 0));
        ftlMarkedButton->setText(QApplication::translate("PacketRangeGroupBox", "First &to last marked", 0));
        selectedCapturedLabel->setText(QApplication::translate("PacketRangeGroupBox", "-", 0));
        allButton->setText(QApplication::translate("PacketRangeGroupBox", "&All packets", 0));
        ftlCapturedLabel->setText(QApplication::translate("PacketRangeGroupBox", "-", 0));
        allDisplayedLabel->setText(QApplication::translate("PacketRangeGroupBox", "-", 0));
        rangeCapturedLabel->setText(QApplication::translate("PacketRangeGroupBox", "-", 0));
        selectedButton->setText(QApplication::translate("PacketRangeGroupBox", "&Selected packets only", 0));
        capturedButton->setText(QApplication::translate("PacketRangeGroupBox", "Captured", 0));
        markedCapturedLabel->setText(QApplication::translate("PacketRangeGroupBox", "-", 0));
        ftlDisplayedLabel->setText(QApplication::translate("PacketRangeGroupBox", "-", 0));
        ignoredCapturedLabel->setText(QApplication::translate("PacketRangeGroupBox", "-", 0));
        ignoredDisplayedLabel->setText(QApplication::translate("PacketRangeGroupBox", "-", 0));
    } // retranslateUi

};

namespace Ui {
    class PacketRangeGroupBox: public Ui_PacketRangeGroupBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PACKET_RANGE_GROUP_BOX_H
