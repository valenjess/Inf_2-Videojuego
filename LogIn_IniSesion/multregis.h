#ifndef MULTREGIS_H
#define MULTREGIS_H

#include <QWidget>

#include "multigamer.h"


namespace Ui {
class MultRegis;
}

class MultRegis : public QWidget
{
    Q_OBJECT

public:
    explicit MultRegis(QWidget *parent = nullptr);
    ~MultRegis();

private slots:
    void on_RegresarButton_clicked();

    void on_JugarButton_clicked();

private:
    Ui::MultRegis *ui;
    QString ArchivoData = "../LogIn_IniSesion/BD/DataMultiJugador.txt";
    vector<array<QString,10>> Data;
};

#endif // MULTREGIS_H
