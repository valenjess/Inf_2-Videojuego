#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    escenario = new QGraphicsScene;

    QPen pen1(Qt::green, 3, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin);

    l.push_back( escenario->addEllipse(0,0,30,30,pen1));

    ui->graphicsView->setScene(escenario);
    ui->graphicsView->showFullScreen();


    QTimer *timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT (movimiento()));
    timer->start(20);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::movimiento()
{
    static float degrees = 30.0f;

    float radians = qDegreesToRadians(degrees);

    float LCuerda = 3;

   if(degrees >= -30 || degrees <0){
        qDebug()<<"AQUI";
        degrees += 5;
    }

    else{
         degrees -= 5;
    }

    l.front()->setPos(LCuerda*qSin(radians),-LCuerda*qCos(radians));
   // qDebug()<<qSin(25);
    qDebug()<<LCuerda*qSin(radians);
    qDebug()<<-LCuerda*qCos(radians);
}

