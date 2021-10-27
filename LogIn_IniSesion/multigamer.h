#ifndef MULTIGAMER_H
#define MULTIGAMER_H

#include <QWidget>
#include "mainwindow.h"


#include "multini.h"
#include "multregis.h"

namespace Ui {
class MultiGamer;
}

class MultiGamer : public QWidget
{
    Q_OBJECT

public:
    explicit MultiGamer(QWidget *parent = nullptr);
    ~MultiGamer();

private slots:
    void on_RegresarButton_clicked();

    void on_ISesionButton_clicked();

    void on_RegistrarseButton_clicked();

private:
    Ui::MultiGamer *ui;
};

#endif // MULTIGAMER_H
