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
#include "arania.h"

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
    void MovEnemigo();
    void Time();

signals:
    void endGame();

private:
    Ui::Juego *ui;
    QGraphicsScene *scene;

    vector <EnemigoPrincipal*> muroEnemigos;

    array <QGraphicsRectItem,5> *suelo;

    PersonajePrincipal *saltarin;

    EnemigoPrincipal *Enemigo;

    arania *aranita;

//mapa
    array <QGraphicsScene *,3> niveles;
    array <string,3> RutaLevels;

    array <vector<QGraphicsRectItem*>,3> norm;
    array <vector<QGraphicsRectItem*>,3> azul;
    array <vector<QGraphicsRectItem*>,3> roj;
    array <vector<QGraphicsRectItem*>,3> pi;

    array <vector<arania*>,3> aran;

    vector<QPen>pens;

    int Plataformas[24][30];

//Enemigo correspondiente al nivel

    array<QString,3> RutImgEnemigo;


//Nivel actual
    int Nivel ;
    int ContTime = 0;

    vector<array<QString,6>> DataUno;
    vector<array<QString,10>> DataDos;


protected:
    void keyPressEvent(QKeyEvent *e);

};
#endif // JUEGO_H
