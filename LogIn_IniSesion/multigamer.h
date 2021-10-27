#ifndef MULTIGAMER_H
#define MULTIGAMER_H

#include <QWidget>

namespace Ui {
class MultiGamer;
}

class MultiGamer : public QWidget
{
    Q_OBJECT

public:
    explicit MultiGamer(QWidget *parent = nullptr);
    ~MultiGamer();

private:
    Ui::MultiGamer *ui;
};

#endif // MULTIGAMER_H
