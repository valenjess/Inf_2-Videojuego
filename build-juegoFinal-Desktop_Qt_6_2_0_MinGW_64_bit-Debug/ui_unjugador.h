/********************************************************************************
** Form generated from reading UI file 'unjugador.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UNJUGADOR_H
#define UI_UNJUGADOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_unJugador
{
public:
    QRadioButton *ISesionButton;
    QRadioButton *RegistrarButton;

    void setupUi(QWidget *unJugador)
    {
        if (unJugador->objectName().isEmpty())
            unJugador->setObjectName(QString::fromUtf8("unJugador"));
        unJugador->resize(229, 253);
        ISesionButton = new QRadioButton(unJugador);
        ISesionButton->setObjectName(QString::fromUtf8("ISesionButton"));
        ISesionButton->setGeometry(QRect(60, 60, 91, 31));
        RegistrarButton = new QRadioButton(unJugador);
        RegistrarButton->setObjectName(QString::fromUtf8("RegistrarButton"));
        RegistrarButton->setGeometry(QRect(60, 100, 91, 31));

        retranslateUi(unJugador);

        QMetaObject::connectSlotsByName(unJugador);
    } // setupUi

    void retranslateUi(QWidget *unJugador)
    {
        unJugador->setWindowTitle(QCoreApplication::translate("unJugador", "Form", nullptr));
        ISesionButton->setText(QCoreApplication::translate("unJugador", "Iniciar Sesion", nullptr));
        RegistrarButton->setText(QCoreApplication::translate("unJugador", "Registrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class unJugador: public Ui_unJugador {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UNJUGADOR_H
