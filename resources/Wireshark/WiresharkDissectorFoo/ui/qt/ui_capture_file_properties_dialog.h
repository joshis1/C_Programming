/********************************************************************************
** Form generated from reading UI file 'capture_file_properties_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAPTURE_FILE_PROPERTIES_DIALOG_H
#define UI_CAPTURE_FILE_PROPERTIES_DIALOG_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CaptureFilePropertiesDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QSplitter *splitter;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *detailsLabel;
    QTextEdit *detailsTextEdit;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *commentsLabel;
    QTextEdit *commentsTextEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CaptureFilePropertiesDialog)
    {
        if (CaptureFilePropertiesDialog->objectName().isEmpty())
            CaptureFilePropertiesDialog->setObjectName(QStringLiteral("CaptureFilePropertiesDialog"));
        CaptureFilePropertiesDialog->resize(799, 585);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CaptureFilePropertiesDialog->sizePolicy().hasHeightForWidth());
        CaptureFilePropertiesDialog->setSizePolicy(sizePolicy);
        CaptureFilePropertiesDialog->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        verticalLayout_3 = new QVBoxLayout(CaptureFilePropertiesDialog);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        splitter = new QSplitter(CaptureFilePropertiesDialog);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        splitter->setOpaqueResize(false);
        splitter->setChildrenCollapsible(false);
        widget = new QWidget(splitter);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        detailsLabel = new QLabel(widget);
        detailsLabel->setObjectName(QStringLiteral("detailsLabel"));

        verticalLayout->addWidget(detailsLabel);

        detailsTextEdit = new QTextEdit(widget);
        detailsTextEdit->setObjectName(QStringLiteral("detailsTextEdit"));
        detailsTextEdit->setReadOnly(true);

        verticalLayout->addWidget(detailsTextEdit);

        splitter->addWidget(widget);
        widget1 = new QWidget(splitter);
        widget1->setObjectName(QStringLiteral("widget1"));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        commentsLabel = new QLabel(widget1);
        commentsLabel->setObjectName(QStringLiteral("commentsLabel"));

        verticalLayout_2->addWidget(commentsLabel);

        commentsTextEdit = new QTextEdit(widget1);
        commentsTextEdit->setObjectName(QStringLiteral("commentsTextEdit"));
        commentsTextEdit->setSizeIncrement(QSize(0, 10));

        verticalLayout_2->addWidget(commentsTextEdit);

        splitter->addWidget(widget1);

        verticalLayout_3->addWidget(splitter);

        buttonBox = new QDialogButtonBox(CaptureFilePropertiesDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Close|QDialogButtonBox::Help|QDialogButtonBox::Reset|QDialogButtonBox::Save);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(CaptureFilePropertiesDialog);

        QMetaObject::connectSlotsByName(CaptureFilePropertiesDialog);
    } // setupUi

    void retranslateUi(QDialog *CaptureFilePropertiesDialog)
    {
        detailsLabel->setText(QApplication::translate("CaptureFilePropertiesDialog", "Details", 0));
        commentsLabel->setText(QApplication::translate("CaptureFilePropertiesDialog", "Capture file comments", 0));
        Q_UNUSED(CaptureFilePropertiesDialog);
    } // retranslateUi

};

namespace Ui {
    class CaptureFilePropertiesDialog: public Ui_CaptureFilePropertiesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAPTURE_FILE_PROPERTIES_DIALOG_H
