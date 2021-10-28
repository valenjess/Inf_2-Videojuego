#include "juego.h"
#include "ui_juego.h"

Juego::Juego(int level, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Juego)
{
    ui->setupUi(this);

    Nivel=level;

    RutaLevels ={"../juegoFinal/BD/Nivel1.txt",
                 "../juegoFinal/BD/Nivel2.txt",
                 "../juegoFinal/BD/Nivel3.txt"};


    //Definicion escena de niveles
    for(int i =0; i< 3;i++){
        QGraphicsScene *nivel;
        nivel=new QGraphicsScene();
        niveles[i]=nivel;
    }

    // poner los elementos en la escena
    lecturaMapa();

    //colocar la escena
    ui->graphicsView->setScene(niveles[Nivel-1]);
    ui->graphicsView->show();









   // int widthScene = ui->graphicsView->width()-5;
 //   int heightScene = ui->graphicsView->height()-5;
   // scene = new QGraphicsScene(-widthScene/2,-heightScene/2,ui->graphicsView->width(),ui->graphicsView->height());
    //ui->graphicsView->setScene(scene);


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

void Juego::lecturaMapa()
{
    for(int i =0; i < 3; i++)
    {
    string line = "";
    string data;

    ifstream file;
    int  cont = 0;

    file.open(RutaLevels[i]);

    if(!file.is_open()){
        exit(1);
    }

    while(!file.eof()){
        getline(file,line);
        data += line;
        int longitud=line.size();

        for (int elem=0; elem<longitud ;elem++ ) {
            Plataformas[cont][elem] = line[elem];
        }

        cont++;
    }
    file.close();

    QImage img1("../mapa/Images/suelo.jpg");//piso
    QImage img2(":/Imagenes/MuroNormal.jpg");//noramles
    QImage img3(":/Imagenes/MuroRojo.jpg");//fuego
    QImage img4(":/Imagenes/MuroAzul.jpg");//agua

    pens.push_back(QPen(Qt::darkYellow, 3, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
    pens.push_back(QPen(Qt::blue, 4, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
    pens.push_back(QPen (Qt::gray, 0.1, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
    pens.push_back( QPen (Qt::black, 0.1, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));


    QBrush brush_P(img1);//piso
    QBrush brush_N(img2);
    QBrush brush_F(img3);
    QBrush brush_A(img4);

    vector <QGraphicsRectItem*> normal;
    vector <QGraphicsRectItem*> agua;
    vector <QGraphicsRectItem*> fuego;
    vector <QGraphicsRectItem*> piso;



<<<<<<< HEAD
     for (int i = 0;i<24 ;i++ ) {
         for (int j = 0; j<30 ; j++ ) {
             if(Plataformas[i][j]==49){ //normales
                 normal.push_back(niveles[i]->addRect(j*80,i*50,80,50,pens.at(2),brush_N) );
             }
             else if (Plataformas[i][j]==50) {//agua
                 agua.push_back((niveles[i]->addRect(j*80,i*50,80,50,pens.at(1),brush_A)));
             }
             else if (Plataformas[i][j]==51){//fuego
                 fuego.push_back((niveles[i]->addRect(j*80,i*50,80,50,pens.at(0),brush_F)));
             }
             else if (Plataformas[i][j]==52){//piso
                 piso.push_back((niveles[i]->addRect(j*80,i*50,80,50,pens.at(3),brush_P)));
             }
             else if (Plataformas[i][j]==53){//PersonajePrincipal


                 //muro.push_back(scene->addRect(40,-30,20,20));
                 saltarin = new PersonajePrincipal(niveles[i],normal,fuego, agua ,piso);
                 scene->addItem(saltarin);
             }
         }
     }
=======
    for (int l = 0;l<24 ;l++ ) {
        for (int j = 0; j<30 ; j++ ) {
            if(Plataformas[l][j]==49){ //normales
                normal.push_back(niveles[i]->addRect(j*80,-(l*50),80,50,pens.at(2),brush_N) );
            }
            else if (Plataformas[l][j]==50) {//agua
                agua.push_back((niveles[i]->addRect(j*80,-(l*50),80,50,pens.at(1),brush_A)));
            }
            else if (Plataformas[l][j]==51){//fuego
                fuego.push_back((niveles[i]->addRect(j*80,-(l*50),80,50,pens.at(0),brush_F)));
            }
            else if (Plataformas[l][j]==52){//piso
                piso.push_back((niveles[i]->addRect(j*80,-(l*50),80,50,pens.at(3),brush_P)));
            }
            else if (Plataformas[l][j]==53){//PersonajePrincipal

                //muro.push_back(scene->addRect(40,-30,20,20));
                saltarin = new PersonajePrincipal(niveles[i],normal,fuego, agua ,piso,j,l);
                niveles[i]->addItem(saltarin);
            }
        }
    }
>>>>>>> 7a1ab299779ef33b31b753bb485d6f74262ab0fa

     norm[i]=normal;
     azul[i]=agua;
     roj[i]=fuego;
     pi[i]=piso;



    }


}


void Juego::Mov()
{
   saltarin->movimiento();

    //for (auto EnePrincipal: muro){
    //    EnePrincipal->animacion();
    //}


}

void Juego::setNivel(int value)
{
    Nivel = value;
}



void Juego::setDataDos(const vector<array<QString, 10> > &value)
{
    DataDos = value;
}

void Juego::setDataUno(const vector<array<QString, 6> > &value)
{
    DataUno = value;
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

