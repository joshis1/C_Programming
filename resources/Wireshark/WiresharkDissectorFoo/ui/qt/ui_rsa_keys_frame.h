/********************************************************************************
** Form generated from reading UI file 'rsa_keys_frame.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RSA_KEYS_FRAME_H
#define UI_RSA_KEYS_FRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RsaKeysFrame
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *keysLabel;
    QListView *keysView;
    QHBoxLayout *horizontalLayout;
    QPushButton *addFileButton;
    QPushButton *addItemButton;
    QPushButton *deleteItemButton;
    QSpacerItem *horizontalSpacer;
    QLabel *libsLabel;
    QListView *libsView;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *addLibraryButton;
    QPushButton *deleteLibraryButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QFrame *RsaKeysFrame)
    {
        if (RsaKeysFrame->objectName().isEmpty())
            RsaKeysFrame->setObjectName(QStringLiteral("RsaKeysFrame"));
        RsaKeysFrame->resize(400, 300);
        verticalLayout = new QVBoxLayout(RsaKeysFrame);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(RsaKeysFrame);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        keysLabel = new QLabel(groupBox);
        keysLabel->setObjectName(QStringLiteral("keysLabel"));

        verticalLayout_2->addWidget(keysLabel);

        keysView = new QListView(groupBox);
        keysView->setObjectName(QStringLiteral("keysView"));

        verticalLayout_2->addWidget(keysView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addFileButton = new QPushButton(groupBox);
        addFileButton->setObjectName(QStringLiteral("addFileButton"));

        horizontalLayout->addWidget(addFileButton);

        addItemButton = new QPushButton(groupBox);
        addItemButton->setObjectName(QStringLiteral("addItemButton"));

        horizontalLayout->addWidget(addItemButton);

        deleteItemButton = new QPushButton(groupBox);
        deleteItemButton->setObjectName(QStringLiteral("deleteItemButton"));
        deleteItemButton->setEnabled(false);

        horizontalLayout->addWidget(deleteItemButton);

        horizontalSpacer = new QSpacerItem(QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        libsLabel = new QLabel(groupBox);
        libsLabel->setObjectName(QStringLiteral("libsLabel"));

        verticalLayout_2->addWidget(libsLabel);

        libsView = new QListView(groupBox);
        libsView->setObjectName(QStringLiteral("libsView"));
        libsView->setMaximumSize(QSize(16777215, 54));

        verticalLayout_2->addWidget(libsView);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        addLibraryButton = new QPushButton(groupBox);
        addLibraryButton->setObjectName(QStringLiteral("addLibraryButton"));

        horizontalLayout_2->addWidget(addLibraryButton);

        deleteLibraryButton = new QPushButton(groupBox);
        deleteLibraryButton->setObjectName(QStringLiteral("deleteLibraryButton"));
        deleteLibraryButton->setEnabled(false);

        horizontalLayout_2->addWidget(deleteLibraryButton);

        horizontalSpacer_2 = new QSpacerItem(QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout->addWidget(groupBox);


        retranslateUi(RsaKeysFrame);

        QMetaObject::connectSlotsByName(RsaKeysFrame);
    } // setupUi

    void retranslateUi(QFrame *RsaKeysFrame)
    {
        groupBox->setTitle(QApplication::translate("RsaKeysFrame", "RSA Keys", 0));
        keysLabel->setText(QApplication::translate("RsaKeysFrame", "RSA private keys are loaded from a file or PKCS #11 token.", 0));
        addFileButton->setText(QApplication::translate("RsaKeysFrame", "Add new keyfile\342\200\246", 0));
        addItemButton->setText(QApplication::translate("RsaKeysFrame", "Add new token\342\200\246", 0));
        deleteItemButton->setText(QApplication::translate("RsaKeysFrame", "Remove key", 0));
        libsLabel->setText(QApplication::translate("RsaKeysFrame", "PKCS #11 provider libraries.", 0));
        addLibraryButton->setText(QApplication::translate("RsaKeysFrame", "Add new provider\342\200\246", 0));
        deleteLibraryButton->setText(QApplication::translate("RsaKeysFrame", "Remove provider", 0));
        Q_UNUSED(RsaKeysFrame);
    } // retranslateUi

};

namespace Ui {
    class RsaKeysFrame: public Ui_RsaKeysFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RSA_KEYS_FRAME_H
