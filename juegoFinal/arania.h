#ifndef ARANIA_H
#define ARANIA_H

#include <QPainter>
#include <QGraphicsView>
#include <QStyleOptionGraphicsItem>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QTimer>


class arania : public QGraphicsItem
{
public:
    arania(float _degrees, float _LCuerda, float PosIniX, float PosIniY);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *);
    void MovPendulo();
    float getPosX();
    float getPosY();


private:
    float angulo;
    float degrees ;
    float radians;
    float LCuerda;
    float PosIniX;
    float PosIniY;
    float PosX = 0;
    float PosY = 0;
    int AnchImag, LarImag, cont = 1;
    int columnas,filas;
    QPixmap *pixmap;
};

#endif // ARANIA_H
