/********************************************************************************
** Form generated from reading UI file 'lbm_lbtrm_transport_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LBM_LBTRM_TRANSPORT_DIALOG_H
#define UI_LBM_LBTRM_TRANSPORT_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/display_filter_edit.h"

QT_BEGIN_NAMESPACE

class Ui_LBMLBTRMTransportDialog
{
public:
    QAction *actionCopyAsCSV;
    QAction *actionCopyAsYAML;
    QAction *action_SourceDataFrames;
    QAction *action_SourceDataBytes;
    QAction *action_SourceDataFramesBytes;
    QAction *action_SourceRXDataFrames;
    QAction *action_SourceRXDataBytes;
    QAction *action_SourceRXDataFramesBytes;
    QAction *action_SourceNCFFrames;
    QAction *action_SourceNCFBytes;
    QAction *action_SourceNCFCount;
    QAction *action_SourceDataRate;
    QAction *action_SourceRXDataRate;
    QAction *action_SourceNCFFramesBytes;
    QAction *action_SourceNCFCountBytes;
    QAction *action_SourceNCFFramesCount;
    QAction *action_SourceNCFFramesCountBytes;
    QAction *action_SourceNCFRate;
    QAction *action_SourceSMFrames;
    QAction *action_SourceSMBytes;
    QAction *action_SourceSMFramesBytes;
    QAction *action_SourceSMRate;
    QAction *action_SourceAutoResizeColumns;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *sourcesTab;
    QHBoxLayout *horizontalLayout_5;
    QSplitter *splitter;
    QTreeWidget *sources_TreeWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *sources_detail_ComboBox;
    QLabel *label_3;
    QLabel *sources_detail_transport_Label;
    QSpacerItem *horizontalSpacer;
    QStackedWidget *stackedWidget;
    QWidget *sources_detail_sqn_page;
    QHBoxLayout *horizontalLayout_4;
    QTreeWidget *sources_detail_sqn_TreeWidget;
    QWidget *sources_detail_ncf_sqn_page;
    QHBoxLayout *horizontalLayout_6;
    QTreeWidget *sources_detail_ncf_sqn_TreeWidget;
    QWidget *receiversTab;
    QVBoxLayout *verticalLayout_4;
    QSplitter *splitter_2;
    QTreeWidget *receivers_TreeWidget;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLabel *receivers_detail_transport_Label;
    QSpacerItem *horizontalSpacer_2;
    QTreeWidget *receivers_detail_TreeWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    DisplayFilterEdit *displayFilterLineEdit;
    QPushButton *applyFilterButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *LBMLBTRMTransportDialog)
    {
        if (LBMLBTRMTransportDialog->objectName().isEmpty())
            LBMLBTRMTransportDialog->setObjectName(QStringLiteral("LBMLBTRMTransportDialog"));
        LBMLBTRMTransportDialog->resize(841, 563);
        LBMLBTRMTransportDialog->setSizeGripEnabled(true);
        actionCopyAsCSV = new QAction(LBMLBTRMTransportDialog);
        actionCopyAsCSV->setObjectName(QStringLiteral("actionCopyAsCSV"));
        actionCopyAsCSV->setShortcut(QStringLiteral("Ctrl+C"));
        actionCopyAsYAML = new QAction(LBMLBTRMTransportDialog);
        actionCopyAsYAML->setObjectName(QStringLiteral("actionCopyAsYAML"));
        actionCopyAsYAML->setShortcut(QStringLiteral("Ctrl+Y"));
        action_SourceDataFrames = new QAction(LBMLBTRMTransportDialog);
        action_SourceDataFrames->setObjectName(QStringLiteral("action_SourceDataFrames"));
        action_SourceDataFrames->setCheckable(true);
        action_SourceDataBytes = new QAction(LBMLBTRMTransportDialog);
        action_SourceDataBytes->setObjectName(QStringLiteral("action_SourceDataBytes"));
        action_SourceDataBytes->setCheckable(true);
        action_SourceDataFramesBytes = new QAction(LBMLBTRMTransportDialog);
        action_SourceDataFramesBytes->setObjectName(QStringLiteral("action_SourceDataFramesBytes"));
        action_SourceDataFramesBytes->setCheckable(true);
        action_SourceRXDataFrames = new QAction(LBMLBTRMTransportDialog);
        action_SourceRXDataFrames->setObjectName(QStringLiteral("action_SourceRXDataFrames"));
        action_SourceRXDataFrames->setCheckable(true);
        action_SourceRXDataBytes = new QAction(LBMLBTRMTransportDialog);
        action_SourceRXDataBytes->setObjectName(QStringLiteral("action_SourceRXDataBytes"));
        action_SourceRXDataBytes->setCheckable(true);
        action_SourceRXDataFramesBytes = new QAction(LBMLBTRMTransportDialog);
        action_SourceRXDataFramesBytes->setObjectName(QStringLiteral("action_SourceRXDataFramesBytes"));
        action_SourceRXDataFramesBytes->setCheckable(true);
        action_SourceNCFFrames = new QAction(LBMLBTRMTransportDialog);
        action_SourceNCFFrames->setObjectName(QStringLiteral("action_SourceNCFFrames"));
        action_SourceNCFFrames->setCheckable(true);
        action_SourceNCFBytes = new QAction(LBMLBTRMTransportDialog);
        action_SourceNCFBytes->setObjectName(QStringLiteral("action_SourceNCFBytes"));
        action_SourceNCFBytes->setCheckable(true);
        action_SourceNCFCount = new QAction(LBMLBTRMTransportDialog);
        action_SourceNCFCount->setObjectName(QStringLiteral("action_SourceNCFCount"));
        action_SourceNCFCount->setCheckable(true);
        action_SourceDataRate = new QAction(LBMLBTRMTransportDialog);
        action_SourceDataRate->setObjectName(QStringLiteral("action_SourceDataRate"));
        action_SourceDataRate->setCheckable(true);
        action_SourceRXDataRate = new QAction(LBMLBTRMTransportDialog);
        action_SourceRXDataRate->setObjectName(QStringLiteral("action_SourceRXDataRate"));
        action_SourceRXDataRate->setCheckable(true);
        action_SourceNCFFramesBytes = new QAction(LBMLBTRMTransportDialog);
        action_SourceNCFFramesBytes->setObjectName(QStringLiteral("action_SourceNCFFramesBytes"));
        action_SourceNCFFramesBytes->setCheckable(true);
        action_SourceNCFCountBytes = new QAction(LBMLBTRMTransportDialog);
        action_SourceNCFCountBytes->setObjectName(QStringLiteral("action_SourceNCFCountBytes"));
        action_SourceNCFCountBytes->setCheckable(true);
        action_SourceNCFFramesCount = new QAction(LBMLBTRMTransportDialog);
        action_SourceNCFFramesCount->setObjectName(QStringLiteral("action_SourceNCFFramesCount"));
        action_SourceNCFFramesCount->setCheckable(true);
        action_SourceNCFFramesCountBytes = new QAction(LBMLBTRMTransportDialog);
        action_SourceNCFFramesCountBytes->setObjectName(QStringLiteral("action_SourceNCFFramesCountBytes"));
        action_SourceNCFFramesCountBytes->setCheckable(true);
        action_SourceNCFRate = new QAction(LBMLBTRMTransportDialog);
        action_SourceNCFRate->setObjectName(QStringLiteral("action_SourceNCFRate"));
        action_SourceNCFRate->setCheckable(true);
        action_SourceSMFrames = new QAction(LBMLBTRMTransportDialog);
        action_SourceSMFrames->setObjectName(QStringLiteral("action_SourceSMFrames"));
        action_SourceSMFrames->setCheckable(true);
        action_SourceSMBytes = new QAction(LBMLBTRMTransportDialog);
        action_SourceSMBytes->setObjectName(QStringLiteral("action_SourceSMBytes"));
        action_SourceSMBytes->setCheckable(true);
        action_SourceSMFramesBytes = new QAction(LBMLBTRMTransportDialog);
        action_SourceSMFramesBytes->setObjectName(QStringLiteral("action_SourceSMFramesBytes"));
        action_SourceSMFramesBytes->setCheckable(true);
        action_SourceSMRate = new QAction(LBMLBTRMTransportDialog);
        action_SourceSMRate->setObjectName(QStringLiteral("action_SourceSMRate"));
        action_SourceSMRate->setCheckable(true);
        action_SourceAutoResizeColumns = new QAction(LBMLBTRMTransportDialog);
        action_SourceAutoResizeColumns->setObjectName(QStringLiteral("action_SourceAutoResizeColumns"));
        verticalLayout = new QVBoxLayout(LBMLBTRMTransportDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(LBMLBTRMTransportDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        sourcesTab = new QWidget();
        sourcesTab->setObjectName(QStringLiteral("sourcesTab"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sourcesTab->sizePolicy().hasHeightForWidth());
        sourcesTab->setSizePolicy(sizePolicy);
        horizontalLayout_5 = new QHBoxLayout(sourcesTab);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        splitter = new QSplitter(sourcesTab);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        splitter->setHandleWidth(10);
        sources_TreeWidget = new QTreeWidget(splitter);
        sources_TreeWidget->setObjectName(QStringLiteral("sources_TreeWidget"));
        sizePolicy.setHeightForWidth(sources_TreeWidget->sizePolicy().hasHeightForWidth());
        sources_TreeWidget->setSizePolicy(sizePolicy);
        sources_TreeWidget->setMaximumSize(QSize(16777215, 16777215));
        splitter->addWidget(sources_TreeWidget);
        sources_TreeWidget->header()->setDefaultSectionSize(80);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        sources_detail_ComboBox = new QComboBox(layoutWidget);
        sources_detail_ComboBox->setObjectName(QStringLiteral("sources_detail_ComboBox"));

        horizontalLayout_2->addWidget(sources_detail_ComboBox);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        sources_detail_transport_Label = new QLabel(layoutWidget);
        sources_detail_transport_Label->setObjectName(QStringLiteral("sources_detail_transport_Label"));

        horizontalLayout_2->addWidget(sources_detail_transport_Label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_2);

        stackedWidget = new QStackedWidget(layoutWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setEnabled(true);
        stackedWidget->setFrameShape(QFrame::NoFrame);
        stackedWidget->setLineWidth(1);
        sources_detail_sqn_page = new QWidget();
        sources_detail_sqn_page->setObjectName(QStringLiteral("sources_detail_sqn_page"));
        horizontalLayout_4 = new QHBoxLayout(sources_detail_sqn_page);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        sources_detail_sqn_TreeWidget = new QTreeWidget(sources_detail_sqn_page);
        sources_detail_sqn_TreeWidget->setObjectName(QStringLiteral("sources_detail_sqn_TreeWidget"));

        horizontalLayout_4->addWidget(sources_detail_sqn_TreeWidget);

        stackedWidget->addWidget(sources_detail_sqn_page);
        sources_detail_ncf_sqn_page = new QWidget();
        sources_detail_ncf_sqn_page->setObjectName(QStringLiteral("sources_detail_ncf_sqn_page"));
        horizontalLayout_6 = new QHBoxLayout(sources_detail_ncf_sqn_page);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        sources_detail_ncf_sqn_TreeWidget = new QTreeWidget(sources_detail_ncf_sqn_page);
        sources_detail_ncf_sqn_TreeWidget->setObjectName(QStringLiteral("sources_detail_ncf_sqn_TreeWidget"));

        horizontalLayout_6->addWidget(sources_detail_ncf_sqn_TreeWidget);

        stackedWidget->addWidget(sources_detail_ncf_sqn_page);

        verticalLayout_2->addWidget(stackedWidget);

        splitter->addWidget(layoutWidget);

        horizontalLayout_5->addWidget(splitter);

        tabWidget->addTab(sourcesTab, QString());
        receiversTab = new QWidget();
        receiversTab->setObjectName(QStringLiteral("receiversTab"));
        verticalLayout_4 = new QVBoxLayout(receiversTab);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        splitter_2 = new QSplitter(receiversTab);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        splitter_2->setHandleWidth(10);
        receivers_TreeWidget = new QTreeWidget(splitter_2);
        receivers_TreeWidget->setObjectName(QStringLiteral("receivers_TreeWidget"));
        splitter_2->addWidget(receivers_TreeWidget);
        layoutWidget_2 = new QWidget(splitter_2);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        receivers_detail_transport_Label = new QLabel(layoutWidget_2);
        receivers_detail_transport_Label->setObjectName(QStringLiteral("receivers_detail_transport_Label"));

        horizontalLayout_3->addWidget(receivers_detail_transport_Label);

        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_3);

        receivers_detail_TreeWidget = new QTreeWidget(layoutWidget_2);
        receivers_detail_TreeWidget->setObjectName(QStringLiteral("receivers_detail_TreeWidget"));

        verticalLayout_3->addWidget(receivers_detail_TreeWidget);

        splitter_2->addWidget(layoutWidget_2);

        verticalLayout_4->addWidget(splitter_2);

        tabWidget->addTab(receiversTab, QString());

        verticalLayout->addWidget(tabWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        label = new QLabel(LBMLBTRMTransportDialog);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        displayFilterLineEdit = new DisplayFilterEdit(LBMLBTRMTransportDialog);
        displayFilterLineEdit->setObjectName(QStringLiteral("displayFilterLineEdit"));

        horizontalLayout->addWidget(displayFilterLineEdit);

        applyFilterButton = new QPushButton(LBMLBTRMTransportDialog);
        applyFilterButton->setObjectName(QStringLiteral("applyFilterButton"));

        horizontalLayout->addWidget(applyFilterButton);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(LBMLBTRMTransportDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(LBMLBTRMTransportDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), LBMLBTRMTransportDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), LBMLBTRMTransportDialog, SLOT(reject()));
        QObject::connect(sources_detail_ComboBox, SIGNAL(currentIndexChanged(int)), LBMLBTRMTransportDialog, SLOT(sourcesDetailCurrentChanged(int)));
        QObject::connect(sources_TreeWidget, SIGNAL(itemClicked(QTreeWidgetItem*,int)), LBMLBTRMTransportDialog, SLOT(sourcesItemClicked(QTreeWidgetItem*,int)));
        QObject::connect(receivers_TreeWidget, SIGNAL(itemClicked(QTreeWidgetItem*,int)), LBMLBTRMTransportDialog, SLOT(receiversItemClicked(QTreeWidgetItem*,int)));
        QObject::connect(receivers_detail_TreeWidget, SIGNAL(itemDoubleClicked(QTreeWidgetItem*,int)), LBMLBTRMTransportDialog, SLOT(receiversDetailItemDoubleClicked(QTreeWidgetItem*,int)));
        QObject::connect(sources_detail_sqn_TreeWidget, SIGNAL(itemDoubleClicked(QTreeWidgetItem*,int)), LBMLBTRMTransportDialog, SLOT(sourcesDetailItemDoubleClicked(QTreeWidgetItem*,int)));
        QObject::connect(sources_detail_ncf_sqn_TreeWidget, SIGNAL(itemDoubleClicked(QTreeWidgetItem*,int)), LBMLBTRMTransportDialog, SLOT(sourcesDetailItemDoubleClicked(QTreeWidgetItem*,int)));

        tabWidget->setCurrentIndex(0);
        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(LBMLBTRMTransportDialog);
    } // setupUi

    void retranslateUi(QDialog *LBMLBTRMTransportDialog)
    {
        LBMLBTRMTransportDialog->setWindowTitle(QApplication::translate("LBMLBTRMTransportDialog", "LBT-RM Transport Statistics", 0));
        actionCopyAsCSV->setText(QApplication::translate("LBMLBTRMTransportDialog", "Copy as CSV", 0));
#ifndef QT_NO_TOOLTIP
        actionCopyAsCSV->setToolTip(QApplication::translate("LBMLBTRMTransportDialog", "Copy the tree as CSV", 0));
#endif // QT_NO_TOOLTIP
        actionCopyAsYAML->setText(QApplication::translate("LBMLBTRMTransportDialog", "Copy as YAML", 0));
#ifndef QT_NO_TOOLTIP
        actionCopyAsYAML->setToolTip(QApplication::translate("LBMLBTRMTransportDialog", "Copy the tree as YAML", 0));
#endif // QT_NO_TOOLTIP
        action_SourceDataFrames->setText(QApplication::translate("LBMLBTRMTransportDialog", "Data frames", 0));
#ifndef QT_NO_TOOLTIP
        action_SourceDataFrames->setToolTip(QApplication::translate("LBMLBTRMTransportDialog", "Show the data frames column", 0));
#endif // QT_NO_TOOLTIP
        action_SourceDataBytes->setText(QApplication::translate("LBMLBTRMTransportDialog", "Data bytes", 0));
#ifndef QT_NO_TOOLTIP
        action_SourceDataBytes->setToolTip(QApplication::translate("LBMLBTRMTransportDialog", "Show the data bytes column", 0));
#endif // QT_NO_TOOLTIP
        action_SourceDataFramesBytes->setText(QApplication::translate("LBMLBTRMTransportDialog", "Data frames/bytes", 0));
#ifndef QT_NO_TOOLTIP
        action_SourceDataFramesBytes->setToolTip(QApplication::translate("LBMLBTRMTransportDialog", "Show the data frames/bytes column", 0));
#endif // QT_NO_TOOLTIP
        action_SourceRXDataFrames->setText(QApplication::translate("LBMLBTRMTransportDialog", "RX data frames", 0));
#ifndef QT_NO_TOOLTIP
        action_SourceRXDataFrames->setToolTip(QApplication::translate("LBMLBTRMTransportDialog", "Show the RX data frames column", 0));
#endif // QT_NO_TOOLTIP
        action_SourceRXDataBytes->setText(QApplication::translate("LBMLBTRMTransportDialog", "RX data bytes", 0));
#ifndef QT_NO_TOOLTIP
        action_SourceRXDataBytes->setToolTip(QApplication::translate("LBMLBTRMTransportDialog", "Show the RX data bytes column", 0));
#endif // QT_NO_TOOLTIP
        action_SourceRXDataFramesBytes->setText(QApplication::translate("LBMLBTRMTransportDialog", "RX data frames/bytes", 0));
#ifndef QT_NO_TOOLTIP
        action_SourceRXDataFramesBytes->setToolTip(QApplication::translate("LBMLBTRMTransportDialog", "Show the RX data frames/bytes column", 0));
#endif // QT_NO_TOOLTIP
        action_SourceNCFFrames->setText(QApplication::translate("LBMLBTRMTransportDialog", "NCF frames", 0));
#ifndef QT_NO_TOOLTIP
        action_SourceNCFFrames->setToolTip(QApplication::translate("LBMLBTRMTransportDialog", "Show the NCF frames column", 0));
#endif // QT_NO_TOOLTIP
        action_SourceNCFBytes->setText(QApplication::translate("LBMLBTRMTransportDialog", "NCF bytes", 0));
#ifndef QT_NO_TOOLTIP
        action_SourceNCFBytes->setToolTip(QApplication::translate("LBMLBTRMTransportDialog", "Show the NCF bytes column", 0));
#endif // QT_NO_TOOLTIP
        action_SourceNCFCount->setText(QApplication::translate("LBMLBTRMTransportDialog", "NCF count", 0));
#ifndef QT_NO_TOOLTIP
        action_SourceNCFCount->setToolTip(QApplication::translate("LBMLBTRMTransportDialog", "Show the NCF count column", 0));
#endif // QT_NO_TOOLTIP
        action_SourceDataRate->setText(QApplication::translate("LBMLBTRMTransportDialog", "Data rate", 0));
#ifndef QT_NO_TOOLTIP
        action_SourceDataRate->setToolTip(QApplication::translate("LBMLBTRMTransportDialog", "Show the data rate column", 0));
#endif // QT_NO_TOOLTIP
        action_SourceRXDataRate->setText(QApplication::translate("LBMLBTRMTransportDialog", "RX data rate", 0));
#ifndef QT_NO_TOOLTIP
        action_SourceRXDataRate->setToolTip(QApplication::translate("LBMLBTRMTransportDialog", "Show the RX data rate column", 0));
#endif // QT_NO_TOOLTIP
        action_SourceNCFFramesBytes->setText(QApplication::translate("LBMLBTRMTransportDialog", "NCF frames/bytes", 0));
#ifndef QT_NO_TOOLTIP
        action_SourceNCFFramesBytes->setToolTip(QApplication::translate("LBMLBTRMTransportDialog", "Show the NCF frames/bytes column", 0));
#endif // QT_NO_TOOLTIP
        action_SourceNCFCountBytes->setText(QApplication::translate("LBMLBTRMTransportDialog", "NCF count/bytes", 0));
#ifndef QT_NO_TOOLTIP
        action_SourceNCFCountBytes->setToolTip(QApplication::translate("LBMLBTRMTransportDialog", "Show the NCF count/bytes column", 0));
#endif // QT_NO_TOOLTIP
        action_SourceNCFFramesCount->setText(QApplication::translate("LBMLBTRMTransportDialog", "NCF frames/count", 0));
#ifndef QT_NO_TOOLTIP
        action_SourceNCFFramesCount->setToolTip(QApplication::translate("LBMLBTRMTransportDialog", "Show the NCF frames/count column", 0));
#endif // QT_NO_TOOLTIP
        action_SourceNCFFramesCountBytes->setText(QApplication::translate("LBMLBTRMTransportDialog", "NCF frames/count/bytes", 0));
#ifndef QT_NO_TOOLTIP
        action_SourceNCFFramesCountBytes->setToolTip(QApplication::translate("LBMLBTRMTransportDialog", "Show the NCF frames/count/bytes column", 0));
#endif // QT_NO_TOOLTIP
        action_SourceNCFRate->setText(QApplication::translate("LBMLBTRMTransportDialog", "NCF rate", 0));
#ifndef QT_NO_TOOLTIP
        action_SourceNCFRate->setToolTip(QApplication::translate("LBMLBTRMTransportDialog", "Show the NCF rate column", 0));
#endif // QT_NO_TOOLTIP
        action_SourceSMFrames->setText(QApplication::translate("LBMLBTRMTransportDialog", "SM frames", 0));
#ifndef QT_NO_TOOLTIP
        action_SourceSMFrames->setToolTip(QApplication::translate("LBMLBTRMTransportDialog", "Show the SM frames column", 0));
#endif // QT_NO_TOOLTIP
        action_SourceSMBytes->setText(QApplication::translate("LBMLBTRMTransportDialog", "SM bytes", 0));
#ifndef QT_NO_TOOLTIP
        action_SourceSMBytes->setToolTip(QApplication::translate("LBMLBTRMTransportDialog", "Show the SM bytes column", 0));
#endif // QT_NO_TOOLTIP
        action_SourceSMFramesBytes->setText(QApplication::translate("LBMLBTRMTransportDialog", "SM frames/bytes", 0));
#ifndef QT_NO_TOOLTIP
        action_SourceSMFramesBytes->setToolTip(QApplication::translate("LBMLBTRMTransportDialog", "Show the SM frames/bytes column", 0));
#endif // QT_NO_TOOLTIP
        action_SourceSMRate->setText(QApplication::translate("LBMLBTRMTransportDialog", "SM rate", 0));
#ifndef QT_NO_TOOLTIP
        action_SourceSMRate->setToolTip(QApplication::translate("LBMLBTRMTransportDialog", "Show the SM rate column", 0));
#endif // QT_NO_TOOLTIP
        action_SourceAutoResizeColumns->setText(QApplication::translate("LBMLBTRMTransportDialog", "Auto-resize columns to content", 0));
#ifndef QT_NO_TOOLTIP
        action_SourceAutoResizeColumns->setToolTip(QApplication::translate("LBMLBTRMTransportDialog", "Resize columns to content size", 0));
#endif // QT_NO_TOOLTIP
        QTreeWidgetItem *___qtreewidgetitem = sources_TreeWidget->headerItem();
        ___qtreewidgetitem->setText(20, QApplication::translate("LBMLBTRMTransportDialog", "SM rate", 0));
        ___qtreewidgetitem->setText(19, QApplication::translate("LBMLBTRMTransportDialog", "SM frames/bytes", 0));
        ___qtreewidgetitem->setText(18, QApplication::translate("LBMLBTRMTransportDialog", "SM bytes", 0));
        ___qtreewidgetitem->setText(17, QApplication::translate("LBMLBTRMTransportDialog", "SM frames", 0));
        ___qtreewidgetitem->setText(16, QApplication::translate("LBMLBTRMTransportDialog", "NCF rate", 0));
        ___qtreewidgetitem->setText(15, QApplication::translate("LBMLBTRMTransportDialog", "NCF frames/count/bytes", 0));
        ___qtreewidgetitem->setText(14, QApplication::translate("LBMLBTRMTransportDialog", "NCF frames/count", 0));
        ___qtreewidgetitem->setText(13, QApplication::translate("LBMLBTRMTransportDialog", "NCF count/bytes", 0));
        ___qtreewidgetitem->setText(12, QApplication::translate("LBMLBTRMTransportDialog", "NCF frames/bytes", 0));
        ___qtreewidgetitem->setText(11, QApplication::translate("LBMLBTRMTransportDialog", "NCF bytes", 0));
        ___qtreewidgetitem->setText(10, QApplication::translate("LBMLBTRMTransportDialog", "NCF count", 0));
        ___qtreewidgetitem->setText(9, QApplication::translate("LBMLBTRMTransportDialog", "NCF frames", 0));
        ___qtreewidgetitem->setText(8, QApplication::translate("LBMLBTRMTransportDialog", "RX data rate", 0));
        ___qtreewidgetitem->setText(7, QApplication::translate("LBMLBTRMTransportDialog", "RX data frames/bytes", 0));
        ___qtreewidgetitem->setText(6, QApplication::translate("LBMLBTRMTransportDialog", "RX data bytes", 0));
        ___qtreewidgetitem->setText(5, QApplication::translate("LBMLBTRMTransportDialog", "RX data frames", 0));
        ___qtreewidgetitem->setText(4, QApplication::translate("LBMLBTRMTransportDialog", "Data rate", 0));
        ___qtreewidgetitem->setText(3, QApplication::translate("LBMLBTRMTransportDialog", "Data frames/bytes", 0));
        ___qtreewidgetitem->setText(2, QApplication::translate("LBMLBTRMTransportDialog", "Data bytes", 0));
        ___qtreewidgetitem->setText(1, QApplication::translate("LBMLBTRMTransportDialog", "Data frames", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("LBMLBTRMTransportDialog", "Address/Transport", 0));
        label_2->setText(QApplication::translate("LBMLBTRMTransportDialog", "Show", 0));
        sources_detail_ComboBox->clear();
        sources_detail_ComboBox->insertItems(0, QStringList()
         << QApplication::translate("LBMLBTRMTransportDialog", "Data", 0)
         << QApplication::translate("LBMLBTRMTransportDialog", "RX Data", 0)
         << QApplication::translate("LBMLBTRMTransportDialog", "NCF", 0)
         << QApplication::translate("LBMLBTRMTransportDialog", "SM", 0)
        );
        label_3->setText(QApplication::translate("LBMLBTRMTransportDialog", "sequence numbers for transport", 0));
        sources_detail_transport_Label->setText(QApplication::translate("LBMLBTRMTransportDialog", "XXXXX:XXX.XXX.XXX.XXX:XXXXX:XXXXXXXX:XXX.XXX.XXX.XXX:XXXXX", 0));
        QTreeWidgetItem *___qtreewidgetitem1 = sources_detail_sqn_TreeWidget->headerItem();
        ___qtreewidgetitem1->setText(2, QApplication::translate("LBMLBTRMTransportDialog", "Frame", 0));
        ___qtreewidgetitem1->setText(1, QApplication::translate("LBMLBTRMTransportDialog", "Count", 0));
        ___qtreewidgetitem1->setText(0, QApplication::translate("LBMLBTRMTransportDialog", "SQN", 0));
        QTreeWidgetItem *___qtreewidgetitem2 = sources_detail_ncf_sqn_TreeWidget->headerItem();
        ___qtreewidgetitem2->setText(2, QApplication::translate("LBMLBTRMTransportDialog", "Frame", 0));
        ___qtreewidgetitem2->setText(1, QApplication::translate("LBMLBTRMTransportDialog", "Count", 0));
        ___qtreewidgetitem2->setText(0, QApplication::translate("LBMLBTRMTransportDialog", "SQN/Reason", 0));
        tabWidget->setTabText(tabWidget->indexOf(sourcesTab), QApplication::translate("LBMLBTRMTransportDialog", "Sources", 0));
        QTreeWidgetItem *___qtreewidgetitem3 = receivers_TreeWidget->headerItem();
        ___qtreewidgetitem3->setText(4, QApplication::translate("LBMLBTRMTransportDialog", "NAK rate", 0));
        ___qtreewidgetitem3->setText(3, QApplication::translate("LBMLBTRMTransportDialog", "NAK bytes", 0));
        ___qtreewidgetitem3->setText(2, QApplication::translate("LBMLBTRMTransportDialog", "NAK count", 0));
        ___qtreewidgetitem3->setText(1, QApplication::translate("LBMLBTRMTransportDialog", "NAK frames", 0));
        ___qtreewidgetitem3->setText(0, QApplication::translate("LBMLBTRMTransportDialog", "Address/Transport", 0));
        label_4->setText(QApplication::translate("LBMLBTRMTransportDialog", "NAK sequence numbers for transport", 0));
        receivers_detail_transport_Label->setText(QApplication::translate("LBMLBTRMTransportDialog", "XXXXX:XXX.XXX.XXX.XXX:XXXXX:XXXXXXXX:XXX.XXX.XXX.XXX:XXXXX", 0));
        QTreeWidgetItem *___qtreewidgetitem4 = receivers_detail_TreeWidget->headerItem();
        ___qtreewidgetitem4->setText(2, QApplication::translate("LBMLBTRMTransportDialog", "Frame", 0));
        ___qtreewidgetitem4->setText(1, QApplication::translate("LBMLBTRMTransportDialog", "Count", 0));
        ___qtreewidgetitem4->setText(0, QApplication::translate("LBMLBTRMTransportDialog", "SQN", 0));
        tabWidget->setTabText(tabWidget->indexOf(receiversTab), QApplication::translate("LBMLBTRMTransportDialog", "Receivers", 0));
        label->setText(QApplication::translate("LBMLBTRMTransportDialog", "Display filter:", 0));
#ifndef QT_NO_TOOLTIP
        applyFilterButton->setToolTip(QApplication::translate("LBMLBTRMTransportDialog", "Regenerate statistics using this display filter", 0));
#endif // QT_NO_TOOLTIP
        applyFilterButton->setText(QApplication::translate("LBMLBTRMTransportDialog", "Apply", 0));
    } // retranslateUi

};

namespace Ui {
    class LBMLBTRMTransportDialog: public Ui_LBMLBTRMTransportDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LBM_LBTRM_TRANSPORT_DIALOG_H
