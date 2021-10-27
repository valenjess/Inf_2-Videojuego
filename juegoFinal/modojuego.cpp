#include "modojuego.h"
#include "ui_modojuego.h"

ModoJuego::ModoJuego(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ModoJuego)
{
    ui->setupUi(this);
}

ModoJuego::~ModoJuego()
{
    delete ui;
}
