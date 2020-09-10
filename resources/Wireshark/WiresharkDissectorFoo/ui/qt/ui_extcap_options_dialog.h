/********************************************************************************
** Form generated from reading UI file 'extcap_options_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXTCAP_OPTIONS_DIALOG_H
#define UI_EXTCAP_OPTIONS_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ExtcapOptionsDialog
{
public:
    QVBoxLayout *verticalLayout_12;
    QVBoxLayout *verticalLayout;
    QFrame *line;
    QCheckBox *checkSaveOnStart;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ExtcapOptionsDialog)
    {
        if (ExtcapOptionsDialog->objectName().isEmpty())
            ExtcapOptionsDialog->setObjectName(QStringLiteral("ExtcapOptionsDialog"));
        ExtcapOptionsDialog->resize(600, 92);
        ExtcapOptionsDialog->setMinimumSize(QSize(600, 0));
        verticalLayout_12 = new QVBoxLayout(ExtcapOptionsDialog);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));

        verticalLayout_12->addLayout(verticalLayout);

        line = new QFrame(ExtcapOptionsDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_12->addWidget(line);

        checkSaveOnStart = new QCheckBox(ExtcapOptionsDialog);
        checkSaveOnStart->setObjectName(QStringLiteral("checkSaveOnStart"));
        checkSaveOnStart->setChecked(true);

        verticalLayout_12->addWidget(checkSaveOnStart);

        buttonBox = new QDialogButtonBox(ExtcapOptionsDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help|QDialogButtonBox::Ok|QDialogButtonBox::RestoreDefaults);

        verticalLayout_12->addWidget(buttonBox);


        retranslateUi(ExtcapOptionsDialog);

        QMetaObject::connectSlotsByName(ExtcapOptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *ExtcapOptionsDialog)
    {
        checkSaveOnStart->setText(QApplication::translate("ExtcapOptionsDialog", "Save parameter on capture start", 0));
        Q_UNUSED(ExtcapOptionsDialog);
    } // retranslateUi

};

namespace Ui {
    class ExtcapOptionsDialog: public Ui_ExtcapOptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXTCAP_OPTIONS_DIALOG_H
