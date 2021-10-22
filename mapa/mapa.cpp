#include "mapa.h"
#include "ui_mapa.h"

mapa::mapa(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::mapa)
{
    ui->setupUi(this);
    scene = new QGraphicsScene;

    QPen pen1(Qt::darkYellow, 3, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin);
    QPen pen2(Qt::blue, 4, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin);
    QPen pen3(Qt::gray, 3, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin);

   /* Plataformas = {
        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
    };*/

    for (int i = 0;i<20 ;i++ ) {
        for (int j = 0; j<30 ; j++ ) {
            if(Plataformas[i][j]==1){
              map.append( ( scene->addRect(j*60,i*40,60,40,pen3) ));
            }
            else if (Plataformas[i][j]==2) {
                map.append((scene->addRect(j*60,i*40,60,40,pen2)));
            }
            else if (Plataformas[i][j]==3){
                map.append((scene->addRect(j*60,i*40,60,40,pen1)));
            }



        }

    }

    ui->graphicsView->setScene(scene);
    ui->graphicsView->show();
}

mapa::~mapa()
{
    delete ui;
}

