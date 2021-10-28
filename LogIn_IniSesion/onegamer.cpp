#include "onegamer.h"
#include "ui_onegamer.h"
#include "oneini.h"
#include "oneregis.h"

OneGamer::OneGamer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OneGamer)
{
    ui->setupUi(this);
}


OneGamer::~OneGamer()
{
    delete ui;
}

void OneGamer::on_ISesionButton_clicked()
{
    OneIni *IniSesion = new OneIni(0);
    IniSesion->show();
   // close();
   // this->setVisible(true);
}


void OneGamer::on_RegistrarButton_clicked()
{

    OneRegis *Regis = new OneRegis(0);
    Regis->show();
    close();
}

