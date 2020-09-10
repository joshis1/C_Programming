/********************************************************************************
** Form generated from reading UI file 'bluetooth_att_server_attributes_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BLUETOOTH_ATT_SERVER_ATTRIBUTES_DIALOG_H
#define UI_BLUETOOTH_ATT_SERVER_ATTRIBUTES_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_BluetoothAttServerAttributesDialog
{
public:
    QAction *actionCopy_Cell;
    QAction *actionCopy_Rows;
    QAction *actionCopy_All;
    QAction *actionSave_as_image;
    QAction *actionMark_Unmark_Row;
    QAction *actionMark_Unmark_Cell;
    QVBoxLayout *verticalLayout;
    QTreeWidget *tableTreeWidget;
    QHBoxLayout *horizontalLayout;
    QComboBox *interfaceComboBox;
    QComboBox *deviceComboBox;
    QCheckBox *removeDuplicatesCheckBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *BluetoothAttServerAttributesDialog)
    {
        if (BluetoothAttServerAttributesDialog->objectName().isEmpty())
            BluetoothAttServerAttributesDialog->setObjectName(QStringLiteral("BluetoothAttServerAttributesDialog"));
        BluetoothAttServerAttributesDialog->resize(880, 477);
        BluetoothAttServerAttributesDialog->setBaseSize(QSize(0, 0));
        actionCopy_Cell = new QAction(BluetoothAttServerAttributesDialog);
        actionCopy_Cell->setObjectName(QStringLiteral("actionCopy_Cell"));
        actionCopy_Rows = new QAction(BluetoothAttServerAttributesDialog);
        actionCopy_Rows->setObjectName(QStringLiteral("actionCopy_Rows"));
        actionCopy_All = new QAction(BluetoothAttServerAttributesDialog);
        actionCopy_All->setObjectName(QStringLiteral("actionCopy_All"));
        actionSave_as_image = new QAction(BluetoothAttServerAttributesDialog);
        actionSave_as_image->setObjectName(QStringLiteral("actionSave_as_image"));
        actionMark_Unmark_Row = new QAction(BluetoothAttServerAttributesDialog);
        actionMark_Unmark_Row->setObjectName(QStringLiteral("actionMark_Unmark_Row"));
        actionMark_Unmark_Cell = new QAction(BluetoothAttServerAttributesDialog);
        actionMark_Unmark_Cell->setObjectName(QStringLiteral("actionMark_Unmark_Cell"));
        verticalLayout = new QVBoxLayout(BluetoothAttServerAttributesDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableTreeWidget = new QTreeWidget(BluetoothAttServerAttributesDialog);
        tableTreeWidget->setObjectName(QStringLiteral("tableTreeWidget"));
        tableTreeWidget->setContextMenuPolicy(Qt::CustomContextMenu);
        tableTreeWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);
        tableTreeWidget->setTextElideMode(Qt::ElideMiddle);
        tableTreeWidget->setRootIsDecorated(false);
        tableTreeWidget->setItemsExpandable(false);
        tableTreeWidget->setSortingEnabled(true);
        tableTreeWidget->header()->setCascadingSectionResizes(false);
        tableTreeWidget->header()->setHighlightSections(false);
        tableTreeWidget->header()->setProperty("showSortIndicator", QVariant(true));

        verticalLayout->addWidget(tableTreeWidget);

        horizontalLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        horizontalLayout->setSpacing(-1);
#endif
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout->setContentsMargins(-1, -1, -1, 0);
        interfaceComboBox = new QComboBox(BluetoothAttServerAttributesDialog);
        interfaceComboBox->setObjectName(QStringLiteral("interfaceComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(interfaceComboBox->sizePolicy().hasHeightForWidth());
        interfaceComboBox->setSizePolicy(sizePolicy);
        interfaceComboBox->setMinimumSize(QSize(350, 0));

        horizontalLayout->addWidget(interfaceComboBox);

        deviceComboBox = new QComboBox(BluetoothAttServerAttributesDialog);
        deviceComboBox->setObjectName(QStringLiteral("deviceComboBox"));
        deviceComboBox->setEnabled(true);
        sizePolicy.setHeightForWidth(deviceComboBox->sizePolicy().hasHeightForWidth());
        deviceComboBox->setSizePolicy(sizePolicy);
        deviceComboBox->setMinimumSize(QSize(325, 0));
        deviceComboBox->setBaseSize(QSize(0, 0));
        deviceComboBox->setMouseTracking(false);
        deviceComboBox->setFocusPolicy(Qt::WheelFocus);
        deviceComboBox->setAcceptDrops(false);
        deviceComboBox->setLayoutDirection(Qt::LeftToRight);
        deviceComboBox->setDuplicatesEnabled(false);
        deviceComboBox->setFrame(true);
        deviceComboBox->setModelColumn(0);

        horizontalLayout->addWidget(deviceComboBox);

        removeDuplicatesCheckBox = new QCheckBox(BluetoothAttServerAttributesDialog);
        removeDuplicatesCheckBox->setObjectName(QStringLiteral("removeDuplicatesCheckBox"));
        removeDuplicatesCheckBox->setChecked(true);

        horizontalLayout->addWidget(removeDuplicatesCheckBox);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(BluetoothAttServerAttributesDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(BluetoothAttServerAttributesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), BluetoothAttServerAttributesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), BluetoothAttServerAttributesDialog, SLOT(reject()));

        deviceComboBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(BluetoothAttServerAttributesDialog);
    } // setupUi

    void retranslateUi(QDialog *BluetoothAttServerAttributesDialog)
    {
        BluetoothAttServerAttributesDialog->setWindowTitle(QApplication::translate("BluetoothAttServerAttributesDialog", "Bluetooth ATT Server Attributes", 0));
        actionCopy_Cell->setText(QApplication::translate("BluetoothAttServerAttributesDialog", "Copy Cell", 0));
        actionCopy_Rows->setText(QApplication::translate("BluetoothAttServerAttributesDialog", "Copy Rows", 0));
        actionCopy_All->setText(QApplication::translate("BluetoothAttServerAttributesDialog", "Copy All", 0));
        actionSave_as_image->setText(QApplication::translate("BluetoothAttServerAttributesDialog", "Save as image", 0));
        actionMark_Unmark_Row->setText(QApplication::translate("BluetoothAttServerAttributesDialog", "Mark/Unmark Row", 0));
#ifndef QT_NO_TOOLTIP
        actionMark_Unmark_Row->setToolTip(QApplication::translate("BluetoothAttServerAttributesDialog", "Mark/Unmark Row", 0));
#endif // QT_NO_TOOLTIP
        actionMark_Unmark_Row->setShortcut(QApplication::translate("BluetoothAttServerAttributesDialog", "CtrlM", 0));
        actionMark_Unmark_Cell->setText(QApplication::translate("BluetoothAttServerAttributesDialog", "Mark/Unmark Cell", 0));
        QTreeWidgetItem *___qtreewidgetitem = tableTreeWidget->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("BluetoothAttServerAttributesDialog", "UUID Name", 0));
        ___qtreewidgetitem->setText(1, QApplication::translate("BluetoothAttServerAttributesDialog", "UUID", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("BluetoothAttServerAttributesDialog", "Handle", 0));
        interfaceComboBox->clear();
        interfaceComboBox->insertItems(0, QStringList()
         << QApplication::translate("BluetoothAttServerAttributesDialog", "All Interfaces", 0)
        );
        deviceComboBox->clear();
        deviceComboBox->insertItems(0, QStringList()
         << QApplication::translate("BluetoothAttServerAttributesDialog", "All Devices", 0)
        );
        removeDuplicatesCheckBox->setText(QApplication::translate("BluetoothAttServerAttributesDialog", "Remove duplicates", 0));
    } // retranslateUi

};

namespace Ui {
    class BluetoothAttServerAttributesDialog: public Ui_BluetoothAttServerAttributesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BLUETOOTH_ATT_SERVER_ATTRIBUTES_DIALOG_H
