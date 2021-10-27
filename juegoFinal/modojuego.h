#ifndef MODOJUEGO_H
#define MODOJUEGO_H

#include <QWidget>

namespace Ui {
class ModoJuego;
}

class ModoJuego : public QWidget
{
    Q_OBJECT

public:
    explicit ModoJuego(QWidget *parent = nullptr);
    ~ModoJuego();

private:
    Ui::ModoJuego *ui;
};

#endif // MODOJUEGO_H
