#include "personajeprincipal.h"

PersonajePrincipal::PersonajePrincipal()
{

}
QRectF PersonajePrincipal::boundingRect() const
{
    return QRectF(PosX,PosY,Radio,Radio);
}

void PersonajePrincipal::paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *)
{
    //QPixmap pixMap(":/Mapa/Texturas/rompible.png");
    //pixMap = pixMap.scaled(Radio, Radio);
    //QRectF rectangulo(PosX*Escala, PosY*Escala, Radio*0.06, Radio*Escala);
    painter->setBrush(Qt::blue);
    painter->drawEllipse(boundingRect());
    setPos(PosX,PosY);
}

void PersonajePrincipal::movimiento()
{
    static float tiempo = 0;

    Theta = atan2(DirY,DirX) ;

    float VoX = VELINI * cos(Theta), VoY = VELINI * sin(Theta);


    X = VoX * tiempo, Y = H + VoY * tiempo - 0.5 * GRAVEDAD * pow(tiempo,2);

    tiempo += 0.01;

    //qDebug()<<tiempo<< "  "<< Y;

    setPos(X,-Y);
    PosX = X, PosY = -Y;

    if(!scene()->collidingItems(this).isEmpty() and tiempo != 0.01){
        tiempo = 0;
    }
}

void PersonajePrincipal::setDirX(int value)
{
    DirX = value;
}

void PersonajePrincipal::setDirY(int value)
{
    DirY = value;
}

