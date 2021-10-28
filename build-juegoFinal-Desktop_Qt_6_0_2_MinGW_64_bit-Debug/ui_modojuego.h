/********************************************************************************
** Form generated from reading UI file 'modojuego.ui'
**
** Created by: Qt User Interface Compiler version 6.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODOJUEGO_H
#define UI_MODOJUEGO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_modoJuego
{
public:
    QWidget *centralwidget;
    QPushButton *UnJugButton;
    QPushButton *DosJugButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *modoJuego)
    {
        if (modoJuego->objectName().isEmpty())
            modoJuego->setObjectName(QString::fromUtf8("modoJuego"));
        modoJuego->resize(266, 265);
        centralwidget = new QWidget(modoJuego);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        UnJugButton = new QPushButton(centralwidget);
        UnJugButton->setObjectName(QString::fromUtf8("UnJugButton"));
        UnJugButton->setGeometry(QRect(90, 30, 101, 41));
        DosJugButton = new QPushButton(centralwidget);
        DosJugButton->setObjectName(QString::fromUtf8("DosJugButton"));
        DosJugButton->setGeometry(QRect(90, 80, 101, 41));
        modoJuego->setCentralWidget(centralwidget);
        menubar = new QMenuBar(modoJuego);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 266, 21));
        modoJuego->setMenuBar(menubar);
        statusbar = new QStatusBar(modoJuego);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        modoJuego->setStatusBar(statusbar);

        retranslateUi(modoJuego);

        QMetaObject::connectSlotsByName(modoJuego);
    } // setupUi

    void retranslateUi(QMainWindow *modoJuego)
    {
        modoJuego->setWindowTitle(QCoreApplication::translate("modoJuego", "MainWindow", nullptr));
        UnJugButton->setText(QCoreApplication::translate("modoJuego", "Un Jugador", nullptr));
        DosJugButton->setText(QCoreApplication::translate("modoJuego", "Dos Jugadores", nullptr));
    } // retranslateUi

};

namespace Ui {
    class modoJuego: public Ui_modoJuego {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODOJUEGO_H
