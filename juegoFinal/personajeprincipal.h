#ifndef PERSONAJEPRINCIPAL_H
#define PERSONAJEPRINCIPAL_H
#define GRAVEDAD 9.8
#define VELINI 10.70

#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QPainter>
#include <math.h>




class PersonajePrincipal : public QGraphicsItem
{
public:
    PersonajePrincipal();

    QRectF boundingRect() const;

    void paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *);

    void calculoParabola();


private:


    int PosX = 0, PosY = 0;
    int Radio = 20;

    int DirX = 0, DirY = 10;

    float Theta =0;
    float H =0;

    float X = 0, Y = 0;



};

#endif // PERSONAJEPRINCIPAL_H
