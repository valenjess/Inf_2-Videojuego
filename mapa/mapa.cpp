#include "mapa.h"
#include "ui_mapa.h"

mapa::mapa(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::mapa)
{
    ui->setupUi(this);
    scene = new QGraphicsScene;

    QImage img1("../mapa/Images/suelo.jpg");
    QImage img2("../mapa/Images/bloques.jpg");

    pens.push_back(QPen(Qt::darkYellow, 3, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
    pens.push_back(QPen(Qt::blue, 4, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
    pens.push_back(QPen (Qt::gray, 0.1, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
    pens.push_back( QPen (Qt::black, 0.1, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));


    brush1 =  QBrush(img1);
    QBrush brush2(img2);

    leerMapa();

     for (int i = 0;i<24 ;i++ ) {
         for (int j = 0; j<30 ; j++ ) {
             if(Plataformas[i][j]==49){
                 map.append( ( scene->addRect(j*80,i*50,80,50,pens.at(2),brush2) ));
             }
             else if (Plataformas[i][j]==50) {
                 map.append((scene->addRect(j*80,i*50,80,50,pens.at(1))));
             }
             else if (Plataformas[i][j]==51){
                 map.append((scene->addRect(j*80,i*50,80,50,pens.at(0))));
             }
             else if (Plataformas[i][j]==52){
                 map.append((scene->addRect(j*80,i*50,80,50,pens.at(3),brush1)));
             }
         }
     }


    ui->graphicsView->setScene(scene);
    ui->graphicsView->show();
}

void mapa::leerMapa()
{
    string line = "";
    string data;

    ifstream file;
    int  cont = 0;

    file.open(filename);

    if(!file.is_open()){
        exit(1);
    }

    while(!file.eof()){
        getline(file,line);
        data += line;
        for (int elem=0; elem<line.size() ;elem++ ) {
            Plataformas[cont][elem] = line[elem];
        }

        cont++;
    }
    file.close();

}

void mapa::ConstruirMapa()
{

}

mapa::~mapa()
{
    delete ui;
}

