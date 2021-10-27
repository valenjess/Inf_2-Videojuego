#include "jugar_o_fin.h"
#include "ui_jugar_o_fin.h"

Jugar_o_Fin::Jugar_o_Fin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Jugar_o_Fin)
{
    ui->setupUi(this);
}

Jugar_o_Fin::~Jugar_o_Fin()
{
    delete ui;
}

void Jugar_o_Fin::on_JugarButton_clicked()
{

}


void Jugar_o_Fin::on_SalirButton_clicked()
{

}

