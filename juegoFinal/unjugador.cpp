#include "unjugador.h"
#include "ui_unjugador.h"

#include "unini.h"
#include "unreg.h"

unJugador::unJugador(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::unJugador)
{
    ui->setupUi(this);
}

unJugador::~unJugador()
{
    delete ui;
}

void unJugador::on_ISesionButton_clicked()
{
    UnIni *IniSesion = new UnIni(0);
    IniSesion->show();
    close();
}


void unJugador::on_RegistrarButton_clicked()
{
    unReg *Regis = new unReg(0);
    Regis->show();
    close();

}

