#ifndef ENEMY_H
#define ENEMY_H

#include <QPainter>
#include <world.h>


class Enemy
{
public:
    Enemy();
    void move(int n);
    void stopmove();
    bool arrive(World &p);
    void initialenemy();
    void show(QPainter * painter);

private:
    int health;
    int speed;
    QImage enemypic;
    int x;
    int y;
};

#endif // ENEMY_H
