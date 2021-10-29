#include "arania.h"


arania::arania(float _angulo, float _LCuerda, float _PosIniX, float _PosIniY)
{
    angulo = _angulo;
    LCuerda = _LCuerda;
    PosIniX = _PosIniX;
    PosIniY = _PosIniY;
    degrees = angulo;
    AnchImag = 72;
    LarImag = 72;
    columnas = 0;
    filas = 0;
    pixmap = new QPixmap(":/Imagenes/muerte.png");
}

QRectF arania::boundingRect() const
{
    return QRectF(-AnchImag/2,-LarImag/2,AnchImag,LarImag);
}

void arania::paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *)
{
    painter->drawPixmap(-AnchImag/2,-LarImag/2,*pixmap,columnas,filas,AnchImag,LarImag);

    setPos(PosX,-PosY);
}

void arania::MovPendulo()
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

float arania::getPosX()
{
    MovPendulo();
    PosX = (LCuerda*qSin(radians))+PosIniX;

    if (columnas >= 360 ){

            columnas = 0;

        }
        else if( cont % 60 == 0){
            columnas += 72;

        }
        //setPixmap(*pixmap);

        cont++;

        return PosX;
}

float arania::getPosY()
{
    PosY = -(LCuerda*qCos(radians)-PosIniY);
    return PosY;

}
