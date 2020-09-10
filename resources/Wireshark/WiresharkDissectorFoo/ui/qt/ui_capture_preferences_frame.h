/********************************************************************************
** Form generated from reading UI file 'capture_preferences_frame.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAPTURE_PREFERENCES_FRAME_H
#define UI_CAPTURE_PREFERENCES_FRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CapturePreferencesFrame
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *defaultInterfaceSpacer;
    QComboBox *defaultInterfaceComboBox;
    QCheckBox *capturePromModeCheckBox;
    QCheckBox *capturePcapNgCheckBox;
    QCheckBox *captureRealTimeCheckBox;
    QCheckBox *captureAutoScrollCheckBox;
    QCheckBox *captureNoInterfaceLoad;
    QCheckBox *captureNoExtcapCheckBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QFrame *CapturePreferencesFrame)
    {
        if (CapturePreferencesFrame->objectName().isEmpty())
            CapturePreferencesFrame->setObjectName(QStringLiteral("CapturePreferencesFrame"));
        CapturePreferencesFrame->resize(354, 220);
        CapturePreferencesFrame->setMinimumSize(QSize(0, 191));
        CapturePreferencesFrame->setLineWidth(0);
        verticalLayout = new QVBoxLayout(CapturePreferencesFrame);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(CapturePreferencesFrame);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        defaultInterfaceSpacer = new QSpacerItem(18, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(defaultInterfaceSpacer);

        defaultInterfaceComboBox = new QComboBox(CapturePreferencesFrame);
        defaultInterfaceComboBox->setObjectName(QStringLiteral("defaultInterfaceComboBox"));
        defaultInterfaceComboBox->setEditable(true);

        horizontalLayout->addWidget(defaultInterfaceComboBox);


        verticalLayout->addLayout(horizontalLayout);

        capturePromModeCheckBox = new QCheckBox(CapturePreferencesFrame);
        capturePromModeCheckBox->setObjectName(QStringLiteral("capturePromModeCheckBox"));

        verticalLayout->addWidget(capturePromModeCheckBox);

        capturePcapNgCheckBox = new QCheckBox(CapturePreferencesFrame);
        capturePcapNgCheckBox->setObjectName(QStringLiteral("capturePcapNgCheckBox"));

        verticalLayout->addWidget(capturePcapNgCheckBox);

        captureRealTimeCheckBox = new QCheckBox(CapturePreferencesFrame);
        captureRealTimeCheckBox->setObjectName(QStringLiteral("captureRealTimeCheckBox"));

        verticalLayout->addWidget(captureRealTimeCheckBox);

        captureAutoScrollCheckBox = new QCheckBox(CapturePreferencesFrame);
        captureAutoScrollCheckBox->setObjectName(QStringLiteral("captureAutoScrollCheckBox"));

        verticalLayout->addWidget(captureAutoScrollCheckBox);

        captureNoInterfaceLoad = new QCheckBox(CapturePreferencesFrame);
        captureNoInterfaceLoad->setObjectName(QStringLiteral("captureNoInterfaceLoad"));

        verticalLayout->addWidget(captureNoInterfaceLoad);

        captureNoExtcapCheckBox = new QCheckBox(CapturePreferencesFrame);
        captureNoExtcapCheckBox->setObjectName(QStringLiteral("captureNoExtcapCheckBox"));

        verticalLayout->addWidget(captureNoExtcapCheckBox);

        verticalSpacer = new QSpacerItem(20, 3, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(CapturePreferencesFrame);

        QMetaObject::connectSlotsByName(CapturePreferencesFrame);
    } // setupUi

    void retranslateUi(QFrame *CapturePreferencesFrame)
    {
        CapturePreferencesFrame->setWindowTitle(QApplication::translate("CapturePreferencesFrame", "Frame", 0));
        label->setText(QApplication::translate("CapturePreferencesFrame", "Default interface", 0));
#ifndef QT_NO_TOOLTIP
        capturePromModeCheckBox->setToolTip(QApplication::translate("CapturePreferencesFrame", "<html><head/><body><p>You probably want to enable this. Usually a network card will only capture the traffic sent to its own network address. If you want to capture all traffic that the network card can &quot;see&quot;, mark this option. See the FAQ for some more details of capturing packets from a switched network.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        capturePromModeCheckBox->setText(QApplication::translate("CapturePreferencesFrame", "Capture packets in promiscuous mode", 0));
#ifndef QT_NO_TOOLTIP
        capturePcapNgCheckBox->setToolTip(QApplication::translate("CapturePreferencesFrame", "<html><head/><body><p>Capture packets in the next-generation capture file format.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        capturePcapNgCheckBox->setText(QApplication::translate("CapturePreferencesFrame", "Capture packets in pcapng format", 0));
#ifndef QT_NO_TOOLTIP
        captureRealTimeCheckBox->setToolTip(QApplication::translate("CapturePreferencesFrame", "<html><head/><body><p>Update the list of packets while capture is in progress. This can result in dropped packets on high-speed networks.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        captureRealTimeCheckBox->setText(QApplication::translate("CapturePreferencesFrame", "Update list of packets in real time", 0));
#ifndef QT_NO_TOOLTIP
        captureAutoScrollCheckBox->setToolTip(QApplication::translate("CapturePreferencesFrame", "<html><head/><body><p>Keep the packet list scrolled to the bottom while capturing.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        captureAutoScrollCheckBox->setText(QApplication::translate("CapturePreferencesFrame", "Automatic scrolling in live capture", 0));
        captureNoInterfaceLoad->setText(QApplication::translate("CapturePreferencesFrame", "Don't load interfaces on startup", 0));
        captureNoExtcapCheckBox->setText(QApplication::translate("CapturePreferencesFrame", "Disable external capture interfaces", 0));
    } // retranslateUi

};

namespace Ui {
    class CapturePreferencesFrame: public Ui_CapturePreferencesFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAPTURE_PREFERENCES_FRAME_H
