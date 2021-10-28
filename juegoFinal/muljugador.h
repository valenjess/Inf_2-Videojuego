#ifndef MULJUGADOR_H
#define MULJUGADOR_H

#include <QWidget>

#include "dosini.h"
#include "dosreg.h"
#include "modojuego.h"

namespace Ui {
class mulJugador;
}

class mulJugador : public QWidget
{
    Q_OBJECT

public:
    explicit mulJugador(QWidget *parent = nullptr);
    ~mulJugador();

private slots:
    void on_ISesionButton_clicked();

    void on_RegistrarseButton_clicked();

    void on_RegresarButton_clicked();

private:
    Ui::mulJugador *ui;
};

#endif // MULJUGADOR_H
