/********************************************************************************
** Form generated from reading UI file 'conversation_hash_tables_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONVERSATION_HASH_TABLES_DIALOG_H
#define UI_CONVERSATION_HASH_TABLES_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ConversationHashTablesDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *conversationTextEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ConversationHashTablesDialog)
    {
        if (ConversationHashTablesDialog->objectName().isEmpty())
            ConversationHashTablesDialog->setObjectName(QStringLiteral("ConversationHashTablesDialog"));
        ConversationHashTablesDialog->resize(640, 450);
        verticalLayout = new QVBoxLayout(ConversationHashTablesDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        conversationTextEdit = new QTextEdit(ConversationHashTablesDialog);
        conversationTextEdit->setObjectName(QStringLiteral("conversationTextEdit"));

        verticalLayout->addWidget(conversationTextEdit);

        buttonBox = new QDialogButtonBox(ConversationHashTablesDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ConversationHashTablesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ConversationHashTablesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ConversationHashTablesDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ConversationHashTablesDialog);
    } // setupUi

    void retranslateUi(QDialog *ConversationHashTablesDialog)
    {
        ConversationHashTablesDialog->setWindowTitle(QApplication::translate("ConversationHashTablesDialog", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class ConversationHashTablesDialog: public Ui_ConversationHashTablesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONVERSATION_HASH_TABLES_DIALOG_H
