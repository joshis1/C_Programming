/********************************************************************************
** Form generated from reading UI file 'wireless_frame.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIRELESS_FRAME_H
#define UI_WIRELESS_FRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WirelessFrame
{
public:
    QHBoxLayout *horizontalLayout_3;
    QStackedWidget *stackedWidget;
    QWidget *interfacePage;
    QHBoxLayout *horizontalLayout;
    QLabel *interfaceLabel;
    QComboBox *interfaceComboBox;
    QSpacerItem *horizontalSpacer_3;
    QLabel *channelLabel;
    QComboBox *channelComboBox;
    QComboBox *channelTypeComboBox;
    QFrame *fcsFilterFrame;
    QHBoxLayout *fcsFilterHLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *fcsLabel;
    QComboBox *fcsComboBox;
    QWidget *noWirelessPage;
    QHBoxLayout *horizontalLayout_2;
    QLabel *noWirelessLabel;
    QSpacerItem *horizontalSpacer;
    QToolButton *helperToolButton;
    QToolButton *prefsToolButton;

    void setupUi(QFrame *WirelessFrame)
    {
        if (WirelessFrame->objectName().isEmpty())
            WirelessFrame->setObjectName(QStringLiteral("WirelessFrame"));
        WirelessFrame->resize(955, 20);
        WirelessFrame->setFrameShape(QFrame::NoFrame);
        WirelessFrame->setFrameShadow(QFrame::Plain);
        horizontalLayout_3 = new QHBoxLayout(WirelessFrame);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, 0);
        stackedWidget = new QStackedWidget(WirelessFrame);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        interfacePage = new QWidget();
        interfacePage->setObjectName(QStringLiteral("interfacePage"));
        horizontalLayout = new QHBoxLayout(interfacePage);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, 0);
        interfaceLabel = new QLabel(interfacePage);
        interfaceLabel->setObjectName(QStringLiteral("interfaceLabel"));

        horizontalLayout->addWidget(interfaceLabel);

        interfaceComboBox = new QComboBox(interfacePage);
        interfaceComboBox->setObjectName(QStringLiteral("interfaceComboBox"));
        interfaceComboBox->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout->addWidget(interfaceComboBox);

        horizontalSpacer_3 = new QSpacerItem(12, 5, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        channelLabel = new QLabel(interfacePage);
        channelLabel->setObjectName(QStringLiteral("channelLabel"));

        horizontalLayout->addWidget(channelLabel);

        channelComboBox = new QComboBox(interfacePage);
        channelComboBox->setObjectName(QStringLiteral("channelComboBox"));
        channelComboBox->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout->addWidget(channelComboBox);

        channelTypeComboBox = new QComboBox(interfacePage);
        channelTypeComboBox->setObjectName(QStringLiteral("channelTypeComboBox"));
        channelTypeComboBox->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout->addWidget(channelTypeComboBox);

        fcsFilterFrame = new QFrame(interfacePage);
        fcsFilterFrame->setObjectName(QStringLiteral("fcsFilterFrame"));
        fcsFilterFrame->setFrameShape(QFrame::NoFrame);
        fcsFilterFrame->setFrameShadow(QFrame::Plain);
        fcsFilterFrame->setLineWidth(0);
        fcsFilterHLayout = new QHBoxLayout(fcsFilterFrame);
        fcsFilterHLayout->setObjectName(QStringLiteral("fcsFilterHLayout"));
        fcsFilterHLayout->setContentsMargins(-1, 0, -1, 0);
        horizontalSpacer_2 = new QSpacerItem(37, 5, QSizePolicy::Expanding, QSizePolicy::Minimum);

        fcsFilterHLayout->addItem(horizontalSpacer_2);

        fcsLabel = new QLabel(fcsFilterFrame);
        fcsLabel->setObjectName(QStringLiteral("fcsLabel"));

        fcsFilterHLayout->addWidget(fcsLabel);

        fcsComboBox = new QComboBox(fcsFilterFrame);
        fcsComboBox->setObjectName(QStringLiteral("fcsComboBox"));

        fcsFilterHLayout->addWidget(fcsComboBox);


        horizontalLayout->addWidget(fcsFilterFrame);

        stackedWidget->addWidget(interfacePage);
        noWirelessPage = new QWidget();
        noWirelessPage->setObjectName(QStringLiteral("noWirelessPage"));
        horizontalLayout_2 = new QHBoxLayout(noWirelessPage);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, 0);
        noWirelessLabel = new QLabel(noWirelessPage);
        noWirelessLabel->setObjectName(QStringLiteral("noWirelessLabel"));

        horizontalLayout_2->addWidget(noWirelessLabel);

        stackedWidget->addWidget(noWirelessPage);

        horizontalLayout_3->addWidget(stackedWidget);

        horizontalSpacer = new QSpacerItem(40, 5, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        helperToolButton = new QToolButton(WirelessFrame);
        helperToolButton->setObjectName(QStringLiteral("helperToolButton"));

        horizontalLayout_3->addWidget(helperToolButton);

        prefsToolButton = new QToolButton(WirelessFrame);
        prefsToolButton->setObjectName(QStringLiteral("prefsToolButton"));

        horizontalLayout_3->addWidget(prefsToolButton);


        retranslateUi(WirelessFrame);

        QMetaObject::connectSlotsByName(WirelessFrame);
    } // setupUi

    void retranslateUi(QFrame *WirelessFrame)
    {
        WirelessFrame->setWindowTitle(QApplication::translate("WirelessFrame", "Frame", 0));
        interfaceLabel->setText(QApplication::translate("WirelessFrame", "Interface", 0));
#ifndef QT_NO_TOOLTIP
        channelLabel->setToolTip(QApplication::translate("WirelessFrame", "<html><head/><body><p>Set the 802.11 channel.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        channelLabel->setText(QApplication::translate("WirelessFrame", "Channel", 0));
#ifndef QT_NO_TOOLTIP
        fcsLabel->setToolTip(QApplication::translate("WirelessFrame", "<html><head/><body><p>When capturing, show all frames, ones that have a valid frame check sequence (FCS), or ones with an invalid FCS.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        fcsLabel->setText(QApplication::translate("WirelessFrame", "FCS Filter", 0));
        fcsComboBox->clear();
        fcsComboBox->insertItems(0, QStringList()
         << QApplication::translate("WirelessFrame", "All Frames", 0)
         << QApplication::translate("WirelessFrame", "Valid Frames", 0)
         << QApplication::translate("WirelessFrame", "Invalid Frames", 0)
        );
        noWirelessLabel->setText(QApplication::translate("WirelessFrame", "Wireless controls are not supported in this version of Wireshark.", 0));
        helperToolButton->setText(QApplication::translate("WirelessFrame", "External Helper", 0));
#ifndef QT_NO_TOOLTIP
        prefsToolButton->setToolTip(QApplication::translate("WirelessFrame", "<html><head/><body><p>Show the IEEE 802.11 preferences, including decryption keys.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        prefsToolButton->setText(QApplication::translate("WirelessFrame", "802.11 Preferences", 0));
    } // retranslateUi

};

namespace Ui {
    class WirelessFrame: public Ui_WirelessFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIRELESS_FRAME_H
