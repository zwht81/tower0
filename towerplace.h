#ifndef TOWERPLACE_H
#define TOWERPLACE_H

#include "QPainter"

class Towerplace
{
public:
    Towerplace();
    void show(QPainter * painter);
    void initialplace();
    void tobuild();
    bool canbuild();

private:
    QPixmap towerplace;
    bool isbuild;
};

#endif // TOWERPLACE_H
