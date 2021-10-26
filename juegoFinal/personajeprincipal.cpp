#include "personajeprincipal.h"

PersonajePrincipal::PersonajePrincipal(QGraphicsScene *_scene)
{

    filas = 74;
    columnas = 0;

    scene = _scene;


    pixmap = new QPixmap(":/Imagenes/adventurer-1.3-Sheet.png");

    ancho = 32;
    alto = 37;

    //*pixmap=pixmap->scaled(10,10);

}
QRectF PersonajePrincipal::boundingRect() const
{
    return QRectF(-ancho/2,-alto/2, ancho, alto);
    //return QRectF(PosX,PosY,Radio,Radio);
    //PosX,PosY,Radio,Radio
}

void PersonajePrincipal::paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *)
{
    //QPixmap pixMap(":/Mapa/Texturas/rompible.png");
    //pixMap = pixMap.scaled(Radio, Radio);
    //QRectF rectangulo(PosX*Escala, PosY*Escala, Radio*0.06, Radio*Escala);
    //painter->drawPixmap(-ancho/2,-alto/2,*pixmap,columnas,74,ancho,alto);

    painter->drawPixmap(-ancho/2,-alto/2,*pixmap,columnas,filas,ancho,alto);

    //painter->setBrush(Qt::blue);
    //painter->drawEllipse(boundingRect());
    //setPos(PosX,PosY);
}



void PersonajePrincipal::movimiento()
{
    //static float tiempo = 0;

    Theta = atan2(DirY,DirX) ;

    float VoX = VELINI * cos(Theta), VoY = VELINI * sin(Theta);

    X += VoX * tiempo, Y = H + VoY * tiempo - 0.5 * GRAVEDAD * pow(tiempo,2);

    tiempo += 0.01;

    setPos(X,-Y);
    PosX = X, PosY = -Y;

    //and tiempo != 0.01
    if(!scene->collidingItems(this).isEmpty() and tiempo != 0.01 ){
       tiempo = 0;
    }


    static int sprid = 0;
    if (columnas >= 400 ){
        columnas = 0;
        sprid=0;

    }
    else if( sprid % 40 == 0){
        columnas += 50;
    }
    sprid++;


}





void PersonajePrincipal::setDirX(int value)
{
    DirX = value;
}

void PersonajePrincipal::setDirY(int value)
{
    DirY = value;
}

void PersonajePrincipal::setX(float value)
{
    X = value;
}

void PersonajePrincipal::setY(float value)
{
    Y = value;
}

float PersonajePrincipal::getX() const
{
    return X;
}

float PersonajePrincipal::getY() const
{
    return Y;
}

void PersonajePrincipal::setFilas(float value)
{
    filas = value;
}


float PersonajePrincipal::getTiempo() const
{
    return tiempo;
}

void PersonajePrincipal::setTiempo(float value)
{
    tiempo = value;
}

