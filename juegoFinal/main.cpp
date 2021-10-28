//#include "juego.h"
#include "modojuego.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    modoJuego w;
    w.show();
    return a.exec();
}
