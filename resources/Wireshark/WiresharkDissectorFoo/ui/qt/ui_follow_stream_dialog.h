/********************************************************************************
** Form generated from reading UI file 'follow_stream_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOLLOW_STREAM_DIALOG_H
#define UI_FOLLOW_STREAM_DIALOG_H

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
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include "widgets/find_line_edit.h"
#include "widgets/follow_stream_text.h"

QT_BEGIN_NAMESPACE

class Ui_FollowStreamDialog
{
public:
    QVBoxLayout *verticalLayout;
    FollowStreamText *teStreamContent;
    QLabel *hintLabel;
    QHBoxLayout *horizontalLayout;
    QComboBox *cbDirections;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QComboBox *cbCharset;
    QSpacerItem *streamNumberSpacer;
    QLabel *streamNumberLabel;
    QSpinBox *streamNumberSpinBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lFind;
    FindLineEdit *leFind;
    QPushButton *bFind;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *FollowStreamDialog)
    {
        if (FollowStreamDialog->objectName().isEmpty())
            FollowStreamDialog->setObjectName(QStringLiteral("FollowStreamDialog"));
        FollowStreamDialog->resize(594, 620);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FollowStreamDialog->sizePolicy().hasHeightForWidth());
        FollowStreamDialog->setSizePolicy(sizePolicy);
        FollowStreamDialog->setSizeGripEnabled(true);
        verticalLayout = new QVBoxLayout(FollowStreamDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        teStreamContent = new FollowStreamText(FollowStreamDialog);
        teStreamContent->setObjectName(QStringLiteral("teStreamContent"));
        teStreamContent->setReadOnly(true);

        verticalLayout->addWidget(teStreamContent);

        hintLabel = new QLabel(FollowStreamDialog);
        hintLabel->setObjectName(QStringLiteral("hintLabel"));
        hintLabel->setWordWrap(true);

        verticalLayout->addWidget(hintLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        cbDirections = new QComboBox(FollowStreamDialog);
        cbDirections->setObjectName(QStringLiteral("cbDirections"));
        cbDirections->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout->addWidget(cbDirections);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(FollowStreamDialog);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        cbCharset = new QComboBox(FollowStreamDialog);
        cbCharset->setObjectName(QStringLiteral("cbCharset"));

        horizontalLayout->addWidget(cbCharset);

        streamNumberSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(streamNumberSpacer);

        streamNumberLabel = new QLabel(FollowStreamDialog);
        streamNumberLabel->setObjectName(QStringLiteral("streamNumberLabel"));

        horizontalLayout->addWidget(streamNumberLabel);

        streamNumberSpinBox = new QSpinBox(FollowStreamDialog);
        streamNumberSpinBox->setObjectName(QStringLiteral("streamNumberSpinBox"));

        horizontalLayout->addWidget(streamNumberSpinBox);

        horizontalLayout->setStretch(4, 1);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lFind = new QLabel(FollowStreamDialog);
        lFind->setObjectName(QStringLiteral("lFind"));

        horizontalLayout_2->addWidget(lFind);

        leFind = new FindLineEdit(FollowStreamDialog);
        leFind->setObjectName(QStringLiteral("leFind"));

        horizontalLayout_2->addWidget(leFind);

        bFind = new QPushButton(FollowStreamDialog);
        bFind->setObjectName(QStringLiteral("bFind"));

        horizontalLayout_2->addWidget(bFind);

        horizontalLayout_2->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_2);

        buttonBox = new QDialogButtonBox(FollowStreamDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(FollowStreamDialog);

        cbCharset->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(FollowStreamDialog);
    } // setupUi

    void retranslateUi(QDialog *FollowStreamDialog)
    {
        FollowStreamDialog->setWindowTitle(QApplication::translate("FollowStreamDialog", "Follow Stream", 0));
        hintLabel->setText(QApplication::translate("FollowStreamDialog", "Hint.", 0));
        label->setText(QApplication::translate("FollowStreamDialog", "Show and save data as", 0));
        streamNumberLabel->setText(QApplication::translate("FollowStreamDialog", "Stream", 0));
        lFind->setText(QApplication::translate("FollowStreamDialog", "Find:", 0));
        bFind->setText(QApplication::translate("FollowStreamDialog", "Find &Next", 0));
    } // retranslateUi

};

namespace Ui {
    class FollowStreamDialog: public Ui_FollowStreamDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOLLOW_STREAM_DIALOG_H
