/********************************************************************************
** Form generated from reading UI file 'onegamer.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ONEGAMER_H
#define UI_ONEGAMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_onegamer
{
public:

    void setupUi(QWidget *onegamer)
    {
        if (onegamer->objectName().isEmpty())
            onegamer->setObjectName(QString::fromUtf8("onegamer"));
        onegamer->resize(400, 300);

        retranslateUi(onegamer);

        QMetaObject::connectSlotsByName(onegamer);
    } // setupUi

    void retranslateUi(QWidget *onegamer)
    {
        onegamer->setWindowTitle(QCoreApplication::translate("onegamer", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class onegamer: public Ui_onegamer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ONEGAMER_H
