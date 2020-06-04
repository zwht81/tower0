#include "menu.h"
#include <QPushButton>


Menu::Menu(QWidget *parent) : QWidget(parent)
{
    this->setFixedSize(800,600);
    startbutton= new Mybutton(":/image/startbutton.png");
    startbutton->setParent(this);
    startbutton->move(300,300);
    menuback.load(":/image/menu.jpg");
    MainWindow * scene=new MainWindow;
    connect(startbutton,&QPushButton::clicked,this,[=](){
        this->close();
        scene->show();

    });


}


void Menu::paintEvent(QPaintEvent *e){
    QPainter *pa;
    pa = new QPainter();
    pa->begin(this);
    pa->drawImage(QRect(0,0,800,600),menuback);
    pa->end();

}
