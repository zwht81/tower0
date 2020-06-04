#ifndef TOWER_H
#define TOWER_H

#include <QObject>
#include <QPainter>

class Tower : public QObject
{
    Q_OBJECT
public:
    explicit Tower(QObject *parent = nullptr);

signals:


public slots:
private:
    int cost;
    QImage towpic;

};

#endif // TOWER_H
