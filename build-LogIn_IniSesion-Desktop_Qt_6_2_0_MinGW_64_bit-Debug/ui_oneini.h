/********************************************************************************
** Form generated from reading UI file 'oneini.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ONEINI_H
#define UI_ONEINI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OneIni
{
public:
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *Usu;
    QLineEdit *Contra;
    QCheckBox *Iniciar;
    QPushButton *RegresarButton;

    void setupUi(QWidget *OneIni)
    {
        if (OneIni->objectName().isEmpty())
            OneIni->setObjectName(QString::fromUtf8("OneIni"));
        OneIni->resize(252, 273);
        label_3 = new QLabel(OneIni);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 60, 47, 14));
        label_4 = new QLabel(OneIni);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 100, 61, 20));
        Usu = new QLineEdit(OneIni);
        Usu->setObjectName(QString::fromUtf8("Usu"));
        Usu->setGeometry(QRect(100, 60, 113, 21));
        Contra = new QLineEdit(OneIni);
        Contra->setObjectName(QString::fromUtf8("Contra"));
        Contra->setGeometry(QRect(100, 100, 113, 21));
        Contra->setEchoMode(QLineEdit::Password);
        Iniciar = new QCheckBox(OneIni);
        Iniciar->setObjectName(QString::fromUtf8("Iniciar"));
        Iniciar->setGeometry(QRect(60, 160, 141, 21));
        RegresarButton = new QPushButton(OneIni);
        RegresarButton->setObjectName(QString::fromUtf8("RegresarButton"));
        RegresarButton->setGeometry(QRect(80, 230, 80, 22));

        retranslateUi(OneIni);

        QMetaObject::connectSlotsByName(OneIni);
    } // setupUi

    void retranslateUi(QWidget *OneIni)
    {
        OneIni->setWindowTitle(QCoreApplication::translate("OneIni", "Form", nullptr));
        label_3->setText(QCoreApplication::translate("OneIni", "Usuario", nullptr));
        label_4->setText(QCoreApplication::translate("OneIni", "Contrase\303\261a", nullptr));
        Iniciar->setText(QCoreApplication::translate("OneIni", "Que Inicie la aventura", nullptr));
        RegresarButton->setText(QCoreApplication::translate("OneIni", "Regresar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OneIni: public Ui_OneIni {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ONEINI_H
