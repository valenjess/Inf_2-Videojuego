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
    saltarin = new PersonajePrincipal();
    scene->addItem(saltarin);


    QTimer *timer = new QTimer(this);
    connect( timer, SIGNAL(timeout()),this, SLOT(Mov()));
    timer->start(5);

}

Juego::~Juego()
{
    delete ui;
}


void Juego::Mov()
{
    saltarin->movimiento();


}

void Juego::keyPressEvent(QKeyEvent *e)
{
        int PosX = 0;
        switch (e->key()){
        case Qt::Key_A:
            PosX=saltarin->getX();
            saltarin->setX(PosX-2);


            break;

        case Qt::Key_D:
            PosX=saltarin->getX();
            saltarin->setX(PosX+2);

            break;

        }

    //ui->graphicsView->setSceneRect(PosX-100,PosY-100,700,700);
}
