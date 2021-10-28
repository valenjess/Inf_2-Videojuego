/********************************************************************************
** Form generated from reading UI file 'muljugador.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MULJUGADOR_H
#define UI_MULJUGADOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mulJugador
{
public:
    QRadioButton *ISesionButton;
    QRadioButton *RegistrarseButton;
    QPushButton *RegresarButton;

    void setupUi(QWidget *mulJugador)
    {
        if (mulJugador->objectName().isEmpty())
            mulJugador->setObjectName(QString::fromUtf8("mulJugador"));
        mulJugador->resize(241, 300);
        ISesionButton = new QRadioButton(mulJugador);
        ISesionButton->setObjectName(QString::fromUtf8("ISesionButton"));
        ISesionButton->setGeometry(QRect(60, 40, 91, 20));
        RegistrarseButton = new QRadioButton(mulJugador);
        RegistrarseButton->setObjectName(QString::fromUtf8("RegistrarseButton"));
        RegistrarseButton->setGeometry(QRect(60, 90, 85, 20));
        RegresarButton = new QPushButton(mulJugador);
        RegresarButton->setObjectName(QString::fromUtf8("RegresarButton"));
        RegresarButton->setGeometry(QRect(70, 150, 80, 22));

        retranslateUi(mulJugador);

        QMetaObject::connectSlotsByName(mulJugador);
    } // setupUi

    void retranslateUi(QWidget *mulJugador)
    {
        mulJugador->setWindowTitle(QCoreApplication::translate("mulJugador", "Form", nullptr));
        ISesionButton->setText(QCoreApplication::translate("mulJugador", "Iniciar Sesion", nullptr));
        RegistrarseButton->setText(QCoreApplication::translate("mulJugador", "Registrarse", nullptr));
        RegresarButton->setText(QCoreApplication::translate("mulJugador", "Regresar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mulJugador: public Ui_mulJugador {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MULJUGADOR_H
