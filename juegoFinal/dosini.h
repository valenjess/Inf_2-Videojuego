#ifndef DOSINI_H
#define DOSINI_H

#include <QWidget>
#include <QFile>
#include <QMessageBox>

#include "muljugador.h"

using namespace std;

namespace Ui {
class dosIni;
}

class dosIni : public QWidget
{
    Q_OBJECT

public:
    explicit dosIni(QWidget *parent = nullptr);
    ~dosIni();

private slots:
    void on_RegresarButton_clicked();

    void on_IniciarButton_clicked();

private:
    Ui::dosIni *ui;
    QString ArchivoData = "../juegoFinal/BD/DataDosJugadores.txt";
    vector<array<QString,10>> Data;
    int index = -1;
    bool aqui = true;
};

#endif // DOSINI_H
