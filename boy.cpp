#include "boy.h"
#include <QTimer>
#include <QGraphicsScene>
#include<stdlib.h>
#include"maingame.h"

extern maingame *shooting;
boy::boy(QGraphicsItem *parent): QObject(), QGraphicsPixmapItem()
{
   int random_pos=rand()%570;
   setPos(random_pos,0);

   setPixmap(QPixmap(":/new/image/boy1.png"));
   QTimer *timer=new QTimer(this);
   connect(timer, SIGNAL(timeout()),this, SLOT(move()));
  //every 30ms, the bullet will move
   timer->start(30);
   failsound=new QMediaPlayer();
   failsound->setMedia(QUrl("qrc:new/sound1/success.wav"));
}

void boy::move()
{
    //want to move the arrow up, so only y value changes
    setPos(x(),y()+5);
    //delete boy if it goes out of the scene
    if(pos().y()>750)
    {

        shooting->life1->life_decrease();
         failsound->play();
        scene()->removeItem(this);
        delete this;
    }

}
