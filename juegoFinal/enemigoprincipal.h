#ifndef ENEMIGOPRINCIPAL_H
#define ENEMIGOPRINCIPAL_H

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

class EnemigoPrincipal : public QGraphicsPixmapItem
{
public:
    EnemigoPrincipal(int _PosX, int _PosY,int _tiempo, QString _RutImg);
    QRectF boundingRect() const;

    void paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *);

    QPixmap *pixmap;

    float filas, columnas;

    float ancho;
    float alto;

    void animacion();

private:

    int sprid = 1,timeP=1;
    int PosX = 0, PosY = -10;    
    int tiempo;

    QString RutImg;


    QGraphicsScene *scene;





};

#endif // ENEMIGOPRINCIPAL_H
