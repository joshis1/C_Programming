/********************************************************************************
** Form generated from reading UI file 'capture_interfaces_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAPTURE_INTERFACES_DIALOG_H
#define UI_CAPTURE_INTERFACES_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/capture_filter_combo.h"

QT_BEGIN_NAMESPACE

class Ui_CaptureInterfacesDialog
{
public:
    QVBoxLayout *verticalLayout_12;
    QTabWidget *tabWidget;
    QWidget *inputTab;
    QVBoxLayout *verticalLayout_2;
    QTreeWidget *interfaceTree;
    QHBoxLayout *horizontalLayout;
    QCheckBox *capturePromModeCheckBox;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *manageButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    CaptureFilterCombo *captureFilterComboBox;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *compileBPF;
    QWidget *outputTab;
    QVBoxLayout *verticalLayout_9;
    QGroupBox *gbCaptureToFile;
    QGridLayout *gridLayout_3;
    QLabel *label_2;
    QLineEdit *filenameLineEdit;
    QPushButton *browseButton;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QRadioButton *rbPcapng;
    QRadioButton *rbPcap;
    QSpacerItem *horizontalSpacer_7;
    QGroupBox *gbNewFileAuto;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_8;
    QCheckBox *PktCheckBox;
    QSpinBox *PktSpinBox;
    QLabel *PktLabel;
    QCheckBox *MBCheckBox;
    QSpinBox *MBSpinBox;
    QComboBox *MBComboBox;
    QCheckBox *SecsCheckBox;
    QSpinBox *SecsSpinBox;
    QComboBox *SecsComboBox;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *RbCheckBox;
    QSpinBox *RbSpinBox;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *verticalSpacer_2;
    QWidget *optionsTab;
    QFormLayout *formLayout;
    QHBoxLayout *horizontalLayout_8;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QCheckBox *cbUpdatePacketsRT;
    QCheckBox *cbAutoScroll;
    QCheckBox *cbExtraCaptureInfo;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *cbResolveMacAddresses;
    QCheckBox *cbResolveNetworkNames;
    QCheckBox *cbResolveTransportNames;
    QSpacerItem *horizontalSpacer_5;
    QGroupBox *gbStopCaptureAuto;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QCheckBox *stopPktCheckBox;
    QSpinBox *stopPktSpinBox;
    QLabel *label_7;
    QCheckBox *stopFilesCheckBox;
    QSpinBox *stopFilesSpinBox;
    QLabel *label_8;
    QCheckBox *stopMBCheckBox;
    QSpinBox *stopMBSpinBox;
    QComboBox *stopMBComboBox;
    QCheckBox *stopSecsCheckBox;
    QSpinBox *stopSecsSpinBox;
    QComboBox *stopSecsComboBox;
    QSpacerItem *verticalSpacer_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CaptureInterfacesDialog)
    {
        if (CaptureInterfacesDialog->objectName().isEmpty())
            CaptureInterfacesDialog->setObjectName(QStringLiteral("CaptureInterfacesDialog"));
        CaptureInterfacesDialog->resize(950, 440);
        verticalLayout_12 = new QVBoxLayout(CaptureInterfacesDialog);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        tabWidget = new QTabWidget(CaptureInterfacesDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        inputTab = new QWidget();
        inputTab->setObjectName(QStringLiteral("inputTab"));
        verticalLayout_2 = new QVBoxLayout(inputTab);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        interfaceTree = new QTreeWidget(inputTab);
        interfaceTree->setObjectName(QStringLiteral("interfaceTree"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(interfaceTree->sizePolicy().hasHeightForWidth());
        interfaceTree->setSizePolicy(sizePolicy);
        interfaceTree->setSelectionMode(QAbstractItemView::ExtendedSelection);
        interfaceTree->setTextElideMode(Qt::ElideMiddle);
        interfaceTree->setSortingEnabled(true);

        verticalLayout_2->addWidget(interfaceTree);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        capturePromModeCheckBox = new QCheckBox(inputTab);
        capturePromModeCheckBox->setObjectName(QStringLiteral("capturePromModeCheckBox"));

        horizontalLayout->addWidget(capturePromModeCheckBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        manageButton = new QPushButton(inputTab);
        manageButton->setObjectName(QStringLiteral("manageButton"));
        manageButton->setEnabled(true);

        horizontalLayout->addWidget(manageButton);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(inputTab);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        captureFilterComboBox = new CaptureFilterCombo(inputTab);
        captureFilterComboBox->setObjectName(QStringLiteral("captureFilterComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(captureFilterComboBox->sizePolicy().hasHeightForWidth());
        captureFilterComboBox->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(captureFilterComboBox);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        compileBPF = new QPushButton(inputTab);
        compileBPF->setObjectName(QStringLiteral("compileBPF"));

        horizontalLayout_2->addWidget(compileBPF);

        horizontalLayout_2->setStretch(1, 1);

        verticalLayout_2->addLayout(horizontalLayout_2);

        tabWidget->addTab(inputTab, QString());
        outputTab = new QWidget();
        outputTab->setObjectName(QStringLiteral("outputTab"));
        verticalLayout_9 = new QVBoxLayout(outputTab);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        gbCaptureToFile = new QGroupBox(outputTab);
        gbCaptureToFile->setObjectName(QStringLiteral("gbCaptureToFile"));
        gbCaptureToFile->setEnabled(true);
        gbCaptureToFile->setAutoFillBackground(false);
        gbCaptureToFile->setFlat(true);
        gbCaptureToFile->setCheckable(false);
        gridLayout_3 = new QGridLayout(gbCaptureToFile);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_2 = new QLabel(gbCaptureToFile);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1);

        filenameLineEdit = new QLineEdit(gbCaptureToFile);
        filenameLineEdit->setObjectName(QStringLiteral("filenameLineEdit"));

        gridLayout_3->addWidget(filenameLineEdit, 0, 1, 1, 1);

        browseButton = new QPushButton(gbCaptureToFile);
        browseButton->setObjectName(QStringLiteral("browseButton"));

        gridLayout_3->addWidget(browseButton, 0, 2, 1, 1);


        verticalLayout_9->addWidget(gbCaptureToFile);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(outputTab);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);

        rbPcapng = new QRadioButton(outputTab);
        rbPcapng->setObjectName(QStringLiteral("rbPcapng"));

        horizontalLayout_3->addWidget(rbPcapng);

        rbPcap = new QRadioButton(outputTab);
        rbPcap->setObjectName(QStringLiteral("rbPcap"));

        horizontalLayout_3->addWidget(rbPcap);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);


        verticalLayout_9->addLayout(horizontalLayout_3);

        gbNewFileAuto = new QGroupBox(outputTab);
        gbNewFileAuto->setObjectName(QStringLiteral("gbNewFileAuto"));
        gbNewFileAuto->setFlat(true);
        gbNewFileAuto->setCheckable(true);
        gridLayout = new QGridLayout(gbNewFileAuto);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_8, 0, 3, 4, 1);

        PktCheckBox = new QCheckBox(gbNewFileAuto);
        PktCheckBox->setObjectName(QStringLiteral("PktCheckBox"));

        gridLayout->addWidget(PktCheckBox, 1, 0, 1, 1);

        PktSpinBox = new QSpinBox(gbNewFileAuto);
        PktSpinBox->setObjectName(QStringLiteral("PktSpinBox"));
        PktSpinBox->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        PktSpinBox->setMaximum(2147483647);
        PktSpinBox->setValue(100000);

        gridLayout->addWidget(PktSpinBox, 1, 1, 1, 1);

        PktLabel = new QLabel(gbNewFileAuto);
        PktLabel->setObjectName(QStringLiteral("PktLabel"));

        gridLayout->addWidget(PktLabel, 1, 2, 1, 1);

        MBCheckBox = new QCheckBox(gbNewFileAuto);
        MBCheckBox->setObjectName(QStringLiteral("MBCheckBox"));

        gridLayout->addWidget(MBCheckBox, 2, 0, 1, 1);

        MBSpinBox = new QSpinBox(gbNewFileAuto);
        MBSpinBox->setObjectName(QStringLiteral("MBSpinBox"));
        MBSpinBox->setWrapping(true);
        MBSpinBox->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        MBSpinBox->setMinimum(1);
        MBSpinBox->setMaximum(1000000);
        MBSpinBox->setValue(1);

        gridLayout->addWidget(MBSpinBox, 2, 1, 1, 1);

        MBComboBox = new QComboBox(gbNewFileAuto);
        MBComboBox->setObjectName(QStringLiteral("MBComboBox"));

        gridLayout->addWidget(MBComboBox, 2, 2, 1, 1);

        SecsCheckBox = new QCheckBox(gbNewFileAuto);
        SecsCheckBox->setObjectName(QStringLiteral("SecsCheckBox"));

        gridLayout->addWidget(SecsCheckBox, 3, 0, 1, 1);

        SecsSpinBox = new QSpinBox(gbNewFileAuto);
        SecsSpinBox->setObjectName(QStringLiteral("SecsSpinBox"));
        SecsSpinBox->setWrapping(true);
        SecsSpinBox->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        SecsSpinBox->setMinimum(1);
        SecsSpinBox->setMaximum(1000000);
        SecsSpinBox->setValue(1);

        gridLayout->addWidget(SecsSpinBox, 3, 1, 1, 1);

        SecsComboBox = new QComboBox(gbNewFileAuto);
        SecsComboBox->setObjectName(QStringLiteral("SecsComboBox"));

        gridLayout->addWidget(SecsComboBox, 3, 2, 1, 1);


        verticalLayout_9->addWidget(gbNewFileAuto);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        RbCheckBox = new QCheckBox(outputTab);
        RbCheckBox->setObjectName(QStringLiteral("RbCheckBox"));

        horizontalLayout_4->addWidget(RbCheckBox);

        RbSpinBox = new QSpinBox(outputTab);
        RbSpinBox->setObjectName(QStringLiteral("RbSpinBox"));
        RbSpinBox->setWrapping(true);
        RbSpinBox->setMinimum(2);
        RbSpinBox->setMaximum(1000);
        RbSpinBox->setValue(2);

        horizontalLayout_4->addWidget(RbSpinBox);

        label_3 = new QLabel(outputTab);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_9);


        verticalLayout_9->addLayout(horizontalLayout_4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_2);

        tabWidget->addTab(outputTab, QString());
        gbNewFileAuto->raise();
        gbCaptureToFile->raise();
        optionsTab = new QWidget();
        optionsTab->setObjectName(QStringLiteral("optionsTab"));
        formLayout = new QFormLayout(optionsTab);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        groupBox = new QGroupBox(optionsTab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setFlat(true);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        cbUpdatePacketsRT = new QCheckBox(groupBox);
        cbUpdatePacketsRT->setObjectName(QStringLiteral("cbUpdatePacketsRT"));

        verticalLayout->addWidget(cbUpdatePacketsRT);

        cbAutoScroll = new QCheckBox(groupBox);
        cbAutoScroll->setObjectName(QStringLiteral("cbAutoScroll"));

        verticalLayout->addWidget(cbAutoScroll);

        cbExtraCaptureInfo = new QCheckBox(groupBox);
        cbExtraCaptureInfo->setObjectName(QStringLiteral("cbExtraCaptureInfo"));

        verticalLayout->addWidget(cbExtraCaptureInfo);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer_3);


        horizontalLayout_8->addWidget(groupBox);

        groupBox_2 = new QGroupBox(optionsTab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setFlat(true);
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        cbResolveMacAddresses = new QCheckBox(groupBox_2);
        cbResolveMacAddresses->setObjectName(QStringLiteral("cbResolveMacAddresses"));

        verticalLayout_3->addWidget(cbResolveMacAddresses);

        cbResolveNetworkNames = new QCheckBox(groupBox_2);
        cbResolveNetworkNames->setObjectName(QStringLiteral("cbResolveNetworkNames"));

        verticalLayout_3->addWidget(cbResolveNetworkNames);

        cbResolveTransportNames = new QCheckBox(groupBox_2);
        cbResolveTransportNames->setObjectName(QStringLiteral("cbResolveTransportNames"));

        verticalLayout_3->addWidget(cbResolveTransportNames);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_3->addItem(horizontalSpacer_5);


        horizontalLayout_8->addWidget(groupBox_2);


        formLayout->setLayout(0, QFormLayout::LabelRole, horizontalLayout_8);

        gbStopCaptureAuto = new QGroupBox(optionsTab);
        gbStopCaptureAuto->setObjectName(QStringLiteral("gbStopCaptureAuto"));
        gbStopCaptureAuto->setEnabled(true);
        gbStopCaptureAuto->setFlat(true);
        gridLayout_2 = new QGridLayout(gbStopCaptureAuto);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 3, 4, 1);

        stopPktCheckBox = new QCheckBox(gbStopCaptureAuto);
        stopPktCheckBox->setObjectName(QStringLiteral("stopPktCheckBox"));

        gridLayout_2->addWidget(stopPktCheckBox, 0, 0, 1, 1);

        stopPktSpinBox = new QSpinBox(gbStopCaptureAuto);
        stopPktSpinBox->setObjectName(QStringLiteral("stopPktSpinBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(stopPktSpinBox->sizePolicy().hasHeightForWidth());
        stopPktSpinBox->setSizePolicy(sizePolicy2);
        stopPktSpinBox->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        stopPktSpinBox->setMaximum(2147483647);
        stopPktSpinBox->setValue(1);

        gridLayout_2->addWidget(stopPktSpinBox, 0, 1, 1, 1);

        label_7 = new QLabel(gbStopCaptureAuto);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 0, 2, 1, 1);

        stopFilesCheckBox = new QCheckBox(gbStopCaptureAuto);
        stopFilesCheckBox->setObjectName(QStringLiteral("stopFilesCheckBox"));

        gridLayout_2->addWidget(stopFilesCheckBox, 1, 0, 1, 1);

        stopFilesSpinBox = new QSpinBox(gbStopCaptureAuto);
        stopFilesSpinBox->setObjectName(QStringLiteral("stopFilesSpinBox"));
        sizePolicy2.setHeightForWidth(stopFilesSpinBox->sizePolicy().hasHeightForWidth());
        stopFilesSpinBox->setSizePolicy(sizePolicy2);
        stopFilesSpinBox->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        stopFilesSpinBox->setMaximum(2147483647);
        stopFilesSpinBox->setValue(1);

        gridLayout_2->addWidget(stopFilesSpinBox, 1, 1, 1, 1);

        label_8 = new QLabel(gbStopCaptureAuto);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_2->addWidget(label_8, 1, 2, 1, 1);

        stopMBCheckBox = new QCheckBox(gbStopCaptureAuto);
        stopMBCheckBox->setObjectName(QStringLiteral("stopMBCheckBox"));

        gridLayout_2->addWidget(stopMBCheckBox, 2, 0, 1, 1);

        stopMBSpinBox = new QSpinBox(gbStopCaptureAuto);
        stopMBSpinBox->setObjectName(QStringLiteral("stopMBSpinBox"));
        stopMBSpinBox->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        stopMBSpinBox->setMaximum(2147483647);
        stopMBSpinBox->setValue(1);

        gridLayout_2->addWidget(stopMBSpinBox, 2, 1, 1, 1);

        stopMBComboBox = new QComboBox(gbStopCaptureAuto);
        stopMBComboBox->setObjectName(QStringLiteral("stopMBComboBox"));

        gridLayout_2->addWidget(stopMBComboBox, 2, 2, 1, 1);

        stopSecsCheckBox = new QCheckBox(gbStopCaptureAuto);
        stopSecsCheckBox->setObjectName(QStringLiteral("stopSecsCheckBox"));

        gridLayout_2->addWidget(stopSecsCheckBox, 3, 0, 1, 1);

        stopSecsSpinBox = new QSpinBox(gbStopCaptureAuto);
        stopSecsSpinBox->setObjectName(QStringLiteral("stopSecsSpinBox"));
        stopSecsSpinBox->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        stopSecsSpinBox->setMaximum(2147483647);
        stopSecsSpinBox->setValue(1);

        gridLayout_2->addWidget(stopSecsSpinBox, 3, 1, 1, 1);

        stopSecsComboBox = new QComboBox(gbStopCaptureAuto);
        stopSecsComboBox->setObjectName(QStringLiteral("stopSecsComboBox"));

        gridLayout_2->addWidget(stopSecsComboBox, 3, 2, 1, 1);


        formLayout->setWidget(1, QFormLayout::LabelRole, gbStopCaptureAuto);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(2, QFormLayout::LabelRole, verticalSpacer_3);

        tabWidget->addTab(optionsTab, QString());

        verticalLayout_12->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(CaptureInterfacesDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        verticalLayout_12->addWidget(buttonBox);


        retranslateUi(CaptureInterfacesDialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CaptureInterfacesDialog);
    } // setupUi

    void retranslateUi(QDialog *CaptureInterfacesDialog)
    {
        QTreeWidgetItem *___qtreewidgetitem = interfaceTree->headerItem();
        ___qtreewidgetitem->setText(7, QApplication::translate("CaptureInterfacesDialog", "Capture Filter", 0));
        ___qtreewidgetitem->setText(6, QApplication::translate("CaptureInterfacesDialog", "Monitor Mode", 0));
        ___qtreewidgetitem->setText(5, QApplication::translate("CaptureInterfacesDialog", "Buffer (MB)", 0));
        ___qtreewidgetitem->setText(4, QApplication::translate("CaptureInterfacesDialog", "Snaplen (B)", 0));
        ___qtreewidgetitem->setText(3, QApplication::translate("CaptureInterfacesDialog", "Promiscuous", 0));
        ___qtreewidgetitem->setText(2, QApplication::translate("CaptureInterfacesDialog", "Link-layer Header", 0));
        ___qtreewidgetitem->setText(1, QApplication::translate("CaptureInterfacesDialog", "Traffic", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("CaptureInterfacesDialog", "Interface", 0));
#ifndef QT_NO_TOOLTIP
        capturePromModeCheckBox->setToolTip(QApplication::translate("CaptureInterfacesDialog", "<html><head/><body><p>You probably want to enable this. Usually a network card will only capture the traffic sent to its own network address. If you want to capture all traffic that the network card can &quot;see&quot;, mark this option. See the FAQ for some more details of capturing packets from a switched network.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        capturePromModeCheckBox->setText(QApplication::translate("CaptureInterfacesDialog", "Enable promiscuous mode on all interfaces", 0));
#ifndef QT_NO_TOOLTIP
        manageButton->setToolTip(QApplication::translate("CaptureInterfacesDialog", "Show and hide interfaces, add comments, and manage pipes and remote interfaces.", 0));
#endif // QT_NO_TOOLTIP
        manageButton->setText(QApplication::translate("CaptureInterfacesDialog", "Manage Interfaces\342\200\246", 0));
        label_4->setText(QApplication::translate("CaptureInterfacesDialog", "Capture filter for selected interfaces:", 0));
        compileBPF->setText(QApplication::translate("CaptureInterfacesDialog", "Compile BPFs", 0));
        tabWidget->setTabText(tabWidget->indexOf(inputTab), QApplication::translate("CaptureInterfacesDialog", "Input", 0));
#ifndef QT_NO_TOOLTIP
        gbCaptureToFile->setToolTip(QApplication::translate("CaptureInterfacesDialog", "<html><head/><body><p>Enter the file name to which captured data will be written. By default, a temporary file will be used.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        gbCaptureToFile->setTitle(QApplication::translate("CaptureInterfacesDialog", "Capture to a permanent file", 0));
        label_2->setText(QApplication::translate("CaptureInterfacesDialog", "File:", 0));
        browseButton->setText(QApplication::translate("CaptureInterfacesDialog", "Browse\342\200\246", 0));
        label->setText(QApplication::translate("CaptureInterfacesDialog", "Output format:", 0));
        rbPcapng->setText(QApplication::translate("CaptureInterfacesDialog", "pcapng", 0));
        rbPcap->setText(QApplication::translate("CaptureInterfacesDialog", "pcap", 0));
#ifndef QT_NO_TOOLTIP
        gbNewFileAuto->setToolTip(QApplication::translate("CaptureInterfacesDialog", "<html><head/><body><p>Instead of using a single capture file, multiple files will be created.</p><p>The generated file names will contain an incrementing number and the start time of the capture.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        gbNewFileAuto->setTitle(QApplication::translate("CaptureInterfacesDialog", "Create a new file automatically after\342\200\246", 0));
        PktCheckBox->setText(QString());
#ifndef QT_NO_TOOLTIP
        PktSpinBox->setToolTip(QApplication::translate("CaptureInterfacesDialog", "Switch to the next file after the specified number of packets have been captured.", 0));
#endif // QT_NO_TOOLTIP
        PktLabel->setText(QApplication::translate("CaptureInterfacesDialog", "packets", 0));
        MBCheckBox->setText(QString());
#ifndef QT_NO_TOOLTIP
        MBSpinBox->setToolTip(QApplication::translate("CaptureInterfacesDialog", "<html><head/><body><p>If the selected file size is exceeded, capturing switches to the next file.</p><p>PLEASE NOTE: One option MUST be selected.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        MBComboBox->clear();
        MBComboBox->insertItems(0, QStringList()
         << QApplication::translate("CaptureInterfacesDialog", "kilobytes", 0)
         << QApplication::translate("CaptureInterfacesDialog", "megabytes", 0)
         << QApplication::translate("CaptureInterfacesDialog", "gigabytes", 0)
        );
#ifndef QT_NO_TOOLTIP
        MBComboBox->setToolTip(QApplication::translate("CaptureInterfacesDialog", "If the selected file size is exceeded, capturing switches to the next file.\n"
"PLEASE NOTE: One option MUST be selected.", 0));
#endif // QT_NO_TOOLTIP
        SecsCheckBox->setText(QString());
#ifndef QT_NO_TOOLTIP
        SecsSpinBox->setToolTip(QApplication::translate("CaptureInterfacesDialog", "If the selected file size is exceeded, capturing switches to the next file.\n"
"PLEASE NOTE: One option MUST be selected.", 0));
#endif // QT_NO_TOOLTIP
        SecsComboBox->clear();
        SecsComboBox->insertItems(0, QStringList()
         << QApplication::translate("CaptureInterfacesDialog", "seconds", 0)
         << QApplication::translate("CaptureInterfacesDialog", "minutes", 0)
         << QApplication::translate("CaptureInterfacesDialog", "hours", 0)
        );
#ifndef QT_NO_TOOLTIP
        SecsComboBox->setToolTip(QApplication::translate("CaptureInterfacesDialog", "If the selected file size is exceeded, capturing switches to the next file.\n"
"PLEASE NOTE: One option MUST be selected.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        RbCheckBox->setToolTip(QApplication::translate("CaptureInterfacesDialog", "<html><head/><body><p>After capturing has switched to the next file and the given number of files has exceeded, the oldest file will be removed.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        RbCheckBox->setText(QApplication::translate("CaptureInterfacesDialog", "Use a ring buffer with ", 0));
        label_3->setText(QApplication::translate("CaptureInterfacesDialog", "files", 0));
        tabWidget->setTabText(tabWidget->indexOf(outputTab), QApplication::translate("CaptureInterfacesDialog", "Output", 0));
        groupBox->setTitle(QApplication::translate("CaptureInterfacesDialog", "Display Options", 0));
#ifndef QT_NO_TOOLTIP
        cbUpdatePacketsRT->setToolTip(QApplication::translate("CaptureInterfacesDialog", "<html><head/><body><p>Using this option will show the captured packets immediately on the main screen. Please note: this will slow down capturing, so increased packet drops might appear.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        cbUpdatePacketsRT->setText(QApplication::translate("CaptureInterfacesDialog", "Update list of packets in real-time", 0));
#ifndef QT_NO_TOOLTIP
        cbAutoScroll->setToolTip(QApplication::translate("CaptureInterfacesDialog", "<html><head/><body><p>This will scroll the &quot;Packet List&quot; automatically to the latest captured packet, when the &quot;Update list of packets in real-time&quot; option is used.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        cbAutoScroll->setText(QApplication::translate("CaptureInterfacesDialog", "Automatically scroll during live capture", 0));
#ifndef QT_NO_TOOLTIP
        cbExtraCaptureInfo->setToolTip(QApplication::translate("CaptureInterfacesDialog", "<html><head/><body><p>Show the capture info dialog while capturing.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        cbExtraCaptureInfo->setText(QApplication::translate("CaptureInterfacesDialog", "Show capture information during live capture", 0));
        groupBox_2->setTitle(QApplication::translate("CaptureInterfacesDialog", "Name Resolution", 0));
#ifndef QT_NO_TOOLTIP
        cbResolveMacAddresses->setToolTip(QApplication::translate("CaptureInterfacesDialog", "Perform MAC layer name resolution while capturing.", 0));
#endif // QT_NO_TOOLTIP
        cbResolveMacAddresses->setText(QApplication::translate("CaptureInterfacesDialog", "Resolve MAC Addresses", 0));
#ifndef QT_NO_TOOLTIP
        cbResolveNetworkNames->setToolTip(QApplication::translate("CaptureInterfacesDialog", "<html><head/><body><p>Perform network layer name resolution while capturing.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        cbResolveNetworkNames->setText(QApplication::translate("CaptureInterfacesDialog", "Resolve network names", 0));
#ifndef QT_NO_TOOLTIP
        cbResolveTransportNames->setToolTip(QApplication::translate("CaptureInterfacesDialog", "Perform transport layer name resolution while capturing.", 0));
#endif // QT_NO_TOOLTIP
        cbResolveTransportNames->setText(QApplication::translate("CaptureInterfacesDialog", "Resolve transport names", 0));
        gbStopCaptureAuto->setTitle(QApplication::translate("CaptureInterfacesDialog", "Stop capture automatically after\342\200\246", 0));
#ifndef QT_NO_TOOLTIP
        stopPktCheckBox->setToolTip(QApplication::translate("CaptureInterfacesDialog", "<html><head/><body><p>Stop capturing after the specified number of packets have been captured.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        stopPktCheckBox->setText(QString());
#ifndef QT_NO_TOOLTIP
        stopPktSpinBox->setToolTip(QApplication::translate("CaptureInterfacesDialog", "Stop capturing after the specified number of packets have been captured.", 0));
#endif // QT_NO_TOOLTIP
        label_7->setText(QApplication::translate("CaptureInterfacesDialog", "packets", 0));
#ifndef QT_NO_TOOLTIP
        stopFilesCheckBox->setToolTip(QApplication::translate("CaptureInterfacesDialog", "<html><head/><body><p>Stop capturing after the specified number of files have been created.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        stopFilesCheckBox->setText(QString());
#ifndef QT_NO_TOOLTIP
        stopFilesSpinBox->setToolTip(QApplication::translate("CaptureInterfacesDialog", "Stop capturing after the specified number of packets have been captured.", 0));
#endif // QT_NO_TOOLTIP
        label_8->setText(QApplication::translate("CaptureInterfacesDialog", "files", 0));
#ifndef QT_NO_TOOLTIP
        stopMBCheckBox->setToolTip(QApplication::translate("CaptureInterfacesDialog", "<html><head/><body><p>Stop capturing after the specified amount of data has been captured.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        stopMBCheckBox->setText(QString());
#ifndef QT_NO_TOOLTIP
        stopMBSpinBox->setToolTip(QApplication::translate("CaptureInterfacesDialog", "Stop capturing after the specified amount of data has been captured.", 0));
#endif // QT_NO_TOOLTIP
        stopMBComboBox->clear();
        stopMBComboBox->insertItems(0, QStringList()
         << QApplication::translate("CaptureInterfacesDialog", "kilobytes", 0)
         << QApplication::translate("CaptureInterfacesDialog", "megabytes", 0)
         << QApplication::translate("CaptureInterfacesDialog", "gigabytes", 0)
        );
#ifndef QT_NO_TOOLTIP
        stopMBComboBox->setToolTip(QApplication::translate("CaptureInterfacesDialog", "Stop capturing after the specified amount of data has been captured.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        stopSecsCheckBox->setToolTip(QApplication::translate("CaptureInterfacesDialog", "Stop capturing after the specified amount of time has passed.", 0));
#endif // QT_NO_TOOLTIP
        stopSecsCheckBox->setText(QString());
#ifndef QT_NO_TOOLTIP
        stopSecsSpinBox->setToolTip(QApplication::translate("CaptureInterfacesDialog", "Stop capturing after the specified amount of time has passed.", 0));
#endif // QT_NO_TOOLTIP
        stopSecsComboBox->clear();
        stopSecsComboBox->insertItems(0, QStringList()
         << QApplication::translate("CaptureInterfacesDialog", "seconds", 0)
         << QApplication::translate("CaptureInterfacesDialog", "minutes", 0)
         << QApplication::translate("CaptureInterfacesDialog", "hours", 0)
        );
#ifndef QT_NO_TOOLTIP
        stopSecsComboBox->setToolTip(QApplication::translate("CaptureInterfacesDialog", "Stop capturing after the specified amount of time has passed.", 0));
#endif // QT_NO_TOOLTIP
        tabWidget->setTabText(tabWidget->indexOf(optionsTab), QApplication::translate("CaptureInterfacesDialog", "Options", 0));
        Q_UNUSED(CaptureInterfacesDialog);
    } // retranslateUi

};

namespace Ui {
    class CaptureInterfacesDialog: public Ui_CaptureInterfacesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAPTURE_INTERFACES_DIALOG_H
