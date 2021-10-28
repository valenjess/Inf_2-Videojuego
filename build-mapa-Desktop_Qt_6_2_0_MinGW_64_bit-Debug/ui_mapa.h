/********************************************************************************
** Form generated from reading UI file 'mapa.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAPA_H
#define UI_MAPA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mapa
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *mapa)
    {
        if (mapa->objectName().isEmpty())
            mapa->setObjectName(QString::fromUtf8("mapa"));
        mapa->resize(800, 600);
        centralwidget = new QWidget(mapa);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(-20, 30, 761, 551));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(graphicsView->sizePolicy().hasHeightForWidth());
        graphicsView->setSizePolicy(sizePolicy);
        graphicsView->setAutoFillBackground(true);
        graphicsView->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/images/pared1.jpg);\n"
"background-color: rgb(170, 85, 0);"));
        mapa->setCentralWidget(centralwidget);
        menubar = new QMenuBar(mapa);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        mapa->setMenuBar(menubar);
        statusbar = new QStatusBar(mapa);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        mapa->setStatusBar(statusbar);

        retranslateUi(mapa);

        QMetaObject::connectSlotsByName(mapa);
    } // setupUi

    void retranslateUi(QMainWindow *mapa)
    {
        mapa->setWindowTitle(QCoreApplication::translate("mapa", "mapa", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mapa: public Ui_mapa {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAPA_H
