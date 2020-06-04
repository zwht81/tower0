#ifndef WORLD_H
#define WORLD_H
#include <QPainter>
#include <mybutton.h>

class World
{
public:
    World();
    void Initialworld();
    void show(QPainter * painter);
private:
    QPixmap background;
    QImage start;
    QImage end;
    int* canbuildarea;

};

#endif // WORLD_H
