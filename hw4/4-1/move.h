#ifndef MOVE_H
#define MOVE_H
#pragma once
#include <QWidget>

namespace Ui {
    class Move;
}

class Move : public QWidget
{
    Q_OBJECT

public:
    explicit Move(QWidget *parent = 0);
    ~Move();

private:
    Ui::Move *ui;
};

#endif // MOVE_H
