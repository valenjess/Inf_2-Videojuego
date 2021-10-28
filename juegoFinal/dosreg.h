#ifndef DOSREG_H
#define DOSREG_H

#include <QWidget>

#include "muljugador.h"

using namespace std;

namespace Ui {
class dosReg;
}

class dosReg : public QWidget
{
    Q_OBJECT

public:
    explicit dosReg(QWidget *parent = nullptr);
    ~dosReg();

private slots:
    void on_RegresarButton_clicked();

    void on_JugarButton_clicked();

private:
    Ui::dosReg *ui;

    QString ArchivoData = "../juegoFinal/BD/DataDosJugadores.txt";
    vector<array<QString,10>> Data;
};

#endif // DOSREG_H
