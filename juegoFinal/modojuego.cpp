#include "modojuego.h"
#include "ui_modojuego.h"

modoJuego::modoJuego(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::modoJuego)
{
    ui->setupUi(this);
}

modoJuego::~modoJuego()
{
    delete ui;
}

void modoJuego::on_UnJugButton_clicked()
{
    unJugador *UnJug = new unJugador(0);
    UnJug->show();
    close();
}


void modoJuego::on_DosJugButton_clicked()
{
    mulJugador *DosJug = new mulJugador(0);
    DosJug->show();
    close();

}

