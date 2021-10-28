#ifndef UNREG_H
#define UNREG_H

#include <QWidget>
#include <QMessageBox>
#include <QFile>

#include "unjugador.h"
#include "jugarosalir.h"

using namespace std;

namespace Ui {
class unReg;
}

class unReg : public QWidget
{
    Q_OBJECT

public:
    explicit unReg(QWidget *parent = nullptr);
    ~unReg();

private slots:
    void on_RegresarButton_clicked();

    void on_RegistrarseButton_clicked();

private:
    Ui::unReg *ui;
    QString ArchivoData = "../juegoFinal/BD/DataUnJugador.txt";
    vector<array<QString,6>> DataU;
    bool NoRegis = true;
    int Pos = 0;
};

#endif // UNREG_H
