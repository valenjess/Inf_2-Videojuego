#include "sprites.h"

Sprites::Sprites(QObject *parent) : QObject(parent)
{
    filas = 0;
    columnas = 0;


    pixmap = new QPixmap(":/Imagenes/adventurer-1.3-Sheet.png");

    ancho = 50;
    alto = 37;

}
QRectF Sprites::boundingRect() const
{
    return QRectF(-ancho/2,-alto/2, ancho, alto);
    //return QRectF(-ancho/2,-alto/2,ancho,alto);
    //PosX,PosY,Radio,Radio
}

void Sprites::paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *)
{
    //QPixmap pixMap(":/Mapa/Texturas/rompible.png");
    //pixMap = pixMap.scaled(Radio, Radio);
    //QRectF rectangulo(PosX*Escala, PosY*Escala, Radio*0.06, Radio*Escala);
    //painter->drawPixmap(-ancho/2,-alto/2,*pixmap,columnas,74,ancho,alto);
    painter->drawPixmap(-ancho/2,-alto/2,*pixmap,columnas,74,ancho,alto);

    //painter->setBrush(Qt::blue);
    //painter->drawEllipse(boundingRect());
    setPos(PosX,PosY);
}



void Sprites::Actualizacion()
{
    static float tiempo = 0;

    Theta = atan2(DirY,DirX) ;

    float VoX = VELINI * cos(Theta), VoY = VELINI * sin(Theta);

    X += VoX * tiempo, Y = H + VoY * tiempo - 0.5 * GRAVEDAD * pow(tiempo,2);

    tiempo += 0.01;

    //qDebug()<<tiempo<< "  "<< Y;

    //setPos(X,-Y);
    //setPixmap(*pixmap);

    PosX = X, PosY = -Y;

    if(!scene()->collidingItems(this).isEmpty() and tiempo != 0.01){
        tiempo = 0;
    }

    columnas += 50;
    if (columnas >= 400 ){
        columnas = 0;

    }
    this->update(-ancho/2,-alto/2,ancho,alto);
    //this->update(-ancho/2,-alto/2,ancho,alto);

}
