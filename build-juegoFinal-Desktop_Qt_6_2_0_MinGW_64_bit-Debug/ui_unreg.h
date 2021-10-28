/********************************************************************************
** Form generated from reading UI file 'unreg.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UNREG_H
#define UI_UNREG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_unReg
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *Usuario;
    QLineEdit *Contra;
    QPushButton *RegresarButton;
    QPushButton *RegistrarseButton;

    void setupUi(QWidget *unReg)
    {
        if (unReg->objectName().isEmpty())
            unReg->setObjectName(QString::fromUtf8("unReg"));
        unReg->resize(262, 300);
        label = new QLabel(unReg);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 50, 51, 21));
        label_2 = new QLabel(unReg);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 90, 61, 21));
        Usuario = new QLineEdit(unReg);
        Usuario->setObjectName(QString::fromUtf8("Usuario"));
        Usuario->setGeometry(QRect(110, 50, 113, 21));
        Contra = new QLineEdit(unReg);
        Contra->setObjectName(QString::fromUtf8("Contra"));
        Contra->setGeometry(QRect(110, 90, 113, 21));
        RegresarButton = new QPushButton(unReg);
        RegresarButton->setObjectName(QString::fromUtf8("RegresarButton"));
        RegresarButton->setGeometry(QRect(30, 150, 80, 22));
        RegistrarseButton = new QPushButton(unReg);
        RegistrarseButton->setObjectName(QString::fromUtf8("RegistrarseButton"));
        RegistrarseButton->setGeometry(QRect(140, 150, 80, 22));

        retranslateUi(unReg);

        QMetaObject::connectSlotsByName(unReg);
    } // setupUi

    void retranslateUi(QWidget *unReg)
    {
        unReg->setWindowTitle(QCoreApplication::translate("unReg", "Form", nullptr));
        label->setText(QCoreApplication::translate("unReg", "Usuario", nullptr));
        label_2->setText(QCoreApplication::translate("unReg", "Contrase\303\261a", nullptr));
        RegresarButton->setText(QCoreApplication::translate("unReg", "Regresar", nullptr));
        RegistrarseButton->setText(QCoreApplication::translate("unReg", "Registrarse", nullptr));
    } // retranslateUi

};

namespace Ui {
    class unReg: public Ui_unReg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UNREG_H
