#include "multregis.h"
#include "ui_multregis.h"

MultRegis::MultRegis(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MultRegis)
{
    ui->setupUi(this);
}

MultRegis::~MultRegis()
{
    delete ui;
}

void MultRegis::on_RegresarButton_clicked()
{
    MultiGamer *MultRegis = new MultiGamer (0);
    MultRegis->show();
    close();
}


void MultRegis::on_JugarButton_clicked()
{
    QString UGamer1 = ui->Jug1->text();
    QString UGamer2 = ui->Jug2->text();
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

    array<QString,10> infoU;

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

        array<QString,10> infoU;

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
        line.remove(' ');

    }
}

