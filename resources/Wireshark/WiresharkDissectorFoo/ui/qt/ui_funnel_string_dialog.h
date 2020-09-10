/********************************************************************************
** Form generated from reading UI file 'funnel_string_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FUNNEL_STRING_DIALOG_H
#define UI_FUNNEL_STRING_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FunnelStringDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *stringGridLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *FunnelStringDialog)
    {
        if (FunnelStringDialog->objectName().isEmpty())
            FunnelStringDialog->setObjectName(QStringLiteral("FunnelStringDialog"));
        FunnelStringDialog->resize(176, 66);
        verticalLayout = new QVBoxLayout(FunnelStringDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        stringGridLayout = new QGridLayout();
        stringGridLayout->setObjectName(QStringLiteral("stringGridLayout"));

        verticalLayout->addLayout(stringGridLayout);

        buttonBox = new QDialogButtonBox(FunnelStringDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(FunnelStringDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), FunnelStringDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), FunnelStringDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(FunnelStringDialog);
    } // setupUi

    void retranslateUi(QDialog *FunnelStringDialog)
    {
        FunnelStringDialog->setWindowTitle(QApplication::translate("FunnelStringDialog", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class FunnelStringDialog: public Ui_FunnelStringDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FUNNEL_STRING_DIALOG_H
