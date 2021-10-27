#include "multini.h"
#include "ui_multini.h"

MultIni::MultIni(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MultIni)
{
    ui->setupUi(this);
}

MultIni::~MultIni()
{
    delete ui;
}

void MultIni::on_RegresarButton_clicked()
{
    MultiGamer *MultIni = new MultiGamer(0);
    MultIni->show();
    close();
}


void MultIni::on_IniciarButton_clicked()
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

    for (int i = 0;i<Data.size() ;i++ ) {
        if(Data[i][0] == UGamer1 ){
            if(Data[i][3] == Upass){
                qDebug()<<"Bienvenido";//LLAMAR JUEGO
                index = i;

            }
            else{
                QMessageBox::critical(this,tr("ERROR"),tr("Contraseña incorrecta"));
                aqui = false;
            }

        }
    }

    if(index == -1 && aqui == true){
        QMessageBox::critical(this,tr("ERROR"),tr("Uno o ambos usuarios no existen"));
    }

}
