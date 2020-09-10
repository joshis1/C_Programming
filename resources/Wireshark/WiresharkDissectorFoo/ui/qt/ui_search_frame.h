/********************************************************************************
** Form generated from reading UI file 'search_frame.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCH_FRAME_H
#define UI_SEARCH_FRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include "accordion_frame.h"
#include "widgets/syntax_line_edit.h"

QT_BEGIN_NAMESPACE

class Ui_SearchFrame
{
public:
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QComboBox *searchInComboBox;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *charEncodingComboBox;
    QCheckBox *caseCheckBox;
    QSpacerItem *horizontalSpacer;
    QComboBox *searchTypeComboBox;
    SyntaxLineEdit *searchLineEdit;
    QPushButton *findButton;
    QPushButton *cancelButton;

    void setupUi(AccordionFrame *SearchFrame)
    {
        if (SearchFrame->objectName().isEmpty())
            SearchFrame->setObjectName(QStringLiteral("SearchFrame"));
        SearchFrame->resize(1026, 34);
        SearchFrame->setFrameShape(QFrame::NoFrame);
        SearchFrame->setFrameShadow(QFrame::Plain);
        horizontalLayout = new QHBoxLayout(SearchFrame);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, 0);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        searchInComboBox = new QComboBox(SearchFrame);
        searchInComboBox->setObjectName(QStringLiteral("searchInComboBox"));

        horizontalLayout->addWidget(searchInComboBox);

        horizontalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        charEncodingComboBox = new QComboBox(SearchFrame);
        charEncodingComboBox->setObjectName(QStringLiteral("charEncodingComboBox"));

        horizontalLayout->addWidget(charEncodingComboBox);

        caseCheckBox = new QCheckBox(SearchFrame);
        caseCheckBox->setObjectName(QStringLiteral("caseCheckBox"));

        horizontalLayout->addWidget(caseCheckBox);

        horizontalSpacer = new QSpacerItem(20, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        searchTypeComboBox = new QComboBox(SearchFrame);
        searchTypeComboBox->setObjectName(QStringLiteral("searchTypeComboBox"));

        horizontalLayout->addWidget(searchTypeComboBox);

        searchLineEdit = new SyntaxLineEdit(SearchFrame);
        searchLineEdit->setObjectName(QStringLiteral("searchLineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(searchLineEdit->sizePolicy().hasHeightForWidth());
        searchLineEdit->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(searchLineEdit);

        findButton = new QPushButton(SearchFrame);
        findButton->setObjectName(QStringLiteral("findButton"));
        findButton->setMaximumSize(QSize(16777215, 27));

        horizontalLayout->addWidget(findButton);

        cancelButton = new QPushButton(SearchFrame);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setMaximumSize(QSize(16777215, 27));

        horizontalLayout->addWidget(cancelButton);

        horizontalLayout->setStretch(0, 3);
        horizontalLayout->setStretch(7, 1);

        retranslateUi(SearchFrame);

        findButton->setDefault(true);


        QMetaObject::connectSlotsByName(SearchFrame);
    } // setupUi

    void retranslateUi(AccordionFrame *SearchFrame)
    {
        SearchFrame->setWindowTitle(QApplication::translate("SearchFrame", "Frame", 0));
        searchInComboBox->clear();
        searchInComboBox->insertItems(0, QStringList()
         << QApplication::translate("SearchFrame", "Packet list", 0)
         << QApplication::translate("SearchFrame", "Packet details", 0)
         << QApplication::translate("SearchFrame", "Packet bytes", 0)
        );
#ifndef QT_NO_TOOLTIP
        searchInComboBox->setToolTip(QApplication::translate("SearchFrame", "<html><head/><body><p>Search the Info column of the packet list (summary pane), decoded packet display labels (tree view pane) or the ASCII-converted packet data (hex view pane).</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        charEncodingComboBox->clear();
        charEncodingComboBox->insertItems(0, QStringList()
         << QApplication::translate("SearchFrame", "Narrow & Wide", 0)
         << QApplication::translate("SearchFrame", "Narrow (UTF-8 / ASCII)", 0)
         << QApplication::translate("SearchFrame", "Wide (UTF-16)", 0)
        );
#ifndef QT_NO_TOOLTIP
        charEncodingComboBox->setToolTip(QApplication::translate("SearchFrame", "<html><head/><body><p>Search for strings containing narrow (UTF-8 and ASCII) or wide (UTF-16) characters.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        caseCheckBox->setText(QApplication::translate("SearchFrame", "Case sensitive", 0));
        searchTypeComboBox->clear();
        searchTypeComboBox->insertItems(0, QStringList()
         << QApplication::translate("SearchFrame", "Display filter", 0)
         << QApplication::translate("SearchFrame", "Hex value", 0)
         << QApplication::translate("SearchFrame", "String", 0)
         << QApplication::translate("SearchFrame", "Regular Expression", 0)
        );
#ifndef QT_NO_TOOLTIP
        searchTypeComboBox->setToolTip(QApplication::translate("SearchFrame", "<html><head/><body><p>Search for data using display filter syntax (e.g. ip.addr==10.1.1.1), a hexadecimal string (e.g. fffffda5), a plain string (e.g. My String) or a regular expression (e.g. colou?r).</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        findButton->setText(QApplication::translate("SearchFrame", "Find", 0));
        cancelButton->setText(QApplication::translate("SearchFrame", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class SearchFrame: public Ui_SearchFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_FRAME_H
