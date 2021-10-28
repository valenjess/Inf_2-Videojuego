/********************************************************************************
** Form generated from reading UI file 'unini.ui'
**
** Created by: Qt User Interface Compiler version 6.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UNINI_H
#define UI_UNINI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UnIni
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *Jugador;
    QLineEdit *Contra;
    QPushButton *RegresarButton;
    QPushButton *IniciarButton;

    void setupUi(QWidget *UnIni)
    {
        if (UnIni->objectName().isEmpty())
            UnIni->setObjectName(QString::fromUtf8("UnIni"));
        UnIni->resize(232, 274);
        label = new QLabel(UnIni);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 50, 61, 16));
        label_2 = new QLabel(UnIni);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 90, 61, 21));
        Jugador = new QLineEdit(UnIni);
        Jugador->setObjectName(QString::fromUtf8("Jugador"));
        Jugador->setGeometry(QRect(100, 50, 113, 21));
        Contra = new QLineEdit(UnIni);
        Contra->setObjectName(QString::fromUtf8("Contra"));
        Contra->setGeometry(QRect(100, 90, 113, 21));
        RegresarButton = new QPushButton(UnIni);
        RegresarButton->setObjectName(QString::fromUtf8("RegresarButton"));
        RegresarButton->setGeometry(QRect(20, 160, 80, 22));
        IniciarButton = new QPushButton(UnIni);
        IniciarButton->setObjectName(QString::fromUtf8("IniciarButton"));
        IniciarButton->setGeometry(QRect(130, 160, 80, 22));

        retranslateUi(UnIni);

        QMetaObject::connectSlotsByName(UnIni);
    } // setupUi

    void retranslateUi(QWidget *UnIni)
    {
        UnIni->setWindowTitle(QCoreApplication::translate("UnIni", "Form", nullptr));
        label->setText(QCoreApplication::translate("UnIni", "Jugador ", nullptr));
        label_2->setText(QCoreApplication::translate("UnIni", "Contrase\303\261a", nullptr));
        RegresarButton->setText(QCoreApplication::translate("UnIni", "Regresar", nullptr));
        IniciarButton->setText(QCoreApplication::translate("UnIni", "Iniciar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UnIni: public Ui_UnIni {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UNINI_H
