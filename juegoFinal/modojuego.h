#ifndef MODOJUEGO_H
#define MODOJUEGO_H

#include <QMainWindow>
#include "unjugador.h"
#include "muljugador.h"

namespace Ui {
class modoJuego;
}

class modoJuego : public QMainWindow
{
    Q_OBJECT

public:
    explicit modoJuego(QWidget *parent = nullptr);
    ~modoJuego();

private slots:
    void on_UnJugButton_clicked();

    void on_DosJugButton_clicked();

private:
    Ui::modoJuego *ui;
};

#endif // MODOJUEGO_H
