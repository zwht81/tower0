#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <player.h>
#include <world.h>
#include <QPainter>
#include <game.h>
#include <QKeyEvent>
#include <QTime>
#include "mybutton.h"
#include <tower.h>
#include "towerplace.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void paintEvent(QPaintEvent *e);
    void mousePressEvent(QMouseEvent *event);
  //  void mouseMoveEvent(QMouseEvent *event);
    void timerEvent(QTimerEvent *e);
    ~MainWindow();
    static const int Time1 = 100;
public slots:

signals:



private:
    Ui::MainWindow *ui;
    World _world;
    Player _player;
    Game _game;
    int timeid;
    bool startgame;
    Towerplace _towerplace;


    vector<Tower *> _towers;

};

#endif // MAINWINDOW_H
