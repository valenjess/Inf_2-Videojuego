#ifndef UNJUGADOR_H
#define UNJUGADOR_H

#include <QWidget>

namespace Ui {
class unJugador;
}

class unJugador : public QWidget
{
    Q_OBJECT

public:
    explicit unJugador(QWidget *parent = nullptr);
    ~unJugador();

private slots:
    void on_ISesionButton_clicked();

    void on_RegistrarButton_clicked();

private:
    Ui::unJugador *ui;
};

#endif // UNJUGADOR_H
