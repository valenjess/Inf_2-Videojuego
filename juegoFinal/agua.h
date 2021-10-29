#ifndef AGUA_H
#define AGUA_H

#include <QPainter>
#include <QGraphicsView>
#include <QStyleOptionGraphicsItem>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>


class Agua
{
public:
    Agua();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *);
};

#endif // AGUA_H
