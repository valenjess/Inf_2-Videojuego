#ifndef PERSONAJEPRINCIPAL_H
#define PERSONAJEPRINCIPAL_H
#define GRAVEDAD 9.8
#define VELINI 30.70

#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QPainter>
#include <math.h>

#include <QtDebug>




class PersonajePrincipal : public QGraphicsItem
{
public:
    PersonajePrincipal();

    QRectF boundingRect() const;

    void paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *);

    void movimiento();




    void setDirX(int value);

    void setDirY(int value);

private:


    int PosX = 0, PosY = -10;
    int Radio = 10;

    int DirX = 0, DirY = 10;

    float Theta =0;
    float H =10;

    float X = 0, Y = 0;



};

#endif // PERSONAJEPRINCIPAL_H
