/********************************************************************************
** Form generated from reading UI file 'packet_format_group_box.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PACKET_FORMAT_GROUP_BOX_H
#define UI_PACKET_FORMAT_GROUP_BOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PacketFormatGroupBox
{
public:
    QVBoxLayout *verticalLayout;
    QCheckBox *summaryCheckBox;
    QCheckBox *includeColumnHeadingsCheckBox;
    QCheckBox *detailsCheckBox;
    QRadioButton *allCollapsedButton;
    QRadioButton *asDisplayedButton;
    QRadioButton *allExpandedButton;
    QCheckBox *bytesCheckBox;

    void setupUi(QGroupBox *PacketFormatGroupBox)
    {
        if (PacketFormatGroupBox->objectName().isEmpty())
            PacketFormatGroupBox->setObjectName(QStringLiteral("PacketFormatGroupBox"));
        PacketFormatGroupBox->resize(400, 199);
        verticalLayout = new QVBoxLayout(PacketFormatGroupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        summaryCheckBox = new QCheckBox(PacketFormatGroupBox);
        summaryCheckBox->setObjectName(QStringLiteral("summaryCheckBox"));
        summaryCheckBox->setChecked(true);

        verticalLayout->addWidget(summaryCheckBox);

        includeColumnHeadingsCheckBox = new QCheckBox(PacketFormatGroupBox);
        includeColumnHeadingsCheckBox->setObjectName(QStringLiteral("includeColumnHeadingsCheckBox"));
        includeColumnHeadingsCheckBox->setChecked(true);

        verticalLayout->addWidget(includeColumnHeadingsCheckBox);

        detailsCheckBox = new QCheckBox(PacketFormatGroupBox);
        detailsCheckBox->setObjectName(QStringLiteral("detailsCheckBox"));
        detailsCheckBox->setChecked(true);

        verticalLayout->addWidget(detailsCheckBox);

        allCollapsedButton = new QRadioButton(PacketFormatGroupBox);
        allCollapsedButton->setObjectName(QStringLiteral("allCollapsedButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(allCollapsedButton->sizePolicy().hasHeightForWidth());
        allCollapsedButton->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(allCollapsedButton);

        asDisplayedButton = new QRadioButton(PacketFormatGroupBox);
        asDisplayedButton->setObjectName(QStringLiteral("asDisplayedButton"));
        sizePolicy.setHeightForWidth(asDisplayedButton->sizePolicy().hasHeightForWidth());
        asDisplayedButton->setSizePolicy(sizePolicy);
        asDisplayedButton->setChecked(true);

        verticalLayout->addWidget(asDisplayedButton);

        allExpandedButton = new QRadioButton(PacketFormatGroupBox);
        allExpandedButton->setObjectName(QStringLiteral("allExpandedButton"));
        sizePolicy.setHeightForWidth(allExpandedButton->sizePolicy().hasHeightForWidth());
        allExpandedButton->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(allExpandedButton);

        bytesCheckBox = new QCheckBox(PacketFormatGroupBox);
        bytesCheckBox->setObjectName(QStringLiteral("bytesCheckBox"));

        verticalLayout->addWidget(bytesCheckBox);


        retranslateUi(PacketFormatGroupBox);

        QMetaObject::connectSlotsByName(PacketFormatGroupBox);
    } // setupUi

    void retranslateUi(QGroupBox *PacketFormatGroupBox)
    {
        PacketFormatGroupBox->setWindowTitle(QApplication::translate("PacketFormatGroupBox", "GroupBox", 0));
        PacketFormatGroupBox->setTitle(QApplication::translate("PacketFormatGroupBox", "Packet Format", 0));
#ifndef QT_NO_TOOLTIP
        summaryCheckBox->setToolTip(QApplication::translate("PacketFormatGroupBox", "<html><head/><body><p>Packet summary lines similar to the packet list</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        summaryCheckBox->setText(QApplication::translate("PacketFormatGroupBox", "Summary line", 0));
        includeColumnHeadingsCheckBox->setText(QApplication::translate("PacketFormatGroupBox", "Include column headings", 0));
#ifndef QT_NO_TOOLTIP
        detailsCheckBox->setToolTip(QApplication::translate("PacketFormatGroupBox", "<html><head/><body><p>Packet details similar to the protocol tree</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        detailsCheckBox->setText(QApplication::translate("PacketFormatGroupBox", "Details:", 0));
#ifndef QT_NO_TOOLTIP
        allCollapsedButton->setToolTip(QApplication::translate("PacketFormatGroupBox", "<html><head/><body><p>Export only top-level packet detail items</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        allCollapsedButton->setText(QApplication::translate("PacketFormatGroupBox", "All co&llapsed", 0));
#ifndef QT_NO_TOOLTIP
        asDisplayedButton->setToolTip(QApplication::translate("PacketFormatGroupBox", "<html><head/><body><p>Expand and collapse packet details as they are currently displayed.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        asDisplayedButton->setText(QApplication::translate("PacketFormatGroupBox", "As displa&yed", 0));
#ifndef QT_NO_TOOLTIP
        allExpandedButton->setToolTip(QApplication::translate("PacketFormatGroupBox", "<html><head/><body><p>Export all packet detail items</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        allExpandedButton->setText(QApplication::translate("PacketFormatGroupBox", "All e&xpanded", 0));
#ifndef QT_NO_TOOLTIP
        bytesCheckBox->setToolTip(QApplication::translate("PacketFormatGroupBox", "<html><head/><body><p>Export a hexdump of the packet data similar to the packet bytes view</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        bytesCheckBox->setText(QApplication::translate("PacketFormatGroupBox", "Bytes", 0));
    } // retranslateUi

};

namespace Ui {
    class PacketFormatGroupBox: public Ui_PacketFormatGroupBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PACKET_FORMAT_GROUP_BOX_H
