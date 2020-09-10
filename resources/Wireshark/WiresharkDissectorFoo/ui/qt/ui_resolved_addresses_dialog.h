/********************************************************************************
** Form generated from reading UI file 'resolved_addresses_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESOLVED_ADDRESSES_DIALOG_H
#define UI_RESOLVED_ADDRESSES_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ResolvedAddressesDialog
{
public:
    QAction *actionComment;
    QAction *actionIPv4HashTable;
    QAction *actionIPv6HashTable;
    QAction *actionShowAll;
    QAction *actionHideAll;
    QAction *actionAddressesHosts;
    QAction *actionPortNames;
    QAction *actionEthernetAddresses;
    QAction *actionEthernetWKA;
    QAction *actionEthernetManufacturers;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *plainTextEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ResolvedAddressesDialog)
    {
        if (ResolvedAddressesDialog->objectName().isEmpty())
            ResolvedAddressesDialog->setObjectName(QStringLiteral("ResolvedAddressesDialog"));
        ResolvedAddressesDialog->resize(620, 450);
        actionComment = new QAction(ResolvedAddressesDialog);
        actionComment->setObjectName(QStringLiteral("actionComment"));
        actionComment->setCheckable(true);
        actionComment->setChecked(true);
        actionIPv4HashTable = new QAction(ResolvedAddressesDialog);
        actionIPv4HashTable->setObjectName(QStringLiteral("actionIPv4HashTable"));
        actionIPv4HashTable->setCheckable(true);
        actionIPv6HashTable = new QAction(ResolvedAddressesDialog);
        actionIPv6HashTable->setObjectName(QStringLiteral("actionIPv6HashTable"));
        actionIPv6HashTable->setCheckable(true);
        actionShowAll = new QAction(ResolvedAddressesDialog);
        actionShowAll->setObjectName(QStringLiteral("actionShowAll"));
        actionHideAll = new QAction(ResolvedAddressesDialog);
        actionHideAll->setObjectName(QStringLiteral("actionHideAll"));
        actionAddressesHosts = new QAction(ResolvedAddressesDialog);
        actionAddressesHosts->setObjectName(QStringLiteral("actionAddressesHosts"));
        actionAddressesHosts->setCheckable(true);
        actionAddressesHosts->setChecked(true);
        actionPortNames = new QAction(ResolvedAddressesDialog);
        actionPortNames->setObjectName(QStringLiteral("actionPortNames"));
        actionPortNames->setCheckable(true);
        actionPortNames->setChecked(true);
        actionEthernetAddresses = new QAction(ResolvedAddressesDialog);
        actionEthernetAddresses->setObjectName(QStringLiteral("actionEthernetAddresses"));
        actionEthernetAddresses->setCheckable(true);
        actionEthernetAddresses->setChecked(true);
        actionEthernetWKA = new QAction(ResolvedAddressesDialog);
        actionEthernetWKA->setObjectName(QStringLiteral("actionEthernetWKA"));
        actionEthernetWKA->setCheckable(true);
        actionEthernetWKA->setChecked(true);
        actionEthernetManufacturers = new QAction(ResolvedAddressesDialog);
        actionEthernetManufacturers->setObjectName(QStringLiteral("actionEthernetManufacturers"));
        actionEthernetManufacturers->setCheckable(true);
        actionEthernetManufacturers->setChecked(true);
        verticalLayout = new QVBoxLayout(ResolvedAddressesDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        plainTextEdit = new QPlainTextEdit(ResolvedAddressesDialog);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));

        verticalLayout->addWidget(plainTextEdit);

        buttonBox = new QDialogButtonBox(ResolvedAddressesDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ResolvedAddressesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ResolvedAddressesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ResolvedAddressesDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ResolvedAddressesDialog);
    } // setupUi

    void retranslateUi(QDialog *ResolvedAddressesDialog)
    {
        ResolvedAddressesDialog->setWindowTitle(QApplication::translate("ResolvedAddressesDialog", "Dialog", 0));
        actionComment->setText(QApplication::translate("ResolvedAddressesDialog", "Comment", 0));
#ifndef QT_NO_TOOLTIP
        actionComment->setToolTip(QApplication::translate("ResolvedAddressesDialog", "Show the comment.", 0));
#endif // QT_NO_TOOLTIP
        actionIPv4HashTable->setText(QApplication::translate("ResolvedAddressesDialog", "IPv4 Hash Table", 0));
#ifndef QT_NO_TOOLTIP
        actionIPv4HashTable->setToolTip(QApplication::translate("ResolvedAddressesDialog", "Show the IPv4 hash table entries.", 0));
#endif // QT_NO_TOOLTIP
        actionIPv6HashTable->setText(QApplication::translate("ResolvedAddressesDialog", "IPv6 Hash Table", 0));
#ifndef QT_NO_TOOLTIP
        actionIPv6HashTable->setToolTip(QApplication::translate("ResolvedAddressesDialog", "Show the IPv6 hash table entries.", 0));
#endif // QT_NO_TOOLTIP
        actionShowAll->setText(QApplication::translate("ResolvedAddressesDialog", "Show All", 0));
#ifndef QT_NO_TOOLTIP
        actionShowAll->setToolTip(QApplication::translate("ResolvedAddressesDialog", "Show all address types.", 0));
#endif // QT_NO_TOOLTIP
        actionHideAll->setText(QApplication::translate("ResolvedAddressesDialog", "Hide All", 0));
#ifndef QT_NO_TOOLTIP
        actionHideAll->setToolTip(QApplication::translate("ResolvedAddressesDialog", "Hide all address types.", 0));
#endif // QT_NO_TOOLTIP
        actionAddressesHosts->setText(QApplication::translate("ResolvedAddressesDialog", "IPv4 and IPv6 Addresses (hosts)", 0));
#ifndef QT_NO_TOOLTIP
        actionAddressesHosts->setToolTip(QApplication::translate("ResolvedAddressesDialog", "Show resolved IPv4 and IPv6 host names in \"hosts\" format.", 0));
#endif // QT_NO_TOOLTIP
        actionPortNames->setText(QApplication::translate("ResolvedAddressesDialog", "Port names (services)", 0));
#ifndef QT_NO_TOOLTIP
        actionPortNames->setToolTip(QApplication::translate("ResolvedAddressesDialog", "Show resolved port names in \"services\" format.", 0));
#endif // QT_NO_TOOLTIP
        actionEthernetAddresses->setText(QApplication::translate("ResolvedAddressesDialog", "Ethernet Addresses", 0));
#ifndef QT_NO_TOOLTIP
        actionEthernetAddresses->setToolTip(QApplication::translate("ResolvedAddressesDialog", "Show resolved Ethernet addresses in \"ethers\" format.", 0));
#endif // QT_NO_TOOLTIP
        actionEthernetWKA->setText(QApplication::translate("ResolvedAddressesDialog", "Ethernet Well-Known Addresses", 0));
#ifndef QT_NO_TOOLTIP
        actionEthernetWKA->setToolTip(QApplication::translate("ResolvedAddressesDialog", "Show well-known Ethernet addresses in \"ethers\" format.", 0));
#endif // QT_NO_TOOLTIP
        actionEthernetManufacturers->setText(QApplication::translate("ResolvedAddressesDialog", "Ethernet Manufacturers", 0));
#ifndef QT_NO_TOOLTIP
        actionEthernetManufacturers->setToolTip(QApplication::translate("ResolvedAddressesDialog", "Show Ethernet manufacturers in \"ethers\" format.", 0));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class ResolvedAddressesDialog: public Ui_ResolvedAddressesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESOLVED_ADDRESSES_DIALOG_H
