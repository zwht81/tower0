#include "game.h"
#include <vector>
#include <iostream>
#include <QTimer>
#include <windows.h>

using namespace std;


Game::Game(QWidget *parent) : QWidget(parent)
{

}


void Game::startgame(){

    startTimer(1000);

}


void Game::Initialgame(){
    waveenemy=5;
}

void Game::createenemy(){
    Enemy* p1=new Enemy;
    p1->initialenemy();
    _enemys.push_back(p1);

}

void Game::show(QPainter * painter){
    int n = _enemys.size();
    int i;
    for(i=0;i<n;i++)
        _enemys[i]->show(painter);

}

void Game::timerEvent(QTimerEvent *e){
    if(waveenemy>0){
        this->createenemy();
        waveenemy--;
    }

}
