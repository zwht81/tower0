#ifndef GAME_H
#define GAME_H

#include <QWidget>
#include <vector>
#include <enemy.h>
#include <QTimer>
#include <QPainter>
using namespace std;

class Game : public QWidget
{
    Q_OBJECT
public:
    explicit Game(QWidget *parent = nullptr);
    void Initialgame();
    void createenemy();
    void show(QPainter * painter);
    void timerEvent(QTimerEvent *e);
    void startgame();
    vector<Enemy *> _enemys;

    int waveenemy;

signals:

public slots:
};




#endif // GAME_H
