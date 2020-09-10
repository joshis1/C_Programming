/********************************************************************************
** Form generated from reading UI file 'main_window.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_H
#define UI_MAIN_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "accordion_frame.h"
#include "address_editor_frame.h"
#include "column_editor_frame.h"
#include "filter_expression_frame.h"
#include "main_status_bar.h"
#include "preference_editor_frame.h"
#include "search_frame.h"
#include "welcome_page.h"
#include "wireless_timeline.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionFileOpen;
    QAction *actionFileQuit;
    QAction *actionCaptureStart;
    QAction *actionCaptureStop;
    QAction *actionFileClose;
    QAction *actionDummyNoFilesFound;
    QAction *actionHelpContents;
    QAction *actionHelpMPWireshark;
    QAction *actionHelpMPWireshark_Filter;
    QAction *actionHelpMPTShark;
    QAction *actionHelpMPRawShark;
    QAction *actionHelpMPDumpcap;
    QAction *actionHelpMPMergecap;
    QAction *actionHelpMPEditcap;
    QAction *actionHelpMPText2cap;
    QAction *actionHelpWebsite;
    QAction *actionHelpFAQ;
    QAction *actionHelpDownloads;
    QAction *actionHelpWiki;
    QAction *actionHelpSampleCaptures;
    QAction *actionHelpAbout;
    QAction *actionHelpAsk;
    QAction *actionGoNextPacket;
    QAction *actionGoPreviousPacket;
    QAction *actionGoNextConversationPacket;
    QAction *actionGoPreviousConversationPacket;
    QAction *actionGoNextHistoryPacket;
    QAction *actionGoPreviousHistoryPacket;
    QAction *actionGoFirstPacket;
    QAction *actionGoLastPacket;
    QAction *actionViewExpandSubtrees;
    QAction *actionViewCollapseSubtrees;
    QAction *actionViewExpandAll;
    QAction *actionViewCollapseAll;
    QAction *actionGoGoToPacket;
    QAction *actionFileMerge;
    QAction *actionFileImportFromHexDump;
    QAction *actionFileSave;
    QAction *actionFileSaveAs;
    QAction *actionFileExportPackets;
    QAction *actionFileExportPacketBytes;
    QAction *actionFileExportTLSSessionKeys;
    QAction *actionFilePrint;
    QAction *actionFileSetListFiles;
    QAction *actionFileSetNextFile;
    QAction *actionFileSetPreviousFile;
    QAction *actionViewReload;
    QAction *actionViewReload_as_File_Format_or_Capture;
    QAction *actionCaptureOptions;
    QAction *actionCaptureCaptureFilters;
    QAction *actionCaptureRefreshInterfaces;
    QAction *actionCaptureRestart;
    QAction *actionFileExportAsPlainText;
    QAction *actionFileExportAsCSV;
    QAction *actionFileExportAsCArrays;
    QAction *actionFileExportAsPSML;
    QAction *actionFileExportAsPDML;
    QAction *actionFileExportAsJSON;
    QAction *actionEditCopyDescription;
    QAction *actionCopyAllVisibleItems;
    QAction *actionCopyAllVisibleSelectedTreeItems;
    QAction *actionEditCopyFieldName;
    QAction *actionEditCopyValue;
    QAction *actionEditCopyAsFilter;
    QAction *actionAnalyzeAAFSelected;
    QAction *actionAnalyzeAAFNotSelected;
    QAction *actionAnalyzeAAFAndSelected;
    QAction *actionAnalyzeAAFOrSelected;
    QAction *actionAnalyzeAAFAndNotSelected;
    QAction *actionAnalyzeAAFOrNotSelected;
    QAction *actionAnalyzePAFSelected;
    QAction *actionAnalyzePAFNotSelected;
    QAction *actionAnalyzePAFAndSelected;
    QAction *actionAnalyzePAFOrSelected;
    QAction *actionAnalyzePAFAndNotSelected;
    QAction *actionAnalyzePAFOrNotSelected;
    QAction *actionAnalyzeDisplayFilters;
    QAction *actionAnalyzeDisplayFilterMacros;
    QAction *actionAnalyzeCreateAColumn;
    QAction *actionEditFindPacket;
    QAction *actionEditFindNext;
    QAction *actionEditFindPrevious;
    QAction *actionEditMarkPacket;
    QAction *actionEditMarkAllDisplayed;
    QAction *actionEditUnmarkAllDisplayed;
    QAction *actionEditNextMark;
    QAction *actionEditPreviousMark;
    QAction *actionEditIgnorePacket;
    QAction *actionEditIgnoreAllDisplayed;
    QAction *actionEditUnignoreAllDisplayed;
    QAction *actionEditSetTimeReference;
    QAction *actionEditUnsetAllTimeReferences;
    QAction *actionEditNextTimeReference;
    QAction *actionEditPreviousTimeReference;
    QAction *actionEditTimeShift;
    QAction *actionEditPacketComment;
    QAction *actionDeleteAllPacketComments;
    QAction *actionEditConfigurationProfiles;
    QAction *actionEditPreferences;
    QAction *actionStatisticsCaptureFileProperties;
    QAction *actionStatisticsProtocolHierarchy;
    QAction *actionHelpMPCapinfos;
    QAction *actionHelpMPReordercap;
    QAction *actionStatisticsTcpStreamStevens;
    QAction *actionStatisticsTcpStreamThroughput;
    QAction *actionStatisticsTcpStreamRoundTripTime;
    QAction *actionStatisticsTcpStreamWindowScaling;
    QAction *actionAnalyzeFollowTCPStream;
    QAction *actionAnalyzeFollowUDPStream;
    QAction *actionAnalyzeFollowTLSStream;
    QAction *actionAnalyzeFollowHTTPStream;
    QAction *actionStatisticsTcpStreamTcptrace;
    QAction *actionSCTPAnalyseThisAssociation;
    QAction *actionSCTPShowAllAssociations;
    QAction *actionStatisticsFlowGraph;
    QAction *actionStatisticsANCP;
    QAction *actionStatisticsBACappInstanceId;
    QAction *actionStatisticsBACappIP;
    QAction *actionStatisticsBACappObjectId;
    QAction *actionStatisticsBACappService;
    QAction *actionStatisticsCollectd;
    QAction *actionStatisticsDNS;
    QAction *actionStatisticsHART_IP;
    QAction *actionStatisticsHpfeeds;
    QAction *actionStatisticsHTTP2;
    QAction *actionStatisticsHTTPPacketCounter;
    QAction *actionStatisticsHTTPRequests;
    QAction *actionStatisticsHTTPLoadDistribution;
    QAction *actionStatisticsHTTPRequestSequences;
    QAction *actionStatisticsPacketLengths;
    QAction *actionStatisticsSametime;
    QAction *actionTelephonyISUPMessages;
    QAction *actionTelephonyOsmuxPacketCounter;
    QAction *actionTelephonyRTSPPacketCounter;
    QAction *actionTelephonySMPPOperations;
    QAction *actionTelephonyUCPMessages;
    QAction *actionAnalyzeDecodeAs;
    QAction *actionAnalyzeReloadLuaPlugins;
    QAction *action29West;
    QAction *actionStatistics29WestTopics_Advertisements_by_Topic;
    QAction *actionStatistics29WestTopics_Advertisements_by_Source;
    QAction *actionStatistics29WestTopics_Advertisements_by_Transport;
    QAction *actionStatistics29WestTopics_Queries_by_Topic;
    QAction *actionStatistics29WestTopics_Queries_by_Receiver;
    QAction *actionStatistics29WestTopics_Wildcard_Queries_by_Pattern;
    QAction *actionStatistics29WestTopics_Wildcard_Queries_by_Receiver;
    QAction *actionStatistics29WestQueues_Advertisements_by_Queue;
    QAction *actionStatistics29WestQueues_Advertisements_by_Source;
    QAction *actionStatistics29WestQueues_Queries_by_Queue;
    QAction *actionStatistics29WestQueues_Queries_by_Receiver;
    QAction *actionStatistics29WestUIM_Streams;
    QAction *actionStatistics29WestLBTRM;
    QAction *actionStatistics29WestLBTRU;
    QAction *actionSCTPFilterThisAssociation;
    QAction *actionFileExportPDU;
    QAction *actionStatisticsIOGraph;
    QAction *actionViewMainToolbar;
    QAction *actionViewFilterToolbar;
    QAction *actionStatisticsConversations;
    QAction *actionStatisticsEndpoints;
    QAction *actionViewColorizePacketList;
    QAction *actionViewZoomIn;
    QAction *actionViewZoomOut;
    QAction *actionViewNormalSize;
    QAction *actionViewResetLayout;
    QAction *actionViewResizeColumns;
    QAction *actionViewTimeDisplayFormatDateYMDandTimeOfDay;
    QAction *actionViewTimeDisplayFormatDateYDOYandTimeOfDay;
    QAction *actionViewTimeDisplayFormatTimeOfDay;
    QAction *actionViewTimeDisplayFormatSecondsSinceEpoch;
    QAction *actionViewTimeDisplayFormatSecondsSinceBeginningOfCapture;
    QAction *actionViewTimeDisplayFormatSecondsSincePreviousCapturedPacket;
    QAction *actionViewTimeDisplayFormatSecondsSincePreviousDisplayedPacket;
    QAction *actionViewTimeDisplayFormatUTCDateYMDandTimeOfDay;
    QAction *actionViewTimeDisplayFormatUTCDateYDOYandTimeOfDay;
    QAction *actionViewTimeDisplayFormatUTCTimeOfDay;
    QAction *actionViewTimeDisplayFormatPrecisionAutomatic;
    QAction *actionViewTimeDisplayFormatPrecisionSeconds;
    QAction *actionViewTimeDisplayFormatPrecisionDeciseconds;
    QAction *actionViewTimeDisplayFormatPrecisionCentiseconds;
    QAction *actionViewTimeDisplayFormatPrecisionMilliseconds;
    QAction *actionViewTimeDisplayFormatPrecisionMicroseconds;
    QAction *actionViewTimeDisplayFormatPrecisionNanoseconds;
    QAction *actionViewTimeDisplaySecondsWithHoursAndMinutes;
    QAction *actionViewNameResolutionPhysical;
    QAction *actionViewNameResolutionNetwork;
    QAction *actionViewNameResolutionTransport;
    QAction *actionViewWirelessToolbar;
    QAction *actionViewStatusBar;
    QAction *actionViewPacketList;
    QAction *actionViewPacketDetails;
    QAction *actionViewPacketBytes;
    QAction *actionViewInternalsConversationHashTables;
    QAction *actionViewInternalsDissectorTables;
    QAction *actionViewInternalsSupportedProtocols;
    QAction *actionTelephonyGsmMapSummary;
    QAction *actionTelephonyLteMacStatistics;
    QAction *actionTelephonyLteRlcStatistics;
    QAction *actionTelephonyLteRlcGraph;
    QAction *actionTelephonyMtp3Summary;
    QAction *actionTelephonyVoipCalls;
    QAction *actionTelephonySipFlows;
    QAction *actionTelephonyRTPStreams;
    QAction *actionViewColoringRules;
    QAction *actionBluetoothATT_Server_Attributes;
    QAction *actionBluetoothDevices;
    QAction *actionBluetoothHCI_Summary;
    QAction *actionViewShowPacketInNewWindow;
    QAction *actionContextShowLinkedPacketInNewWindow;
    QAction *actionGoAutoScroll;
    QAction *actionAnalyzeExpertInfo;
    QAction *actionDisplayFilterExpression;
    QAction *actionStatistics_REGISTER_STAT_GROUP_UNSORTED;
    QAction *actionTelephonyANSIPlaceholder;
    QAction *actionTelephonyGSMPlaceholder;
    QAction *actionTelephonyLTEPlaceholder;
    QAction *actionTelephonyMTP3Placeholder;
    QAction *actionStatisticsResolvedAddresses;
    QAction *actionViewColorizeConversation1;
    QAction *actionViewColorizeConversation2;
    QAction *actionViewColorizeConversation3;
    QAction *actionViewColorizeConversation4;
    QAction *actionViewColorizeConversation5;
    QAction *actionViewColorizeConversation6;
    QAction *actionViewColorizeConversation7;
    QAction *actionViewColorizeConversation8;
    QAction *actionViewColorizeConversation9;
    QAction *actionViewColorizeConversation10;
    QAction *actionViewColorizeNewColoringRule;
    QAction *actionViewColorizeResetColorization;
    QAction *actionTelephonyRTPStreamAnalysis;
    QAction *actionTelephonyIax2StreamAnalysis;
    QAction *actionViewEditResolvedName;
    QAction *actionAnalyzeEnabledProtocols;
    QAction *actionAnalyzeShowPacketBytes;
    QAction *actionContextWikiProtocolPage;
    QAction *actionContextFilterFieldReference;
    QAction *actionGoGoToLinkedPacket;
    QAction *actionStatisticsUdpMulticastStreams;
    QAction *actionWirelessWlanStatistics;
    QAction *actionNewDisplayFilterExpression;
    QAction *actionToolsFirewallAclRules;
    QAction *actionViewFullScreen;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    AccordionFrame *goToFrame;
    QHBoxLayout *goToHB;
    QSpacerItem *horizontalSpacer;
    QLabel *goToPacketLabel;
    QLineEdit *goToLineEdit;
    QPushButton *goToGo;
    QPushButton *goToCancel;
    SearchFrame *searchFrame;
    AddressEditorFrame *addressEditorFrame;
    ColumnEditorFrame *columnEditorFrame;
    PreferenceEditorFrame *preferenceEditorFrame;
    FilterExpressionFrame *filterExpressionFrame;
    WirelessTimeline *wirelessTimelineWidget;
    QStackedWidget *mainStack;
    WelcomePage *welcomePage;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuOpenRecentCaptureFile;
    QMenu *menuFileSet;
    QMenu *menuFileExportPacketDissections;
    QMenu *menuFileExportObjects;
    QMenu *menuCapture;
    QMenu *menuHelp;
    QMenu *menuHelpManualPages;
    QMenu *menuGo;
    QMenu *menuView;
    QMenu *menuInterfaceToolbars;
    QMenu *menuZoom;
    QMenu *menuTime_Display_Format;
    QMenu *menuName_Resolution;
    QMenu *menuColorizeConversation;
    QMenu *menuInternals;
    QMenu *menuAdditionalToolbars;
    QMenu *menuAnalyze;
    QMenu *menuApplyAsFilter;
    QMenu *menuPrepareAFilter;
    QMenu *menuSCTP;
    QMenu *menuFollow;
    QMenu *menuConversationFilter;
    QMenu *menuStatistics;
    QMenu *menuTcpStreamGraphs;
    QMenu *menuBACnet;
    QMenu *menuHTTP;
    QMenu *menu29West;
    QMenu *menu29WestTopics;
    QMenu *menu29WestQueues;
    QMenu *menu29WestUIM;
    QMenu *menuServiceResponseTime;
    QMenu *menuTelephony;
    QMenu *menuRTSP;
    QMenu *menuRTP;
    QMenu *menuTelephonySCTP;
    QMenu *menuANSI;
    QMenu *menuGSM;
    QMenu *menuLTE;
    QMenu *menuMTP3;
    QMenu *menuOsmux;
    QMenu *menuEdit;
    QMenu *menuEditCopy;
    QMenu *menuWireless;
    QMenu *menuTools;
    QToolBar *mainToolBar;
    MainStatusBar *statusBar;
    QToolBar *displayFilterToolBar;
    QToolBar *wirelessToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(960, 768);
        MainWindow->setAcceptDrops(true);
        MainWindow->setUnifiedTitleAndToolBarOnMac(true);
        actionFileOpen = new QAction(MainWindow);
        actionFileOpen->setObjectName(QStringLiteral("actionFileOpen"));
        actionFileOpen->setShortcut(QStringLiteral("Ctrl+O"));
        actionFileOpen->setIconVisibleInMenu(false);
        actionFileQuit = new QAction(MainWindow);
        actionFileQuit->setObjectName(QStringLiteral("actionFileQuit"));
        actionFileQuit->setShortcut(QStringLiteral("Ctrl+Q"));
        actionFileQuit->setMenuRole(QAction::QuitRole);
        actionCaptureStart = new QAction(MainWindow);
        actionCaptureStart->setObjectName(QStringLiteral("actionCaptureStart"));
        actionCaptureStart->setCheckable(true);
        actionCaptureStart->setShortcut(QStringLiteral("Ctrl+E"));
        actionCaptureStop = new QAction(MainWindow);
        actionCaptureStop->setObjectName(QStringLiteral("actionCaptureStop"));
        actionCaptureStop->setShortcut(QStringLiteral("Ctrl+E"));
        actionFileClose = new QAction(MainWindow);
        actionFileClose->setObjectName(QStringLiteral("actionFileClose"));
        actionFileClose->setShortcut(QStringLiteral("Ctrl+W"));
        actionFileClose->setIconVisibleInMenu(false);
        actionDummyNoFilesFound = new QAction(MainWindow);
        actionDummyNoFilesFound->setObjectName(QStringLiteral("actionDummyNoFilesFound"));
        actionDummyNoFilesFound->setEnabled(false);
        actionHelpContents = new QAction(MainWindow);
        actionHelpContents->setObjectName(QStringLiteral("actionHelpContents"));
        actionHelpContents->setShortcut(QStringLiteral("F1"));
        actionHelpContents->setIconVisibleInMenu(true);
        actionHelpMPWireshark = new QAction(MainWindow);
        actionHelpMPWireshark->setObjectName(QStringLiteral("actionHelpMPWireshark"));
        actionHelpMPWireshark_Filter = new QAction(MainWindow);
        actionHelpMPWireshark_Filter->setObjectName(QStringLiteral("actionHelpMPWireshark_Filter"));
        actionHelpMPTShark = new QAction(MainWindow);
        actionHelpMPTShark->setObjectName(QStringLiteral("actionHelpMPTShark"));
        actionHelpMPRawShark = new QAction(MainWindow);
        actionHelpMPRawShark->setObjectName(QStringLiteral("actionHelpMPRawShark"));
        actionHelpMPDumpcap = new QAction(MainWindow);
        actionHelpMPDumpcap->setObjectName(QStringLiteral("actionHelpMPDumpcap"));
        actionHelpMPMergecap = new QAction(MainWindow);
        actionHelpMPMergecap->setObjectName(QStringLiteral("actionHelpMPMergecap"));
        actionHelpMPEditcap = new QAction(MainWindow);
        actionHelpMPEditcap->setObjectName(QStringLiteral("actionHelpMPEditcap"));
        actionHelpMPText2cap = new QAction(MainWindow);
        actionHelpMPText2cap->setObjectName(QStringLiteral("actionHelpMPText2cap"));
        actionHelpWebsite = new QAction(MainWindow);
        actionHelpWebsite->setObjectName(QStringLiteral("actionHelpWebsite"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/menu/help/wsicon16.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHelpWebsite->setIcon(icon);
        actionHelpFAQ = new QAction(MainWindow);
        actionHelpFAQ->setObjectName(QStringLiteral("actionHelpFAQ"));
        actionHelpDownloads = new QAction(MainWindow);
        actionHelpDownloads->setObjectName(QStringLiteral("actionHelpDownloads"));
        actionHelpWiki = new QAction(MainWindow);
        actionHelpWiki->setObjectName(QStringLiteral("actionHelpWiki"));
        actionHelpWiki->setIcon(icon);
        actionHelpWiki->setIconVisibleInMenu(true);
        actionHelpSampleCaptures = new QAction(MainWindow);
        actionHelpSampleCaptures->setObjectName(QStringLiteral("actionHelpSampleCaptures"));
        actionHelpAbout = new QAction(MainWindow);
        actionHelpAbout->setObjectName(QStringLiteral("actionHelpAbout"));
        actionHelpAbout->setMenuRole(QAction::AboutRole);
        actionHelpAsk = new QAction(MainWindow);
        actionHelpAsk->setObjectName(QStringLiteral("actionHelpAsk"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/menu/help/wsicon-ask.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHelpAsk->setIcon(icon1);
        actionHelpAsk->setIconVisibleInMenu(true);
        actionGoNextPacket = new QAction(MainWindow);
        actionGoNextPacket->setObjectName(QStringLiteral("actionGoNextPacket"));
        actionGoNextPacket->setShortcut(QStringLiteral("Ctrl+Down"));
        actionGoPreviousPacket = new QAction(MainWindow);
        actionGoPreviousPacket->setObjectName(QStringLiteral("actionGoPreviousPacket"));
        actionGoPreviousPacket->setShortcut(QStringLiteral("Ctrl+Up"));
        actionGoNextConversationPacket = new QAction(MainWindow);
        actionGoNextConversationPacket->setObjectName(QStringLiteral("actionGoNextConversationPacket"));
        actionGoNextConversationPacket->setShortcut(QStringLiteral("Ctrl+."));
        actionGoPreviousConversationPacket = new QAction(MainWindow);
        actionGoPreviousConversationPacket->setObjectName(QStringLiteral("actionGoPreviousConversationPacket"));
        actionGoPreviousConversationPacket->setShortcut(QStringLiteral("Ctrl+,"));
        actionGoNextHistoryPacket = new QAction(MainWindow);
        actionGoNextHistoryPacket->setObjectName(QStringLiteral("actionGoNextHistoryPacket"));
        actionGoNextHistoryPacket->setShortcut(QStringLiteral("Alt+Right"));
        actionGoPreviousHistoryPacket = new QAction(MainWindow);
        actionGoPreviousHistoryPacket->setObjectName(QStringLiteral("actionGoPreviousHistoryPacket"));
        actionGoPreviousHistoryPacket->setShortcut(QStringLiteral("Alt+Left"));
        actionGoFirstPacket = new QAction(MainWindow);
        actionGoFirstPacket->setObjectName(QStringLiteral("actionGoFirstPacket"));
        actionGoFirstPacket->setShortcut(QStringLiteral("Ctrl+Home"));
        actionGoLastPacket = new QAction(MainWindow);
        actionGoLastPacket->setObjectName(QStringLiteral("actionGoLastPacket"));
        actionGoLastPacket->setShortcut(QStringLiteral("Ctrl+End"));
        actionViewExpandSubtrees = new QAction(MainWindow);
        actionViewExpandSubtrees->setObjectName(QStringLiteral("actionViewExpandSubtrees"));
        actionViewExpandSubtrees->setEnabled(false);
        actionViewExpandSubtrees->setShortcut(QStringLiteral("Shift+Right"));
        actionViewCollapseSubtrees = new QAction(MainWindow);
        actionViewCollapseSubtrees->setObjectName(QStringLiteral("actionViewCollapseSubtrees"));
        actionViewCollapseSubtrees->setEnabled(false);
        actionViewCollapseSubtrees->setShortcut(QStringLiteral("Shift+Left"));
        actionViewExpandAll = new QAction(MainWindow);
        actionViewExpandAll->setObjectName(QStringLiteral("actionViewExpandAll"));
        actionViewExpandAll->setShortcut(QStringLiteral("Ctrl+Right"));
        actionViewCollapseAll = new QAction(MainWindow);
        actionViewCollapseAll->setObjectName(QStringLiteral("actionViewCollapseAll"));
        actionViewCollapseAll->setShortcut(QStringLiteral("Ctrl+Left"));
        actionGoGoToPacket = new QAction(MainWindow);
        actionGoGoToPacket->setObjectName(QStringLiteral("actionGoGoToPacket"));
        actionGoGoToPacket->setCheckable(true);
        actionGoGoToPacket->setShortcut(QStringLiteral("Ctrl+G"));
        actionFileMerge = new QAction(MainWindow);
        actionFileMerge->setObjectName(QStringLiteral("actionFileMerge"));
        actionFileImportFromHexDump = new QAction(MainWindow);
        actionFileImportFromHexDump->setObjectName(QStringLiteral("actionFileImportFromHexDump"));
        actionFileSave = new QAction(MainWindow);
        actionFileSave->setObjectName(QStringLiteral("actionFileSave"));
        actionFileSave->setShortcut(QStringLiteral("Ctrl+S"));
        actionFileSave->setIconVisibleInMenu(false);
        actionFileSaveAs = new QAction(MainWindow);
        actionFileSaveAs->setObjectName(QStringLiteral("actionFileSaveAs"));
        actionFileSaveAs->setShortcut(QStringLiteral("Ctrl+Shift+S"));
        actionFileExportPackets = new QAction(MainWindow);
        actionFileExportPackets->setObjectName(QStringLiteral("actionFileExportPackets"));
        actionFileExportPacketBytes = new QAction(MainWindow);
        actionFileExportPacketBytes->setObjectName(QStringLiteral("actionFileExportPacketBytes"));
        actionFileExportPacketBytes->setShortcut(QStringLiteral("Ctrl+Shift+X"));
        actionFileExportTLSSessionKeys = new QAction(MainWindow);
        actionFileExportTLSSessionKeys->setObjectName(QStringLiteral("actionFileExportTLSSessionKeys"));
        actionFilePrint = new QAction(MainWindow);
        actionFilePrint->setObjectName(QStringLiteral("actionFilePrint"));
        actionFilePrint->setShortcut(QStringLiteral("Ctrl+P"));
        actionFileSetListFiles = new QAction(MainWindow);
        actionFileSetListFiles->setObjectName(QStringLiteral("actionFileSetListFiles"));
        actionFileSetNextFile = new QAction(MainWindow);
        actionFileSetNextFile->setObjectName(QStringLiteral("actionFileSetNextFile"));
        actionFileSetPreviousFile = new QAction(MainWindow);
        actionFileSetPreviousFile->setObjectName(QStringLiteral("actionFileSetPreviousFile"));
        actionViewReload = new QAction(MainWindow);
        actionViewReload->setObjectName(QStringLiteral("actionViewReload"));
        actionViewReload->setShortcut(QStringLiteral("Ctrl+R"));
        actionViewReload->setIconVisibleInMenu(true);
        actionViewReload_as_File_Format_or_Capture = new QAction(MainWindow);
        actionViewReload_as_File_Format_or_Capture->setObjectName(QStringLiteral("actionViewReload_as_File_Format_or_Capture"));
        actionViewReload_as_File_Format_or_Capture->setShortcut(QStringLiteral("Ctrl+Shift+F"));
        actionCaptureOptions = new QAction(MainWindow);
        actionCaptureOptions->setObjectName(QStringLiteral("actionCaptureOptions"));
        actionCaptureOptions->setShortcut(QStringLiteral("Ctrl+K"));
        actionCaptureOptions->setMenuRole(QAction::NoRole);
        actionCaptureCaptureFilters = new QAction(MainWindow);
        actionCaptureCaptureFilters->setObjectName(QStringLiteral("actionCaptureCaptureFilters"));
        actionCaptureRefreshInterfaces = new QAction(MainWindow);
        actionCaptureRefreshInterfaces->setObjectName(QStringLiteral("actionCaptureRefreshInterfaces"));
        actionCaptureRefreshInterfaces->setShortcut(QStringLiteral("F5"));
        actionCaptureRestart = new QAction(MainWindow);
        actionCaptureRestart->setObjectName(QStringLiteral("actionCaptureRestart"));
        actionCaptureRestart->setShortcut(QStringLiteral("Ctrl+R"));
        actionFileExportAsPlainText = new QAction(MainWindow);
        actionFileExportAsPlainText->setObjectName(QStringLiteral("actionFileExportAsPlainText"));
        actionFileExportAsCSV = new QAction(MainWindow);
        actionFileExportAsCSV->setObjectName(QStringLiteral("actionFileExportAsCSV"));
        actionFileExportAsCArrays = new QAction(MainWindow);
        actionFileExportAsCArrays->setObjectName(QStringLiteral("actionFileExportAsCArrays"));
        actionFileExportAsPSML = new QAction(MainWindow);
        actionFileExportAsPSML->setObjectName(QStringLiteral("actionFileExportAsPSML"));
        actionFileExportAsPDML = new QAction(MainWindow);
        actionFileExportAsPDML->setObjectName(QStringLiteral("actionFileExportAsPDML"));
        actionFileExportAsJSON = new QAction(MainWindow);
        actionFileExportAsJSON->setObjectName(QStringLiteral("actionFileExportAsJSON"));
        actionEditCopyDescription = new QAction(MainWindow);
        actionEditCopyDescription->setObjectName(QStringLiteral("actionEditCopyDescription"));
        actionEditCopyDescription->setShortcut(QStringLiteral("Ctrl+Alt+Shift+D"));
        actionCopyAllVisibleItems = new QAction(MainWindow);
        actionCopyAllVisibleItems->setObjectName(QStringLiteral("actionCopyAllVisibleItems"));
        actionCopyAllVisibleItems->setShortcut(QStringLiteral("Ctrl+Alt+Shift+A"));
        actionCopyAllVisibleSelectedTreeItems = new QAction(MainWindow);
        actionCopyAllVisibleSelectedTreeItems->setObjectName(QStringLiteral("actionCopyAllVisibleSelectedTreeItems"));
        actionEditCopyFieldName = new QAction(MainWindow);
        actionEditCopyFieldName->setObjectName(QStringLiteral("actionEditCopyFieldName"));
        actionEditCopyFieldName->setShortcut(QStringLiteral("Ctrl+Alt+Shift+F"));
        actionEditCopyValue = new QAction(MainWindow);
        actionEditCopyValue->setObjectName(QStringLiteral("actionEditCopyValue"));
        actionEditCopyValue->setShortcut(QStringLiteral("Ctrl+Alt+Shift+V"));
        actionEditCopyAsFilter = new QAction(MainWindow);
        actionEditCopyAsFilter->setObjectName(QStringLiteral("actionEditCopyAsFilter"));
        actionEditCopyAsFilter->setShortcut(QStringLiteral("Ctrl+Shift+C"));
        actionAnalyzeAAFSelected = new QAction(MainWindow);
        actionAnalyzeAAFSelected->setObjectName(QStringLiteral("actionAnalyzeAAFSelected"));
        actionAnalyzeAAFNotSelected = new QAction(MainWindow);
        actionAnalyzeAAFNotSelected->setObjectName(QStringLiteral("actionAnalyzeAAFNotSelected"));
        actionAnalyzeAAFAndSelected = new QAction(MainWindow);
        actionAnalyzeAAFAndSelected->setObjectName(QStringLiteral("actionAnalyzeAAFAndSelected"));
        actionAnalyzeAAFOrSelected = new QAction(MainWindow);
        actionAnalyzeAAFOrSelected->setObjectName(QStringLiteral("actionAnalyzeAAFOrSelected"));
        actionAnalyzeAAFAndNotSelected = new QAction(MainWindow);
        actionAnalyzeAAFAndNotSelected->setObjectName(QStringLiteral("actionAnalyzeAAFAndNotSelected"));
        actionAnalyzeAAFOrNotSelected = new QAction(MainWindow);
        actionAnalyzeAAFOrNotSelected->setObjectName(QStringLiteral("actionAnalyzeAAFOrNotSelected"));
        actionAnalyzePAFSelected = new QAction(MainWindow);
        actionAnalyzePAFSelected->setObjectName(QStringLiteral("actionAnalyzePAFSelected"));
        actionAnalyzePAFNotSelected = new QAction(MainWindow);
        actionAnalyzePAFNotSelected->setObjectName(QStringLiteral("actionAnalyzePAFNotSelected"));
        actionAnalyzePAFAndSelected = new QAction(MainWindow);
        actionAnalyzePAFAndSelected->setObjectName(QStringLiteral("actionAnalyzePAFAndSelected"));
        actionAnalyzePAFOrSelected = new QAction(MainWindow);
        actionAnalyzePAFOrSelected->setObjectName(QStringLiteral("actionAnalyzePAFOrSelected"));
        actionAnalyzePAFAndNotSelected = new QAction(MainWindow);
        actionAnalyzePAFAndNotSelected->setObjectName(QStringLiteral("actionAnalyzePAFAndNotSelected"));
        actionAnalyzePAFOrNotSelected = new QAction(MainWindow);
        actionAnalyzePAFOrNotSelected->setObjectName(QStringLiteral("actionAnalyzePAFOrNotSelected"));
        actionAnalyzeDisplayFilters = new QAction(MainWindow);
        actionAnalyzeDisplayFilters->setObjectName(QStringLiteral("actionAnalyzeDisplayFilters"));
        actionAnalyzeDisplayFilterMacros = new QAction(MainWindow);
        actionAnalyzeDisplayFilterMacros->setObjectName(QStringLiteral("actionAnalyzeDisplayFilterMacros"));
        actionAnalyzeCreateAColumn = new QAction(MainWindow);
        actionAnalyzeCreateAColumn->setObjectName(QStringLiteral("actionAnalyzeCreateAColumn"));
        actionAnalyzeCreateAColumn->setShortcut(QStringLiteral("Ctrl+Shift+I"));
        actionEditFindPacket = new QAction(MainWindow);
        actionEditFindPacket->setObjectName(QStringLiteral("actionEditFindPacket"));
        actionEditFindPacket->setShortcut(QStringLiteral("Ctrl+F"));
        actionEditFindNext = new QAction(MainWindow);
        actionEditFindNext->setObjectName(QStringLiteral("actionEditFindNext"));
        actionEditFindNext->setShortcut(QStringLiteral("Ctrl+N"));
        actionEditFindPrevious = new QAction(MainWindow);
        actionEditFindPrevious->setObjectName(QStringLiteral("actionEditFindPrevious"));
        actionEditFindPrevious->setShortcut(QStringLiteral("Ctrl+B"));
        actionEditMarkPacket = new QAction(MainWindow);
        actionEditMarkPacket->setObjectName(QStringLiteral("actionEditMarkPacket"));
        actionEditMarkPacket->setShortcut(QStringLiteral("Ctrl+M"));
        actionEditMarkAllDisplayed = new QAction(MainWindow);
        actionEditMarkAllDisplayed->setObjectName(QStringLiteral("actionEditMarkAllDisplayed"));
        actionEditMarkAllDisplayed->setShortcut(QStringLiteral("Ctrl+Shift+M"));
        actionEditUnmarkAllDisplayed = new QAction(MainWindow);
        actionEditUnmarkAllDisplayed->setObjectName(QStringLiteral("actionEditUnmarkAllDisplayed"));
        actionEditUnmarkAllDisplayed->setShortcut(QStringLiteral("Ctrl+Alt+M"));
        actionEditNextMark = new QAction(MainWindow);
        actionEditNextMark->setObjectName(QStringLiteral("actionEditNextMark"));
        actionEditNextMark->setShortcut(QStringLiteral("Ctrl+Shift+N"));
        actionEditPreviousMark = new QAction(MainWindow);
        actionEditPreviousMark->setObjectName(QStringLiteral("actionEditPreviousMark"));
        actionEditPreviousMark->setShortcut(QStringLiteral("Ctrl+Shift+B"));
        actionEditIgnorePacket = new QAction(MainWindow);
        actionEditIgnorePacket->setObjectName(QStringLiteral("actionEditIgnorePacket"));
        actionEditIgnorePacket->setShortcut(QStringLiteral("Ctrl+D"));
        actionEditIgnoreAllDisplayed = new QAction(MainWindow);
        actionEditIgnoreAllDisplayed->setObjectName(QStringLiteral("actionEditIgnoreAllDisplayed"));
        actionEditIgnoreAllDisplayed->setShortcut(QStringLiteral("Ctrl+Shift+D"));
        actionEditUnignoreAllDisplayed = new QAction(MainWindow);
        actionEditUnignoreAllDisplayed->setObjectName(QStringLiteral("actionEditUnignoreAllDisplayed"));
        actionEditUnignoreAllDisplayed->setShortcut(QStringLiteral("Ctrl+Alt+D"));
        actionEditSetTimeReference = new QAction(MainWindow);
        actionEditSetTimeReference->setObjectName(QStringLiteral("actionEditSetTimeReference"));
        actionEditSetTimeReference->setShortcut(QStringLiteral("Ctrl+T"));
        actionEditUnsetAllTimeReferences = new QAction(MainWindow);
        actionEditUnsetAllTimeReferences->setObjectName(QStringLiteral("actionEditUnsetAllTimeReferences"));
        actionEditUnsetAllTimeReferences->setShortcut(QStringLiteral("Ctrl+Alt+T"));
        actionEditNextTimeReference = new QAction(MainWindow);
        actionEditNextTimeReference->setObjectName(QStringLiteral("actionEditNextTimeReference"));
        actionEditNextTimeReference->setShortcut(QStringLiteral("Ctrl+Alt+N"));
        actionEditPreviousTimeReference = new QAction(MainWindow);
        actionEditPreviousTimeReference->setObjectName(QStringLiteral("actionEditPreviousTimeReference"));
        actionEditPreviousTimeReference->setShortcut(QStringLiteral("Ctrl+Alt+B"));
        actionEditTimeShift = new QAction(MainWindow);
        actionEditTimeShift->setObjectName(QStringLiteral("actionEditTimeShift"));
        actionEditTimeShift->setShortcut(QStringLiteral("Ctrl+Shift+T"));
        actionEditPacketComment = new QAction(MainWindow);
        actionEditPacketComment->setObjectName(QStringLiteral("actionEditPacketComment"));
        actionEditPacketComment->setShortcut(QStringLiteral("Ctrl+Alt+C"));
        actionDeleteAllPacketComments = new QAction(MainWindow);
        actionDeleteAllPacketComments->setObjectName(QStringLiteral("actionDeleteAllPacketComments"));
        actionEditConfigurationProfiles = new QAction(MainWindow);
        actionEditConfigurationProfiles->setObjectName(QStringLiteral("actionEditConfigurationProfiles"));
        actionEditConfigurationProfiles->setCheckable(false);
        actionEditConfigurationProfiles->setShortcut(QStringLiteral("Ctrl+Shift+A"));
        actionEditConfigurationProfiles->setMenuRole(QAction::NoRole);
        actionEditPreferences = new QAction(MainWindow);
        actionEditPreferences->setObjectName(QStringLiteral("actionEditPreferences"));
        actionEditPreferences->setShortcut(QStringLiteral("Ctrl+Shift+P"));
        actionEditPreferences->setMenuRole(QAction::PreferencesRole);
        actionStatisticsCaptureFileProperties = new QAction(MainWindow);
        actionStatisticsCaptureFileProperties->setObjectName(QStringLiteral("actionStatisticsCaptureFileProperties"));
        actionStatisticsCaptureFileProperties->setEnabled(false);
        actionStatisticsCaptureFileProperties->setShortcut(QStringLiteral("Ctrl+Alt+Shift+C"));
        actionStatisticsProtocolHierarchy = new QAction(MainWindow);
        actionStatisticsProtocolHierarchy->setObjectName(QStringLiteral("actionStatisticsProtocolHierarchy"));
        actionStatisticsProtocolHierarchy->setEnabled(false);
        actionHelpMPCapinfos = new QAction(MainWindow);
        actionHelpMPCapinfos->setObjectName(QStringLiteral("actionHelpMPCapinfos"));
        actionHelpMPReordercap = new QAction(MainWindow);
        actionHelpMPReordercap->setObjectName(QStringLiteral("actionHelpMPReordercap"));
        actionStatisticsTcpStreamStevens = new QAction(MainWindow);
        actionStatisticsTcpStreamStevens->setObjectName(QStringLiteral("actionStatisticsTcpStreamStevens"));
        actionStatisticsTcpStreamThroughput = new QAction(MainWindow);
        actionStatisticsTcpStreamThroughput->setObjectName(QStringLiteral("actionStatisticsTcpStreamThroughput"));
        actionStatisticsTcpStreamRoundTripTime = new QAction(MainWindow);
        actionStatisticsTcpStreamRoundTripTime->setObjectName(QStringLiteral("actionStatisticsTcpStreamRoundTripTime"));
        actionStatisticsTcpStreamWindowScaling = new QAction(MainWindow);
        actionStatisticsTcpStreamWindowScaling->setObjectName(QStringLiteral("actionStatisticsTcpStreamWindowScaling"));
        actionAnalyzeFollowTCPStream = new QAction(MainWindow);
        actionAnalyzeFollowTCPStream->setObjectName(QStringLiteral("actionAnalyzeFollowTCPStream"));
        actionAnalyzeFollowTCPStream->setEnabled(false);
        actionAnalyzeFollowTCPStream->setShortcut(QStringLiteral("Ctrl+Alt+Shift+T"));
        actionAnalyzeFollowUDPStream = new QAction(MainWindow);
        actionAnalyzeFollowUDPStream->setObjectName(QStringLiteral("actionAnalyzeFollowUDPStream"));
        actionAnalyzeFollowUDPStream->setEnabled(false);
        actionAnalyzeFollowUDPStream->setShortcut(QStringLiteral("Ctrl+Alt+Shift+U"));
        actionAnalyzeFollowTLSStream = new QAction(MainWindow);
        actionAnalyzeFollowTLSStream->setObjectName(QStringLiteral("actionAnalyzeFollowTLSStream"));
        actionAnalyzeFollowTLSStream->setEnabled(false);
        actionAnalyzeFollowTLSStream->setShortcut(QStringLiteral("Ctrl+Alt+Shift+S"));
        actionAnalyzeFollowHTTPStream = new QAction(MainWindow);
        actionAnalyzeFollowHTTPStream->setObjectName(QStringLiteral("actionAnalyzeFollowHTTPStream"));
        actionAnalyzeFollowHTTPStream->setEnabled(false);
        actionAnalyzeFollowHTTPStream->setShortcut(QStringLiteral("Ctrl+Alt+Shift+H"));
        actionStatisticsTcpStreamTcptrace = new QAction(MainWindow);
        actionStatisticsTcpStreamTcptrace->setObjectName(QStringLiteral("actionStatisticsTcpStreamTcptrace"));
        actionSCTPAnalyseThisAssociation = new QAction(MainWindow);
        actionSCTPAnalyseThisAssociation->setObjectName(QStringLiteral("actionSCTPAnalyseThisAssociation"));
        actionSCTPShowAllAssociations = new QAction(MainWindow);
        actionSCTPShowAllAssociations->setObjectName(QStringLiteral("actionSCTPShowAllAssociations"));
        actionStatisticsFlowGraph = new QAction(MainWindow);
        actionStatisticsFlowGraph->setObjectName(QStringLiteral("actionStatisticsFlowGraph"));
        actionStatisticsANCP = new QAction(MainWindow);
        actionStatisticsANCP->setObjectName(QStringLiteral("actionStatisticsANCP"));
        actionStatisticsBACappInstanceId = new QAction(MainWindow);
        actionStatisticsBACappInstanceId->setObjectName(QStringLiteral("actionStatisticsBACappInstanceId"));
        actionStatisticsBACappIP = new QAction(MainWindow);
        actionStatisticsBACappIP->setObjectName(QStringLiteral("actionStatisticsBACappIP"));
        actionStatisticsBACappObjectId = new QAction(MainWindow);
        actionStatisticsBACappObjectId->setObjectName(QStringLiteral("actionStatisticsBACappObjectId"));
        actionStatisticsBACappService = new QAction(MainWindow);
        actionStatisticsBACappService->setObjectName(QStringLiteral("actionStatisticsBACappService"));
        actionStatisticsCollectd = new QAction(MainWindow);
        actionStatisticsCollectd->setObjectName(QStringLiteral("actionStatisticsCollectd"));
        actionStatisticsDNS = new QAction(MainWindow);
        actionStatisticsDNS->setObjectName(QStringLiteral("actionStatisticsDNS"));
        actionStatisticsHART_IP = new QAction(MainWindow);
        actionStatisticsHART_IP->setObjectName(QStringLiteral("actionStatisticsHART_IP"));
        actionStatisticsHpfeeds = new QAction(MainWindow);
        actionStatisticsHpfeeds->setObjectName(QStringLiteral("actionStatisticsHpfeeds"));
        actionStatisticsHTTP2 = new QAction(MainWindow);
        actionStatisticsHTTP2->setObjectName(QStringLiteral("actionStatisticsHTTP2"));
        actionStatisticsHTTPPacketCounter = new QAction(MainWindow);
        actionStatisticsHTTPPacketCounter->setObjectName(QStringLiteral("actionStatisticsHTTPPacketCounter"));
        actionStatisticsHTTPRequests = new QAction(MainWindow);
        actionStatisticsHTTPRequests->setObjectName(QStringLiteral("actionStatisticsHTTPRequests"));
        actionStatisticsHTTPLoadDistribution = new QAction(MainWindow);
        actionStatisticsHTTPLoadDistribution->setObjectName(QStringLiteral("actionStatisticsHTTPLoadDistribution"));
        actionStatisticsHTTPRequestSequences = new QAction(MainWindow);
        actionStatisticsHTTPRequestSequences->setObjectName(QStringLiteral("actionStatisticsHTTPRequestSequences"));
        actionStatisticsPacketLengths = new QAction(MainWindow);
        actionStatisticsPacketLengths->setObjectName(QStringLiteral("actionStatisticsPacketLengths"));
        actionStatisticsSametime = new QAction(MainWindow);
        actionStatisticsSametime->setObjectName(QStringLiteral("actionStatisticsSametime"));
        actionTelephonyISUPMessages = new QAction(MainWindow);
        actionTelephonyISUPMessages->setObjectName(QStringLiteral("actionTelephonyISUPMessages"));
        actionTelephonyOsmuxPacketCounter = new QAction(MainWindow);
        actionTelephonyOsmuxPacketCounter->setObjectName(QStringLiteral("actionTelephonyOsmuxPacketCounter"));
        actionTelephonyRTSPPacketCounter = new QAction(MainWindow);
        actionTelephonyRTSPPacketCounter->setObjectName(QStringLiteral("actionTelephonyRTSPPacketCounter"));
        actionTelephonySMPPOperations = new QAction(MainWindow);
        actionTelephonySMPPOperations->setObjectName(QStringLiteral("actionTelephonySMPPOperations"));
        actionTelephonyUCPMessages = new QAction(MainWindow);
        actionTelephonyUCPMessages->setObjectName(QStringLiteral("actionTelephonyUCPMessages"));
        actionAnalyzeDecodeAs = new QAction(MainWindow);
        actionAnalyzeDecodeAs->setObjectName(QStringLiteral("actionAnalyzeDecodeAs"));
        actionAnalyzeReloadLuaPlugins = new QAction(MainWindow);
        actionAnalyzeReloadLuaPlugins->setObjectName(QStringLiteral("actionAnalyzeReloadLuaPlugins"));
        actionAnalyzeReloadLuaPlugins->setShortcut(QStringLiteral("Ctrl+Shift+L"));
        action29West = new QAction(MainWindow);
        action29West->setObjectName(QStringLiteral("action29West"));
        actionStatistics29WestTopics_Advertisements_by_Topic = new QAction(MainWindow);
        actionStatistics29WestTopics_Advertisements_by_Topic->setObjectName(QStringLiteral("actionStatistics29WestTopics_Advertisements_by_Topic"));
        actionStatistics29WestTopics_Advertisements_by_Source = new QAction(MainWindow);
        actionStatistics29WestTopics_Advertisements_by_Source->setObjectName(QStringLiteral("actionStatistics29WestTopics_Advertisements_by_Source"));
        actionStatistics29WestTopics_Advertisements_by_Transport = new QAction(MainWindow);
        actionStatistics29WestTopics_Advertisements_by_Transport->setObjectName(QStringLiteral("actionStatistics29WestTopics_Advertisements_by_Transport"));
        actionStatistics29WestTopics_Queries_by_Topic = new QAction(MainWindow);
        actionStatistics29WestTopics_Queries_by_Topic->setObjectName(QStringLiteral("actionStatistics29WestTopics_Queries_by_Topic"));
        actionStatistics29WestTopics_Queries_by_Receiver = new QAction(MainWindow);
        actionStatistics29WestTopics_Queries_by_Receiver->setObjectName(QStringLiteral("actionStatistics29WestTopics_Queries_by_Receiver"));
        actionStatistics29WestTopics_Wildcard_Queries_by_Pattern = new QAction(MainWindow);
        actionStatistics29WestTopics_Wildcard_Queries_by_Pattern->setObjectName(QStringLiteral("actionStatistics29WestTopics_Wildcard_Queries_by_Pattern"));
        actionStatistics29WestTopics_Wildcard_Queries_by_Receiver = new QAction(MainWindow);
        actionStatistics29WestTopics_Wildcard_Queries_by_Receiver->setObjectName(QStringLiteral("actionStatistics29WestTopics_Wildcard_Queries_by_Receiver"));
        actionStatistics29WestQueues_Advertisements_by_Queue = new QAction(MainWindow);
        actionStatistics29WestQueues_Advertisements_by_Queue->setObjectName(QStringLiteral("actionStatistics29WestQueues_Advertisements_by_Queue"));
        actionStatistics29WestQueues_Advertisements_by_Source = new QAction(MainWindow);
        actionStatistics29WestQueues_Advertisements_by_Source->setObjectName(QStringLiteral("actionStatistics29WestQueues_Advertisements_by_Source"));
        actionStatistics29WestQueues_Queries_by_Queue = new QAction(MainWindow);
        actionStatistics29WestQueues_Queries_by_Queue->setObjectName(QStringLiteral("actionStatistics29WestQueues_Queries_by_Queue"));
        actionStatistics29WestQueues_Queries_by_Receiver = new QAction(MainWindow);
        actionStatistics29WestQueues_Queries_by_Receiver->setObjectName(QStringLiteral("actionStatistics29WestQueues_Queries_by_Receiver"));
        actionStatistics29WestUIM_Streams = new QAction(MainWindow);
        actionStatistics29WestUIM_Streams->setObjectName(QStringLiteral("actionStatistics29WestUIM_Streams"));
        actionStatistics29WestLBTRM = new QAction(MainWindow);
        actionStatistics29WestLBTRM->setObjectName(QStringLiteral("actionStatistics29WestLBTRM"));
        actionStatistics29WestLBTRU = new QAction(MainWindow);
        actionStatistics29WestLBTRU->setObjectName(QStringLiteral("actionStatistics29WestLBTRU"));
        actionSCTPFilterThisAssociation = new QAction(MainWindow);
        actionSCTPFilterThisAssociation->setObjectName(QStringLiteral("actionSCTPFilterThisAssociation"));
        actionFileExportPDU = new QAction(MainWindow);
        actionFileExportPDU->setObjectName(QStringLiteral("actionFileExportPDU"));
        actionStatisticsIOGraph = new QAction(MainWindow);
        actionStatisticsIOGraph->setObjectName(QStringLiteral("actionStatisticsIOGraph"));
        actionViewMainToolbar = new QAction(MainWindow);
        actionViewMainToolbar->setObjectName(QStringLiteral("actionViewMainToolbar"));
        actionViewMainToolbar->setCheckable(true);
        actionViewMainToolbar->setChecked(true);
        actionViewFilterToolbar = new QAction(MainWindow);
        actionViewFilterToolbar->setObjectName(QStringLiteral("actionViewFilterToolbar"));
        actionViewFilterToolbar->setCheckable(true);
        actionViewFilterToolbar->setChecked(true);
        actionStatisticsConversations = new QAction(MainWindow);
        actionStatisticsConversations->setObjectName(QStringLiteral("actionStatisticsConversations"));
        actionStatisticsEndpoints = new QAction(MainWindow);
        actionStatisticsEndpoints->setObjectName(QStringLiteral("actionStatisticsEndpoints"));
        actionViewColorizePacketList = new QAction(MainWindow);
        actionViewColorizePacketList->setObjectName(QStringLiteral("actionViewColorizePacketList"));
        actionViewColorizePacketList->setCheckable(true);
        actionViewZoomIn = new QAction(MainWindow);
        actionViewZoomIn->setObjectName(QStringLiteral("actionViewZoomIn"));
        actionViewZoomIn->setShortcut(QStringLiteral("Ctrl++"));
        actionViewZoomOut = new QAction(MainWindow);
        actionViewZoomOut->setObjectName(QStringLiteral("actionViewZoomOut"));
        actionViewZoomOut->setShortcut(QStringLiteral("Ctrl+-"));
        actionViewNormalSize = new QAction(MainWindow);
        actionViewNormalSize->setObjectName(QStringLiteral("actionViewNormalSize"));
        actionViewNormalSize->setShortcut(QStringLiteral("Ctrl+0"));
        actionViewResetLayout = new QAction(MainWindow);
        actionViewResetLayout->setObjectName(QStringLiteral("actionViewResetLayout"));
        actionViewResetLayout->setShortcut(QStringLiteral("Ctrl+Shift+W"));
        actionViewResizeColumns = new QAction(MainWindow);
        actionViewResizeColumns->setObjectName(QStringLiteral("actionViewResizeColumns"));
        actionViewResizeColumns->setShortcut(QStringLiteral("Ctrl+Shift+R"));
        actionViewTimeDisplayFormatDateYMDandTimeOfDay = new QAction(MainWindow);
        actionViewTimeDisplayFormatDateYMDandTimeOfDay->setObjectName(QStringLiteral("actionViewTimeDisplayFormatDateYMDandTimeOfDay"));
        actionViewTimeDisplayFormatDateYMDandTimeOfDay->setCheckable(true);
        actionViewTimeDisplayFormatDateYMDandTimeOfDay->setShortcut(QStringLiteral("Ctrl+Alt+1"));
        actionViewTimeDisplayFormatDateYDOYandTimeOfDay = new QAction(MainWindow);
        actionViewTimeDisplayFormatDateYDOYandTimeOfDay->setObjectName(QStringLiteral("actionViewTimeDisplayFormatDateYDOYandTimeOfDay"));
        actionViewTimeDisplayFormatDateYDOYandTimeOfDay->setCheckable(true);
        actionViewTimeDisplayFormatTimeOfDay = new QAction(MainWindow);
        actionViewTimeDisplayFormatTimeOfDay->setObjectName(QStringLiteral("actionViewTimeDisplayFormatTimeOfDay"));
        actionViewTimeDisplayFormatTimeOfDay->setCheckable(true);
        actionViewTimeDisplayFormatTimeOfDay->setShortcut(QStringLiteral("Ctrl+Alt+2"));
        actionViewTimeDisplayFormatSecondsSinceEpoch = new QAction(MainWindow);
        actionViewTimeDisplayFormatSecondsSinceEpoch->setObjectName(QStringLiteral("actionViewTimeDisplayFormatSecondsSinceEpoch"));
        actionViewTimeDisplayFormatSecondsSinceEpoch->setCheckable(true);
        actionViewTimeDisplayFormatSecondsSinceEpoch->setShortcut(QStringLiteral("Ctrl+Alt+3"));
        actionViewTimeDisplayFormatSecondsSinceBeginningOfCapture = new QAction(MainWindow);
        actionViewTimeDisplayFormatSecondsSinceBeginningOfCapture->setObjectName(QStringLiteral("actionViewTimeDisplayFormatSecondsSinceBeginningOfCapture"));
        actionViewTimeDisplayFormatSecondsSinceBeginningOfCapture->setCheckable(true);
        actionViewTimeDisplayFormatSecondsSinceBeginningOfCapture->setShortcut(QStringLiteral("Ctrl+Alt+4"));
        actionViewTimeDisplayFormatSecondsSincePreviousCapturedPacket = new QAction(MainWindow);
        actionViewTimeDisplayFormatSecondsSincePreviousCapturedPacket->setObjectName(QStringLiteral("actionViewTimeDisplayFormatSecondsSincePreviousCapturedPacket"));
        actionViewTimeDisplayFormatSecondsSincePreviousCapturedPacket->setCheckable(true);
        actionViewTimeDisplayFormatSecondsSincePreviousCapturedPacket->setShortcut(QStringLiteral("Ctrl+Alt+5"));
        actionViewTimeDisplayFormatSecondsSincePreviousDisplayedPacket = new QAction(MainWindow);
        actionViewTimeDisplayFormatSecondsSincePreviousDisplayedPacket->setObjectName(QStringLiteral("actionViewTimeDisplayFormatSecondsSincePreviousDisplayedPacket"));
        actionViewTimeDisplayFormatSecondsSincePreviousDisplayedPacket->setCheckable(true);
        actionViewTimeDisplayFormatSecondsSincePreviousDisplayedPacket->setShortcut(QStringLiteral("Ctrl+Alt+6"));
        actionViewTimeDisplayFormatUTCDateYMDandTimeOfDay = new QAction(MainWindow);
        actionViewTimeDisplayFormatUTCDateYMDandTimeOfDay->setObjectName(QStringLiteral("actionViewTimeDisplayFormatUTCDateYMDandTimeOfDay"));
        actionViewTimeDisplayFormatUTCDateYMDandTimeOfDay->setCheckable(true);
        actionViewTimeDisplayFormatUTCDateYMDandTimeOfDay->setShortcut(QStringLiteral("Ctrl+Alt+7"));
        actionViewTimeDisplayFormatUTCDateYDOYandTimeOfDay = new QAction(MainWindow);
        actionViewTimeDisplayFormatUTCDateYDOYandTimeOfDay->setObjectName(QStringLiteral("actionViewTimeDisplayFormatUTCDateYDOYandTimeOfDay"));
        actionViewTimeDisplayFormatUTCDateYDOYandTimeOfDay->setCheckable(true);
        actionViewTimeDisplayFormatUTCTimeOfDay = new QAction(MainWindow);
        actionViewTimeDisplayFormatUTCTimeOfDay->setObjectName(QStringLiteral("actionViewTimeDisplayFormatUTCTimeOfDay"));
        actionViewTimeDisplayFormatUTCTimeOfDay->setCheckable(true);
        actionViewTimeDisplayFormatUTCTimeOfDay->setShortcut(QStringLiteral("Ctrl+Alt+8"));
        actionViewTimeDisplayFormatPrecisionAutomatic = new QAction(MainWindow);
        actionViewTimeDisplayFormatPrecisionAutomatic->setObjectName(QStringLiteral("actionViewTimeDisplayFormatPrecisionAutomatic"));
        actionViewTimeDisplayFormatPrecisionAutomatic->setCheckable(true);
        actionViewTimeDisplayFormatPrecisionSeconds = new QAction(MainWindow);
        actionViewTimeDisplayFormatPrecisionSeconds->setObjectName(QStringLiteral("actionViewTimeDisplayFormatPrecisionSeconds"));
        actionViewTimeDisplayFormatPrecisionSeconds->setCheckable(true);
        actionViewTimeDisplayFormatPrecisionDeciseconds = new QAction(MainWindow);
        actionViewTimeDisplayFormatPrecisionDeciseconds->setObjectName(QStringLiteral("actionViewTimeDisplayFormatPrecisionDeciseconds"));
        actionViewTimeDisplayFormatPrecisionDeciseconds->setCheckable(true);
        actionViewTimeDisplayFormatPrecisionCentiseconds = new QAction(MainWindow);
        actionViewTimeDisplayFormatPrecisionCentiseconds->setObjectName(QStringLiteral("actionViewTimeDisplayFormatPrecisionCentiseconds"));
        actionViewTimeDisplayFormatPrecisionCentiseconds->setCheckable(true);
        actionViewTimeDisplayFormatPrecisionMilliseconds = new QAction(MainWindow);
        actionViewTimeDisplayFormatPrecisionMilliseconds->setObjectName(QStringLiteral("actionViewTimeDisplayFormatPrecisionMilliseconds"));
        actionViewTimeDisplayFormatPrecisionMilliseconds->setCheckable(true);
        actionViewTimeDisplayFormatPrecisionMicroseconds = new QAction(MainWindow);
        actionViewTimeDisplayFormatPrecisionMicroseconds->setObjectName(QStringLiteral("actionViewTimeDisplayFormatPrecisionMicroseconds"));
        actionViewTimeDisplayFormatPrecisionMicroseconds->setCheckable(true);
        actionViewTimeDisplayFormatPrecisionNanoseconds = new QAction(MainWindow);
        actionViewTimeDisplayFormatPrecisionNanoseconds->setObjectName(QStringLiteral("actionViewTimeDisplayFormatPrecisionNanoseconds"));
        actionViewTimeDisplayFormatPrecisionNanoseconds->setCheckable(true);
        actionViewTimeDisplaySecondsWithHoursAndMinutes = new QAction(MainWindow);
        actionViewTimeDisplaySecondsWithHoursAndMinutes->setObjectName(QStringLiteral("actionViewTimeDisplaySecondsWithHoursAndMinutes"));
        actionViewTimeDisplaySecondsWithHoursAndMinutes->setCheckable(true);
        actionViewNameResolutionPhysical = new QAction(MainWindow);
        actionViewNameResolutionPhysical->setObjectName(QStringLiteral("actionViewNameResolutionPhysical"));
        actionViewNameResolutionPhysical->setCheckable(true);
        actionViewNameResolutionNetwork = new QAction(MainWindow);
        actionViewNameResolutionNetwork->setObjectName(QStringLiteral("actionViewNameResolutionNetwork"));
        actionViewNameResolutionNetwork->setCheckable(true);
        actionViewNameResolutionTransport = new QAction(MainWindow);
        actionViewNameResolutionTransport->setObjectName(QStringLiteral("actionViewNameResolutionTransport"));
        actionViewNameResolutionTransport->setCheckable(true);
        actionViewWirelessToolbar = new QAction(MainWindow);
        actionViewWirelessToolbar->setObjectName(QStringLiteral("actionViewWirelessToolbar"));
        actionViewWirelessToolbar->setCheckable(true);
        actionViewStatusBar = new QAction(MainWindow);
        actionViewStatusBar->setObjectName(QStringLiteral("actionViewStatusBar"));
        actionViewStatusBar->setCheckable(true);
        actionViewStatusBar->setChecked(true);
        actionViewPacketList = new QAction(MainWindow);
        actionViewPacketList->setObjectName(QStringLiteral("actionViewPacketList"));
        actionViewPacketList->setCheckable(true);
        actionViewPacketList->setChecked(true);
        actionViewPacketDetails = new QAction(MainWindow);
        actionViewPacketDetails->setObjectName(QStringLiteral("actionViewPacketDetails"));
        actionViewPacketDetails->setCheckable(true);
        actionViewPacketDetails->setChecked(true);
        actionViewPacketBytes = new QAction(MainWindow);
        actionViewPacketBytes->setObjectName(QStringLiteral("actionViewPacketBytes"));
        actionViewPacketBytes->setCheckable(true);
        actionViewPacketBytes->setChecked(true);
        actionViewInternalsConversationHashTables = new QAction(MainWindow);
        actionViewInternalsConversationHashTables->setObjectName(QStringLiteral("actionViewInternalsConversationHashTables"));
        actionViewInternalsDissectorTables = new QAction(MainWindow);
        actionViewInternalsDissectorTables->setObjectName(QStringLiteral("actionViewInternalsDissectorTables"));
        actionViewInternalsSupportedProtocols = new QAction(MainWindow);
        actionViewInternalsSupportedProtocols->setObjectName(QStringLiteral("actionViewInternalsSupportedProtocols"));
        actionTelephonyGsmMapSummary = new QAction(MainWindow);
        actionTelephonyGsmMapSummary->setObjectName(QStringLiteral("actionTelephonyGsmMapSummary"));
        actionTelephonyLteMacStatistics = new QAction(MainWindow);
        actionTelephonyLteMacStatistics->setObjectName(QStringLiteral("actionTelephonyLteMacStatistics"));
        actionTelephonyLteRlcStatistics = new QAction(MainWindow);
        actionTelephonyLteRlcStatistics->setObjectName(QStringLiteral("actionTelephonyLteRlcStatistics"));
        actionTelephonyLteRlcGraph = new QAction(MainWindow);
        actionTelephonyLteRlcGraph->setObjectName(QStringLiteral("actionTelephonyLteRlcGraph"));
        actionTelephonyMtp3Summary = new QAction(MainWindow);
        actionTelephonyMtp3Summary->setObjectName(QStringLiteral("actionTelephonyMtp3Summary"));
        actionTelephonyVoipCalls = new QAction(MainWindow);
        actionTelephonyVoipCalls->setObjectName(QStringLiteral("actionTelephonyVoipCalls"));
        actionTelephonySipFlows = new QAction(MainWindow);
        actionTelephonySipFlows->setObjectName(QStringLiteral("actionTelephonySipFlows"));
        actionTelephonyRTPStreams = new QAction(MainWindow);
        actionTelephonyRTPStreams->setObjectName(QStringLiteral("actionTelephonyRTPStreams"));
        actionViewColoringRules = new QAction(MainWindow);
        actionViewColoringRules->setObjectName(QStringLiteral("actionViewColoringRules"));
        actionBluetoothATT_Server_Attributes = new QAction(MainWindow);
        actionBluetoothATT_Server_Attributes->setObjectName(QStringLiteral("actionBluetoothATT_Server_Attributes"));
        actionBluetoothDevices = new QAction(MainWindow);
        actionBluetoothDevices->setObjectName(QStringLiteral("actionBluetoothDevices"));
        actionBluetoothHCI_Summary = new QAction(MainWindow);
        actionBluetoothHCI_Summary->setObjectName(QStringLiteral("actionBluetoothHCI_Summary"));
        actionViewShowPacketInNewWindow = new QAction(MainWindow);
        actionViewShowPacketInNewWindow->setObjectName(QStringLiteral("actionViewShowPacketInNewWindow"));
        actionContextShowLinkedPacketInNewWindow = new QAction(MainWindow);
        actionContextShowLinkedPacketInNewWindow->setObjectName(QStringLiteral("actionContextShowLinkedPacketInNewWindow"));
        actionGoAutoScroll = new QAction(MainWindow);
        actionGoAutoScroll->setObjectName(QStringLiteral("actionGoAutoScroll"));
        actionGoAutoScroll->setCheckable(true);
        actionAnalyzeExpertInfo = new QAction(MainWindow);
        actionAnalyzeExpertInfo->setObjectName(QStringLiteral("actionAnalyzeExpertInfo"));
        actionDisplayFilterExpression = new QAction(MainWindow);
        actionDisplayFilterExpression->setObjectName(QStringLiteral("actionDisplayFilterExpression"));
        actionStatistics_REGISTER_STAT_GROUP_UNSORTED = new QAction(MainWindow);
        actionStatistics_REGISTER_STAT_GROUP_UNSORTED->setObjectName(QStringLiteral("actionStatistics_REGISTER_STAT_GROUP_UNSORTED"));
        actionStatistics_REGISTER_STAT_GROUP_UNSORTED->setVisible(false);
        actionStatistics_REGISTER_STAT_GROUP_UNSORTED->setMenuRole(QAction::NoRole);
        actionTelephonyANSIPlaceholder = new QAction(MainWindow);
        actionTelephonyANSIPlaceholder->setObjectName(QStringLiteral("actionTelephonyANSIPlaceholder"));
        actionTelephonyANSIPlaceholder->setEnabled(false);
        actionTelephonyGSMPlaceholder = new QAction(MainWindow);
        actionTelephonyGSMPlaceholder->setObjectName(QStringLiteral("actionTelephonyGSMPlaceholder"));
        actionTelephonyGSMPlaceholder->setEnabled(false);
        actionTelephonyLTEPlaceholder = new QAction(MainWindow);
        actionTelephonyLTEPlaceholder->setObjectName(QStringLiteral("actionTelephonyLTEPlaceholder"));
        actionTelephonyLTEPlaceholder->setEnabled(false);
        actionTelephonyMTP3Placeholder = new QAction(MainWindow);
        actionTelephonyMTP3Placeholder->setObjectName(QStringLiteral("actionTelephonyMTP3Placeholder"));
        actionTelephonyMTP3Placeholder->setEnabled(false);
        actionStatisticsResolvedAddresses = new QAction(MainWindow);
        actionStatisticsResolvedAddresses->setObjectName(QStringLiteral("actionStatisticsResolvedAddresses"));
        actionViewColorizeConversation1 = new QAction(MainWindow);
        actionViewColorizeConversation1->setObjectName(QStringLiteral("actionViewColorizeConversation1"));
        actionViewColorizeConversation1->setShortcut(QStringLiteral("Ctrl+1"));
        actionViewColorizeConversation2 = new QAction(MainWindow);
        actionViewColorizeConversation2->setObjectName(QStringLiteral("actionViewColorizeConversation2"));
        actionViewColorizeConversation2->setShortcut(QStringLiteral("Ctrl+2"));
        actionViewColorizeConversation3 = new QAction(MainWindow);
        actionViewColorizeConversation3->setObjectName(QStringLiteral("actionViewColorizeConversation3"));
        actionViewColorizeConversation3->setShortcut(QStringLiteral("Ctrl+3"));
        actionViewColorizeConversation4 = new QAction(MainWindow);
        actionViewColorizeConversation4->setObjectName(QStringLiteral("actionViewColorizeConversation4"));
        actionViewColorizeConversation4->setShortcut(QStringLiteral("Ctrl+4"));
        actionViewColorizeConversation5 = new QAction(MainWindow);
        actionViewColorizeConversation5->setObjectName(QStringLiteral("actionViewColorizeConversation5"));
        actionViewColorizeConversation5->setShortcut(QStringLiteral("Ctrl+5"));
        actionViewColorizeConversation6 = new QAction(MainWindow);
        actionViewColorizeConversation6->setObjectName(QStringLiteral("actionViewColorizeConversation6"));
        actionViewColorizeConversation6->setShortcut(QStringLiteral("Ctrl+6"));
        actionViewColorizeConversation7 = new QAction(MainWindow);
        actionViewColorizeConversation7->setObjectName(QStringLiteral("actionViewColorizeConversation7"));
        actionViewColorizeConversation7->setShortcut(QStringLiteral("Ctrl+7"));
        actionViewColorizeConversation8 = new QAction(MainWindow);
        actionViewColorizeConversation8->setObjectName(QStringLiteral("actionViewColorizeConversation8"));
        actionViewColorizeConversation8->setShortcut(QStringLiteral("Ctrl+8"));
        actionViewColorizeConversation9 = new QAction(MainWindow);
        actionViewColorizeConversation9->setObjectName(QStringLiteral("actionViewColorizeConversation9"));
        actionViewColorizeConversation9->setShortcut(QStringLiteral("Ctrl+9"));
        actionViewColorizeConversation10 = new QAction(MainWindow);
        actionViewColorizeConversation10->setObjectName(QStringLiteral("actionViewColorizeConversation10"));
        actionViewColorizeNewColoringRule = new QAction(MainWindow);
        actionViewColorizeNewColoringRule->setObjectName(QStringLiteral("actionViewColorizeNewColoringRule"));
        actionViewColorizeResetColorization = new QAction(MainWindow);
        actionViewColorizeResetColorization->setObjectName(QStringLiteral("actionViewColorizeResetColorization"));
        actionViewColorizeResetColorization->setShortcut(QStringLiteral("Ctrl+Space"));
        actionTelephonyRTPStreamAnalysis = new QAction(MainWindow);
        actionTelephonyRTPStreamAnalysis->setObjectName(QStringLiteral("actionTelephonyRTPStreamAnalysis"));
        actionTelephonyIax2StreamAnalysis = new QAction(MainWindow);
        actionTelephonyIax2StreamAnalysis->setObjectName(QStringLiteral("actionTelephonyIax2StreamAnalysis"));
        actionViewEditResolvedName = new QAction(MainWindow);
        actionViewEditResolvedName->setObjectName(QStringLiteral("actionViewEditResolvedName"));
        actionAnalyzeEnabledProtocols = new QAction(MainWindow);
        actionAnalyzeEnabledProtocols->setObjectName(QStringLiteral("actionAnalyzeEnabledProtocols"));
        actionAnalyzeEnabledProtocols->setShortcut(QStringLiteral("Ctrl+Shift+E"));
        actionAnalyzeShowPacketBytes = new QAction(MainWindow);
        actionAnalyzeShowPacketBytes->setObjectName(QStringLiteral("actionAnalyzeShowPacketBytes"));
        actionAnalyzeShowPacketBytes->setShortcut(QStringLiteral("Ctrl+Shift+O"));
        actionContextWikiProtocolPage = new QAction(MainWindow);
        actionContextWikiProtocolPage->setObjectName(QStringLiteral("actionContextWikiProtocolPage"));
        actionContextFilterFieldReference = new QAction(MainWindow);
        actionContextFilterFieldReference->setObjectName(QStringLiteral("actionContextFilterFieldReference"));
        actionGoGoToLinkedPacket = new QAction(MainWindow);
        actionGoGoToLinkedPacket->setObjectName(QStringLiteral("actionGoGoToLinkedPacket"));
        actionStatisticsUdpMulticastStreams = new QAction(MainWindow);
        actionStatisticsUdpMulticastStreams->setObjectName(QStringLiteral("actionStatisticsUdpMulticastStreams"));
        actionWirelessWlanStatistics = new QAction(MainWindow);
        actionWirelessWlanStatistics->setObjectName(QStringLiteral("actionWirelessWlanStatistics"));
        actionNewDisplayFilterExpression = new QAction(MainWindow);
        actionNewDisplayFilterExpression->setObjectName(QStringLiteral("actionNewDisplayFilterExpression"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/stock/plus-8.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNewDisplayFilterExpression->setIcon(icon2);
        actionToolsFirewallAclRules = new QAction(MainWindow);
        actionToolsFirewallAclRules->setObjectName(QStringLiteral("actionToolsFirewallAclRules"));
        actionViewFullScreen = new QAction(MainWindow);
        actionViewFullScreen->setObjectName(QStringLiteral("actionViewFullScreen"));
        actionViewFullScreen->setCheckable(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        goToFrame = new AccordionFrame(centralWidget);
        goToFrame->setObjectName(QStringLiteral("goToFrame"));
        goToHB = new QHBoxLayout(goToFrame);
        goToHB->setSpacing(6);
        goToHB->setContentsMargins(11, 11, 11, 11);
        goToHB->setObjectName(QStringLiteral("goToHB"));
        goToHB->setContentsMargins(-1, 0, -1, 0);
        horizontalSpacer = new QSpacerItem(40, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        goToHB->addItem(horizontalSpacer);

        goToPacketLabel = new QLabel(goToFrame);
        goToPacketLabel->setObjectName(QStringLiteral("goToPacketLabel"));

        goToHB->addWidget(goToPacketLabel);

        goToLineEdit = new QLineEdit(goToFrame);
        goToLineEdit->setObjectName(QStringLiteral("goToLineEdit"));

        goToHB->addWidget(goToLineEdit);

        goToGo = new QPushButton(goToFrame);
        goToGo->setObjectName(QStringLiteral("goToGo"));
        goToGo->setMaximumSize(QSize(16777215, 27));

        goToHB->addWidget(goToGo);

        goToCancel = new QPushButton(goToFrame);
        goToCancel->setObjectName(QStringLiteral("goToCancel"));
        goToCancel->setMaximumSize(QSize(16777215, 27));

        goToHB->addWidget(goToCancel);


        verticalLayout->addWidget(goToFrame);

        searchFrame = new SearchFrame(centralWidget);
        searchFrame->setObjectName(QStringLiteral("searchFrame"));

        verticalLayout->addWidget(searchFrame);

        addressEditorFrame = new AddressEditorFrame(centralWidget);
        addressEditorFrame->setObjectName(QStringLiteral("addressEditorFrame"));

        verticalLayout->addWidget(addressEditorFrame);

        columnEditorFrame = new ColumnEditorFrame(centralWidget);
        columnEditorFrame->setObjectName(QStringLiteral("columnEditorFrame"));

        verticalLayout->addWidget(columnEditorFrame);

        preferenceEditorFrame = new PreferenceEditorFrame(centralWidget);
        preferenceEditorFrame->setObjectName(QStringLiteral("preferenceEditorFrame"));

        verticalLayout->addWidget(preferenceEditorFrame);

        filterExpressionFrame = new FilterExpressionFrame(centralWidget);
        filterExpressionFrame->setObjectName(QStringLiteral("filterExpressionFrame"));

        verticalLayout->addWidget(filterExpressionFrame);

        wirelessTimelineWidget = new WirelessTimeline(centralWidget);
        wirelessTimelineWidget->setObjectName(QStringLiteral("wirelessTimelineWidget"));

        verticalLayout->addWidget(wirelessTimelineWidget);

        mainStack = new QStackedWidget(centralWidget);
        mainStack->setObjectName(QStringLiteral("mainStack"));
        mainStack->setEnabled(true);
        welcomePage = new WelcomePage();
        welcomePage->setObjectName(QStringLiteral("welcomePage"));
        mainStack->addWidget(welcomePage);

        verticalLayout->addWidget(mainStack);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 960, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuOpenRecentCaptureFile = new QMenu(menuFile);
        menuOpenRecentCaptureFile->setObjectName(QStringLiteral("menuOpenRecentCaptureFile"));
        menuFileSet = new QMenu(menuFile);
        menuFileSet->setObjectName(QStringLiteral("menuFileSet"));
        menuFileExportPacketDissections = new QMenu(menuFile);
        menuFileExportPacketDissections->setObjectName(QStringLiteral("menuFileExportPacketDissections"));
        menuFileExportObjects = new QMenu(menuFile);
        menuFileExportObjects->setObjectName(QStringLiteral("menuFileExportObjects"));
        menuCapture = new QMenu(menuBar);
        menuCapture->setObjectName(QStringLiteral("menuCapture"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuHelpManualPages = new QMenu(menuHelp);
        menuHelpManualPages->setObjectName(QStringLiteral("menuHelpManualPages"));
        menuGo = new QMenu(menuBar);
        menuGo->setObjectName(QStringLiteral("menuGo"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QStringLiteral("menuView"));
        menuInterfaceToolbars = new QMenu(menuView);
        menuInterfaceToolbars->setObjectName(QStringLiteral("menuInterfaceToolbars"));
        menuZoom = new QMenu(menuView);
        menuZoom->setObjectName(QStringLiteral("menuZoom"));
        menuTime_Display_Format = new QMenu(menuView);
        menuTime_Display_Format->setObjectName(QStringLiteral("menuTime_Display_Format"));
        menuName_Resolution = new QMenu(menuView);
        menuName_Resolution->setObjectName(QStringLiteral("menuName_Resolution"));
        menuColorizeConversation = new QMenu(menuView);
        menuColorizeConversation->setObjectName(QStringLiteral("menuColorizeConversation"));
        menuInternals = new QMenu(menuView);
        menuInternals->setObjectName(QStringLiteral("menuInternals"));
        menuAdditionalToolbars = new QMenu(menuView);
        menuAdditionalToolbars->setObjectName(QStringLiteral("menuAdditionalToolbars"));
        menuAnalyze = new QMenu(menuBar);
        menuAnalyze->setObjectName(QStringLiteral("menuAnalyze"));
        menuApplyAsFilter = new QMenu(menuAnalyze);
        menuApplyAsFilter->setObjectName(QStringLiteral("menuApplyAsFilter"));
        menuPrepareAFilter = new QMenu(menuAnalyze);
        menuPrepareAFilter->setObjectName(QStringLiteral("menuPrepareAFilter"));
        menuSCTP = new QMenu(menuAnalyze);
        menuSCTP->setObjectName(QStringLiteral("menuSCTP"));
        menuFollow = new QMenu(menuAnalyze);
        menuFollow->setObjectName(QStringLiteral("menuFollow"));
        menuConversationFilter = new QMenu(menuAnalyze);
        menuConversationFilter->setObjectName(QStringLiteral("menuConversationFilter"));
        menuStatistics = new QMenu(menuBar);
        menuStatistics->setObjectName(QStringLiteral("menuStatistics"));
        menuStatistics->setEnabled(true);
        menuTcpStreamGraphs = new QMenu(menuStatistics);
        menuTcpStreamGraphs->setObjectName(QStringLiteral("menuTcpStreamGraphs"));
        menuBACnet = new QMenu(menuStatistics);
        menuBACnet->setObjectName(QStringLiteral("menuBACnet"));
        menuHTTP = new QMenu(menuStatistics);
        menuHTTP->setObjectName(QStringLiteral("menuHTTP"));
        menu29West = new QMenu(menuStatistics);
        menu29West->setObjectName(QStringLiteral("menu29West"));
        menu29WestTopics = new QMenu(menu29West);
        menu29WestTopics->setObjectName(QStringLiteral("menu29WestTopics"));
        menu29WestQueues = new QMenu(menu29West);
        menu29WestQueues->setObjectName(QStringLiteral("menu29WestQueues"));
        menu29WestUIM = new QMenu(menu29West);
        menu29WestUIM->setObjectName(QStringLiteral("menu29WestUIM"));
        menuServiceResponseTime = new QMenu(menuStatistics);
        menuServiceResponseTime->setObjectName(QStringLiteral("menuServiceResponseTime"));
        menuTelephony = new QMenu(menuBar);
        menuTelephony->setObjectName(QStringLiteral("menuTelephony"));
        menuRTSP = new QMenu(menuTelephony);
        menuRTSP->setObjectName(QStringLiteral("menuRTSP"));
        menuRTP = new QMenu(menuTelephony);
        menuRTP->setObjectName(QStringLiteral("menuRTP"));
        menuTelephonySCTP = new QMenu(menuTelephony);
        menuTelephonySCTP->setObjectName(QStringLiteral("menuTelephonySCTP"));
        menuANSI = new QMenu(menuTelephony);
        menuANSI->setObjectName(QStringLiteral("menuANSI"));
        menuGSM = new QMenu(menuTelephony);
        menuGSM->setObjectName(QStringLiteral("menuGSM"));
        menuLTE = new QMenu(menuTelephony);
        menuLTE->setObjectName(QStringLiteral("menuLTE"));
        menuMTP3 = new QMenu(menuTelephony);
        menuMTP3->setObjectName(QStringLiteral("menuMTP3"));
        menuOsmux = new QMenu(menuTelephony);
        menuOsmux->setObjectName(QStringLiteral("menuOsmux"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuEditCopy = new QMenu(menuEdit);
        menuEditCopy->setObjectName(QStringLiteral("menuEditCopy"));
        menuWireless = new QMenu(menuBar);
        menuWireless->setObjectName(QStringLiteral("menuWireless"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QStringLiteral("menuTools"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mainToolBar->sizePolicy().hasHeightForWidth());
        mainToolBar->setSizePolicy(sizePolicy1);
        mainToolBar->setMovable(false);
        mainToolBar->setIconSize(QSize(32, 32));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonIconOnly);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new MainStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        displayFilterToolBar = new QToolBar(MainWindow);
        displayFilterToolBar->setObjectName(QStringLiteral("displayFilterToolBar"));
        displayFilterToolBar->setMovable(false);
        displayFilterToolBar->setIconSize(QSize(14, 14));
        MainWindow->addToolBar(Qt::TopToolBarArea, displayFilterToolBar);
        MainWindow->insertToolBarBreak(displayFilterToolBar);
        wirelessToolBar = new QToolBar(MainWindow);
        wirelessToolBar->setObjectName(QStringLiteral("wirelessToolBar"));
        wirelessToolBar->setMovable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, wirelessToolBar);
        MainWindow->insertToolBarBreak(wirelessToolBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuGo->menuAction());
        menuBar->addAction(menuCapture->menuAction());
        menuBar->addAction(menuAnalyze->menuAction());
        menuBar->addAction(menuStatistics->menuAction());
        menuBar->addAction(menuTelephony->menuAction());
        menuBar->addAction(menuWireless->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionFileOpen);
        menuFile->addAction(menuOpenRecentCaptureFile->menuAction());
        menuFile->addAction(actionFileMerge);
        menuFile->addAction(actionFileImportFromHexDump);
        menuFile->addAction(actionFileClose);
        menuFile->addSeparator();
        menuFile->addAction(actionFileSave);
        menuFile->addAction(actionFileSaveAs);
        menuFile->addSeparator();
        menuFile->addAction(menuFileSet->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionFileExportPackets);
        menuFile->addAction(menuFileExportPacketDissections->menuAction());
        menuFile->addAction(actionFileExportPacketBytes);
        menuFile->addAction(actionFileExportPDU);
        menuFile->addAction(actionFileExportTLSSessionKeys);
        menuFile->addAction(menuFileExportObjects->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionFilePrint);
        menuFile->addSeparator();
        menuFile->addAction(actionFileQuit);
        menuOpenRecentCaptureFile->addAction(actionDummyNoFilesFound);
        menuFileSet->addAction(actionFileSetListFiles);
        menuFileSet->addAction(actionFileSetNextFile);
        menuFileSet->addAction(actionFileSetPreviousFile);
        menuFileExportPacketDissections->addAction(actionFileExportAsPlainText);
        menuFileExportPacketDissections->addAction(actionFileExportAsCSV);
        menuFileExportPacketDissections->addAction(actionFileExportAsCArrays);
        menuFileExportPacketDissections->addSeparator();
        menuFileExportPacketDissections->addAction(actionFileExportAsPSML);
        menuFileExportPacketDissections->addAction(actionFileExportAsPDML);
        menuFileExportPacketDissections->addAction(actionFileExportAsJSON);
        menuCapture->addAction(actionCaptureOptions);
        menuCapture->addAction(actionCaptureStart);
        menuCapture->addAction(actionCaptureStop);
        menuCapture->addAction(actionCaptureRestart);
        menuCapture->addAction(actionCaptureCaptureFilters);
        menuCapture->addAction(actionCaptureRefreshInterfaces);
        menuCapture->addSeparator();
        menuHelp->addAction(actionHelpContents);
        menuHelp->addAction(menuHelpManualPages->menuAction());
        menuHelp->addSeparator();
        menuHelp->addAction(actionHelpWebsite);
        menuHelp->addAction(actionHelpFAQ);
        menuHelp->addAction(actionHelpAsk);
        menuHelp->addAction(actionHelpDownloads);
        menuHelp->addSeparator();
        menuHelp->addAction(actionHelpWiki);
        menuHelp->addAction(actionHelpSampleCaptures);
        menuHelp->addSeparator();
        menuHelp->addAction(actionHelpAbout);
        menuHelpManualPages->addAction(actionHelpMPWireshark);
        menuHelpManualPages->addAction(actionHelpMPWireshark_Filter);
        menuHelpManualPages->addSeparator();
        menuHelpManualPages->addAction(actionHelpMPCapinfos);
        menuHelpManualPages->addAction(actionHelpMPDumpcap);
        menuHelpManualPages->addAction(actionHelpMPEditcap);
        menuHelpManualPages->addAction(actionHelpMPMergecap);
        menuHelpManualPages->addAction(actionHelpMPRawShark);
        menuHelpManualPages->addAction(actionHelpMPReordercap);
        menuHelpManualPages->addAction(actionHelpMPText2cap);
        menuHelpManualPages->addAction(actionHelpMPTShark);
        menuGo->addAction(actionGoGoToPacket);
        menuGo->addAction(actionGoGoToLinkedPacket);
        menuGo->addSeparator();
        menuGo->addAction(actionGoNextPacket);
        menuGo->addAction(actionGoPreviousPacket);
        menuGo->addAction(actionGoFirstPacket);
        menuGo->addAction(actionGoLastPacket);
        menuGo->addAction(actionGoNextConversationPacket);
        menuGo->addAction(actionGoPreviousConversationPacket);
        menuGo->addAction(actionGoNextHistoryPacket);
        menuGo->addAction(actionGoPreviousHistoryPacket);
        menuGo->addSeparator();
        menuGo->addAction(actionGoAutoScroll);
        menuView->addAction(actionViewMainToolbar);
        menuView->addAction(actionViewFilterToolbar);
        menuView->addAction(actionViewWirelessToolbar);
        menuView->addAction(menuInterfaceToolbars->menuAction());
        menuView->addAction(menuAdditionalToolbars->menuAction());
        menuView->addAction(actionViewStatusBar);
        menuView->addSeparator();
        menuView->addAction(actionViewFullScreen);
        menuView->addSeparator();
        menuView->addAction(actionViewPacketList);
        menuView->addAction(actionViewPacketDetails);
        menuView->addAction(actionViewPacketBytes);
        menuView->addSeparator();
        menuView->addAction(menuTime_Display_Format->menuAction());
        menuView->addAction(menuName_Resolution->menuAction());
        menuView->addSeparator();
        menuView->addAction(menuZoom->menuAction());
        menuView->addSeparator();
        menuView->addAction(actionViewExpandSubtrees);
        menuView->addAction(actionViewCollapseSubtrees);
        menuView->addAction(actionViewExpandAll);
        menuView->addAction(actionViewCollapseAll);
        menuView->addSeparator();
        menuView->addAction(actionViewColorizePacketList);
        menuView->addAction(actionViewColoringRules);
        menuView->addAction(menuColorizeConversation->menuAction());
        menuView->addSeparator();
        menuView->addAction(actionViewResetLayout);
        menuView->addAction(actionViewResizeColumns);
        menuView->addSeparator();
        menuView->addAction(menuInternals->menuAction());
        menuView->addSeparator();
        menuView->addAction(actionViewShowPacketInNewWindow);
        menuView->addAction(actionViewReload_as_File_Format_or_Capture);
        menuView->addAction(actionViewReload);
        menuZoom->addAction(actionViewZoomIn);
        menuZoom->addAction(actionViewZoomOut);
        menuZoom->addAction(actionViewNormalSize);
        menuTime_Display_Format->addAction(actionViewTimeDisplayFormatDateYMDandTimeOfDay);
        menuTime_Display_Format->addAction(actionViewTimeDisplayFormatDateYDOYandTimeOfDay);
        menuTime_Display_Format->addAction(actionViewTimeDisplayFormatTimeOfDay);
        menuTime_Display_Format->addAction(actionViewTimeDisplayFormatSecondsSinceEpoch);
        menuTime_Display_Format->addAction(actionViewTimeDisplayFormatSecondsSinceBeginningOfCapture);
        menuTime_Display_Format->addAction(actionViewTimeDisplayFormatSecondsSincePreviousCapturedPacket);
        menuTime_Display_Format->addAction(actionViewTimeDisplayFormatSecondsSincePreviousDisplayedPacket);
        menuTime_Display_Format->addAction(actionViewTimeDisplayFormatUTCDateYMDandTimeOfDay);
        menuTime_Display_Format->addAction(actionViewTimeDisplayFormatUTCDateYDOYandTimeOfDay);
        menuTime_Display_Format->addAction(actionViewTimeDisplayFormatUTCTimeOfDay);
        menuTime_Display_Format->addSeparator();
        menuTime_Display_Format->addAction(actionViewTimeDisplayFormatPrecisionAutomatic);
        menuTime_Display_Format->addAction(actionViewTimeDisplayFormatPrecisionSeconds);
        menuTime_Display_Format->addAction(actionViewTimeDisplayFormatPrecisionDeciseconds);
        menuTime_Display_Format->addAction(actionViewTimeDisplayFormatPrecisionCentiseconds);
        menuTime_Display_Format->addAction(actionViewTimeDisplayFormatPrecisionMilliseconds);
        menuTime_Display_Format->addAction(actionViewTimeDisplayFormatPrecisionMicroseconds);
        menuTime_Display_Format->addAction(actionViewTimeDisplayFormatPrecisionNanoseconds);
        menuTime_Display_Format->addSeparator();
        menuTime_Display_Format->addAction(actionViewTimeDisplaySecondsWithHoursAndMinutes);
        menuName_Resolution->addAction(actionViewEditResolvedName);
        menuName_Resolution->addSeparator();
        menuName_Resolution->addAction(actionViewNameResolutionPhysical);
        menuName_Resolution->addAction(actionViewNameResolutionNetwork);
        menuName_Resolution->addAction(actionViewNameResolutionTransport);
        menuColorizeConversation->addAction(actionViewColorizeConversation1);
        menuColorizeConversation->addAction(actionViewColorizeConversation2);
        menuColorizeConversation->addAction(actionViewColorizeConversation3);
        menuColorizeConversation->addAction(actionViewColorizeConversation4);
        menuColorizeConversation->addAction(actionViewColorizeConversation5);
        menuColorizeConversation->addAction(actionViewColorizeConversation6);
        menuColorizeConversation->addAction(actionViewColorizeConversation7);
        menuColorizeConversation->addAction(actionViewColorizeConversation8);
        menuColorizeConversation->addAction(actionViewColorizeConversation9);
        menuColorizeConversation->addAction(actionViewColorizeConversation10);
        menuColorizeConversation->addSeparator();
        menuColorizeConversation->addAction(actionViewColorizeResetColorization);
        menuColorizeConversation->addAction(actionViewColorizeNewColoringRule);
        menuInternals->addAction(actionViewInternalsConversationHashTables);
        menuInternals->addAction(actionViewInternalsDissectorTables);
        menuInternals->addAction(actionViewInternalsSupportedProtocols);
        menuAnalyze->addAction(actionAnalyzeDisplayFilters);
        menuAnalyze->addAction(actionAnalyzeDisplayFilterMacros);
        menuAnalyze->addSeparator();
        menuAnalyze->addAction(actionAnalyzeCreateAColumn);
        menuAnalyze->addAction(menuApplyAsFilter->menuAction());
        menuAnalyze->addAction(menuPrepareAFilter->menuAction());
        menuAnalyze->addAction(menuConversationFilter->menuAction());
        menuAnalyze->addSeparator();
        menuAnalyze->addAction(actionAnalyzeEnabledProtocols);
        menuAnalyze->addAction(actionAnalyzeDecodeAs);
        menuAnalyze->addAction(actionAnalyzeReloadLuaPlugins);
        menuAnalyze->addSeparator();
        menuAnalyze->addAction(menuSCTP->menuAction());
        menuAnalyze->addAction(menuFollow->menuAction());
        menuAnalyze->addSeparator();
        menuAnalyze->addAction(actionAnalyzeShowPacketBytes);
        menuAnalyze->addAction(actionAnalyzeExpertInfo);
        menuApplyAsFilter->addAction(actionAnalyzeAAFSelected);
        menuApplyAsFilter->addAction(actionAnalyzeAAFNotSelected);
        menuApplyAsFilter->addAction(actionAnalyzeAAFAndSelected);
        menuApplyAsFilter->addAction(actionAnalyzeAAFOrSelected);
        menuApplyAsFilter->addAction(actionAnalyzeAAFAndNotSelected);
        menuApplyAsFilter->addAction(actionAnalyzeAAFOrNotSelected);
        menuPrepareAFilter->addAction(actionAnalyzePAFSelected);
        menuPrepareAFilter->addAction(actionAnalyzePAFNotSelected);
        menuPrepareAFilter->addAction(actionAnalyzePAFAndSelected);
        menuPrepareAFilter->addAction(actionAnalyzePAFOrSelected);
        menuPrepareAFilter->addAction(actionAnalyzePAFAndNotSelected);
        menuPrepareAFilter->addAction(actionAnalyzePAFOrNotSelected);
        menuSCTP->addAction(actionSCTPAnalyseThisAssociation);
        menuSCTP->addAction(actionSCTPShowAllAssociations);
        menuFollow->addAction(actionAnalyzeFollowTCPStream);
        menuFollow->addAction(actionAnalyzeFollowUDPStream);
        menuFollow->addAction(actionAnalyzeFollowTLSStream);
        menuFollow->addAction(actionAnalyzeFollowHTTPStream);
        menuStatistics->addAction(actionStatisticsCaptureFileProperties);
        menuStatistics->addAction(actionStatisticsResolvedAddresses);
        menuStatistics->addAction(actionStatisticsProtocolHierarchy);
        menuStatistics->addAction(actionStatisticsConversations);
        menuStatistics->addAction(actionStatisticsEndpoints);
        menuStatistics->addAction(actionStatisticsPacketLengths);
        menuStatistics->addAction(actionStatisticsIOGraph);
        menuStatistics->addAction(menuServiceResponseTime->menuAction());
        menuStatistics->addSeparator();
        menuStatistics->addAction(actionStatistics_REGISTER_STAT_GROUP_UNSORTED);
        menuStatistics->addAction(menu29West->menuAction());
        menuStatistics->addAction(actionStatisticsANCP);
        menuStatistics->addAction(menuBACnet->menuAction());
        menuStatistics->addAction(actionStatisticsCollectd);
        menuStatistics->addAction(actionStatisticsDNS);
        menuStatistics->addAction(actionStatisticsFlowGraph);
        menuStatistics->addAction(actionStatisticsHART_IP);
        menuStatistics->addAction(actionStatisticsHpfeeds);
        menuStatistics->addAction(menuHTTP->menuAction());
        menuStatistics->addAction(actionStatisticsHTTP2);
        menuStatistics->addAction(actionStatisticsSametime);
        menuStatistics->addAction(menuTcpStreamGraphs->menuAction());
        menuStatistics->addAction(actionStatisticsUdpMulticastStreams);
        menuTcpStreamGraphs->addAction(actionStatisticsTcpStreamStevens);
        menuTcpStreamGraphs->addAction(actionStatisticsTcpStreamTcptrace);
        menuTcpStreamGraphs->addAction(actionStatisticsTcpStreamThroughput);
        menuTcpStreamGraphs->addAction(actionStatisticsTcpStreamRoundTripTime);
        menuTcpStreamGraphs->addAction(actionStatisticsTcpStreamWindowScaling);
        menuBACnet->addAction(actionStatisticsBACappInstanceId);
        menuBACnet->addAction(actionStatisticsBACappIP);
        menuBACnet->addAction(actionStatisticsBACappObjectId);
        menuBACnet->addAction(actionStatisticsBACappService);
        menuHTTP->addAction(actionStatisticsHTTPPacketCounter);
        menuHTTP->addAction(actionStatisticsHTTPRequests);
        menuHTTP->addAction(actionStatisticsHTTPLoadDistribution);
        menuHTTP->addAction(actionStatisticsHTTPRequestSequences);
        menu29West->addAction(menu29WestTopics->menuAction());
        menu29West->addAction(menu29WestQueues->menuAction());
        menu29West->addAction(menu29WestUIM->menuAction());
        menu29West->addAction(actionStatistics29WestLBTRM);
        menu29West->addAction(actionStatistics29WestLBTRU);
        menu29WestTopics->addAction(actionStatistics29WestTopics_Advertisements_by_Topic);
        menu29WestTopics->addAction(actionStatistics29WestTopics_Advertisements_by_Source);
        menu29WestTopics->addAction(actionStatistics29WestTopics_Advertisements_by_Transport);
        menu29WestTopics->addAction(actionStatistics29WestTopics_Queries_by_Topic);
        menu29WestTopics->addAction(actionStatistics29WestTopics_Queries_by_Receiver);
        menu29WestTopics->addAction(actionStatistics29WestTopics_Wildcard_Queries_by_Pattern);
        menu29WestTopics->addAction(actionStatistics29WestTopics_Wildcard_Queries_by_Receiver);
        menu29WestQueues->addAction(actionStatistics29WestQueues_Advertisements_by_Queue);
        menu29WestQueues->addAction(actionStatistics29WestQueues_Advertisements_by_Source);
        menu29WestQueues->addAction(actionStatistics29WestQueues_Queries_by_Queue);
        menu29WestQueues->addAction(actionStatistics29WestQueues_Queries_by_Receiver);
        menu29WestUIM->addAction(actionStatistics29WestUIM_Streams);
        menuTelephony->addAction(actionTelephonyVoipCalls);
        menuTelephony->addAction(menuANSI->menuAction());
        menuTelephony->addAction(menuGSM->menuAction());
        menuTelephony->addAction(actionTelephonyIax2StreamAnalysis);
        menuTelephony->addAction(actionTelephonyISUPMessages);
        menuTelephony->addAction(menuLTE->menuAction());
        menuTelephony->addAction(menuMTP3->menuAction());
        menuTelephony->addAction(menuOsmux->menuAction());
        menuTelephony->addAction(menuRTP->menuAction());
        menuTelephony->addAction(menuRTSP->menuAction());
        menuTelephony->addAction(menuTelephonySCTP->menuAction());
        menuTelephony->addAction(actionTelephonySMPPOperations);
        menuTelephony->addAction(actionTelephonyUCPMessages);
        menuRTSP->addAction(actionTelephonyRTSPPacketCounter);
        menuRTP->addAction(actionTelephonyRTPStreams);
        menuRTP->addAction(actionTelephonyRTPStreamAnalysis);
        menuTelephonySCTP->addAction(actionSCTPAnalyseThisAssociation);
        menuTelephonySCTP->addAction(actionSCTPShowAllAssociations);
        menuANSI->addAction(actionTelephonyANSIPlaceholder);
        menuGSM->addAction(actionTelephonyGSMPlaceholder);
        menuLTE->addAction(actionTelephonyLTEPlaceholder);
        menuMTP3->addAction(actionTelephonyMTP3Placeholder);
        menuOsmux->addAction(actionTelephonyOsmuxPacketCounter);
        menuEdit->addAction(menuEditCopy->menuAction());
        menuEdit->addAction(actionEditFindPacket);
        menuEdit->addAction(actionEditFindNext);
        menuEdit->addAction(actionEditFindPrevious);
        menuEdit->addSeparator();
        menuEdit->addAction(actionEditMarkPacket);
        menuEdit->addAction(actionEditMarkAllDisplayed);
        menuEdit->addAction(actionEditUnmarkAllDisplayed);
        menuEdit->addAction(actionEditNextMark);
        menuEdit->addAction(actionEditPreviousMark);
        menuEdit->addSeparator();
        menuEdit->addAction(actionEditIgnorePacket);
        menuEdit->addAction(actionEditIgnoreAllDisplayed);
        menuEdit->addAction(actionEditUnignoreAllDisplayed);
        menuEdit->addSeparator();
        menuEdit->addAction(actionEditSetTimeReference);
        menuEdit->addAction(actionEditUnsetAllTimeReferences);
        menuEdit->addAction(actionEditNextTimeReference);
        menuEdit->addAction(actionEditPreviousTimeReference);
        menuEdit->addSeparator();
        menuEdit->addAction(actionEditTimeShift);
        menuEdit->addSeparator();
        menuEdit->addAction(actionEditPacketComment);
        menuEdit->addAction(actionDeleteAllPacketComments);
        menuEdit->addSeparator();
        menuEdit->addAction(actionEditConfigurationProfiles);
        menuEdit->addAction(actionEditPreferences);
        menuEditCopy->addAction(actionCopyAllVisibleItems);
        menuEditCopy->addAction(actionCopyAllVisibleSelectedTreeItems);
        menuEditCopy->addAction(actionEditCopyDescription);
        menuEditCopy->addAction(actionEditCopyFieldName);
        menuEditCopy->addAction(actionEditCopyValue);
        menuEditCopy->addSeparator();
        menuEditCopy->addAction(actionEditCopyAsFilter);
        menuWireless->addAction(actionBluetoothATT_Server_Attributes);
        menuWireless->addAction(actionBluetoothDevices);
        menuWireless->addAction(actionBluetoothHCI_Summary);
        menuWireless->addSeparator();
        menuWireless->addAction(actionWirelessWlanStatistics);
        menuTools->addAction(actionToolsFirewallAclRules);
        mainToolBar->addAction(actionCaptureStart);
        mainToolBar->addAction(actionCaptureStop);
        mainToolBar->addAction(actionCaptureRestart);
        mainToolBar->addAction(actionCaptureOptions);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionFileOpen);
        mainToolBar->addAction(actionFileSave);
        mainToolBar->addAction(actionFileClose);
        mainToolBar->addAction(actionViewReload);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionEditFindPacket);
        mainToolBar->addAction(actionGoPreviousPacket);
        mainToolBar->addAction(actionGoNextPacket);
        mainToolBar->addAction(actionGoGoToPacket);
        mainToolBar->addAction(actionGoFirstPacket);
        mainToolBar->addAction(actionGoLastPacket);
        mainToolBar->addAction(actionGoAutoScroll);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionViewColorizePacketList);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionViewZoomIn);
        mainToolBar->addAction(actionViewZoomOut);
        mainToolBar->addAction(actionViewNormalSize);
        mainToolBar->addAction(actionViewResizeColumns);
        displayFilterToolBar->addAction(actionDisplayFilterExpression);
        displayFilterToolBar->addSeparator();
        displayFilterToolBar->addAction(actionNewDisplayFilterExpression);

        retranslateUi(MainWindow);
        QObject::connect(actionFileQuit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        goToGo->setDefault(true);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Wireshark", 0));
        actionFileOpen->setText(QApplication::translate("MainWindow", "&Open", 0));
#ifndef QT_NO_TOOLTIP
        actionFileOpen->setToolTip(QApplication::translate("MainWindow", "Open a capture file", 0));
#endif // QT_NO_TOOLTIP
        actionFileQuit->setText(QApplication::translate("MainWindow", "&Quit", 0));
#ifndef QT_NO_TOOLTIP
        actionFileQuit->setToolTip(QApplication::translate("MainWindow", "Quit Wireshark", 0));
#endif // QT_NO_TOOLTIP
        actionCaptureStart->setText(QApplication::translate("MainWindow", "&Start", 0));
#ifndef QT_NO_TOOLTIP
        actionCaptureStart->setToolTip(QApplication::translate("MainWindow", "Start capturing packets", 0));
#endif // QT_NO_TOOLTIP
        actionCaptureStop->setText(QApplication::translate("MainWindow", "S&top", 0));
#ifndef QT_NO_TOOLTIP
        actionCaptureStop->setToolTip(QApplication::translate("MainWindow", "Stop capturing packets", 0));
#endif // QT_NO_TOOLTIP
        actionFileClose->setText(QApplication::translate("MainWindow", "&Close", 0));
#ifndef QT_NO_TOOLTIP
        actionFileClose->setToolTip(QApplication::translate("MainWindow", "Close this capture file", 0));
#endif // QT_NO_TOOLTIP
        actionDummyNoFilesFound->setText(QApplication::translate("MainWindow", "No files found", 0));
        actionHelpContents->setText(QApplication::translate("MainWindow", "&Contents", 0));
#ifndef QT_NO_TOOLTIP
        actionHelpContents->setToolTip(QApplication::translate("MainWindow", "Help contents", 0));
#endif // QT_NO_TOOLTIP
        actionHelpMPWireshark->setText(QApplication::translate("MainWindow", "Wireshark", 0));
        actionHelpMPWireshark_Filter->setText(QApplication::translate("MainWindow", "Wireshark Filter", 0));
        actionHelpMPTShark->setText(QApplication::translate("MainWindow", "TShark", 0));
        actionHelpMPRawShark->setText(QApplication::translate("MainWindow", "RawShark", 0));
        actionHelpMPDumpcap->setText(QApplication::translate("MainWindow", "Dumpcap", 0));
        actionHelpMPMergecap->setText(QApplication::translate("MainWindow", "Mergecap", 0));
        actionHelpMPEditcap->setText(QApplication::translate("MainWindow", "Editcap", 0));
        actionHelpMPText2cap->setText(QApplication::translate("MainWindow", "Text2cap", 0));
        actionHelpWebsite->setText(QApplication::translate("MainWindow", "Website", 0));
        actionHelpFAQ->setText(QApplication::translate("MainWindow", "FAQ's", 0));
        actionHelpDownloads->setText(QApplication::translate("MainWindow", "Downloads", 0));
        actionHelpWiki->setText(QApplication::translate("MainWindow", "Wiki", 0));
        actionHelpSampleCaptures->setText(QApplication::translate("MainWindow", "Sample Captures", 0));
        actionHelpAbout->setText(QApplication::translate("MainWindow", "&About Wireshark", 0));
        actionHelpAsk->setText(QApplication::translate("MainWindow", "Ask (Q&&A)", 0));
        actionGoNextPacket->setText(QApplication::translate("MainWindow", "Next Packet", 0));
#ifndef QT_NO_TOOLTIP
        actionGoNextPacket->setToolTip(QApplication::translate("MainWindow", "Go to the next packet", 0));
#endif // QT_NO_TOOLTIP
        actionGoPreviousPacket->setText(QApplication::translate("MainWindow", "Previous Packet", 0));
#ifndef QT_NO_TOOLTIP
        actionGoPreviousPacket->setToolTip(QApplication::translate("MainWindow", "Go to the previous packet", 0));
#endif // QT_NO_TOOLTIP
        actionGoNextConversationPacket->setText(QApplication::translate("MainWindow", "Next Packet in Conversation", 0));
#ifndef QT_NO_TOOLTIP
        actionGoNextConversationPacket->setToolTip(QApplication::translate("MainWindow", "Go to the next packet in this conversation", 0));
#endif // QT_NO_TOOLTIP
        actionGoPreviousConversationPacket->setText(QApplication::translate("MainWindow", "Previous Packet in Conversation", 0));
#ifndef QT_NO_TOOLTIP
        actionGoPreviousConversationPacket->setToolTip(QApplication::translate("MainWindow", "Go to the previous packet in this conversation", 0));
#endif // QT_NO_TOOLTIP
        actionGoNextHistoryPacket->setText(QApplication::translate("MainWindow", "Next Packet In History", 0));
#ifndef QT_NO_TOOLTIP
        actionGoNextHistoryPacket->setToolTip(QApplication::translate("MainWindow", "Go to the next packet in your selection history", 0));
#endif // QT_NO_TOOLTIP
        actionGoPreviousHistoryPacket->setText(QApplication::translate("MainWindow", "Previous Packet In History", 0));
#ifndef QT_NO_TOOLTIP
        actionGoPreviousHistoryPacket->setToolTip(QApplication::translate("MainWindow", "Go to the previous packet in your selection history", 0));
#endif // QT_NO_TOOLTIP
        actionGoFirstPacket->setText(QApplication::translate("MainWindow", "First Packet", 0));
#ifndef QT_NO_TOOLTIP
        actionGoFirstPacket->setToolTip(QApplication::translate("MainWindow", "Go to the first packet", 0));
#endif // QT_NO_TOOLTIP
        actionGoLastPacket->setText(QApplication::translate("MainWindow", "Last Packet", 0));
#ifndef QT_NO_TOOLTIP
        actionGoLastPacket->setToolTip(QApplication::translate("MainWindow", "Go to the last packet", 0));
#endif // QT_NO_TOOLTIP
        actionViewExpandSubtrees->setText(QApplication::translate("MainWindow", "E&xpand Subtrees", 0));
#ifndef QT_NO_TOOLTIP
        actionViewExpandSubtrees->setToolTip(QApplication::translate("MainWindow", "Expand the current packet detail", 0));
#endif // QT_NO_TOOLTIP
        actionViewCollapseSubtrees->setText(QApplication::translate("MainWindow", "Collapse Subtrees", 0));
#ifndef QT_NO_TOOLTIP
        actionViewCollapseSubtrees->setToolTip(QApplication::translate("MainWindow", "Collapse the current packet detail", 0));
#endif // QT_NO_TOOLTIP
        actionViewExpandAll->setText(QApplication::translate("MainWindow", "&Expand All", 0));
#ifndef QT_NO_TOOLTIP
        actionViewExpandAll->setToolTip(QApplication::translate("MainWindow", "Expand packet details", 0));
#endif // QT_NO_TOOLTIP
        actionViewCollapseAll->setText(QApplication::translate("MainWindow", "Collapse &All", 0));
#ifndef QT_NO_TOOLTIP
        actionViewCollapseAll->setToolTip(QApplication::translate("MainWindow", "Collapse all packet details", 0));
#endif // QT_NO_TOOLTIP
        actionGoGoToPacket->setText(QApplication::translate("MainWindow", "Go to Packet\342\200\246", 0));
#ifndef QT_NO_TOOLTIP
        actionGoGoToPacket->setToolTip(QApplication::translate("MainWindow", "Go to specified packet", 0));
#endif // QT_NO_TOOLTIP
        actionFileMerge->setText(QApplication::translate("MainWindow", "&Merge\342\200\246", 0));
#ifndef QT_NO_TOOLTIP
        actionFileMerge->setToolTip(QApplication::translate("MainWindow", "Merge one or more files", 0));
#endif // QT_NO_TOOLTIP
        actionFileImportFromHexDump->setText(QApplication::translate("MainWindow", "&Import from Hex Dump\342\200\246", 0));
#ifndef QT_NO_TOOLTIP
        actionFileImportFromHexDump->setToolTip(QApplication::translate("MainWindow", "Import a file", 0));
#endif // QT_NO_TOOLTIP
        actionFileSave->setText(QApplication::translate("MainWindow", "&Save", 0));
#ifndef QT_NO_TOOLTIP
        actionFileSave->setToolTip(QApplication::translate("MainWindow", "Save this capture file", 0));
#endif // QT_NO_TOOLTIP
        actionFileSaveAs->setText(QApplication::translate("MainWindow", "Save &As\342\200\246", 0));
#ifndef QT_NO_TOOLTIP
        actionFileSaveAs->setToolTip(QApplication::translate("MainWindow", "Save as a different file", 0));
#endif // QT_NO_TOOLTIP
        actionFileExportPackets->setText(QApplication::translate("MainWindow", "Export Specified Packets\342\200\246", 0));
#ifndef QT_NO_TOOLTIP
        actionFileExportPackets->setToolTip(QApplication::translate("MainWindow", "Export specified packets", 0));
#endif // QT_NO_TOOLTIP
        actionFileExportPacketBytes->setText(QApplication::translate("MainWindow", "Export Packet &Bytes\342\200\246", 0));
        actionFileExportTLSSessionKeys->setText(QApplication::translate("MainWindow", "Export TLS Session Keys\342\200\246", 0));
        actionFilePrint->setText(QApplication::translate("MainWindow", "&Print\342\200\246", 0));
        actionFileSetListFiles->setText(QApplication::translate("MainWindow", "List Files", 0));
        actionFileSetNextFile->setText(QApplication::translate("MainWindow", "Next File", 0));
        actionFileSetPreviousFile->setText(QApplication::translate("MainWindow", "Previous File", 0));
        actionViewReload->setText(QApplication::translate("MainWindow", "&Reload", 0));
#ifndef QT_NO_TOOLTIP
        actionViewReload->setToolTip(QApplication::translate("MainWindow", "Reload this file", 0));
#endif // QT_NO_TOOLTIP
        actionViewReload_as_File_Format_or_Capture->setText(QApplication::translate("MainWindow", "Reload as File Format/Capture", 0));
        actionCaptureOptions->setText(QApplication::translate("MainWindow", "&Options\342\200\246", 0));
        actionCaptureOptions->setIconText(QApplication::translate("MainWindow", "Options", 0));
#ifndef QT_NO_TOOLTIP
        actionCaptureOptions->setToolTip(QApplication::translate("MainWindow", "Capture options", 0));
#endif // QT_NO_TOOLTIP
        actionCaptureCaptureFilters->setText(QApplication::translate("MainWindow", "Capture &Filters\342\200\246", 0));
#ifndef QT_NO_TOOLTIP
        actionCaptureCaptureFilters->setToolTip(QApplication::translate("MainWindow", "Capture filters", 0));
#endif // QT_NO_TOOLTIP
        actionCaptureRefreshInterfaces->setText(QApplication::translate("MainWindow", "Refresh Interfaces", 0));
#ifndef QT_NO_TOOLTIP
        actionCaptureRefreshInterfaces->setToolTip(QApplication::translate("MainWindow", "Refresh interfaces", 0));
#endif // QT_NO_TOOLTIP
        actionCaptureRestart->setText(QApplication::translate("MainWindow", "&Restart", 0));
#ifndef QT_NO_TOOLTIP
        actionCaptureRestart->setToolTip(QApplication::translate("MainWindow", "Restart current capture", 0));
#endif // QT_NO_TOOLTIP
        actionFileExportAsPlainText->setText(QApplication::translate("MainWindow", "As Plain &Text\342\200\246", 0));
        actionFileExportAsCSV->setText(QApplication::translate("MainWindow", "As &CSV\342\200\246", 0));
        actionFileExportAsCArrays->setText(QApplication::translate("MainWindow", "As \"C\" &Arrays\342\200\246", 0));
        actionFileExportAsPSML->setText(QApplication::translate("MainWindow", "As P&SML XML\342\200\246", 0));
        actionFileExportAsPDML->setText(QApplication::translate("MainWindow", "As P&DML XML\342\200\246", 0));
        actionFileExportAsJSON->setText(QApplication::translate("MainWindow", "As &JSON\342\200\246", 0));
        actionEditCopyDescription->setText(QApplication::translate("MainWindow", "Description", 0));
#ifndef QT_NO_TOOLTIP
        actionEditCopyDescription->setToolTip(QApplication::translate("MainWindow", "Copy this item's description", 0));
#endif // QT_NO_TOOLTIP
        actionCopyAllVisibleItems->setText(QApplication::translate("MainWindow", "All Visible Items", 0));
        actionCopyAllVisibleSelectedTreeItems->setText(QApplication::translate("MainWindow", "All Visible Selected Tree Items", 0));
        actionEditCopyFieldName->setText(QApplication::translate("MainWindow", "Field Name", 0));
#ifndef QT_NO_TOOLTIP
        actionEditCopyFieldName->setToolTip(QApplication::translate("MainWindow", "Copy this item's field name", 0));
#endif // QT_NO_TOOLTIP
        actionEditCopyValue->setText(QApplication::translate("MainWindow", "Value", 0));
#ifndef QT_NO_TOOLTIP
        actionEditCopyValue->setToolTip(QApplication::translate("MainWindow", "Copy this item's value", 0));
#endif // QT_NO_TOOLTIP
        actionEditCopyAsFilter->setText(QApplication::translate("MainWindow", "As Filter", 0));
#ifndef QT_NO_TOOLTIP
        actionEditCopyAsFilter->setToolTip(QApplication::translate("MainWindow", "Copy this item as a display filter", 0));
#endif // QT_NO_TOOLTIP
        actionAnalyzeAAFSelected->setText(QApplication::translate("MainWindow", "&Selected", 0));
        actionAnalyzeAAFNotSelected->setText(QApplication::translate("MainWindow", "&Not Selected", 0));
#ifndef QT_NO_TOOLTIP
        actionAnalyzeAAFNotSelected->setToolTip(QApplication::translate("MainWindow", "Not Selected", 0));
#endif // QT_NO_TOOLTIP
        actionAnalyzeAAFAndSelected->setText(QApplication::translate("MainWindow", "\342\200\246&and Selected", 0));
#ifndef QT_NO_TOOLTIP
        actionAnalyzeAAFAndSelected->setToolTip(QApplication::translate("MainWindow", "\342\200\246and Selected", 0));
#endif // QT_NO_TOOLTIP
        actionAnalyzeAAFOrSelected->setText(QApplication::translate("MainWindow", "\342\200\246&or Selected", 0));
#ifndef QT_NO_TOOLTIP
        actionAnalyzeAAFOrSelected->setToolTip(QApplication::translate("MainWindow", "\342\200\246or Selected", 0));
#endif // QT_NO_TOOLTIP
        actionAnalyzeAAFAndNotSelected->setText(QApplication::translate("MainWindow", "\342\200\246a&nd not Selected", 0));
#ifndef QT_NO_TOOLTIP
        actionAnalyzeAAFAndNotSelected->setToolTip(QApplication::translate("MainWindow", "\342\200\246and not Selected", 0));
#endif // QT_NO_TOOLTIP
        actionAnalyzeAAFOrNotSelected->setText(QApplication::translate("MainWindow", "\342\200\246o&r not Selected", 0));
#ifndef QT_NO_TOOLTIP
        actionAnalyzeAAFOrNotSelected->setToolTip(QApplication::translate("MainWindow", "\342\200\246or not Selected", 0));
#endif // QT_NO_TOOLTIP
        actionAnalyzePAFSelected->setText(QApplication::translate("MainWindow", "&Selected", 0));
        actionAnalyzePAFNotSelected->setText(QApplication::translate("MainWindow", "&Not Selected", 0));
#ifndef QT_NO_TOOLTIP
        actionAnalyzePAFNotSelected->setToolTip(QApplication::translate("MainWindow", "Not Selected", 0));
#endif // QT_NO_TOOLTIP
        actionAnalyzePAFAndSelected->setText(QApplication::translate("MainWindow", "\342\200\246&and Selected", 0));
#ifndef QT_NO_TOOLTIP
        actionAnalyzePAFAndSelected->setToolTip(QApplication::translate("MainWindow", "\342\200\246and Selected", 0));
#endif // QT_NO_TOOLTIP
        actionAnalyzePAFOrSelected->setText(QApplication::translate("MainWindow", "\342\200\246&or Selected", 0));
#ifndef QT_NO_TOOLTIP
        actionAnalyzePAFOrSelected->setToolTip(QApplication::translate("MainWindow", "\342\200\246or Selected", 0));
#endif // QT_NO_TOOLTIP
        actionAnalyzePAFAndNotSelected->setText(QApplication::translate("MainWindow", "\342\200\246a&nd not Selected", 0));
#ifndef QT_NO_TOOLTIP
        actionAnalyzePAFAndNotSelected->setToolTip(QApplication::translate("MainWindow", "\342\200\246and not Selected", 0));
#endif // QT_NO_TOOLTIP
        actionAnalyzePAFOrNotSelected->setText(QApplication::translate("MainWindow", "\342\200\246o&r not Selected", 0));
#ifndef QT_NO_TOOLTIP
        actionAnalyzePAFOrNotSelected->setToolTip(QApplication::translate("MainWindow", "\342\200\246or not Selected", 0));
#endif // QT_NO_TOOLTIP
        actionAnalyzeDisplayFilters->setText(QApplication::translate("MainWindow", "Display &Filters\342\200\246", 0));
        actionAnalyzeDisplayFilterMacros->setText(QApplication::translate("MainWindow", "Display Filter &Macros\342\200\246", 0));
        actionAnalyzeCreateAColumn->setText(QApplication::translate("MainWindow", "Apply as Column", 0));
#ifndef QT_NO_TOOLTIP
        actionAnalyzeCreateAColumn->setToolTip(QApplication::translate("MainWindow", "Create a packet list column from the selected field.", 0));
#endif // QT_NO_TOOLTIP
        actionEditFindPacket->setText(QApplication::translate("MainWindow", "&Find Packet\342\200\246", 0));
#ifndef QT_NO_TOOLTIP
        actionEditFindPacket->setToolTip(QApplication::translate("MainWindow", "Find a packet", 0));
#endif // QT_NO_TOOLTIP
        actionEditFindNext->setText(QApplication::translate("MainWindow", "Find Ne&xt", 0));
#ifndef QT_NO_TOOLTIP
        actionEditFindNext->setToolTip(QApplication::translate("MainWindow", "Find the next packet", 0));
#endif // QT_NO_TOOLTIP
        actionEditFindPrevious->setText(QApplication::translate("MainWindow", "Find Pre&vious", 0));
#ifndef QT_NO_TOOLTIP
        actionEditFindPrevious->setToolTip(QApplication::translate("MainWindow", "Find the previous packet", 0));
#endif // QT_NO_TOOLTIP
        actionEditMarkPacket->setText(QApplication::translate("MainWindow", "&Mark/Unmark Packet", 0));
#ifndef QT_NO_TOOLTIP
        actionEditMarkPacket->setToolTip(QApplication::translate("MainWindow", "Mark or unmark this packet", 0));
#endif // QT_NO_TOOLTIP
        actionEditMarkAllDisplayed->setText(QApplication::translate("MainWindow", "Mark All Displayed", 0));
#ifndef QT_NO_TOOLTIP
        actionEditMarkAllDisplayed->setToolTip(QApplication::translate("MainWindow", "Mark all displayed packets", 0));
#endif // QT_NO_TOOLTIP
        actionEditUnmarkAllDisplayed->setText(QApplication::translate("MainWindow", "&Unmark All Displayed", 0));
#ifndef QT_NO_TOOLTIP
        actionEditUnmarkAllDisplayed->setToolTip(QApplication::translate("MainWindow", "Unmark all displayed packets", 0));
#endif // QT_NO_TOOLTIP
        actionEditNextMark->setText(QApplication::translate("MainWindow", "Next Mark", 0));
#ifndef QT_NO_TOOLTIP
        actionEditNextMark->setToolTip(QApplication::translate("MainWindow", "Go to the next marked packet", 0));
#endif // QT_NO_TOOLTIP
        actionEditPreviousMark->setText(QApplication::translate("MainWindow", "Previous Mark", 0));
#ifndef QT_NO_TOOLTIP
        actionEditPreviousMark->setToolTip(QApplication::translate("MainWindow", "Go to the previous marked packet", 0));
#endif // QT_NO_TOOLTIP
        actionEditIgnorePacket->setText(QApplication::translate("MainWindow", "&Ignore/Unignore Packet", 0));
#ifndef QT_NO_TOOLTIP
        actionEditIgnorePacket->setToolTip(QApplication::translate("MainWindow", "Ignore or unignore this packet", 0));
#endif // QT_NO_TOOLTIP
        actionEditIgnoreAllDisplayed->setText(QApplication::translate("MainWindow", "Ignore All Displayed", 0));
#ifndef QT_NO_TOOLTIP
        actionEditIgnoreAllDisplayed->setToolTip(QApplication::translate("MainWindow", "Ignore all displayed packets", 0));
#endif // QT_NO_TOOLTIP
        actionEditUnignoreAllDisplayed->setText(QApplication::translate("MainWindow", "Unignore All Displayed", 0));
#ifndef QT_NO_TOOLTIP
        actionEditUnignoreAllDisplayed->setToolTip(QApplication::translate("MainWindow", "U&nignore all displayed packets", 0));
#endif // QT_NO_TOOLTIP
        actionEditSetTimeReference->setText(QApplication::translate("MainWindow", "Set/Unset Time Reference", 0));
#ifndef QT_NO_TOOLTIP
        actionEditSetTimeReference->setToolTip(QApplication::translate("MainWindow", "Set or unset a time reference for this packet", 0));
#endif // QT_NO_TOOLTIP
        actionEditUnsetAllTimeReferences->setText(QApplication::translate("MainWindow", "Unset All Time References", 0));
#ifndef QT_NO_TOOLTIP
        actionEditUnsetAllTimeReferences->setToolTip(QApplication::translate("MainWindow", "Remove all time references", 0));
#endif // QT_NO_TOOLTIP
        actionEditNextTimeReference->setText(QApplication::translate("MainWindow", "Next Time Reference", 0));
#ifndef QT_NO_TOOLTIP
        actionEditNextTimeReference->setToolTip(QApplication::translate("MainWindow", "Go to the next time reference", 0));
#endif // QT_NO_TOOLTIP
        actionEditPreviousTimeReference->setText(QApplication::translate("MainWindow", "Previous Time Reference", 0));
#ifndef QT_NO_TOOLTIP
        actionEditPreviousTimeReference->setToolTip(QApplication::translate("MainWindow", "Go to the previous time reference", 0));
#endif // QT_NO_TOOLTIP
        actionEditTimeShift->setText(QApplication::translate("MainWindow", "Time Shift\342\200\246", 0));
#ifndef QT_NO_TOOLTIP
        actionEditTimeShift->setToolTip(QApplication::translate("MainWindow", "Shift or change packet timestamps", 0));
#endif // QT_NO_TOOLTIP
        actionEditPacketComment->setText(QApplication::translate("MainWindow", "Packet Comment\342\200\246", 0));
#ifndef QT_NO_TOOLTIP
        actionEditPacketComment->setToolTip(QApplication::translate("MainWindow", "Add or change a packet comment", 0));
#endif // QT_NO_TOOLTIP
        actionDeleteAllPacketComments->setText(QApplication::translate("MainWindow", "Delete All Packet Comments", 0));
#ifndef QT_NO_TOOLTIP
        actionDeleteAllPacketComments->setToolTip(QApplication::translate("MainWindow", "Remove all packet comments in the capture file", 0));
#endif // QT_NO_TOOLTIP
        actionEditConfigurationProfiles->setText(QApplication::translate("MainWindow", "&Configuration Profiles\342\200\246", 0));
        actionEditConfigurationProfiles->setIconText(QApplication::translate("MainWindow", "Configuration profiles", 0));
#ifndef QT_NO_TOOLTIP
        actionEditConfigurationProfiles->setToolTip(QApplication::translate("MainWindow", "Manage your configuration profiles", 0));
#endif // QT_NO_TOOLTIP
        actionEditPreferences->setText(QApplication::translate("MainWindow", "&Preferences\342\200\246", 0));
#ifndef QT_NO_TOOLTIP
        actionEditPreferences->setToolTip(QApplication::translate("MainWindow", "Manage Wireshark's preferences", 0));
#endif // QT_NO_TOOLTIP
        actionStatisticsCaptureFileProperties->setText(QApplication::translate("MainWindow", "Capture File Properties", 0));
#ifndef QT_NO_TOOLTIP
        actionStatisticsCaptureFileProperties->setToolTip(QApplication::translate("MainWindow", "Capture file properties", 0));
#endif // QT_NO_TOOLTIP
        actionStatisticsProtocolHierarchy->setText(QApplication::translate("MainWindow", "&Protocol Hierarchy", 0));
#ifndef QT_NO_TOOLTIP
        actionStatisticsProtocolHierarchy->setToolTip(QApplication::translate("MainWindow", "Show a summary of protocols present in the capture file.", 0));
#endif // QT_NO_TOOLTIP
        actionHelpMPCapinfos->setText(QApplication::translate("MainWindow", "Capinfos", 0));
        actionHelpMPReordercap->setText(QApplication::translate("MainWindow", "Reordercap", 0));
        actionStatisticsTcpStreamStevens->setText(QApplication::translate("MainWindow", "Time Sequence (Stevens)", 0));
#ifndef QT_NO_TOOLTIP
        actionStatisticsTcpStreamStevens->setToolTip(QApplication::translate("MainWindow", "TCP time sequence graph (Stevens)", 0));
#endif // QT_NO_TOOLTIP
        actionStatisticsTcpStreamThroughput->setText(QApplication::translate("MainWindow", "Throughput", 0));
#ifndef QT_NO_TOOLTIP
        actionStatisticsTcpStreamThroughput->setToolTip(QApplication::translate("MainWindow", "TCP througput", 0));
#endif // QT_NO_TOOLTIP
        actionStatisticsTcpStreamRoundTripTime->setText(QApplication::translate("MainWindow", "Round Trip Time", 0));
#ifndef QT_NO_TOOLTIP
        actionStatisticsTcpStreamRoundTripTime->setToolTip(QApplication::translate("MainWindow", "TCP round trip time", 0));
#endif // QT_NO_TOOLTIP
        actionStatisticsTcpStreamWindowScaling->setText(QApplication::translate("MainWindow", "Window Scaling", 0));
#ifndef QT_NO_TOOLTIP
        actionStatisticsTcpStreamWindowScaling->setToolTip(QApplication::translate("MainWindow", "TCP window scaling", 0));
#endif // QT_NO_TOOLTIP
        actionAnalyzeFollowTCPStream->setText(QApplication::translate("MainWindow", "TCP Stream", 0));
        actionAnalyzeFollowUDPStream->setText(QApplication::translate("MainWindow", "UDP Stream", 0));
        actionAnalyzeFollowTLSStream->setText(QApplication::translate("MainWindow", "TLS Stream", 0));
        actionAnalyzeFollowHTTPStream->setText(QApplication::translate("MainWindow", "HTTP Stream", 0));
        actionStatisticsTcpStreamTcptrace->setText(QApplication::translate("MainWindow", "Time Sequence (tcptrace)", 0));
#ifndef QT_NO_TOOLTIP
        actionStatisticsTcpStreamTcptrace->setToolTip(QApplication::translate("MainWindow", "TCP time sequence graph (tcptrace)", 0));
#endif // QT_NO_TOOLTIP
        actionSCTPAnalyseThisAssociation->setText(QApplication::translate("MainWindow", "Analyse this Association", 0));
        actionSCTPShowAllAssociations->setText(QApplication::translate("MainWindow", "Show All Associations", 0));
        actionStatisticsFlowGraph->setText(QApplication::translate("MainWindow", "Flow Graph", 0));
#ifndef QT_NO_TOOLTIP
        actionStatisticsFlowGraph->setToolTip(QApplication::translate("MainWindow", "Flow sequence diagram", 0));
#endif // QT_NO_TOOLTIP
        actionStatisticsANCP->setText(QApplication::translate("MainWindow", "ANCP", 0));
#ifndef QT_NO_TOOLTIP
        actionStatisticsANCP->setToolTip(QApplication::translate("MainWindow", "ANCP statistics", 0));
#endif // QT_NO_TOOLTIP
        actionStatisticsBACappInstanceId->setText(QApplication::translate("MainWindow", "Packets sorted by Instance ID", 0));
#ifndef QT_NO_TOOLTIP
        actionStatisticsBACappInstanceId->setToolTip(QApplication::translate("MainWindow", "BACapp statistics sorted by instance ID", 0));
#endif // QT_NO_TOOLTIP
        actionStatisticsBACappIP->setText(QApplication::translate("MainWindow", "Packets sorted by IP", 0));
#ifndef QT_NO_TOOLTIP
        actionStatisticsBACappIP->setToolTip(QApplication::translate("MainWindow", "BACapp statistics sorted by IP", 0));
#endif // QT_NO_TOOLTIP
        actionStatisticsBACappObjectId->setText(QApplication::translate("MainWindow", "Packets sorted by object type", 0));
#ifndef QT_NO_TOOLTIP
        actionStatisticsBACappObjectId->setToolTip(QApplication::translate("MainWindow", "BACapp statistics sorted by object type", 0));
#endif // QT_NO_TOOLTIP
        actionStatisticsBACappService->setText(QApplication::translate("MainWindow", "Packets sorted by service", 0));
#ifndef QT_NO_TOOLTIP
        actionStatisticsBACappService->setToolTip(QApplication::translate("MainWindow", "BACapp statistics sorted by service", 0));
#endif // QT_NO_TOOLTIP
        actionStatisticsCollectd->setText(QApplication::translate("MainWindow", "Collectd", 0));
#ifndef QT_NO_TOOLTIP
        actionStatisticsCollectd->setToolTip(QApplication::translate("MainWindow", "Collectd statistics", 0));
#endif // QT_NO_TOOLTIP
        actionStatisticsDNS->setText(QApplication::translate("MainWindow", "DNS", 0));
#ifndef QT_NO_TOOLTIP
        actionStatisticsDNS->setToolTip(QApplication::translate("MainWindow", "DNS statistics", 0));
#endif // QT_NO_TOOLTIP
        actionStatisticsHART_IP->setText(QApplication::translate("MainWindow", "HART-IP", 0));
#ifndef QT_NO_TOOLTIP
        actionStatisticsHART_IP->setToolTip(QApplication::translate("MainWindow", "HART-IP statistics", 0));
#endif // QT_NO_TOOLTIP
        actionStatisticsHpfeeds->setText(QApplication::translate("MainWindow", "HPFEEDS", 0));
#ifndef QT_NO_TOOLTIP
        actionStatisticsHpfeeds->setToolTip(QApplication::translate("MainWindow", "hpfeeds statistics", 0));
#endif // QT_NO_TOOLTIP
        actionStatisticsHTTP2->setText(QApplication::translate("MainWindow", "HTTP2", 0));
#ifndef QT_NO_TOOLTIP
        actionStatisticsHTTP2->setToolTip(QApplication::translate("MainWindow", "HTTP2 statistics", 0));
#endif // QT_NO_TOOLTIP
        actionStatisticsHTTPPacketCounter->setText(QApplication::translate("MainWindow", "Packet Counter", 0));
#ifndef QT_NO_TOOLTIP
        actionStatisticsHTTPPacketCounter->setToolTip(QApplication::translate("MainWindow", "HTTP packet counter", 0));
#endif // QT_NO_TOOLTIP
        actionStatisticsHTTPRequests->setText(QApplication::translate("MainWindow", "Requests", 0));
#ifndef QT_NO_TOOLTIP
        actionStatisticsHTTPRequests->setToolTip(QApplication::translate("MainWindow", "HTTP requests", 0));
#endif // QT_NO_TOOLTIP
        actionStatisticsHTTPLoadDistribution->setText(QApplication::translate("MainWindow", "Load Distribution", 0));
#ifndef QT_NO_TOOLTIP
        actionStatisticsHTTPLoadDistribution->setToolTip(QApplication::translate("MainWindow", "HTTP load distribution", 0));
#endif // QT_NO_TOOLTIP
        actionStatisticsHTTPRequestSequences->setText(QApplication::translate("MainWindow", "Request Sequences", 0));
#ifndef QT_NO_TOOLTIP
        actionStatisticsHTTPRequestSequences->setToolTip(QApplication::translate("MainWindow", "HTTP Request Sequences", 0));
#endif // QT_NO_TOOLTIP
        actionStatisticsPacketLengths->setText(QApplication::translate("MainWindow", "Packet Lengths", 0));
#ifndef QT_NO_TOOLTIP
        actionStatisticsPacketLengths->setToolTip(QApplication::translate("MainWindow", "Packet length statistics", 0));
#endif // QT_NO_TOOLTIP
        actionStatisticsSametime->setText(QApplication::translate("MainWindow", "Sametime", 0));
#ifndef QT_NO_TOOLTIP
        actionStatisticsSametime->setToolTip(QApplication::translate("MainWindow", "Sametime statistics", 0));
#endif // QT_NO_TOOLTIP
        actionTelephonyISUPMessages->setText(QApplication::translate("MainWindow", "&ISUP Messages", 0));
#ifndef QT_NO_TOOLTIP
        actionTelephonyISUPMessages->setToolTip(QApplication::translate("MainWindow", "ISUP message statistics", 0));
#endif // QT_NO_TOOLTIP
        actionTelephonyOsmuxPacketCounter->setText(QApplication::translate("MainWindow", "Packet Counter", 0));
#ifndef QT_NO_TOOLTIP
        actionTelephonyOsmuxPacketCounter->setToolTip(QApplication::translate("MainWindow", "Osmux packet counts", 0));
#endif // QT_NO_TOOLTIP
        actionTelephonyRTSPPacketCounter->setText(QApplication::translate("MainWindow", "Packet Counter", 0));
#ifndef QT_NO_TOOLTIP
        actionTelephonyRTSPPacketCounter->setToolTip(QApplication::translate("MainWindow", "RTSP packet counts", 0));
#endif // QT_NO_TOOLTIP
        actionTelephonySMPPOperations->setText(QApplication::translate("MainWindow", "SM&PP Operations", 0));
#ifndef QT_NO_TOOLTIP
        actionTelephonySMPPOperations->setToolTip(QApplication::translate("MainWindow", "SMPP operation statistics", 0));
#endif // QT_NO_TOOLTIP
        actionTelephonyUCPMessages->setText(QApplication::translate("MainWindow", "&UCP Messages", 0));
#ifndef QT_NO_TOOLTIP
        actionTelephonyUCPMessages->setToolTip(QApplication::translate("MainWindow", "UCP message statistics", 0));
#endif // QT_NO_TOOLTIP
        actionAnalyzeDecodeAs->setText(QApplication::translate("MainWindow", "Decode &As\342\200\246", 0));
#ifndef QT_NO_TOOLTIP
        actionAnalyzeDecodeAs->setToolTip(QApplication::translate("MainWindow", "Change the way packets are dissected", 0));
#endif // QT_NO_TOOLTIP
        actionAnalyzeReloadLuaPlugins->setText(QApplication::translate("MainWindow", "Reload Lua Plugins", 0));
#ifndef QT_NO_TOOLTIP
        actionAnalyzeReloadLuaPlugins->setToolTip(QApplication::translate("MainWindow", "Reload Lua plugins", 0));
#endif // QT_NO_TOOLTIP
        action29West->setText(QApplication::translate("MainWindow", "29West", 0));
        actionStatistics29WestTopics_Advertisements_by_Topic->setText(QApplication::translate("MainWindow", "Advertisements by Topic", 0));
        actionStatistics29WestTopics_Advertisements_by_Source->setText(QApplication::translate("MainWindow", "Advertisements by Source", 0));
        actionStatistics29WestTopics_Advertisements_by_Transport->setText(QApplication::translate("MainWindow", "Advertisements by Transport", 0));
        actionStatistics29WestTopics_Queries_by_Topic->setText(QApplication::translate("MainWindow", "Queries by Topic", 0));
        actionStatistics29WestTopics_Queries_by_Receiver->setText(QApplication::translate("MainWindow", "Queries by Receiver", 0));
        actionStatistics29WestTopics_Wildcard_Queries_by_Pattern->setText(QApplication::translate("MainWindow", "Wildcard Queries by Pattern", 0));
        actionStatistics29WestTopics_Wildcard_Queries_by_Receiver->setText(QApplication::translate("MainWindow", "Wildcard Queries by Receiver", 0));
        actionStatistics29WestQueues_Advertisements_by_Queue->setText(QApplication::translate("MainWindow", "Advertisements by Queue", 0));
        actionStatistics29WestQueues_Advertisements_by_Source->setText(QApplication::translate("MainWindow", "Advertisements by Source", 0));
        actionStatistics29WestQueues_Queries_by_Queue->setText(QApplication::translate("MainWindow", "Queries by Queue", 0));
        actionStatistics29WestQueues_Queries_by_Receiver->setText(QApplication::translate("MainWindow", "Queries by Receiver", 0));
        actionStatistics29WestUIM_Streams->setText(QApplication::translate("MainWindow", "Streams", 0));
        actionStatistics29WestLBTRM->setText(QApplication::translate("MainWindow", "LBT-RM", 0));
        actionStatistics29WestLBTRU->setText(QApplication::translate("MainWindow", "LBT-RU", 0));
        actionSCTPFilterThisAssociation->setText(QApplication::translate("MainWindow", "Filter this Association", 0));
#ifndef QT_NO_TOOLTIP
        actionSCTPFilterThisAssociation->setToolTip(QApplication::translate("MainWindow", "Filter this Association", 0));
#endif // QT_NO_TOOLTIP
        actionFileExportPDU->setText(QApplication::translate("MainWindow", "Export PDUs to File\342\200\246", 0));
        actionStatisticsIOGraph->setText(QApplication::translate("MainWindow", "&I/O Graph", 0));
#ifndef QT_NO_TOOLTIP
        actionStatisticsIOGraph->setToolTip(QApplication::translate("MainWindow", "Create graphs based on display filter fields", 0));
#endif // QT_NO_TOOLTIP
        actionViewMainToolbar->setText(QApplication::translate("MainWindow", "&Main Toolbar", 0));
#ifndef QT_NO_TOOLTIP
        actionViewMainToolbar->setToolTip(QApplication::translate("MainWindow", "Show or hide the main toolbar", 0));
#endif // QT_NO_TOOLTIP
        actionViewFilterToolbar->setText(QApplication::translate("MainWindow", "&Filter Toolbar", 0));
#ifndef QT_NO_TOOLTIP
        actionViewFilterToolbar->setToolTip(QApplication::translate("MainWindow", "Show or hide the display filter toolbar", 0));
#endif // QT_NO_TOOLTIP
        actionStatisticsConversations->setText(QApplication::translate("MainWindow", "&Conversations", 0));
#ifndef QT_NO_TOOLTIP
        actionStatisticsConversations->setToolTip(QApplication::translate("MainWindow", "Conversations at different protocol levels", 0));
#endif // QT_NO_TOOLTIP
        actionStatisticsEndpoints->setText(QApplication::translate("MainWindow", "&Endpoints", 0));
#ifndef QT_NO_TOOLTIP
        actionStatisticsEndpoints->setToolTip(QApplication::translate("MainWindow", "Endpoints at different protocol levels", 0));
#endif // QT_NO_TOOLTIP
        actionViewColorizePacketList->setText(QApplication::translate("MainWindow", "Colorize Packet List", 0));
#ifndef QT_NO_TOOLTIP
        actionViewColorizePacketList->setToolTip(QApplication::translate("MainWindow", "Draw packets using your coloring rules", 0));
#endif // QT_NO_TOOLTIP
        actionViewZoomIn->setText(QApplication::translate("MainWindow", "&Zoom In", 0));
#ifndef QT_NO_TOOLTIP
        actionViewZoomIn->setToolTip(QApplication::translate("MainWindow", "Enlarge the main window text", 0));
#endif // QT_NO_TOOLTIP
        actionViewZoomOut->setText(QApplication::translate("MainWindow", "Zoom Out", 0));
#ifndef QT_NO_TOOLTIP
        actionViewZoomOut->setToolTip(QApplication::translate("MainWindow", "Shrink the main window text", 0));
#endif // QT_NO_TOOLTIP
        actionViewNormalSize->setText(QApplication::translate("MainWindow", "Normal Size", 0));
#ifndef QT_NO_TOOLTIP
        actionViewNormalSize->setToolTip(QApplication::translate("MainWindow", "Return the main window text to its normal size", 0));
#endif // QT_NO_TOOLTIP
        actionViewResetLayout->setText(QApplication::translate("MainWindow", "Reset Layout", 0));
#ifndef QT_NO_TOOLTIP
        actionViewResetLayout->setToolTip(QApplication::translate("MainWindow", "Reset appearance layout to default size", 0));
#endif // QT_NO_TOOLTIP
        actionViewResizeColumns->setText(QApplication::translate("MainWindow", "Resize Columns", 0));
#ifndef QT_NO_TOOLTIP
        actionViewResizeColumns->setToolTip(QApplication::translate("MainWindow", "Resize packet list columns to fit contents", 0));
#endif // QT_NO_TOOLTIP
        actionViewTimeDisplayFormatDateYMDandTimeOfDay->setText(QApplication::translate("MainWindow", "Date and Time of Day (1970-01-01 01:02:03.123456)", 0));
#ifndef QT_NO_TOOLTIP
        actionViewTimeDisplayFormatDateYMDandTimeOfDay->setToolTip(QApplication::translate("MainWindow", "Show packet times as the date and time of day.", 0));
#endif // QT_NO_TOOLTIP
        actionViewTimeDisplayFormatDateYDOYandTimeOfDay->setText(QApplication::translate("MainWindow", "Year, Day of Year, and Time of Day (1970/001 01:02:03.123456)", 0));
#ifndef QT_NO_TOOLTIP
        actionViewTimeDisplayFormatDateYDOYandTimeOfDay->setToolTip(QApplication::translate("MainWindow", "Show packet times as the year, day of the year and time of day.", 0));
#endif // QT_NO_TOOLTIP
        actionViewTimeDisplayFormatTimeOfDay->setText(QApplication::translate("MainWindow", "Time of Day (01:02:03.123456)", 0));
#ifndef QT_NO_TOOLTIP
        actionViewTimeDisplayFormatTimeOfDay->setToolTip(QApplication::translate("MainWindow", "Show packet times as the date and time of day.", 0));
#endif // QT_NO_TOOLTIP
        actionViewTimeDisplayFormatSecondsSinceEpoch->setText(QApplication::translate("MainWindow", "Seconds Since 1970-01-01", 0));
#ifndef QT_NO_TOOLTIP
        actionViewTimeDisplayFormatSecondsSinceEpoch->setToolTip(QApplication::translate("MainWindow", "Show packet times as the seconds since the UNIX / POSIX epoch (1970-01-01).", 0));
#endif // QT_NO_TOOLTIP
        actionViewTimeDisplayFormatSecondsSinceBeginningOfCapture->setText(QApplication::translate("MainWindow", "Seconds Since Beginning of Capture", 0));
#ifndef QT_NO_TOOLTIP
        actionViewTimeDisplayFormatSecondsSinceBeginningOfCapture->setToolTip(QApplication::translate("MainWindow", "Show packet times as the date and time of day.", 0));
#endif // QT_NO_TOOLTIP
        actionViewTimeDisplayFormatSecondsSincePreviousCapturedPacket->setText(QApplication::translate("MainWindow", "Seconds Since Previous Captured Packet", 0));
#ifndef QT_NO_TOOLTIP
        actionViewTimeDisplayFormatSecondsSincePreviousCapturedPacket->setToolTip(QApplication::translate("MainWindow", "Show packet times as the seconds since the previous captured packet.", 0));
#endif // QT_NO_TOOLTIP
        actionViewTimeDisplayFormatSecondsSincePreviousDisplayedPacket->setText(QApplication::translate("MainWindow", "Seconds Since Previous Displayed Packet", 0));
#ifndef QT_NO_TOOLTIP
        actionViewTimeDisplayFormatSecondsSincePreviousDisplayedPacket->setToolTip(QApplication::translate("MainWindow", "Show packet times as the seconds since the previous displayed packet.", 0));
#endif // QT_NO_TOOLTIP
        actionViewTimeDisplayFormatUTCDateYMDandTimeOfDay->setText(QApplication::translate("MainWindow", "UTC Date and Time of Day (1970-01-01 01:02:03.123456)", 0));
#ifndef QT_NO_TOOLTIP
        actionViewTimeDisplayFormatUTCDateYMDandTimeOfDay->setToolTip(QApplication::translate("MainWindow", "Show packet times as the UTC date and time of day.", 0));
#endif // QT_NO_TOOLTIP
        actionViewTimeDisplayFormatUTCDateYDOYandTimeOfDay->setText(QApplication::translate("MainWindow", "UTC Year, Day of Year, and Time of Day (1970/001 01:02:03.123456)", 0));
#ifndef QT_NO_TOOLTIP
        actionViewTimeDisplayFormatUTCDateYDOYandTimeOfDay->setToolTip(QApplication::translate("MainWindow", "Show packet times as the UTC year, day of the year and time of day.", 0));
#endif // QT_NO_TOOLTIP
        actionViewTimeDisplayFormatUTCTimeOfDay->setText(QApplication::translate("MainWindow", "UTC Time of Day (01:02:03.123456)", 0));
#ifndef QT_NO_TOOLTIP
        actionViewTimeDisplayFormatUTCTimeOfDay->setToolTip(QApplication::translate("MainWindow", "Show packet times as the UTC time of day.", 0));
#endif // QT_NO_TOOLTIP
        actionViewTimeDisplayFormatPrecisionAutomatic->setText(QApplication::translate("MainWindow", "Automatic (from capture file)", 0));
#ifndef QT_NO_TOOLTIP
        actionViewTimeDisplayFormatPrecisionAutomatic->setToolTip(QApplication::translate("MainWindow", "Use the time precision indicated in the capture file.", 0));
#endif // QT_NO_TOOLTIP
        actionViewTimeDisplayFormatPrecisionSeconds->setText(QApplication::translate("MainWindow", "Seconds", 0));
        actionViewTimeDisplayFormatPrecisionDeciseconds->setText(QApplication::translate("MainWindow", "Tenths of a second", 0));
        actionViewTimeDisplayFormatPrecisionCentiseconds->setText(QApplication::translate("MainWindow", "Hundredths of a second", 0));
        actionViewTimeDisplayFormatPrecisionMilliseconds->setText(QApplication::translate("MainWindow", "Milliseconds", 0));
        actionViewTimeDisplayFormatPrecisionMicroseconds->setText(QApplication::translate("MainWindow", "Microseconds", 0));
        actionViewTimeDisplayFormatPrecisionNanoseconds->setText(QApplication::translate("MainWindow", "Nanoseconds", 0));
        actionViewTimeDisplaySecondsWithHoursAndMinutes->setText(QApplication::translate("MainWindow", "Display Seconds With Hours and Minutes", 0));
#ifndef QT_NO_TOOLTIP
        actionViewTimeDisplaySecondsWithHoursAndMinutes->setToolTip(QApplication::translate("MainWindow", "Display seconds with hours and minutes", 0));
#endif // QT_NO_TOOLTIP
        actionViewNameResolutionPhysical->setText(QApplication::translate("MainWindow", "Resolve &Physical Addresses", 0));
#ifndef QT_NO_TOOLTIP
        actionViewNameResolutionPhysical->setToolTip(QApplication::translate("MainWindow", "Show names for known MAC addresses. Lookups use a local database.", 0));
#endif // QT_NO_TOOLTIP
        actionViewNameResolutionNetwork->setText(QApplication::translate("MainWindow", "Resolve &Network Addresses", 0));
#ifndef QT_NO_TOOLTIP
        actionViewNameResolutionNetwork->setToolTip(QApplication::translate("MainWindow", "Show names for known IPv4, IPv6, and IPX addresses. Lookups can generate network traffic.", 0));
#endif // QT_NO_TOOLTIP
        actionViewNameResolutionTransport->setText(QApplication::translate("MainWindow", "Resolve &Transport Addresses", 0));
#ifndef QT_NO_TOOLTIP
        actionViewNameResolutionTransport->setToolTip(QApplication::translate("MainWindow", "Show names for known TCP, UDP, and SCTP services. Lookups can generate traffic on some systems.", 0));
#endif // QT_NO_TOOLTIP
        actionViewWirelessToolbar->setText(QApplication::translate("MainWindow", "Wire&less Toolbar", 0));
#ifndef QT_NO_TOOLTIP
        actionViewWirelessToolbar->setToolTip(QApplication::translate("MainWindow", "Show or hide the wireless toolbar", 0));
#endif // QT_NO_TOOLTIP
        actionViewStatusBar->setText(QApplication::translate("MainWindow", "&Status Bar", 0));
#ifndef QT_NO_TOOLTIP
        actionViewStatusBar->setToolTip(QApplication::translate("MainWindow", "Show or hide the status bar", 0));
#endif // QT_NO_TOOLTIP
        actionViewPacketList->setText(QApplication::translate("MainWindow", "Packet &List", 0));
#ifndef QT_NO_TOOLTIP
        actionViewPacketList->setToolTip(QApplication::translate("MainWindow", "Show or hide the packet list", 0));
#endif // QT_NO_TOOLTIP
        actionViewPacketDetails->setText(QApplication::translate("MainWindow", "Packet &Details", 0));
#ifndef QT_NO_TOOLTIP
        actionViewPacketDetails->setToolTip(QApplication::translate("MainWindow", "Show or hide the packet details", 0));
#endif // QT_NO_TOOLTIP
        actionViewPacketBytes->setText(QApplication::translate("MainWindow", "Packet &Bytes", 0));
#ifndef QT_NO_TOOLTIP
        actionViewPacketBytes->setToolTip(QApplication::translate("MainWindow", "Show or hide the packet bytes", 0));
#endif // QT_NO_TOOLTIP
        actionViewInternalsConversationHashTables->setText(QApplication::translate("MainWindow", "&Conversation Hash Tables", 0));
#ifndef QT_NO_TOOLTIP
        actionViewInternalsConversationHashTables->setToolTip(QApplication::translate("MainWindow", "Show each conversation hash table", 0));
#endif // QT_NO_TOOLTIP
        actionViewInternalsDissectorTables->setText(QApplication::translate("MainWindow", "&Dissector Tables", 0));
#ifndef QT_NO_TOOLTIP
        actionViewInternalsDissectorTables->setToolTip(QApplication::translate("MainWindow", "Show each dissector table and its entries", 0));
#endif // QT_NO_TOOLTIP
        actionViewInternalsSupportedProtocols->setText(QApplication::translate("MainWindow", "&Supported Protocols", 0));
#ifndef QT_NO_TOOLTIP
        actionViewInternalsSupportedProtocols->setToolTip(QApplication::translate("MainWindow", "Show the currently supported protocols and display filter fields", 0));
#endif // QT_NO_TOOLTIP
        actionTelephonyGsmMapSummary->setText(QApplication::translate("MainWindow", "MAP Summary", 0));
#ifndef QT_NO_TOOLTIP
        actionTelephonyGsmMapSummary->setToolTip(QApplication::translate("MainWindow", "GSM MAP summary statistics", 0));
#endif // QT_NO_TOOLTIP
        actionTelephonyLteMacStatistics->setText(QApplication::translate("MainWindow", "MAC Statistics", 0));
#ifndef QT_NO_TOOLTIP
        actionTelephonyLteMacStatistics->setToolTip(QApplication::translate("MainWindow", "LTE MAC statistics", 0));
#endif // QT_NO_TOOLTIP
        actionTelephonyLteRlcStatistics->setText(QApplication::translate("MainWindow", "RLC Statistics", 0));
#ifndef QT_NO_TOOLTIP
        actionTelephonyLteRlcStatistics->setToolTip(QApplication::translate("MainWindow", "LTE RLC statistics", 0));
#endif // QT_NO_TOOLTIP
        actionTelephonyLteRlcGraph->setText(QApplication::translate("MainWindow", "RLC &Graph", 0));
#ifndef QT_NO_TOOLTIP
        actionTelephonyLteRlcGraph->setToolTip(QApplication::translate("MainWindow", "LTE RLC graph", 0));
#endif // QT_NO_TOOLTIP
        actionTelephonyMtp3Summary->setText(QApplication::translate("MainWindow", "MTP3 Summary", 0));
#ifndef QT_NO_TOOLTIP
        actionTelephonyMtp3Summary->setToolTip(QApplication::translate("MainWindow", "MTP3 summary statistics", 0));
#endif // QT_NO_TOOLTIP
        actionTelephonyVoipCalls->setText(QApplication::translate("MainWindow", "&VoIP Calls", 0));
#ifndef QT_NO_TOOLTIP
        actionTelephonyVoipCalls->setToolTip(QApplication::translate("MainWindow", "All VoIP Calls", 0));
#endif // QT_NO_TOOLTIP
        actionTelephonySipFlows->setText(QApplication::translate("MainWindow", "SIP &Flows", 0));
#ifndef QT_NO_TOOLTIP
        actionTelephonySipFlows->setToolTip(QApplication::translate("MainWindow", "SIP Flows", 0));
#endif // QT_NO_TOOLTIP
        actionTelephonyRTPStreams->setText(QApplication::translate("MainWindow", "RTP Streams", 0));
        actionViewColoringRules->setText(QApplication::translate("MainWindow", "&Coloring Rules\342\200\246", 0));
#ifndef QT_NO_TOOLTIP
        actionViewColoringRules->setToolTip(QApplication::translate("MainWindow", "Edit the packet list coloring rules.", 0));
#endif // QT_NO_TOOLTIP
        actionBluetoothATT_Server_Attributes->setText(QApplication::translate("MainWindow", "Bluetooth ATT Server Attributes", 0));
        actionBluetoothDevices->setText(QApplication::translate("MainWindow", "Bluetooth Devices", 0));
        actionBluetoothHCI_Summary->setText(QApplication::translate("MainWindow", "Bluetooth HCI Summary", 0));
        actionViewShowPacketInNewWindow->setText(QApplication::translate("MainWindow", "Show Packet in New &Window", 0));
#ifndef QT_NO_TOOLTIP
        actionViewShowPacketInNewWindow->setToolTip(QApplication::translate("MainWindow", "Show this packet in a separate window.", 0));
#endif // QT_NO_TOOLTIP
        actionContextShowLinkedPacketInNewWindow->setText(QApplication::translate("MainWindow", "Show Linked Packet in New Window", 0));
#ifndef QT_NO_TOOLTIP
        actionContextShowLinkedPacketInNewWindow->setToolTip(QApplication::translate("MainWindow", "Show the linked packet in a separate window.", 0));
#endif // QT_NO_TOOLTIP
        actionGoAutoScroll->setText(QApplication::translate("MainWindow", "Auto Scroll in Li&ve Capture", 0));
#ifndef QT_NO_TOOLTIP
        actionGoAutoScroll->setToolTip(QApplication::translate("MainWindow", "Automatically scroll to the last packet during a live capture.", 0));
#endif // QT_NO_TOOLTIP
        actionAnalyzeExpertInfo->setText(QApplication::translate("MainWindow", "Expert Information", 0));
#ifndef QT_NO_TOOLTIP
        actionAnalyzeExpertInfo->setToolTip(QApplication::translate("MainWindow", "Show expert notifications", 0));
#endif // QT_NO_TOOLTIP
        actionDisplayFilterExpression->setText(QApplication::translate("MainWindow", "&Expression\342\200\246", 0));
        actionDisplayFilterExpression->setIconText(QApplication::translate("MainWindow", "Expression\342\200\246", 0));
#ifndef QT_NO_TOOLTIP
        actionDisplayFilterExpression->setToolTip(QApplication::translate("MainWindow", "Add an expression to the display filter.", 0));
#endif // QT_NO_TOOLTIP
        actionStatistics_REGISTER_STAT_GROUP_UNSORTED->setText(QApplication::translate("MainWindow", "REGISTER_STAT_GROUP_UNSORTED", 0));
#ifndef QT_NO_TOOLTIP
        actionStatistics_REGISTER_STAT_GROUP_UNSORTED->setToolTip(QApplication::translate("MainWindow", "Start of \"REGISTER_STAT_GROUP_UNSORTED\"", 0));
#endif // QT_NO_TOOLTIP
        actionTelephonyANSIPlaceholder->setText(QApplication::translate("MainWindow", "No ANSI statistics registered", 0));
        actionTelephonyGSMPlaceholder->setText(QApplication::translate("MainWindow", "No GSM statistics registered", 0));
        actionTelephonyLTEPlaceholder->setText(QApplication::translate("MainWindow", "No LTE statistics registered", 0));
        actionTelephonyMTP3Placeholder->setText(QApplication::translate("MainWindow", "No MTP3 statistics registered", 0));
        actionStatisticsResolvedAddresses->setText(QApplication::translate("MainWindow", "Resolved Addresses", 0));
#ifndef QT_NO_TOOLTIP
        actionStatisticsResolvedAddresses->setToolTip(QApplication::translate("MainWindow", "Show each table of resolved addresses as copyable text.", 0));
#endif // QT_NO_TOOLTIP
        actionViewColorizeConversation1->setText(QApplication::translate("MainWindow", "Color &1", 0));
#ifndef QT_NO_TOOLTIP
        actionViewColorizeConversation1->setToolTip(QApplication::translate("MainWindow", "Mark the current conversation with its own color.", 0));
#endif // QT_NO_TOOLTIP
        actionViewColorizeConversation2->setText(QApplication::translate("MainWindow", "Color &2", 0));
#ifndef QT_NO_TOOLTIP
        actionViewColorizeConversation2->setToolTip(QApplication::translate("MainWindow", "Mark the current conversation with its own color.", 0));
#endif // QT_NO_TOOLTIP
        actionViewColorizeConversation3->setText(QApplication::translate("MainWindow", "Color &3", 0));
#ifndef QT_NO_TOOLTIP
        actionViewColorizeConversation3->setToolTip(QApplication::translate("MainWindow", "Mark the current conversation with its own color.", 0));
#endif // QT_NO_TOOLTIP
        actionViewColorizeConversation4->setText(QApplication::translate("MainWindow", "Color &4", 0));
#ifndef QT_NO_TOOLTIP
        actionViewColorizeConversation4->setToolTip(QApplication::translate("MainWindow", "Mark the current conversation with its own color.", 0));
#endif // QT_NO_TOOLTIP
        actionViewColorizeConversation5->setText(QApplication::translate("MainWindow", "Color &5", 0));
#ifndef QT_NO_TOOLTIP
        actionViewColorizeConversation5->setToolTip(QApplication::translate("MainWindow", "Mark the current conversation with its own color.", 0));
#endif // QT_NO_TOOLTIP
        actionViewColorizeConversation6->setText(QApplication::translate("MainWindow", "Color &6", 0));
#ifndef QT_NO_TOOLTIP
        actionViewColorizeConversation6->setToolTip(QApplication::translate("MainWindow", "Mark the current conversation with its own color.", 0));
#endif // QT_NO_TOOLTIP
        actionViewColorizeConversation7->setText(QApplication::translate("MainWindow", "Color &7", 0));
#ifndef QT_NO_TOOLTIP
        actionViewColorizeConversation7->setToolTip(QApplication::translate("MainWindow", "Mark the current conversation with its own color.", 0));
#endif // QT_NO_TOOLTIP
        actionViewColorizeConversation8->setText(QApplication::translate("MainWindow", "Color &8", 0));
#ifndef QT_NO_TOOLTIP
        actionViewColorizeConversation8->setToolTip(QApplication::translate("MainWindow", "Mark the current conversation with its own color.", 0));
#endif // QT_NO_TOOLTIP
        actionViewColorizeConversation9->setText(QApplication::translate("MainWindow", "Color &9", 0));
#ifndef QT_NO_TOOLTIP
        actionViewColorizeConversation9->setToolTip(QApplication::translate("MainWindow", "Mark the current conversation with its own color.", 0));
#endif // QT_NO_TOOLTIP
        actionViewColorizeConversation10->setText(QApplication::translate("MainWindow", "Color 1&0", 0));
#ifndef QT_NO_TOOLTIP
        actionViewColorizeConversation10->setToolTip(QApplication::translate("MainWindow", "Mark the current conversation with its own color.", 0));
#endif // QT_NO_TOOLTIP
        actionViewColorizeNewColoringRule->setText(QApplication::translate("MainWindow", "New Coloring Rule\342\200\246", 0));
#ifndef QT_NO_TOOLTIP
        actionViewColorizeNewColoringRule->setToolTip(QApplication::translate("MainWindow", "Create a new coloring rule based on this field.", 0));
#endif // QT_NO_TOOLTIP
        actionViewColorizeResetColorization->setText(QApplication::translate("MainWindow", "Reset Colorization", 0));
#ifndef QT_NO_TOOLTIP
        actionViewColorizeResetColorization->setToolTip(QApplication::translate("MainWindow", "Reset colorized conversations.", 0));
#endif // QT_NO_TOOLTIP
        actionTelephonyRTPStreamAnalysis->setText(QApplication::translate("MainWindow", "Stream Analysis", 0));
#ifndef QT_NO_TOOLTIP
        actionTelephonyRTPStreamAnalysis->setToolTip(QApplication::translate("MainWindow", "RTP Stream Analysis", 0));
#endif // QT_NO_TOOLTIP
        actionTelephonyIax2StreamAnalysis->setText(QApplication::translate("MainWindow", "IA&X2 Stream Analysis", 0));
#ifndef QT_NO_TOOLTIP
        actionTelephonyIax2StreamAnalysis->setToolTip(QApplication::translate("MainWindow", "IAX2 Stream Analysis", 0));
#endif // QT_NO_TOOLTIP
        actionViewEditResolvedName->setText(QApplication::translate("MainWindow", "Edit Resolved Name", 0));
#ifndef QT_NO_TOOLTIP
        actionViewEditResolvedName->setToolTip(QApplication::translate("MainWindow", "Manually edit a name resolution entry.", 0));
#endif // QT_NO_TOOLTIP
        actionAnalyzeEnabledProtocols->setText(QApplication::translate("MainWindow", "Enabled Protocols\342\200\246", 0));
#ifndef QT_NO_TOOLTIP
        actionAnalyzeEnabledProtocols->setToolTip(QApplication::translate("MainWindow", "Enable and disable specific protocols", 0));
#endif // QT_NO_TOOLTIP
        actionAnalyzeShowPacketBytes->setText(QApplication::translate("MainWindow", "Show Packet Bytes\342\200\246", 0));
        actionContextWikiProtocolPage->setText(QApplication::translate("MainWindow", "Wiki Protocol Page", 0));
#ifndef QT_NO_TOOLTIP
        actionContextWikiProtocolPage->setToolTip(QApplication::translate("MainWindow", "Open the Wireshark wiki page for this protocol.", 0));
#endif // QT_NO_TOOLTIP
        actionContextFilterFieldReference->setText(QApplication::translate("MainWindow", "Filter Field Reference", 0));
#ifndef QT_NO_TOOLTIP
        actionContextFilterFieldReference->setToolTip(QApplication::translate("MainWindow", "Open the display filter reference page for this filter field.", 0));
#endif // QT_NO_TOOLTIP
        actionGoGoToLinkedPacket->setText(QApplication::translate("MainWindow", "Go to &Linked Packet", 0));
#ifndef QT_NO_TOOLTIP
        actionGoGoToLinkedPacket->setToolTip(QApplication::translate("MainWindow", "Go to the packet referenced by the selected field.", 0));
#endif // QT_NO_TOOLTIP
        actionStatisticsUdpMulticastStreams->setText(QApplication::translate("MainWindow", "UDP Multicast Streams", 0));
#ifndef QT_NO_TOOLTIP
        actionStatisticsUdpMulticastStreams->setToolTip(QApplication::translate("MainWindow", "Show UTP multicast stream statistics.", 0));
#endif // QT_NO_TOOLTIP
        actionWirelessWlanStatistics->setText(QApplication::translate("MainWindow", "WLAN Traffic", 0));
#ifndef QT_NO_TOOLTIP
        actionWirelessWlanStatistics->setToolTip(QApplication::translate("MainWindow", "Show IEEE 802.11 wireless LAN statistics.", 0));
#endif // QT_NO_TOOLTIP
        actionNewDisplayFilterExpression->setText(QApplication::translate("MainWindow", "Add a filter button", 0));
        actionNewDisplayFilterExpression->setIconText(QApplication::translate("MainWindow", "Expression\342\200\246", 0));
#ifndef QT_NO_TOOLTIP
        actionNewDisplayFilterExpression->setToolTip(QApplication::translate("MainWindow", "Add a display filter button.", 0));
#endif // QT_NO_TOOLTIP
        actionToolsFirewallAclRules->setText(QApplication::translate("MainWindow", "Firewall ACL Rules", 0));
#ifndef QT_NO_TOOLTIP
        actionToolsFirewallAclRules->setToolTip(QApplication::translate("MainWindow", "Create firewall ACL rules", 0));
#endif // QT_NO_TOOLTIP
        actionViewFullScreen->setText(QApplication::translate("MainWindow", "&Full Screen", 0));
        goToPacketLabel->setText(QApplication::translate("MainWindow", "Packet:", 0));
        goToLineEdit->setInputMask(QApplication::translate("MainWindow", "900000000", 0));
        goToGo->setText(QApplication::translate("MainWindow", "Go to packet", 0));
        goToCancel->setText(QApplication::translate("MainWindow", "Cancel", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "&File", 0));
        menuOpenRecentCaptureFile->setTitle(QApplication::translate("MainWindow", "Open &Recent", 0));
        menuFileSet->setTitle(QApplication::translate("MainWindow", "File Set", 0));
        menuFileExportPacketDissections->setTitle(QApplication::translate("MainWindow", "Export Packet Dissections", 0));
        menuFileExportObjects->setTitle(QApplication::translate("MainWindow", "Export Objects", 0));
        menuCapture->setTitle(QApplication::translate("MainWindow", "&Capture", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "&Help", 0));
        menuHelpManualPages->setTitle(QApplication::translate("MainWindow", "Manual pages", 0));
        menuGo->setTitle(QApplication::translate("MainWindow", "&Go", 0));
        menuView->setTitle(QApplication::translate("MainWindow", "&View", 0));
        menuInterfaceToolbars->setTitle(QApplication::translate("MainWindow", "Interface Toolbars", 0));
        menuZoom->setTitle(QApplication::translate("MainWindow", "&Zoom", 0));
        menuTime_Display_Format->setTitle(QApplication::translate("MainWindow", "&Time Display Format", 0));
        menuName_Resolution->setTitle(QApplication::translate("MainWindow", "Name Resol&ution", 0));
        menuColorizeConversation->setTitle(QApplication::translate("MainWindow", "Colorize Conversation", 0));
        menuInternals->setTitle(QApplication::translate("MainWindow", "Internals", 0));
        menuAdditionalToolbars->setTitle(QApplication::translate("MainWindow", "Additional Toolbars", 0));
        menuAnalyze->setTitle(QApplication::translate("MainWindow", "&Analyze", 0));
        menuApplyAsFilter->setTitle(QApplication::translate("MainWindow", "Apply as Filter", 0));
        menuPrepareAFilter->setTitle(QApplication::translate("MainWindow", "Prepare a Filter", 0));
        menuSCTP->setTitle(QApplication::translate("MainWindow", "SCTP", 0));
        menuFollow->setTitle(QApplication::translate("MainWindow", "Follow", 0));
        menuConversationFilter->setTitle(QApplication::translate("MainWindow", "Conversation Filter", 0));
        menuStatistics->setTitle(QApplication::translate("MainWindow", "&Statistics", 0));
        menuTcpStreamGraphs->setTitle(QApplication::translate("MainWindow", "TCP Stream Graphs", 0));
        menuBACnet->setTitle(QApplication::translate("MainWindow", "BACnet", 0));
        menuHTTP->setTitle(QApplication::translate("MainWindow", "HTTP", 0));
        menu29West->setTitle(QApplication::translate("MainWindow", "29West", 0));
        menu29WestTopics->setTitle(QApplication::translate("MainWindow", "Topics", 0));
        menu29WestQueues->setTitle(QApplication::translate("MainWindow", "Queues", 0));
        menu29WestUIM->setTitle(QApplication::translate("MainWindow", "UIM", 0));
        menuServiceResponseTime->setTitle(QApplication::translate("MainWindow", "Service &Response Time", 0));
        menuTelephony->setTitle(QApplication::translate("MainWindow", "Telephon&y", 0));
        menuRTSP->setTitle(QApplication::translate("MainWindow", "RTSP", 0));
        menuRTP->setTitle(QApplication::translate("MainWindow", "&RTP", 0));
        menuTelephonySCTP->setTitle(QApplication::translate("MainWindow", "S&CTP", 0));
        menuANSI->setTitle(QApplication::translate("MainWindow", "&ANSI", 0));
        menuGSM->setTitle(QApplication::translate("MainWindow", "&GSM", 0));
        menuLTE->setTitle(QApplication::translate("MainWindow", "&LTE", 0));
        menuMTP3->setTitle(QApplication::translate("MainWindow", "&MTP3", 0));
        menuOsmux->setTitle(QApplication::translate("MainWindow", "Osmux", 0));
        menuEdit->setTitle(QApplication::translate("MainWindow", "&Edit", 0));
        menuEditCopy->setTitle(QApplication::translate("MainWindow", "Copy", 0));
        menuWireless->setTitle(QApplication::translate("MainWindow", "&Wireless", 0));
        menuTools->setTitle(QApplication::translate("MainWindow", "&Tools", 0));
        mainToolBar->setWindowTitle(QApplication::translate("MainWindow", "Main Toolbar", 0));
        displayFilterToolBar->setWindowTitle(QApplication::translate("MainWindow", "Display Filter Toolbar", 0));
        wirelessToolBar->setWindowTitle(QApplication::translate("MainWindow", "Wireless Toolbar", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H
