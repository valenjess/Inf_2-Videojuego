#include "juego.h"
#include "ui_juego.h"

Juego::Juego(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Juego)
{
    ui->setupUi(this);
    int widthScene = ui->graphicsView->width()-5;
    int heightScene = ui->graphicsView->height()-5;
    scene = new QGraphicsScene(-widthScene/2,-heightScene/2,ui->graphicsView->width(),ui->graphicsView->height());
    ui->graphicsView->setScene(scene);


    for ( int j = 0;j < 5 ; j++){
        scene->addRect(j*20,0,20,20);
    }

    scene->addItem(saltarin);
}

Juego::~Juego()
{
    delete ui;
}

