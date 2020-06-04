#include "mainwindow.h"
#include <QApplication>
#include <QPainter>
#include "menu.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Menu w;
    w.show();

    return a.exec();
}
