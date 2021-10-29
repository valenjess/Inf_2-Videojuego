#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    escenario = new QGraphicsScene;

    QPen pen1(Qt::green, 3, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin);


    l.push_back( escenario->addEllipse(0,0,10,10,pen1));

    EArania *arania1;
    EArania *arania2;
    arania1 = new EArania(90.0,30.0,0,80);
    arania2 = new EArania(90.0,30.0,0,0);
    escenario->addItem(arania1);
    spiders.push_back(arania1);

    escenario->addItem(arania2);
    spiders.push_back(arania2);


    ui->graphicsView->setScene(escenario);
    ui->graphicsView->showFullScreen();

  /*
    QTimer *timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT (movimiento()));
    timer->start(5);
    */

    QTimer *timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT (Posiciones()));
    timer->start(5);

}

MainWindow::~MainWindow()
{
    delete ui;
}

/*
void MainWindow::movimiento()
{
    static float degrees = 90;
    static int camb = 0;
    float radians = qDegreesToRadians(degrees);
    float LCuerda = 50;
    float PosX = 0;
    float PosY = 0;

    if(degrees == -90){
        camb = 1;
        degrees += 1;

    }

    else if(camb== 0){
        degrees -= 1;
    }

    else if(degrees == 90){
        camb = 0;
        degrees -= 1;
    }
    else if(camb == 1){
        degrees += 1;
    }

    PosX = LCuerda*qSin(radians);
    PosY = -LCuerda*qCos(radians);

    l.at(0)->setPos(PosX,-PosY);

    qDebug()<<LCuerda*qSin(radians);
    qDebug()<<-LCuerda*qCos(radians);
}
*/

void MainWindow::Posiciones()
{

    for (auto elempider:spiders ) {

        float X = elempider->getPosX();
        float Y = elempider->getPosY();

        elempider->setPos(X,-Y);

    }
}
