#ifndef PERSONAJEPRINCIPAL_H
#define PERSONAJEPRINCIPAL_H
#define GRAVEDAD 9.8
#define VELINI 30.70

#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QPainter>
#include <math.h>
#include <iostream>

#include <QObject>
#include <QTimer>
#include <QPixmap>

#include <QtDebug>
#include <QGraphicsPixmapItem>



using namespace std;
class PersonajePrincipal : public QGraphicsItem //QGraphicsPixmapItem //
{
public:
    PersonajePrincipal(QGraphicsScene *_scene,vector <QGraphicsRectItem *> _muro,vector <QGraphicsRectItem *> _rojo,vector <QGraphicsRectItem *> _azul,vector <QGraphicsRectItem *> _suelo,int _PoX,int _PosY);

    QRectF boundingRect() const;

    void paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *);

    void movimiento();




    void setDirX(int value);

    void setDirY(int value);

    void setX(float value);

    void setY(float value);

    float getX() const;

    float getY() const;

    float tiempo = 0;
    QPixmap *pixmap;

    float filas, columnas;

    float ancho;
    float alto;

    QGraphicsRectItem *LadoDer,*LadoIzq,*LadoSup,*LadoInfer;



    void setTiempo(float value);

    float getTiempo() const;

    void setFilas(float value);

signals:

public slots:
    void Actualizacion();

private:

    vector <QGraphicsRectItem *> muro;
    vector <QGraphicsRectItem *> rojo;
    vector <QGraphicsRectItem *> azul;
    vector <QGraphicsRectItem *> suelo;


    int PosX = 0, PosY = -55;
    int Radio = 10;

    int DirX = 0, DirY = 100;

    float Theta =0;
    float H =500;

    float X = 0;
    float Y = 0;

    int Estado = 0 ;

    QGraphicsScene *scene;



};

#endif // PERSONAJEPRINCIPAL_H
