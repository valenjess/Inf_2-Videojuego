#include "earania.h"

EArania::EArania(float _angulo, float _LCuerda, float _PosIniX, float _PosIniY)
{
    angulo = _angulo;
    LCuerda = _LCuerda;
    PosIniX = _PosIniX;
    PosIniY = _PosIniY;
    degrees = angulo;
    AnchImag = 116;
    LarImag = 106;
    columnas = 0;
    filas = 0;
    pixmap = new QPixmap(":/images/spiderman.png");
}

QRectF EArania::boundingRect() const
{
    return QRectF(-AnchImag/2,-LarImag/2,AnchImag,LarImag);
}

void EArania::paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *)
{
    painter->drawPixmap(-AnchImag/2,-LarImag/2,*pixmap,columnas,filas,AnchImag,LarImag);

    setPos(PosX, -PosY);
}

void EArania::MovPendulo()
{
    static int camb = 0;
    radians = qDegreesToRadians(degrees);

    if(degrees == -angulo){
        camb = 1;
        degrees += 1;

    }

    else if(camb== 0){

        degrees -= 1;
    }

    else if(degrees == angulo){

        camb = 0;
        degrees -= 1;
    }

    else if(camb == 1){

        degrees += 1;
    }


}

float EArania::getPosX()
{
       MovPendulo();
       PosX = (LCuerda*qSin(radians))+PosIniX;

       if (columnas >= 348 ){

               columnas = 0;

           }
           else if( cont % 40 == 0){
               columnas += 116;

           }
           //setPixmap(*pixmap);

           cont++;

       return PosX;
}

float EArania::getPosY()
{
        PosY = -(LCuerda*qCos(radians)-PosIniY);
        return PosY;
}


