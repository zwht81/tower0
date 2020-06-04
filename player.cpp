#include "player.h"
#include <QPainter>

Player::Player()
{

}

void Player::Initialplayer(){
    health=20;
    money=100;
    _image.load(":/image/player.png");
    startbutton.load(":/image/start.jpg");
    _tower.load(":/image/Tower.png");

}

void Player::show(QPainter * painter){
    painter->drawImage(620,0,_image);
    QString playername = "Player1";
    QFont font;
    font.setPointSize(20);
    painter->setFont(font);
    painter->drawText(620,200,playername);
    font.setPointSize(10);
    painter->setFont(font);
    QPen pen(Qt::red);
    painter->setPen(pen);
    painter->drawText(620,300,"health: "+QString::number(health));
    pen.setColor(QColor(255,215,0));
    painter->setPen(pen);
    painter->drawText(620,350,"money: "+QString::number(money));
    painter->drawPixmap(650,360,100,100,startbutton);
    painter->drawImage(650,500,_tower);


}


void Player::healthminus(){
    health--;
}
