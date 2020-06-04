#include "enemy.h"
#include <iostream>

using namespace std;

Enemy::Enemy()
{

}

void Enemy::initialenemy(){
    health=100;
    speed=100;
    x=50;
    y=450;
    enemypic.load(":/image/Enemy.png");
}

void Enemy::move(int n){
    x=x+speed*n/1000;
}

void Enemy::show(QPainter *painter){
    painter->drawImage(x,y,enemypic);
}

bool Enemy::arrive(World &p){
    if(x<400&&x>360&&y<460&&y>440){
        return true;
    }
    return false;
}

void Enemy::stopmove(){
    cout<<"stop"<<endl;
}
