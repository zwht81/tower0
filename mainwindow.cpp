#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>
#include <QKeyEvent>
#include <QMouseEvent>
#include <QTime>
#include "mybutton.h"
#include <iostream>


using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)

{
    ui->setupUi(this);
    this->setFixedSize(800,600);

    _player.Initialplayer();
    _world.Initialworld();
    startgame=false;
    _game.Initialgame();
    _towerplace.initialplace();




}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow:: paintEvent(QPaintEvent *e){
    Q_UNUSED(e);
    QPainter * pa;
    pa = new QPainter();
    pa->begin(this);
    _world.show(pa);
    _player.show(pa);
    _game.show(pa);
    _towerplace.show(pa);

    pa->end();
    delete pa;
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    int mx = event->x();
    int my = event->y();

    if ((mx<750) && (mx >=650) && (my<460) &&(my>=360)){
        _game.startgame();
        if(!startgame)
            startTimer(Time1);
        startTimer(1000);
        startgame=true;
    }
    if ((mx<=690) && (mx >=645) && (my<=545) &&(my>=495)){
        _towerplace.tobuild();
        repaint();
    }
    if(_towerplace.canbuild()&&(mx<=360) && (mx >=100) && (my<=520) &&(my>=490)){
        _player.healthminus();
    }


    QWidget::mousePressEvent(event);
}





void MainWindow::timerEvent(QTimerEvent *e){
    Q_UNUSED(e);
    int n = _game._enemys.size();
    int i;
    for(i=0;i<n;i++){
        _game._enemys[i]->move(Time1);
        if(_game._enemys[i]->arrive(_world)){
            _game._enemys[i]->stopmove();
            _game._enemys.erase(_game._enemys.begin()+i);
            _player.healthminus();
        }

    }
    repaint();
}



/*void  MainWindow::mouseMoveEvent(QMouseEvent *event){
    int mx = event->x();
    int my = event->y();

        if (event->buttons() & Qt::LeftButton)
        {
            cout<<event->pos().x()<<"  "<<event->pos().y()<<endl;
        }


}*/

