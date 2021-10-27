#ifndef ONEREGIS_H
#define ONEREGIS_H

#include "onegamer.h"
#include "oneini.h"
#include "jugar_o_fin.h"

#include <QWidget>
#include <QMessageBox>

namespace Ui {
class OneRegis;
}

class OneRegis : public QWidget
{
    Q_OBJECT

public:
    explicit OneRegis(QWidget *parent = nullptr);
    ~OneRegis();

private slots:
    void on_RegresarButton_clicked();

    void on_RegistrarseButton_clicked();

private:
    Ui::OneRegis *ui;
    QString ArchivoData = "../LogIn_IniSesion/BD/DataUnJugador.txt";
    vector<array<QString,6>> DataU;
    bool NoRegis = true;
    int Pos = 0;
};

#endif // ONEREGIS_H
