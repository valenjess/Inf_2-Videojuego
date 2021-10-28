/********************************************************************************
** Form generated from reading UI file 'jugar_o_fin.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JUGAR_O_FIN_H
#define UI_JUGAR_O_FIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Jugar_o_Fin
{
public:
    QPushButton *JugarButton;
    QPushButton *SalirButton;

    void setupUi(QWidget *Jugar_o_Fin)
    {
        if (Jugar_o_Fin->objectName().isEmpty())
            Jugar_o_Fin->setObjectName(QString::fromUtf8("Jugar_o_Fin"));
        Jugar_o_Fin->resize(273, 286);
        JugarButton = new QPushButton(Jugar_o_Fin);
        JugarButton->setObjectName(QString::fromUtf8("JugarButton"));
        JugarButton->setGeometry(QRect(90, 50, 91, 51));
        SalirButton = new QPushButton(Jugar_o_Fin);
        SalirButton->setObjectName(QString::fromUtf8("SalirButton"));
        SalirButton->setGeometry(QRect(90, 130, 91, 51));

        retranslateUi(Jugar_o_Fin);

        QMetaObject::connectSlotsByName(Jugar_o_Fin);
    } // setupUi

    void retranslateUi(QWidget *Jugar_o_Fin)
    {
        Jugar_o_Fin->setWindowTitle(QCoreApplication::translate("Jugar_o_Fin", "Form", nullptr));
        JugarButton->setText(QCoreApplication::translate("Jugar_o_Fin", "Jugar", nullptr));
        SalirButton->setText(QCoreApplication::translate("Jugar_o_Fin", "Salir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Jugar_o_Fin: public Ui_Jugar_o_Fin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JUGAR_O_FIN_H
