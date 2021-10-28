#include "jugarosalir.h"
#include "ui_jugarosalir.h"

jugarOSalir::jugarOSalir(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::jugarOSalir)
{
    ui->setupUi(this);
}

jugarOSalir::~jugarOSalir()
{
    delete ui;
}
