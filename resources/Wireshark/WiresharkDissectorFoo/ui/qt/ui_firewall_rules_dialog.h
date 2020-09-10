/********************************************************************************
** Form generated from reading UI file 'firewall_rules_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIREWALL_RULES_DIALOG_H
#define UI_FIREWALL_RULES_DIALOG_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FirewallRulesDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *productComboBox;
    QSpacerItem *horizontalSpacer;
    QCheckBox *inboundCheckBox;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *denyCheckBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *FirewallRulesDialog)
    {
        if (FirewallRulesDialog->objectName().isEmpty())
            FirewallRulesDialog->setObjectName(QStringLiteral("FirewallRulesDialog"));
        FirewallRulesDialog->resize(650, 450);
        verticalLayout = new QVBoxLayout(FirewallRulesDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        textBrowser = new QTextBrowser(FirewallRulesDialog);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        verticalLayout->addWidget(textBrowser);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(FirewallRulesDialog);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        productComboBox = new QComboBox(FirewallRulesDialog);
        productComboBox->setObjectName(QStringLiteral("productComboBox"));

        horizontalLayout->addWidget(productComboBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        inboundCheckBox = new QCheckBox(FirewallRulesDialog);
        inboundCheckBox->setObjectName(QStringLiteral("inboundCheckBox"));
        inboundCheckBox->setChecked(true);

        horizontalLayout->addWidget(inboundCheckBox);

        horizontalSpacer_2 = new QSpacerItem(20, 5, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        denyCheckBox = new QCheckBox(FirewallRulesDialog);
        denyCheckBox->setObjectName(QStringLiteral("denyCheckBox"));
        denyCheckBox->setChecked(true);

        horizontalLayout->addWidget(denyCheckBox);

        horizontalLayout->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(FirewallRulesDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Close|QDialogButtonBox::Help|QDialogButtonBox::Save);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(FirewallRulesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), FirewallRulesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), FirewallRulesDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(FirewallRulesDialog);
    } // setupUi

    void retranslateUi(QDialog *FirewallRulesDialog)
    {
        label->setText(QApplication::translate("FirewallRulesDialog", "Create rules for", 0));
        inboundCheckBox->setText(QApplication::translate("FirewallRulesDialog", "Inbound", 0));
        denyCheckBox->setText(QApplication::translate("FirewallRulesDialog", "Deny", 0));
        Q_UNUSED(FirewallRulesDialog);
    } // retranslateUi

};

namespace Ui {
    class FirewallRulesDialog: public Ui_FirewallRulesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIREWALL_RULES_DIALOG_H
