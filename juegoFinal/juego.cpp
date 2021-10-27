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
        Enemigo = new EnemigoPrincipal(j*20,0,3);
         //muro.push_back(scene->addRect(j*20,0,20,20));
       scene->addItem(Enemigo);
        muro.push_back(Enemigo);

    }
    //Enemigo = new EnemigoPrincipal();
     //muro.push_back(scene->addRect(j*20,0,20,20));
    //scene->addItem(Enemigo);
    //muro.push_back(Enemigo);

    //muro.push_back(scene->addRect(40,-30,20,20));
    //saltarin = new PersonajePrincipal(scene,muro);
    //scene->addItem(saltarin);


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
   // saltarin->movimiento();
    for (auto EnePrincipal: muro){
        EnePrincipal->animacion();
    }


}

void Juego::keyPressEvent(QKeyEvent *e)
{
        int PosX = 0;
        switch (e->key()){
        case Qt::Key_A:
            PosX=saltarin->getX();
            saltarin->setX(PosX-2);
            saltarin->setFilas(111);


            break;

        case Qt::Key_D:
            PosX=saltarin->getX();
            saltarin->setX(PosX+2);
            saltarin->setFilas(74);

            break;

        }

    //ui->graphicsView->setSceneRect(PosX-100,PosY-100,700,700);
}
