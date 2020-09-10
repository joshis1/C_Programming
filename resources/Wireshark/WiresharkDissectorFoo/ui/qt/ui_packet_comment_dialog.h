/********************************************************************************
** Form generated from reading UI file 'packet_comment_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PACKET_COMMENT_DIALOG_H
#define UI_PACKET_COMMENT_DIALOG_H

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

class Ui_PacketCommentDialog
{
public:
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *commentTextEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PacketCommentDialog)
    {
        if (PacketCommentDialog->objectName().isEmpty())
            PacketCommentDialog->setObjectName(QStringLiteral("PacketCommentDialog"));
        PacketCommentDialog->resize(400, 300);
        PacketCommentDialog->setModal(true);
        verticalLayout = new QVBoxLayout(PacketCommentDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        commentTextEdit = new QPlainTextEdit(PacketCommentDialog);
        commentTextEdit->setObjectName(QStringLiteral("commentTextEdit"));

        verticalLayout->addWidget(commentTextEdit);

        buttonBox = new QDialogButtonBox(PacketCommentDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(PacketCommentDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PacketCommentDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PacketCommentDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(PacketCommentDialog);
    } // setupUi

    void retranslateUi(QDialog *PacketCommentDialog)
    {
        Q_UNUSED(PacketCommentDialog);
    } // retranslateUi

};

namespace Ui {
    class PacketCommentDialog: public Ui_PacketCommentDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PACKET_COMMENT_DIALOG_H
