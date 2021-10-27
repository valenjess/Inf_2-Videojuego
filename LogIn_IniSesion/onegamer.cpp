#include "onegamer.h"
#include "ui_onegamer.h"

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
