/********************************************************************************
** Form generated from reading UI file 'dosini.ui'
**
** Created by: Qt User Interface Compiler version 6.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOSINI_H
#define UI_DOSINI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dosIni
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *JugUno;
    QLineEdit *JugDos;
    QLineEdit *Contra;
    QPushButton *RegresarButton;
    QPushButton *IniciarButton;

    void setupUi(QWidget *dosIni)
    {
        if (dosIni->objectName().isEmpty())
            dosIni->setObjectName(QString::fromUtf8("dosIni"));
        dosIni->resize(238, 273);
        label = new QLabel(dosIni);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 40, 61, 16));
        label_2 = new QLabel(dosIni);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 80, 61, 16));
        label_3 = new QLabel(dosIni);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 120, 71, 16));
        JugUno = new QLineEdit(dosIni);
        JugUno->setObjectName(QString::fromUtf8("JugUno"));
        JugUno->setGeometry(QRect(100, 40, 113, 21));
        JugDos = new QLineEdit(dosIni);
        JugDos->setObjectName(QString::fromUtf8("JugDos"));
        JugDos->setGeometry(QRect(100, 80, 113, 21));
        Contra = new QLineEdit(dosIni);
        Contra->setObjectName(QString::fromUtf8("Contra"));
        Contra->setGeometry(QRect(100, 120, 113, 21));
        RegresarButton = new QPushButton(dosIni);
        RegresarButton->setObjectName(QString::fromUtf8("RegresarButton"));
        RegresarButton->setGeometry(QRect(20, 200, 80, 22));
        IniciarButton = new QPushButton(dosIni);
        IniciarButton->setObjectName(QString::fromUtf8("IniciarButton"));
        IniciarButton->setGeometry(QRect(120, 200, 80, 22));

        retranslateUi(dosIni);

        QMetaObject::connectSlotsByName(dosIni);
    } // setupUi

    void retranslateUi(QWidget *dosIni)
    {
        dosIni->setWindowTitle(QCoreApplication::translate("dosIni", "Form", nullptr));
        label->setText(QCoreApplication::translate("dosIni", "Jugador 1", nullptr));
        label_2->setText(QCoreApplication::translate("dosIni", "Jugador 2", nullptr));
        label_3->setText(QCoreApplication::translate("dosIni", "Contrase\303\261a", nullptr));
        RegresarButton->setText(QCoreApplication::translate("dosIni", "Regresar", nullptr));
        IniciarButton->setText(QCoreApplication::translate("dosIni", "Iniciar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dosIni: public Ui_dosIni {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOSINI_H
