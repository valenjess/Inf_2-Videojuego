#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_OneGamerButton_clicked()
{
    OneGamer *OnlyGam = new OneGamer(0);
    OneGamer.show();

}


void MainWindow::on_TwoGamerButton_clicked()
{

}

