/********************************************************************************
** Form generated from reading UI file 'juego.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JUEGO_H
#define UI_JUEGO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Juego
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QLCDNumber *lcdNumber;
    QLabel *label;
    QLabel *label_2;
    QLCDNumber *VidasLCD;
    QPushButton *SalirButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Juego)
    {
        if (Juego->objectName().isEmpty())
            Juego->setObjectName(QString::fromUtf8("Juego"));
        Juego->setEnabled(true);
        Juego->resize(800, 600);
        centralwidget = new QWidget(Juego);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(10, 40, 711, 511));
        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(643, 52, 61, 21));
#if QT_CONFIG(accessibility)
        lcdNumber->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        lcdNumber->setDigitCount(3);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(530, 40, 111, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Consolas")});
        font.setPointSize(20);
        label->setFont(font);
        label->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextEditable|Qt::TextEditorInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(530, 80, 81, 20));
        label_2->setFont(font);
        label_2->setContextMenuPolicy(Qt::CustomContextMenu);
        label_2->setText(QString::fromUtf8("Vidas"));
        label_2->setTextInteractionFlags(Qt::NoTextInteraction);
        VidasLCD = new QLCDNumber(centralwidget);
        VidasLCD->setObjectName(QString::fromUtf8("VidasLCD"));
        VidasLCD->setGeometry(QRect(640, 80, 64, 23));
        SalirButton = new QPushButton(centralwidget);
        SalirButton->setObjectName(QString::fromUtf8("SalirButton"));
        SalirButton->setGeometry(QRect(630, 110, 80, 22));
        Juego->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Juego);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        Juego->setMenuBar(menubar);
        statusbar = new QStatusBar(Juego);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Juego->setStatusBar(statusbar);

        retranslateUi(Juego);

        QMetaObject::connectSlotsByName(Juego);
    } // setupUi

    void retranslateUi(QMainWindow *Juego)
    {
        Juego->setWindowTitle(QCoreApplication::translate("Juego", "Juego", nullptr));
        label->setText(QCoreApplication::translate("Juego", "Tiempo", nullptr));
        SalirButton->setText(QCoreApplication::translate("Juego", "SALIR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Juego: public Ui_Juego {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JUEGO_H
