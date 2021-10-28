#ifndef JUEGO_H
#define JUEGO_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QGraphicsView>

#include <fstream>
#include <iostream>
#include <QKeyEvent>
#include <QTimer>

#include "personajeprincipal.h"
#include "enemigoprincipal.h"

using namespace std;
QT_BEGIN_NAMESPACE
namespace Ui { class Juego; }
QT_END_NAMESPACE

class Juego : public QMainWindow
{
    Q_OBJECT

public:
    Juego(int level,QWidget *parent = nullptr);
    ~Juego();
    //mapa
    void lecturaMapa();
    //




    void setDataUno(const vector<array<QString, 6> > &value);

    void setDataDos(const vector<array<QString, 10> > &value);

    void setNivel(int value);

public slots:
    void Mov();

signals:
    void endGame();

private:
    Ui::Juego *ui;
    QGraphicsScene *scene;
    vector <EnemigoPrincipal *> muro;

    array <QGraphicsRectItem,5> *suelo;

    PersonajePrincipal *saltarin;

    EnemigoPrincipal *Enemigo;

//mapa
    array <QGraphicsScene *,3> niveles;
    array <string,3> RutaLevels;

    array <vector<QGraphicsRectItem*>,3> norm;
    array <vector<QGraphicsRectItem*>,3> azul;
    array <vector<QGraphicsRectItem*>,3> roj;
    array <vector<QGraphicsRectItem*>,3> pi;

    vector<QPen>pens;
    QBrush brush1;

    int Plataformas[24][30];

//Nivel actual
    int Nivel ;


    vector<array<QString,6>> DataUno;
    vector<array<QString,10>> DataDos;


protected:
    void keyPressEvent(QKeyEvent *e);
};
#endif // JUEGO_H
