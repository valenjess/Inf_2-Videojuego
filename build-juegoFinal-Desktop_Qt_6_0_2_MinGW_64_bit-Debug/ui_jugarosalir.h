/********************************************************************************
** Form generated from reading UI file 'jugarosalir.ui'
**
** Created by: Qt User Interface Compiler version 6.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JUGAROSALIR_H
#define UI_JUGAROSALIR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_jugarOSalir
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *jugarOSalir)
    {
        if (jugarOSalir->objectName().isEmpty())
            jugarOSalir->setObjectName(QString::fromUtf8("jugarOSalir"));
        jugarOSalir->resize(287, 300);
        pushButton = new QPushButton(jugarOSalir);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(100, 60, 80, 22));
        pushButton_2 = new QPushButton(jugarOSalir);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(100, 120, 80, 22));

        retranslateUi(jugarOSalir);

        QMetaObject::connectSlotsByName(jugarOSalir);
    } // setupUi

    void retranslateUi(QWidget *jugarOSalir)
    {
        jugarOSalir->setWindowTitle(QCoreApplication::translate("jugarOSalir", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("jugarOSalir", "Jugar", nullptr));
        pushButton_2->setText(QCoreApplication::translate("jugarOSalir", "Salir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class jugarOSalir: public Ui_jugarOSalir {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JUGAROSALIR_H
