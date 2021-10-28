#ifndef UNINI_H
#define UNINI_H


#include <QWidget>
#include <QDebug>
#include <QFile>
#include <QString>
#include <QMessageBox>

#include "unjugador.h"
#include "juego.h"


using namespace std;

namespace Ui {
class UnIni;
}

class UnIni : public QWidget
{
    Q_OBJECT

public:
    explicit UnIni(QWidget *parent = nullptr);
    ~UnIni();

private slots:
    void on_RegresarButton_clicked();

    void on_IniciarButton_clicked();

private:
    Ui::UnIni *ui;

    QString ArchivoData = "../juegoFinal/BD/DataUnJugador.txt";
    vector<array<QString,6>> Data;
    int index = -1;

    Juego *PantJuego;
};

#endif // UNINI_H
