#ifndef JUGAR_O_FIN_H
#define JUGAR_O_FIN_H

#include <QWidget>

namespace Ui {
class Jugar_o_Fin;
}

class Jugar_o_Fin : public QWidget
{
    Q_OBJECT

public:
    explicit Jugar_o_Fin(QWidget *parent = nullptr);
    ~Jugar_o_Fin();

private slots:
    void on_JugarButton_clicked();

    void on_SalirButton_clicked();

private:
    Ui::Jugar_o_Fin *ui;
};

#endif // JUGAR_O_FIN_H
