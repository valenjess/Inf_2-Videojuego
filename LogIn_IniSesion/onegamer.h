#ifndef ONEGAMER_H
#define ONEGAMER_H

#include <QWidget>
#include "oneini.h"

namespace Ui {
class OneGamer;
}

class OneGamer : public QWidget
{
    Q_OBJECT

public:
    explicit OneGamer(QWidget *parent = nullptr);
    ~OneGamer();

private slots:
    void on_ISesionButton_clicked();

    void on_RegistrarButton_clicked();

private:
    Ui::OneGamer *ui;

};

#endif // ONEGAMER_H
