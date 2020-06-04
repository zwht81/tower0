#include "world.h"
#include <QPainter>

World::World()
{


}

void World::Initialworld(){
    background.load(":/image/map.jpg");
    start.load(":/image/Spawn.png");
    end.load(":/image/Spawn.png");


}

void World::show(QPainter * painter){

   painter->setBrush(QBrush(Qt::white,Qt::SolidPattern));
   painter->drawRect(0,0,600,600);
   painter->drawPixmap(0,0,600,600,background);
   painter->drawImage(50,450,start);
   painter->drawImage(380,450,end);


}
