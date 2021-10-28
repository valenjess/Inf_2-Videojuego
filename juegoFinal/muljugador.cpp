#include "muljugador.h"
#include "ui_muljugador.h"

mulJugador::mulJugador(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mulJugador)
{
    ui->setupUi(this);
}

mulJugador::~mulJugador()
{
    delete ui;
}

void mulJugador::on_ISesionButton_clicked()
{
    dosIni *muljugador= new dosIni(0);
    muljugador->show();
    close();
}


void mulJugador::on_RegistrarseButton_clicked()
{
    dosReg *muljugador= new dosReg(0);
    muljugador->show();
    close();
}


void mulJugador::on_RegresarButton_clicked()
{
    modoJuego *muljugador = new modoJuego(0);
    muljugador->show();
    close();
}

