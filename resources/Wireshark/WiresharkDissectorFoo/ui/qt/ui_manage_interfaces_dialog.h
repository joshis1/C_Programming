/********************************************************************************
** Form generated from reading UI file 'manage_interfaces_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGE_INTERFACES_DIALOG_H
#define UI_MANAGE_INTERFACES_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ManageInterfacesDialog
{
public:
    QVBoxLayout *verticalLayout_4;
    QTabWidget *tabWidget;
    QWidget *localTab;
    QVBoxLayout *verticalLayout;
    QTreeView *localView;
    QWidget *pipeTab;
    QVBoxLayout *verticalLayout_2;
    QTreeView *pipeView;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *addPipe;
    QToolButton *delPipe;
    QSpacerItem *horizontalSpacer;
    QWidget *remoteTab;
    QVBoxLayout *verticalLayout_3;
    QTreeWidget *remoteList;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *addRemote;
    QToolButton *delRemote;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *remoteSettings;
    QLabel *hintLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ManageInterfacesDialog)
    {
        if (ManageInterfacesDialog->objectName().isEmpty())
            ManageInterfacesDialog->setObjectName(QStringLiteral("ManageInterfacesDialog"));
        ManageInterfacesDialog->setWindowModality(Qt::ApplicationModal);
        ManageInterfacesDialog->resize(750, 425);
        ManageInterfacesDialog->setModal(false);
        verticalLayout_4 = new QVBoxLayout(ManageInterfacesDialog);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        tabWidget = new QTabWidget(ManageInterfacesDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        localTab = new QWidget();
        localTab->setObjectName(QStringLiteral("localTab"));
        verticalLayout = new QVBoxLayout(localTab);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        localView = new QTreeView(localTab);
        localView->setObjectName(QStringLiteral("localView"));
        localView->setFocusPolicy(Qt::NoFocus);
        localView->setIndentation(0);
        localView->setRootIsDecorated(false);
        localView->setUniformRowHeights(true);
        localView->setItemsExpandable(false);

        verticalLayout->addWidget(localView);

        tabWidget->addTab(localTab, QString());
        pipeTab = new QWidget();
        pipeTab->setObjectName(QStringLiteral("pipeTab"));
        verticalLayout_2 = new QVBoxLayout(pipeTab);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        pipeView = new QTreeView(pipeTab);
        pipeView->setObjectName(QStringLiteral("pipeView"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pipeView->sizePolicy().hasHeightForWidth());
        pipeView->setSizePolicy(sizePolicy);
        pipeView->setBaseSize(QSize(0, 0));
        pipeView->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        pipeView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        pipeView->setTextElideMode(Qt::ElideMiddle);
        pipeView->setRootIsDecorated(false);
        pipeView->setItemsExpandable(false);

        verticalLayout_2->addWidget(pipeView);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        addPipe = new QToolButton(pipeTab);
        addPipe->setObjectName(QStringLiteral("addPipe"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/stock/plus-8.png"), QSize(), QIcon::Normal, QIcon::Off);
        addPipe->setIcon(icon);

        horizontalLayout_2->addWidget(addPipe);

        delPipe = new QToolButton(pipeTab);
        delPipe->setObjectName(QStringLiteral("delPipe"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/stock/minus-8.png"), QSize(), QIcon::Normal, QIcon::Off);
        delPipe->setIcon(icon1);

        horizontalLayout_2->addWidget(delPipe);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_2);

        tabWidget->addTab(pipeTab, QString());
        remoteTab = new QWidget();
        remoteTab->setObjectName(QStringLiteral("remoteTab"));
        verticalLayout_3 = new QVBoxLayout(remoteTab);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        remoteList = new QTreeWidget(remoteTab);
        remoteList->setObjectName(QStringLiteral("remoteList"));
        remoteList->setUniformRowHeights(true);

        verticalLayout_3->addWidget(remoteList);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        addRemote = new QToolButton(remoteTab);
        addRemote->setObjectName(QStringLiteral("addRemote"));
        addRemote->setIcon(icon);

        horizontalLayout_3->addWidget(addRemote);

        delRemote = new QToolButton(remoteTab);
        delRemote->setObjectName(QStringLiteral("delRemote"));
        delRemote->setIcon(icon1);

        horizontalLayout_3->addWidget(delRemote);

        horizontalSpacer_2 = new QSpacerItem(328, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        remoteSettings = new QPushButton(remoteTab);
        remoteSettings->setObjectName(QStringLiteral("remoteSettings"));

        horizontalLayout_3->addWidget(remoteSettings);


        verticalLayout_3->addLayout(horizontalLayout_3);

        tabWidget->addTab(remoteTab, QString());

        verticalLayout_4->addWidget(tabWidget);

        hintLabel = new QLabel(ManageInterfacesDialog);
        hintLabel->setObjectName(QStringLiteral("hintLabel"));
        hintLabel->setWordWrap(true);

        verticalLayout_4->addWidget(hintLabel);

        buttonBox = new QDialogButtonBox(ManageInterfacesDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        verticalLayout_4->addWidget(buttonBox);


        retranslateUi(ManageInterfacesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ManageInterfacesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ManageInterfacesDialog, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ManageInterfacesDialog);
    } // setupUi

    void retranslateUi(QDialog *ManageInterfacesDialog)
    {
        ManageInterfacesDialog->setWindowTitle(QApplication::translate("ManageInterfacesDialog", "Manage Interfaces", 0));
#ifndef QT_NO_TOOLTIP
        localTab->setToolTip(QApplication::translate("ManageInterfacesDialog", "<html><head/><body><p>Click the checkbox to hide or show a hidden interface.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        tabWidget->setTabText(tabWidget->indexOf(localTab), QApplication::translate("ManageInterfacesDialog", "Local Interfaces", 0));
#ifndef QT_NO_TOOLTIP
        pipeTab->setToolTip(QApplication::translate("ManageInterfacesDialog", "<html><head/><body><p>Add a pipe to capture from or remove an existing pipe from the list.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        addPipe->setToolTip(QApplication::translate("ManageInterfacesDialog", "<html><head/><body><p>Add a new pipe using default settings.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        addPipe->setText(QString());
#ifndef QT_NO_TOOLTIP
        delPipe->setToolTip(QApplication::translate("ManageInterfacesDialog", "<html><head/><body><p>Remove the selected pipe from the list.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        delPipe->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(pipeTab), QApplication::translate("ManageInterfacesDialog", "Pipes", 0));
        QTreeWidgetItem *___qtreewidgetitem = remoteList->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("ManageInterfacesDialog", "Host / Device URL", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("ManageInterfacesDialog", "Show", 0));
#ifndef QT_NO_TOOLTIP
        addRemote->setToolTip(QApplication::translate("ManageInterfacesDialog", "<html><head/><body><p>Add a remote host and its interfaces</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        addRemote->setText(QString());
#ifndef QT_NO_TOOLTIP
        delRemote->setToolTip(QApplication::translate("ManageInterfacesDialog", "<html><head/><body><p>Remove the selected host from the list.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        delRemote->setText(QString());
        remoteSettings->setText(QApplication::translate("ManageInterfacesDialog", "Remote Settings", 0));
        tabWidget->setTabText(tabWidget->indexOf(remoteTab), QApplication::translate("ManageInterfacesDialog", "Remote Interfaces", 0));
        hintLabel->setText(QApplication::translate("ManageInterfacesDialog", "<small><i></i></small>", 0));
    } // retranslateUi

};

namespace Ui {
    class ManageInterfacesDialog: public Ui_ManageInterfacesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGE_INTERFACES_DIALOG_H
