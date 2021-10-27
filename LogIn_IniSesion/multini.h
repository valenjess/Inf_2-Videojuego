#ifndef MULTINI_H
#define MULTINI_H

#include <QWidget>
#include <QFile>
#include <QMessageBox>

#include <multigamer.h>


using namespace std;

namespace Ui {
class MultIni;
}

class MultIni : public QWidget
{
    Q_OBJECT

public:
    explicit MultIni(QWidget *parent = nullptr);
    ~MultIni();

private slots:
    void on_RegresarButton_clicked();

    void on_IniciarButton_clicked();

private:
    Ui::MultIni *ui;
    QString ArchivoData = "../LogIn_IniSesion/BD/DataMultiJugador.txt";
    vector<array<QString,10>> Data;
    int index = -1;
    bool aqui = true;
};

#endif // MULTINI_H
