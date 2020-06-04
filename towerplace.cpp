#include "towerplace.h"

Towerplace::Towerplace()
{

}

void Towerplace::initialplace(){
    isbuild=false;
    towerplace.load(":/image/TowerPlace1.png");
}

void Towerplace::show(QPainter *painter){
    if(isbuild)
        painter->drawPixmap(100,490,270,30,towerplace);
}

void Towerplace::tobuild(){
    isbuild=true;
}

bool Towerplace::canbuild(){
    return isbuild;
}
