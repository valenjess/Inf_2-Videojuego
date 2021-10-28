/********************************************************************************
** Form generated from reading UI file 'multigamer.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MULTIGAMER_H
#define UI_MULTIGAMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MultiGamer
{
public:
    QRadioButton *ISesionButton;
    QRadioButton *RegistrarseButton;
    QPushButton *RegresarButton;

    void setupUi(QWidget *MultiGamer)
    {
        if (MultiGamer->objectName().isEmpty())
            MultiGamer->setObjectName(QString::fromUtf8("MultiGamer"));
        MultiGamer->resize(215, 256);
        ISesionButton = new QRadioButton(MultiGamer);
        ISesionButton->setObjectName(QString::fromUtf8("ISesionButton"));
        ISesionButton->setGeometry(QRect(60, 50, 85, 20));
        RegistrarseButton = new QRadioButton(MultiGamer);
        RegistrarseButton->setObjectName(QString::fromUtf8("RegistrarseButton"));
        RegistrarseButton->setGeometry(QRect(60, 90, 85, 20));
        RegresarButton = new QPushButton(MultiGamer);
        RegresarButton->setObjectName(QString::fromUtf8("RegresarButton"));
        RegresarButton->setGeometry(QRect(60, 140, 80, 22));

        retranslateUi(MultiGamer);

        QMetaObject::connectSlotsByName(MultiGamer);
    } // setupUi

    void retranslateUi(QWidget *MultiGamer)
    {
        MultiGamer->setWindowTitle(QCoreApplication::translate("MultiGamer", "Form", nullptr));
        ISesionButton->setText(QCoreApplication::translate("MultiGamer", "Iniciar Sesi\303\263n", nullptr));
        RegistrarseButton->setText(QCoreApplication::translate("MultiGamer", "Registrarse", nullptr));
        RegresarButton->setText(QCoreApplication::translate("MultiGamer", "Regresar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MultiGamer: public Ui_MultiGamer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MULTIGAMER_H
