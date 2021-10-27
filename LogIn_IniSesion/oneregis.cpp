#include "oneregis.h"
#include "ui_oneregis.h"


OneRegis::OneRegis(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OneRegis)
{
    ui->setupUi(this);
}

OneRegis::~OneRegis()
{
    delete ui;
}

void OneRegis::on_RegresarButton_clicked()
{
    OneGamer *OneRegis = new OneGamer(0);
    OneRegis->show();
    close();
}


void OneRegis::on_RegistrarseButton_clicked()
{

    QString gamer = ui->NJugador->text();
    QString password = ui->Contra->text();

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
    Pos++;
    DataU.push_back(infoU);

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
        DataU.push_back(infoU);
        Pos++;
    }


    for (int elem = 0;elem<DataU.size() ;elem++ ) {
        if(DataU[elem][0] == gamer){
            QMessageBox::critical(this,tr("ERROR"),tr("Usuario ya existente"));
            NoRegis = false;
        }
     }

    if(NoRegis == true){
        //INICIAR JUEGO
        array<QString,6> infoU;
        infoU[0] = gamer;
        infoU[1] = password;
        infoU[2] = "0";
        infoU[3] = "0";
        infoU[4] = "0";
        infoU[5] = "0";

        DataU.push_back(infoU);

        QFile file(ArchivoData);
        if (file.open(QIODevice::Append)) {
            QTextStream stream(&file);

            stream << gamer<<" "<<password<<" "<<"0"<<" "<<"0"<<" "<<"0"<<" "<<"0"<<"\n";
        }

        Jugar_o_Fin *JugFin = new Jugar_o_Fin(0);
        JugFin->show();
        close();

    }




}

