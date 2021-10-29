#include "personajeprincipal.h"

PersonajePrincipal::PersonajePrincipal(QGraphicsScene *_scene, vector<QGraphicsRectItem *> _muro, vector <QGraphicsRectItem *> _rojo, vector <QGraphicsRectItem *> _azul, vector <QGraphicsRectItem *> _suelo, vector <EnemigoPrincipal*> _muroEnemigos,vector<arania*>_EneAranias,int _PoX, int _PosY)
{

    filas = 153;
    columnas = 0;

    muro = _muro;
    rojo=_rojo;
    azul=_azul;
    suelo=_suelo;
    muroEnemigos = _muroEnemigos;
    EneAranias = _EneAranias;

    scene = _scene;

    PosX=_PoX;
    PosY=_PosY;


    pixmap = new QPixmap(":/Imagenes/Personaje.png");

    ancho = 67;
    alto = 60;

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
    setPos(PosX,PosY);
}



void PersonajePrincipal::movimiento()
{
    //static float tiempo = 0;

    Theta = atan2(DirY,DirX) ;

    float VoX = VELINI * cos(Theta), VoY = VELINI * sin(Theta);

    X += VoX * tiempo, Y = H + VoY * tiempo - 0.5 * GRAVEDAD * pow(tiempo,2);

    tiempo += 0.01;

    static float base=0;
    static int verificacion=0;

    //and tiempo != 0.01
    if(!scene->collidingItems(this).isEmpty())
    {


        for(auto bloque:muro){
            LadoDer = scene->addRect((X+ancho/2),-((Y+alto/2)-4),8,alto-6);//derecha
            LadoIzq = scene->addRect((X-ancho/2)-2,-((Y+alto/2)-4),8,alto-6);//izquierda
            LadoSup = scene->addRect((X-ancho/2),-((Y+alto/2)+2),ancho-3,4);//arriba
            LadoInfer = scene->addRect((X-ancho/2),-(Y-alto/2),ancho-3,4);//abajo

            if(LadoDer->collidesWithItem(bloque)){
                X-=3;
            }
            else if(LadoIzq->collidesWithItem(bloque)){
                X+=3;
            }
            else if(LadoSup->collidesWithItem(bloque)){
                base=Y-1;
                verificacion=1;

            }
            else if(LadoInfer->collidesWithItem(bloque)){
                tiempo = 0;
                H=Y+1;
            }
            delete LadoDer;
            delete LadoIzq;
            delete LadoSup;
            delete LadoInfer;
        }
        for( auto bloque:rojo){
            LadoDer = scene->addRect((X+ancho/2),-((Y+alto/2)-4),8,alto-6);//derecha
            LadoIzq = scene->addRect((X-ancho/2)-2,-((Y+alto/2)-4),8,alto-6);//izquierda
            LadoSup = scene->addRect((X-ancho/2),-((Y+alto/2)+2),ancho-3,4);//arriba
            LadoInfer = scene->addRect((X-ancho/2),-(Y-alto/2),ancho-3,4);//abajo

            if(Estado == 1){
                if(LadoDer->collidesWithItem(bloque)){
                    X-=3;
                }
                else if(LadoIzq->collidesWithItem(bloque)){
                    X+=3;
                }
                else if(LadoSup->collidesWithItem(bloque)){
                    base=Y-1;
                    verificacion=1;

                }
                else if(LadoInfer->collidesWithItem(bloque)){
                    tiempo = 0;
                    H=Y+1;
                }
            }
            delete LadoDer;
            delete LadoIzq;
            delete LadoSup;
            delete LadoInfer;

        }
        for( auto bloque:azul){
            LadoDer = scene->addRect((X+ancho/2),-((Y+alto/2)-4),8,alto-6);//derecha
            LadoIzq = scene->addRect((X-ancho/2)-2,-((Y+alto/2)-4),8,alto-6);//izquierda
            LadoSup = scene->addRect((X-ancho/2),-((Y+alto/2)+2),ancho-3,4);//arriba
            LadoInfer = scene->addRect((X-ancho/2),-(Y-alto/2),ancho-3,4);//abajo
            if(Estado == 3){
                if(LadoDer->collidesWithItem(bloque)){
                    X-=3;
                }
                else if(LadoIzq->collidesWithItem(bloque)){
                    X+=3;
                }
                else if(LadoSup->collidesWithItem(bloque)){
                    base=Y-1;
                    verificacion=1;

                }
                else if(LadoInfer->collidesWithItem(bloque)){
                    tiempo = 0;
                    H=Y+1;
                }
            }
            delete LadoDer;
            delete LadoIzq;
            delete LadoSup;
            delete LadoInfer;

        }
        for( auto bloque:suelo){

            LadoDer = scene->addRect((X+ancho/2),-((Y+alto/2)-4),8,alto-6);//derecha
            LadoIzq = scene->addRect((X-ancho/2)-2,-((Y+alto/2)-4),8,alto-6);//izquierda
            LadoSup = scene->addRect((X-ancho/2),-((Y+alto/2)+2),ancho-3,4);//arriba
            LadoInfer = scene->addRect((X-ancho/2),-(Y-alto/2),ancho-3,4);//abajo

            if(LadoDer->collidesWithItem(bloque)){
                X-=3;
            }
            else if(LadoIzq->collidesWithItem(bloque)){
                X+=3;
            }
            else if(LadoSup->collidesWithItem(bloque)){
                base=Y-1;
                verificacion=1;

            }
            else if(LadoInfer->collidesWithItem(bloque)){
                tiempo = 0;
                H=Y+1;

            }
            delete LadoDer;
            delete LadoIzq;
            delete LadoSup;
            delete LadoInfer;
        }


        for(auto Enemi:muroEnemigos){


            LadoDer = scene->addRect((X+ancho/2),-((Y+alto/2)-4),8,alto-6);//derecha
            LadoIzq = scene->addRect((X-ancho/2)-2,-((Y+alto/2)-4),8,alto-6);//izquierda
            LadoSup = scene->addRect((X-ancho/2),-((Y+alto/2)+2),ancho-3,4);//arriba
            LadoInfer = scene->addRect((X-ancho/2),-(Y-alto/2),ancho-3,4);//abajo

            if(LadoDer->collidesWithItem(Enemi)){
                qDebug()<<"Fin";
                ViveOMuere =  false;
            }
            else if(LadoIzq->collidesWithItem(Enemi)){
                qDebug()<<"Fin";
                ViveOMuere =  false;
            }
            else if(LadoSup->collidesWithItem(Enemi)){
                qDebug()<<"Fin";
                ViveOMuere =  false;

            }
            else if(LadoInfer->collidesWithItem(Enemi)){
                qDebug()<<"Fin";
                ViveOMuere =  false;


            }

            delete LadoDer;
            delete LadoIzq;
            delete LadoSup;
            delete LadoInfer;
        }

        for(auto EneAra:EneAranias){


            LadoDer = scene->addRect((X+ancho/2),-((Y+alto/2)-4),8,alto-6);//derecha
            LadoIzq = scene->addRect((X-ancho/2)-2,-((Y+alto/2)-4),8,alto-6);//izquierda
            LadoSup = scene->addRect((X-ancho/2),-((Y+alto/2)+2),ancho-3,4);//arriba
            LadoInfer = scene->addRect((X-ancho/2),-(Y-alto/2),ancho-3,4);//abajo


            if(LadoDer->collidesWithItem(EneAra)){
                qDebug()<<"Araña";

            }
            else if(LadoIzq->collidesWithItem(EneAra)){
                qDebug()<<"Ara";

            }
            else if(LadoSup->collidesWithItem(EneAra)){
                qDebug()<<"Ara";


            }
            else if(LadoInfer->collidesWithItem(EneAra)){
                qDebug()<<"Ara";



            }

            delete LadoDer;
            delete LadoIzq;
            delete LadoSup;
            delete LadoInfer;
        }

    }
    //qDebug()<<Y<<" "<<base;
    if( (Y>base) and verificacion==1){
        Y= base;
    }
    else{
        verificacion=0;
    }

    //setPixmap(*pixmap);
    setPos(X,-Y);
    PosX = X , PosY = -Y;


    static int sprid = 0;
    if (columnas >= 800 ){
        columnas = 0;
        sprid=0;

    }
    else if( sprid % 40 == 0){
        columnas += 100;
    }
    sprid++;


}

void PersonajePrincipal::seguir()
{

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
