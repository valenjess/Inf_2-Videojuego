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
