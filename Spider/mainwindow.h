#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "arania.h"

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsEllipseItem>
#include <QTimer>
#include <QDebug>

using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
      void movimiento();
      void Posiciones();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *escenario;
    QGraphicsEllipseItem *spider;
    vector<QGraphicsEllipseItem *> l;
    QTimer *timer;
    list<Arania*> spiders;
};
#endif // MAINWINDOW_H
