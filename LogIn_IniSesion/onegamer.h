#ifndef ONEGAMER_H
#define ONEGAMER_H

#include <QWidget>

namespace Ui {
class OneGamer;
}

class OneGamer : public QWidget
{
    Q_OBJECT

public:
    explicit OneGamer(QWidget *parent = nullptr);
    ~OneGamer();

private:
    Ui::OneGamer *ui;
};

#endif // ONEGAMER_H
