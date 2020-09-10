/********************************************************************************
** Form generated from reading UI file 'module_preferences_scroll_area.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODULE_PREFERENCES_SCROLL_AREA_H
#define UI_MODULE_PREFERENCES_SCROLL_AREA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModulePreferencesScrollArea
{
public:
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;

    void setupUi(QScrollArea *ModulePreferencesScrollArea)
    {
        if (ModulePreferencesScrollArea->objectName().isEmpty())
            ModulePreferencesScrollArea->setObjectName(QStringLiteral("ModulePreferencesScrollArea"));
        ModulePreferencesScrollArea->resize(400, 300);
        ModulePreferencesScrollArea->setFrameShape(QFrame::NoFrame);
        ModulePreferencesScrollArea->setFrameShadow(QFrame::Plain);
        ModulePreferencesScrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ModulePreferencesScrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 400, 300));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        ModulePreferencesScrollArea->setWidget(scrollAreaWidgetContents);

        retranslateUi(ModulePreferencesScrollArea);

        QMetaObject::connectSlotsByName(ModulePreferencesScrollArea);
    } // setupUi

    void retranslateUi(QScrollArea *ModulePreferencesScrollArea)
    {
        ModulePreferencesScrollArea->setWindowTitle(QApplication::translate("ModulePreferencesScrollArea", "ScrollArea", 0));
    } // retranslateUi

};

namespace Ui {
    class ModulePreferencesScrollArea: public Ui_ModulePreferencesScrollArea {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODULE_PREFERENCES_SCROLL_AREA_H
