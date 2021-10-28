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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OneGamer
{
public:
    QRadioButton *ISesionButton;
    QRadioButton *RegistrarButton;

    void setupUi(QWidget *OneGamer)
    {
        if (OneGamer->objectName().isEmpty())
            OneGamer->setObjectName(QString::fromUtf8("OneGamer"));
        OneGamer->resize(268, 270);
        ISesionButton = new QRadioButton(OneGamer);
        ISesionButton->setObjectName(QString::fromUtf8("ISesionButton"));
        ISesionButton->setGeometry(QRect(90, 70, 91, 21));
        RegistrarButton = new QRadioButton(OneGamer);
        RegistrarButton->setObjectName(QString::fromUtf8("RegistrarButton"));
        RegistrarButton->setGeometry(QRect(90, 110, 85, 20));

        retranslateUi(OneGamer);

        QMetaObject::connectSlotsByName(OneGamer);
    } // setupUi

    void retranslateUi(QWidget *OneGamer)
    {
        OneGamer->setWindowTitle(QCoreApplication::translate("OneGamer", "Form", nullptr));
        ISesionButton->setText(QCoreApplication::translate("OneGamer", "Iniciar Sesi\303\263n", nullptr));
        RegistrarButton->setText(QCoreApplication::translate("OneGamer", "Registrarse", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OneGamer: public Ui_OneGamer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ONEGAMER_H
