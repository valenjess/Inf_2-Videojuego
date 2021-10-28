/********************************************************************************
** Form generated from reading UI file 'dosreg.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOSREG_H
#define UI_DOSREG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dosReg
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *Jug1;
    QLineEdit *Jug2;
    QLineEdit *Contra;
    QPushButton *RegresarButton;
    QPushButton *JugarButton;

    void setupUi(QWidget *dosReg)
    {
        if (dosReg->objectName().isEmpty())
            dosReg->setObjectName(QString::fromUtf8("dosReg"));
        dosReg->resize(264, 300);
        label = new QLabel(dosReg);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 40, 61, 16));
        label_2 = new QLabel(dosReg);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 70, 61, 16));
        label_3 = new QLabel(dosReg);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 100, 61, 16));
        Jug1 = new QLineEdit(dosReg);
        Jug1->setObjectName(QString::fromUtf8("Jug1"));
        Jug1->setGeometry(QRect(120, 40, 113, 21));
        Jug2 = new QLineEdit(dosReg);
        Jug2->setObjectName(QString::fromUtf8("Jug2"));
        Jug2->setGeometry(QRect(120, 70, 113, 21));
        Contra = new QLineEdit(dosReg);
        Contra->setObjectName(QString::fromUtf8("Contra"));
        Contra->setGeometry(QRect(120, 100, 113, 21));
        RegresarButton = new QPushButton(dosReg);
        RegresarButton->setObjectName(QString::fromUtf8("RegresarButton"));
        RegresarButton->setGeometry(QRect(20, 170, 80, 22));
        JugarButton = new QPushButton(dosReg);
        JugarButton->setObjectName(QString::fromUtf8("JugarButton"));
        JugarButton->setGeometry(QRect(130, 170, 80, 22));

        retranslateUi(dosReg);

        QMetaObject::connectSlotsByName(dosReg);
    } // setupUi

    void retranslateUi(QWidget *dosReg)
    {
        dosReg->setWindowTitle(QCoreApplication::translate("dosReg", "Form", nullptr));
        label->setText(QCoreApplication::translate("dosReg", "Jugador 1", nullptr));
        label_2->setText(QCoreApplication::translate("dosReg", "Jugador 2", nullptr));
        label_3->setText(QCoreApplication::translate("dosReg", "Contrase\303\261a", nullptr));
        RegresarButton->setText(QCoreApplication::translate("dosReg", "Regresar", nullptr));
        JugarButton->setText(QCoreApplication::translate("dosReg", "Jugar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dosReg: public Ui_dosReg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOSREG_H
