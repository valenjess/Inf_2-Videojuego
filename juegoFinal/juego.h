#ifndef JUEGO_H
#define JUEGO_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <fstream>
#include <iostream>

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

private:
    Ui::Juego *ui;
    QGraphicsScene *scene;

    array <QGraphicsRectItem,5> *suelo;

    PersonajePrincipal *saltarin;
};
#endif // JUEGO_H
