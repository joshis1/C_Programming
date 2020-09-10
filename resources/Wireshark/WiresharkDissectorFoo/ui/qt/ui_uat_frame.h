/********************************************************************************
** Form generated from reading UI file 'uat_frame.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UAT_FRAME_H
#define UI_UAT_FRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include "widgets/elided_label.h"
#include "widgets/tabnav_tree_view.h"

QT_BEGIN_NAMESPACE

class Ui_UatFrame
{
public:
    QVBoxLayout *verticalLayout;
    TabnavTreeView *uatTreeView;
    QLabel *hintLabel;
    QHBoxLayout *horizontalLayout;
    QToolButton *newToolButton;
    QToolButton *deleteToolButton;
    QToolButton *copyToolButton;
    QToolButton *moveUpToolButton;
    QToolButton *moveDownToolButton;
    QToolButton *clearToolButton;
    QPushButton *copyFromProfileButton;
    ElidedLabel *pathLabel;

    void setupUi(QFrame *UatFrame)
    {
        if (UatFrame->objectName().isEmpty())
            UatFrame->setObjectName(QStringLiteral("UatFrame"));
        UatFrame->resize(513, 397);
        UatFrame->setLineWidth(0);
        verticalLayout = new QVBoxLayout(UatFrame);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        uatTreeView = new TabnavTreeView(UatFrame);
        uatTreeView->setObjectName(QStringLiteral("uatTreeView"));

        verticalLayout->addWidget(uatTreeView);

        hintLabel = new QLabel(UatFrame);
        hintLabel->setObjectName(QStringLiteral("hintLabel"));
        hintLabel->setStyleSheet(QStringLiteral("QLabel { color: red; }"));
        hintLabel->setTextFormat(Qt::RichText);
        hintLabel->setWordWrap(true);

        verticalLayout->addWidget(hintLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        newToolButton = new QToolButton(UatFrame);
        newToolButton->setObjectName(QStringLiteral("newToolButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/stock/plus-8.png"), QSize(), QIcon::Normal, QIcon::Off);
        newToolButton->setIcon(icon);

        horizontalLayout->addWidget(newToolButton);

        deleteToolButton = new QToolButton(UatFrame);
        deleteToolButton->setObjectName(QStringLiteral("deleteToolButton"));
        deleteToolButton->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/stock/minus-8.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteToolButton->setIcon(icon1);

        horizontalLayout->addWidget(deleteToolButton);

        copyToolButton = new QToolButton(UatFrame);
        copyToolButton->setObjectName(QStringLiteral("copyToolButton"));
        copyToolButton->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/stock/copy-8.png"), QSize(), QIcon::Normal, QIcon::Off);
        copyToolButton->setIcon(icon2);

        horizontalLayout->addWidget(copyToolButton);

        moveUpToolButton = new QToolButton(UatFrame);
        moveUpToolButton->setObjectName(QStringLiteral("moveUpToolButton"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/stock/arrow_up.png"), QSize(), QIcon::Normal, QIcon::Off);
        moveUpToolButton->setIcon(icon3);

        horizontalLayout->addWidget(moveUpToolButton);

        moveDownToolButton = new QToolButton(UatFrame);
        moveDownToolButton->setObjectName(QStringLiteral("moveDownToolButton"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/stock/arrow_down.png"), QSize(), QIcon::Normal, QIcon::Off);
        moveDownToolButton->setIcon(icon4);

        horizontalLayout->addWidget(moveDownToolButton);

        clearToolButton = new QToolButton(UatFrame);
        clearToolButton->setObjectName(QStringLiteral("clearToolButton"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/stock/delete_list.png"), QSize(), QIcon::Normal, QIcon::Off);
        clearToolButton->setIcon(icon5);

        horizontalLayout->addWidget(clearToolButton);

        copyFromProfileButton = new QPushButton(UatFrame);
        copyFromProfileButton->setObjectName(QStringLiteral("copyFromProfileButton"));

        horizontalLayout->addWidget(copyFromProfileButton);

        pathLabel = new ElidedLabel(UatFrame);
        pathLabel->setObjectName(QStringLiteral("pathLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pathLabel->sizePolicy().hasHeightForWidth());
        pathLabel->setSizePolicy(sizePolicy);
        pathLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pathLabel->setOpenExternalLinks(true);

        horizontalLayout->addWidget(pathLabel);

        horizontalLayout->setStretch(7, 1);

        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(UatFrame);

        QMetaObject::connectSlotsByName(UatFrame);
    } // setupUi

    void retranslateUi(QFrame *UatFrame)
    {
        UatFrame->setWindowTitle(QApplication::translate("UatFrame", "Frame", 0));
        hintLabel->setText(QString());
#ifndef QT_NO_TOOLTIP
        newToolButton->setToolTip(QApplication::translate("UatFrame", "Create a new entry.", 0));
#endif // QT_NO_TOOLTIP
        newToolButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        deleteToolButton->setToolTip(QApplication::translate("UatFrame", "Remove this entry.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        copyToolButton->setToolTip(QApplication::translate("UatFrame", "Copy this entry.", 0));
#endif // QT_NO_TOOLTIP
        copyToolButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        moveUpToolButton->setToolTip(QApplication::translate("UatFrame", "Move entry up.", 0));
#endif // QT_NO_TOOLTIP
        moveUpToolButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        moveDownToolButton->setToolTip(QApplication::translate("UatFrame", "Move entry down.", 0));
#endif // QT_NO_TOOLTIP
        moveDownToolButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        clearToolButton->setToolTip(QApplication::translate("UatFrame", "Clear all entries.", 0));
#endif // QT_NO_TOOLTIP
        clearToolButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        copyFromProfileButton->setToolTip(QApplication::translate("UatFrame", "Copy entries from another profile.", 0));
#endif // QT_NO_TOOLTIP
        copyFromProfileButton->setText(QApplication::translate("UatFrame", "Copy from", 0));
        pathLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class UatFrame: public Ui_UatFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UAT_FRAME_H
