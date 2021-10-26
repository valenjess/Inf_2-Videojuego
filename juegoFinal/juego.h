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

using namespace std;
QT_BEGIN_NAMESPACE
namespace Ui { class Juego; }
QT_END_NAMESPACE

class Juego : public QMainWindow
{
    Q_OBJECT

public:
    Juego(QWidget *parent = nullptr);
    ~Juego();


public slots:
    void Mov();

private:
    Ui::Juego *ui;
    QGraphicsScene *scene;
    vector <QGraphicsRectItem *> muro;

    array <QGraphicsRectItem,5> *suelo;

    PersonajePrincipal *saltarin;


protected:
    void keyPressEvent(QKeyEvent *e);
};
#endif // JUEGO_H
