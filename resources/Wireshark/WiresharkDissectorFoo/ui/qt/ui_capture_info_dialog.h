/********************************************************************************
** Form generated from reading UI file 'capture_info_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAPTURE_INFO_DIALOG_H
#define UI_CAPTURE_INFO_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CaptureInfoDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTreeView *treeView;
    QLabel *infoLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CaptureInfoDialog)
    {
        if (CaptureInfoDialog->objectName().isEmpty())
            CaptureInfoDialog->setObjectName(QStringLiteral("CaptureInfoDialog"));
        CaptureInfoDialog->resize(400, 275);
        CaptureInfoDialog->setSizeGripEnabled(true);
        verticalLayout = new QVBoxLayout(CaptureInfoDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        treeView = new QTreeView(CaptureInfoDialog);
        treeView->setObjectName(QStringLiteral("treeView"));
        treeView->setRootIsDecorated(false);
        treeView->setUniformRowHeights(true);
        treeView->setItemsExpandable(false);
        treeView->setSortingEnabled(false);
        treeView->header()->setVisible(false);

        verticalLayout->addWidget(treeView);

        infoLabel = new QLabel(CaptureInfoDialog);
        infoLabel->setObjectName(QStringLiteral("infoLabel"));
        infoLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(infoLabel);

        buttonBox = new QDialogButtonBox(CaptureInfoDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Abort|QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(CaptureInfoDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), CaptureInfoDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CaptureInfoDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(CaptureInfoDialog);
    } // setupUi

    void retranslateUi(QDialog *CaptureInfoDialog)
    {
        Q_UNUSED(CaptureInfoDialog);
    } // retranslateUi

};

namespace Ui {
    class CaptureInfoDialog: public Ui_CaptureInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAPTURE_INFO_DIALOG_H
