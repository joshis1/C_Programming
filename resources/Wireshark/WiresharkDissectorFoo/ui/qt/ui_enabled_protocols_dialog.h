/********************************************************************************
** Form generated from reading UI file 'enabled_protocols_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENABLED_PROTOCOLS_DIALOG_H
#define UI_ENABLED_PROTOCOLS_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EnabledProtocolsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTreeView *protocol_tree_;
    QLabel *disable_notice_text_;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *search_line_edit_;
    QSpacerItem *horizontalSpacer;
    QPushButton *enable_all_button_;
    QPushButton *disable_all_button_;
    QPushButton *invert_button_;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EnabledProtocolsDialog)
    {
        if (EnabledProtocolsDialog->objectName().isEmpty())
            EnabledProtocolsDialog->setObjectName(QStringLiteral("EnabledProtocolsDialog"));
        EnabledProtocolsDialog->resize(987, 595);
        verticalLayout = new QVBoxLayout(EnabledProtocolsDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        protocol_tree_ = new QTreeView(EnabledProtocolsDialog);
        protocol_tree_->setObjectName(QStringLiteral("protocol_tree_"));
        protocol_tree_->setSortingEnabled(true);

        verticalLayout->addWidget(protocol_tree_);

        disable_notice_text_ = new QLabel(EnabledProtocolsDialog);
        disable_notice_text_->setObjectName(QStringLiteral("disable_notice_text_"));
        disable_notice_text_->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout->addWidget(disable_notice_text_);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(EnabledProtocolsDialog);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        search_line_edit_ = new QLineEdit(EnabledProtocolsDialog);
        search_line_edit_->setObjectName(QStringLiteral("search_line_edit_"));

        horizontalLayout->addWidget(search_line_edit_);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        enable_all_button_ = new QPushButton(EnabledProtocolsDialog);
        enable_all_button_->setObjectName(QStringLiteral("enable_all_button_"));

        horizontalLayout->addWidget(enable_all_button_);

        disable_all_button_ = new QPushButton(EnabledProtocolsDialog);
        disable_all_button_->setObjectName(QStringLiteral("disable_all_button_"));

        horizontalLayout->addWidget(disable_all_button_);

        invert_button_ = new QPushButton(EnabledProtocolsDialog);
        invert_button_->setObjectName(QStringLiteral("invert_button_"));

        horizontalLayout->addWidget(invert_button_);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(EnabledProtocolsDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(EnabledProtocolsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), EnabledProtocolsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EnabledProtocolsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(EnabledProtocolsDialog);
    } // setupUi

    void retranslateUi(QDialog *EnabledProtocolsDialog)
    {
        EnabledProtocolsDialog->setWindowTitle(QApplication::translate("EnabledProtocolsDialog", "Dialog", 0));
        disable_notice_text_->setText(QApplication::translate("EnabledProtocolsDialog", "<small><i>Disabling a protocol prevents higher layer protocols from being displayed</i></small>", 0));
        label->setText(QApplication::translate("EnabledProtocolsDialog", "Search:", 0));
        enable_all_button_->setText(QApplication::translate("EnabledProtocolsDialog", "Enable All", 0));
        disable_all_button_->setText(QApplication::translate("EnabledProtocolsDialog", "Disable All", 0));
        invert_button_->setText(QApplication::translate("EnabledProtocolsDialog", "Invert", 0));
    } // retranslateUi

};

namespace Ui {
    class EnabledProtocolsDialog: public Ui_EnabledProtocolsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENABLED_PROTOCOLS_DIALOG_H
