#include "multigamer.h"
#include "ui_multigamer.h"

MultiGamer::MultiGamer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MultiGamer)
{
    ui->setupUi(this);
}

MultiGamer::~MultiGamer()
{
    delete ui;
}

void MultiGamer::on_RegresarButton_clicked()
{
    MainWindow *Multigamer = new MainWindow(0);
    Multigamer->show();
    close();
}


void MultiGamer::on_ISesionButton_clicked()
{
    MultIni *MultiGamer = new MultIni(0);
    MultiGamer->show();
    close();
}


void MultiGamer::on_RegistrarseButton_clicked()
{
    MultRegis *MultiGamer = new MultRegis(0);
    MultiGamer->show();
    close();
}

