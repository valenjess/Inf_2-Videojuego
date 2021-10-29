#include "enemigoprincipal.h"

EnemigoPrincipal::EnemigoPrincipal(int _PosX, int _PosY, int _tiempo, QString _RutImg)
{
    filas = 0;
    columnas = 0;

    PosX=_PosX;
    PosY=_PosY;

    RutImg = _RutImg;

    pixmap = new QPixmap(RutImg);


    ancho = 167;
    alto = 100;

    *pixmap=pixmap->scaled(4*ancho,alto);

    tiempo= _tiempo;
}

QRectF EnemigoPrincipal::boundingRect() const
{
     return QRectF(-ancho/2,-alto/2, ancho, alto);
}

void EnemigoPrincipal::paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *)
{
    painter->drawPixmap(-ancho/2,-alto/2,*pixmap,columnas,filas,ancho,alto);
    //setPos(PosX,PosY);
}

void EnemigoPrincipal::animacion()
{
    //qDebug()<<columnas;
    if (columnas >= 668 ){
        //qDebug()<<"hola";
        columnas = 0;

    }
    else if( sprid % 40 == 0){
        columnas += 167;

    }
    setPixmap(*pixmap);

    sprid++;
    int time=300/tiempo;


    if(timeP % time == 0){
        PosY += 2;

        setPos(PosX,-PosY);

    }
    else if(timeP > time){
        timeP=1;
    }
    timeP++;



}
