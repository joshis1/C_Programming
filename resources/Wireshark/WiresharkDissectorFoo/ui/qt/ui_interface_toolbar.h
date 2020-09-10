/********************************************************************************
** Form generated from reading UI file 'interface_toolbar.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERFACE_TOOLBAR_H
#define UI_INTERFACE_TOOLBAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_InterfaceToolbar
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *interfacesLabel;
    QComboBox *interfacesComboBox;
    QHBoxLayout *leftLayout;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *rightLayout;

    void setupUi(QFrame *InterfaceToolbar)
    {
        if (InterfaceToolbar->objectName().isEmpty())
            InterfaceToolbar->setObjectName(QStringLiteral("InterfaceToolbar"));
        InterfaceToolbar->resize(600, 32);
        InterfaceToolbar->setFrameShape(QFrame::NoFrame);
        InterfaceToolbar->setFrameShadow(QFrame::Plain);
        horizontalLayout = new QHBoxLayout(InterfaceToolbar);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, 0);
        interfacesLabel = new QLabel(InterfaceToolbar);
        interfacesLabel->setObjectName(QStringLiteral("interfacesLabel"));

        horizontalLayout->addWidget(interfacesLabel);

        interfacesComboBox = new QComboBox(InterfaceToolbar);
        interfacesComboBox->setObjectName(QStringLiteral("interfacesComboBox"));
        interfacesComboBox->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout->addWidget(interfacesComboBox);

        leftLayout = new QHBoxLayout();
        leftLayout->setObjectName(QStringLiteral("leftLayout"));

        horizontalLayout->addLayout(leftLayout);

        horizontalSpacer = new QSpacerItem(40, 5, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        rightLayout = new QHBoxLayout();
        rightLayout->setObjectName(QStringLiteral("rightLayout"));

        horizontalLayout->addLayout(rightLayout);


        retranslateUi(InterfaceToolbar);

        QMetaObject::connectSlotsByName(InterfaceToolbar);
    } // setupUi

    void retranslateUi(QFrame *InterfaceToolbar)
    {
        InterfaceToolbar->setWindowTitle(QApplication::translate("InterfaceToolbar", "Frame", 0));
#ifndef QT_NO_TOOLTIP
        interfacesLabel->setToolTip(QApplication::translate("InterfaceToolbar", "Select interface", 0));
#endif // QT_NO_TOOLTIP
        interfacesLabel->setText(QApplication::translate("InterfaceToolbar", "Interface", 0));
#ifndef QT_NO_TOOLTIP
        interfacesComboBox->setToolTip(QApplication::translate("InterfaceToolbar", "Select interface", 0));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class InterfaceToolbar: public Ui_InterfaceToolbar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERFACE_TOOLBAR_H
