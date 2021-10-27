/********************************************************************************
** Form generated from reading UI file 'oneregis.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ONEREGIS_H
#define UI_ONEREGIS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OneRegis
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *NJugador;
    QLineEdit *Contra;
    QPushButton *RegresarButton;
    QPushButton *RegistrarseButton;

    void setupUi(QWidget *OneRegis)
    {
        if (OneRegis->objectName().isEmpty())
            OneRegis->setObjectName(QString::fromUtf8("OneRegis"));
        OneRegis->resize(264, 213);
        label = new QLabel(OneRegis);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 10, 61, 16));
        label_2 = new QLabel(OneRegis);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 50, 91, 16));
        label_3 = new QLabel(OneRegis);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 105, 61, 16));
        NJugador = new QLineEdit(OneRegis);
        NJugador->setObjectName(QString::fromUtf8("NJugador"));
        NJugador->setGeometry(QRect(140, 50, 113, 21));
        Contra = new QLineEdit(OneRegis);
        Contra->setObjectName(QString::fromUtf8("Contra"));
        Contra->setGeometry(QRect(140, 100, 113, 21));
        Contra->setEchoMode(QLineEdit::Password);
        RegresarButton = new QPushButton(OneRegis);
        RegresarButton->setObjectName(QString::fromUtf8("RegresarButton"));
        RegresarButton->setGeometry(QRect(30, 150, 80, 22));
        RegistrarseButton = new QPushButton(OneRegis);
        RegistrarseButton->setObjectName(QString::fromUtf8("RegistrarseButton"));
        RegistrarseButton->setGeometry(QRect(140, 150, 80, 22));

        retranslateUi(OneRegis);

        QMetaObject::connectSlotsByName(OneRegis);
    } // setupUi

    void retranslateUi(QWidget *OneRegis)
    {
        OneRegis->setWindowTitle(QCoreApplication::translate("OneRegis", "Form", nullptr));
        label->setText(QCoreApplication::translate("OneRegis", "-Registro-", nullptr));
        label_2->setText(QCoreApplication::translate("OneRegis", "Nombre Jugador", nullptr));
        label_3->setText(QCoreApplication::translate("OneRegis", "Contrase\303\261a", nullptr));
        RegresarButton->setText(QCoreApplication::translate("OneRegis", "Regresar", nullptr));
        RegistrarseButton->setText(QCoreApplication::translate("OneRegis", "Registrarse", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OneRegis: public Ui_OneRegis {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ONEREGIS_H
