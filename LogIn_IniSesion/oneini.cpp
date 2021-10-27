#include "oneini.h"
#include "ui_oneini.h"
#include "onegamer.h"

OneIni::OneIni(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OneIni)
{
    ui->setupUi(this);
}

OneIni::~OneIni()
{
    delete ui;
}

void OneIni::on_Iniciar_clicked()
{
    QString UGamer = ui->Usu->text();
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
                qDebug()<<"Bienvenido";
                index = i;
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



void OneIni::on_RegresarButton_clicked()
{
    OneGamer *OneIni = new OneGamer(0);
    OneIni->show();
    close();
}

