#include "unini.h"
#include "ui_unini.h"

UnIni::UnIni(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UnIni)
{
    ui->setupUi(this);
}

UnIni::~UnIni()
{
    delete ui;
}

void UnIni::on_RegresarButton_clicked()
{
    unJugador *UnIni = new unJugador(0);
    UnIni->show();
    close();

}


void UnIni::on_IniciarButton_clicked()
{
    QString UGamer = ui->Jugador->text();
        QString Upass = ui->Contra->text();

        QString AuxData = "";

        // lee y verifica si el usuario ya existe
        QFile inputFile(ArchivoData);
        inputFile.open(QIODevice::ReadOnly);
        if (!inputFile.isOpen())
            return;

        QTextStream stream(&inputFile);
        QString line = stream.readLine();
        line += ' ';

        array<QString,6> infoU;

        int cont = 0;

        for (int elem = 0;elem<line.size() ;elem++ ) {
            if(line[elem] != ' '){
                AuxData += line[elem];
            }
            else if(line[elem] == ' ' ){

                infoU[cont] = AuxData;
                AuxData = "";
                cont ++;

            }


        }

        Data.push_back(infoU);

        while (!line.isNull() ) {
            QString line = stream.readLine();
            if(line.isEmpty()){
                break;
            }
            line += ' ';
            //qDebug()<<line;

            array<QString,6> infoU;

            int cont = 0;

            for (int elem = 0;elem<line.size() ;elem++ ) {
                if(line[elem] != ' '){
                    AuxData += line[elem];
                }
                else if(line[elem] == ' ' ){

                    infoU[cont] = AuxData;
                    AuxData = "";
                    cont ++;

                }

            }


            line.remove(' ');
            Data.push_back(infoU);
        }

        for (int i = 0;i<Data.size() ;i++ ) {
            if(Data[i][0] == UGamer){
                if(Data[i][1] == Upass){
                    //qDebug()<<"Bienvenido";
                    qDebug()<<Data[i][5];
                    index = i;
                    int level=Data[i][5].toInt();

                    PantJuego = new Juego(level,0);

                    qDebug()<<level;
                    //PantJuego->setNivel(level);
                    //PantJuego->setDataUno(Data);

                    PantJuego->show();
                    close();
                }
                else{
                    QMessageBox::critical(this,tr("ERROR"),tr("Contraseña incorrecta"));
                }

            }


        }

        if(index == -1){
            QMessageBox::critical(this,tr("ERROR"),tr("El usuario no existe "));
         }

}

