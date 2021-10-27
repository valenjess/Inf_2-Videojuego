#ifndef ARANIA_H
#define ARANIA_H
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


class Arania : public QGraphicsItem
{
public:
    Arania();

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *);
};

#endif // ARANIA_H
