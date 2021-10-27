#ifndef SPRITES_H
#define SPRITES_H
#define GRAVEDAD 9.8
#define VELINI 30.70


#include <QObject>
#include <QTimer>
#include <QPixmap>
#include <QGraphicsScene>
#include <QPainter>
#include <math.h>

#include <QObject>
#include <QTimer>
#include <QPixmap>

#include <QtDebug>
#include <QGraphicsPixmapItem>
#include <QGraphicsItem>


class Sprites : public QObject
{
    Q_OBJECT
public:
    explicit Sprites(QObject *parent = nullptr);

    QRectF boundingRect() const;

    void paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *);

    QTimer *timer;
    QPixmap *pixmap;

    float filas, columnas;

    float ancho;
    float alto;


private:


    int PosX = 0, PosY = -10;
    int Radio = 10;

    int DirX = 0, DirY = 10;

    float Theta =0;
    float H =10;

    float X = 0;
    float Y = 0;
signals:

public slots:
    void Actualizacion();

};

#endif // SPRITES_H
