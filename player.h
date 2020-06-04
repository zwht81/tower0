#ifndef PLAYER_H
#define PLAYER_H

#include <QPainter>


class Player
{
public:
    Player();
    void Initialplayer();
    void show(QPainter * painter);
    void healthminus();
private:
    int health;
    int money;
    QImage _image;
    QPixmap startbutton;
    QImage _tower;
};

#endif // PLAYER_H
