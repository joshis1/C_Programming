/********************************************************************************
** Form generated from reading UI file 'main_window_preferences_frame.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_PREFERENCES_FRAME_H
#define UI_MAIN_WINDOW_PREFERENCES_FRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MainWindowPreferencesFrame
{
public:
    QVBoxLayout *verticalLayout;
    QCheckBox *geometryCheckBox;
    QLabel *label;
    QGridLayout *gridLayout;
    QRadioButton *foStyleSpecifiedRadioButton;
    QLineEdit *foStyleSpecifiedLineEdit;
    QPushButton *foStyleSpecifiedPushButton;
    QRadioButton *foStyleLastOpenedRadioButton;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *maxFilterLineEdit;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *maxRecentLineEdit;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *confirmUnsavedCheckBox;
    QCheckBox *displayAutoCompleteCheckBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QComboBox *mainToolbarComboBox;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QComboBox *languageComboBox;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer;
    QButtonGroup *openInButtonGroup;

    void setupUi(QFrame *MainWindowPreferencesFrame)
    {
        if (MainWindowPreferencesFrame->objectName().isEmpty())
            MainWindowPreferencesFrame->setObjectName(QStringLiteral("MainWindowPreferencesFrame"));
        MainWindowPreferencesFrame->resize(405, 416);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindowPreferencesFrame->sizePolicy().hasHeightForWidth());
        MainWindowPreferencesFrame->setSizePolicy(sizePolicy);
        MainWindowPreferencesFrame->setMinimumSize(QSize(0, 384));
        MainWindowPreferencesFrame->setFrameShape(QFrame::NoFrame);
        MainWindowPreferencesFrame->setFrameShadow(QFrame::Plain);
        MainWindowPreferencesFrame->setLineWidth(0);
        verticalLayout = new QVBoxLayout(MainWindowPreferencesFrame);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        geometryCheckBox = new QCheckBox(MainWindowPreferencesFrame);
        geometryCheckBox->setObjectName(QStringLiteral("geometryCheckBox"));

        verticalLayout->addWidget(geometryCheckBox);

        label = new QLabel(MainWindowPreferencesFrame);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        foStyleSpecifiedRadioButton = new QRadioButton(MainWindowPreferencesFrame);
        openInButtonGroup = new QButtonGroup(MainWindowPreferencesFrame);
        openInButtonGroup->setObjectName(QStringLiteral("openInButtonGroup"));
        openInButtonGroup->addButton(foStyleSpecifiedRadioButton);
        foStyleSpecifiedRadioButton->setObjectName(QStringLiteral("foStyleSpecifiedRadioButton"));

        gridLayout->addWidget(foStyleSpecifiedRadioButton, 1, 0, 1, 1);

        foStyleSpecifiedLineEdit = new QLineEdit(MainWindowPreferencesFrame);
        foStyleSpecifiedLineEdit->setObjectName(QStringLiteral("foStyleSpecifiedLineEdit"));

        gridLayout->addWidget(foStyleSpecifiedLineEdit, 1, 1, 1, 1);

        foStyleSpecifiedPushButton = new QPushButton(MainWindowPreferencesFrame);
        foStyleSpecifiedPushButton->setObjectName(QStringLiteral("foStyleSpecifiedPushButton"));

        gridLayout->addWidget(foStyleSpecifiedPushButton, 1, 2, 1, 1);

        foStyleLastOpenedRadioButton = new QRadioButton(MainWindowPreferencesFrame);
        openInButtonGroup->addButton(foStyleLastOpenedRadioButton);
        foStyleLastOpenedRadioButton->setObjectName(QStringLiteral("foStyleLastOpenedRadioButton"));

        gridLayout->addWidget(foStyleLastOpenedRadioButton, 0, 0, 1, 3);


        verticalLayout->addLayout(gridLayout);

        label_2 = new QLabel(MainWindowPreferencesFrame);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        maxFilterLineEdit = new QLineEdit(MainWindowPreferencesFrame);
        maxFilterLineEdit->setObjectName(QStringLiteral("maxFilterLineEdit"));

        horizontalLayout_2->addWidget(maxFilterLineEdit);

        label_3 = new QLabel(MainWindowPreferencesFrame);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalLayout_2->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        maxRecentLineEdit = new QLineEdit(MainWindowPreferencesFrame);
        maxRecentLineEdit->setObjectName(QStringLiteral("maxRecentLineEdit"));

        horizontalLayout_3->addWidget(maxRecentLineEdit);

        label_4 = new QLabel(MainWindowPreferencesFrame);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        horizontalLayout_3->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout_3);

        confirmUnsavedCheckBox = new QCheckBox(MainWindowPreferencesFrame);
        confirmUnsavedCheckBox->setObjectName(QStringLiteral("confirmUnsavedCheckBox"));

        verticalLayout->addWidget(confirmUnsavedCheckBox);

        displayAutoCompleteCheckBox = new QCheckBox(MainWindowPreferencesFrame);
        displayAutoCompleteCheckBox->setObjectName(QStringLiteral("displayAutoCompleteCheckBox"));

        verticalLayout->addWidget(displayAutoCompleteCheckBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_5 = new QLabel(MainWindowPreferencesFrame);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout->addWidget(label_5);

        mainToolbarComboBox = new QComboBox(MainWindowPreferencesFrame);
        mainToolbarComboBox->setObjectName(QStringLiteral("mainToolbarComboBox"));

        horizontalLayout->addWidget(mainToolbarComboBox);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_7 = new QLabel(MainWindowPreferencesFrame);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_6->addWidget(label_7);

        languageComboBox = new QComboBox(MainWindowPreferencesFrame);
        languageComboBox->setObjectName(QStringLiteral("languageComboBox"));
        languageComboBox->setEnabled(true);
        languageComboBox->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_6->addWidget(languageComboBox);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_6);

        verticalSpacer = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(MainWindowPreferencesFrame);

        QMetaObject::connectSlotsByName(MainWindowPreferencesFrame);
    } // setupUi

    void retranslateUi(QFrame *MainWindowPreferencesFrame)
    {
        MainWindowPreferencesFrame->setWindowTitle(QApplication::translate("MainWindowPreferencesFrame", "Frame", 0));
#ifndef QT_NO_TOOLTIP
        geometryCheckBox->setToolTip(QApplication::translate("MainWindowPreferencesFrame", "Checking this will save the size, position, and maximized state of the main window.", 0));
#endif // QT_NO_TOOLTIP
        geometryCheckBox->setText(QApplication::translate("MainWindowPreferencesFrame", "Remember main window size and placement", 0));
        label->setText(QApplication::translate("MainWindowPreferencesFrame", "Open files in", 0));
        foStyleSpecifiedRadioButton->setText(QApplication::translate("MainWindowPreferencesFrame", "This folder:", 0));
        foStyleSpecifiedPushButton->setText(QApplication::translate("MainWindowPreferencesFrame", "Browse\342\200\246", 0));
        foStyleLastOpenedRadioButton->setText(QApplication::translate("MainWindowPreferencesFrame", "The most recently used folder", 0));
        label_2->setText(QApplication::translate("MainWindowPreferencesFrame", "Show up to", 0));
        label_3->setText(QApplication::translate("MainWindowPreferencesFrame", "filter entries", 0));
        label_4->setText(QApplication::translate("MainWindowPreferencesFrame", "recent files", 0));
        confirmUnsavedCheckBox->setText(QApplication::translate("MainWindowPreferencesFrame", "Confirm unsaved capture files", 0));
        displayAutoCompleteCheckBox->setText(QApplication::translate("MainWindowPreferencesFrame", "Display autocompletion for filter text", 0));
        label_5->setText(QApplication::translate("MainWindowPreferencesFrame", "Main toolbar style:", 0));
        mainToolbarComboBox->clear();
        mainToolbarComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindowPreferencesFrame", "Icons only", 0)
         << QApplication::translate("MainWindowPreferencesFrame", "Text only", 0)
         << QApplication::translate("MainWindowPreferencesFrame", "Icons & Text", 0)
        );
        label_7->setText(QApplication::translate("MainWindowPreferencesFrame", "Language: ", 0));
        languageComboBox->clear();
        languageComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindowPreferencesFrame", "Use system setting", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class MainWindowPreferencesFrame: public Ui_MainWindowPreferencesFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_PREFERENCES_FRAME_H
