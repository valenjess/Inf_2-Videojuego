#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsEllipseItem>
#include <QTimer>
#include <QDebug>

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

private:
    Ui::MainWindow *ui;
    QGraphicsScene *escenario;
    QGraphicsEllipseItem *spider;
    std::list<QGraphicsEllipseItem *> l;
    QTimer *timer;
};
#endif // MAINWINDOW_H
