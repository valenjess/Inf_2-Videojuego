/********************************************************************************
** Form generated from reading UI file 'multini.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MULTINI_H
#define UI_MULTINI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MultIni
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *Jug1;
    QLineEdit *Jug2;
    QLabel *label_3;
    QLineEdit *Contra;
    QPushButton *RegresarButton;
    QPushButton *IniciarButton;

    void setupUi(QWidget *MultIni)
    {
        if (MultIni->objectName().isEmpty())
            MultIni->setObjectName(QString::fromUtf8("MultIni"));
        MultIni->resize(253, 282);
        label = new QLabel(MultIni);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 30, 61, 16));
        label_2 = new QLabel(MultIni);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 70, 61, 16));
        Jug1 = new QLineEdit(MultIni);
        Jug1->setObjectName(QString::fromUtf8("Jug1"));
        Jug1->setGeometry(QRect(100, 30, 113, 21));
        Jug2 = new QLineEdit(MultIni);
        Jug2->setObjectName(QString::fromUtf8("Jug2"));
        Jug2->setGeometry(QRect(100, 70, 113, 21));
        label_3 = new QLabel(MultIni);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 130, 61, 16));
        Contra = new QLineEdit(MultIni);
        Contra->setObjectName(QString::fromUtf8("Contra"));
        Contra->setGeometry(QRect(100, 130, 113, 21));
        RegresarButton = new QPushButton(MultIni);
        RegresarButton->setObjectName(QString::fromUtf8("RegresarButton"));
        RegresarButton->setGeometry(QRect(10, 200, 80, 22));
        IniciarButton = new QPushButton(MultIni);
        IniciarButton->setObjectName(QString::fromUtf8("IniciarButton"));
        IniciarButton->setGeometry(QRect(120, 200, 80, 22));

        retranslateUi(MultIni);

        QMetaObject::connectSlotsByName(MultIni);
    } // setupUi

    void retranslateUi(QWidget *MultIni)
    {
        MultIni->setWindowTitle(QCoreApplication::translate("MultIni", "Form", nullptr));
        label->setText(QCoreApplication::translate("MultIni", "Jugador 1", nullptr));
        label_2->setText(QCoreApplication::translate("MultIni", "Jugador 2", nullptr));
        label_3->setText(QCoreApplication::translate("MultIni", "Contrase\303\261a", nullptr));
        RegresarButton->setText(QCoreApplication::translate("MultIni", "Regresar", nullptr));
        IniciarButton->setText(QCoreApplication::translate("MultIni", "Iniciar Juego", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MultIni: public Ui_MultIni {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MULTINI_H
