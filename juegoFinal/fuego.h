#ifndef FUEGO_H
#define FUEGO_H

#include <QPainter>
#include <QGraphicsView>
#include <QStyleOptionGraphicsItem>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>


class Fuego
{
public:
    Fuego();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *);
};

#endif // FUEGO_H
