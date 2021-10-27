/********************************************************************************
** Form generated from reading UI file 'multregis.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MULTREGIS_H
#define UI_MULTREGIS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MultRegis
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *Jug1;
    QLineEdit *Jug2;
    QPushButton *RegresarButton;
    QLabel *label_3;
    QLineEdit *Contra;
    QPushButton *JugarButton;
    QPushButton *SalirButton;

    void setupUi(QWidget *MultRegis)
    {
        if (MultRegis->objectName().isEmpty())
            MultRegis->setObjectName(QString::fromUtf8("MultRegis"));
        MultRegis->resize(249, 202);
        label = new QLabel(MultRegis);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 61, 16));
        label_2 = new QLabel(MultRegis);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 50, 61, 16));
        Jug1 = new QLineEdit(MultRegis);
        Jug1->setObjectName(QString::fromUtf8("Jug1"));
        Jug1->setGeometry(QRect(90, 20, 113, 21));
        Jug2 = new QLineEdit(MultRegis);
        Jug2->setObjectName(QString::fromUtf8("Jug2"));
        Jug2->setGeometry(QRect(90, 50, 113, 21));
        RegresarButton = new QPushButton(MultRegis);
        RegresarButton->setObjectName(QString::fromUtf8("RegresarButton"));
        RegresarButton->setGeometry(QRect(20, 130, 80, 22));
        label_3 = new QLabel(MultRegis);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 90, 61, 16));
        Contra = new QLineEdit(MultRegis);
        Contra->setObjectName(QString::fromUtf8("Contra"));
        Contra->setGeometry(QRect(90, 80, 113, 21));
        JugarButton = new QPushButton(MultRegis);
        JugarButton->setObjectName(QString::fromUtf8("JugarButton"));
        JugarButton->setGeometry(QRect(140, 130, 80, 22));
        SalirButton = new QPushButton(MultRegis);
        SalirButton->setObjectName(QString::fromUtf8("SalirButton"));
        SalirButton->setGeometry(QRect(80, 170, 80, 22));

        retranslateUi(MultRegis);

        QMetaObject::connectSlotsByName(MultRegis);
    } // setupUi

    void retranslateUi(QWidget *MultRegis)
    {
        MultRegis->setWindowTitle(QCoreApplication::translate("MultRegis", "Form", nullptr));
        label->setText(QCoreApplication::translate("MultRegis", "Jugador 1", nullptr));
        label_2->setText(QCoreApplication::translate("MultRegis", "Jugador 2", nullptr));
        RegresarButton->setText(QCoreApplication::translate("MultRegis", "Regresar", nullptr));
        label_3->setText(QCoreApplication::translate("MultRegis", "Contrase\303\261a", nullptr));
        JugarButton->setText(QCoreApplication::translate("MultRegis", "Jugar", nullptr));
        SalirButton->setText(QCoreApplication::translate("MultRegis", "Salir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MultRegis: public Ui_MultRegis {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MULTREGIS_H
