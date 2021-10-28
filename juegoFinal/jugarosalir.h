#ifndef JUGAROSALIR_H
#define JUGAROSALIR_H

#include <QWidget>

namespace Ui {
class jugarOSalir;
}

class jugarOSalir : public QWidget
{
    Q_OBJECT

public:
    explicit jugarOSalir(QWidget *parent = nullptr);
    ~jugarOSalir();

private:
    Ui::jugarOSalir *ui;
};

#endif // JUGAROSALIR_H
