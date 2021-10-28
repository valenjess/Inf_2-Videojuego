#ifndef ONEINI_H
#define ONEINI_H

#include <oneGamer.h>

#include <QWidget>
#include <QDebug>
#include <QFile>
#include <QString>
#include <QMessageBox>

using namespace std;

namespace Ui {
class OneIni;
}

class OneIni : public QWidget
{
    Q_OBJECT

public:
    explicit OneIni(QWidget *parent = nullptr);
    ~OneIni();

private slots:
    void on_Iniciar_clicked();

    void on_RegresarButton_clicked();

private:
    Ui::OneIni *ui;
    QString ArchivoData = "../juegoFinal/BD/DataUnJugador.txt";
    vector<array<QString,6>> Data;
    int index = -1;
};

#endif // ONEINI_H
