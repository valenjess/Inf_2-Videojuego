#ifndef MAPA_H
#define MAPA_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QImage>
#include <QDebug>
#include "fstream"

using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class mapa; }
QT_END_NAMESPACE

class mapa : public QMainWindow
{
    Q_OBJECT

public:
    mapa(QWidget *parent = nullptr);
    void leerMapa();
    void ConstruirMapa();
    ~mapa();

private:
    Ui::mapa *ui;
    QGraphicsScene *scene;
    QList<QGraphicsRectItem*> map;
    vector<QPen>pens;
    QBrush brush1;
    string filename = "../mapa/BD/esquema1.txt";
    int Plataformas[24][30];


};
#endif // MAPA_H
