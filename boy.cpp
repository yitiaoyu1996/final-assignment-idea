#include "boy.h"
#include <QTimer>
#include <QGraphicsScene>
#include<stdlib.h>

boy::boy(): QObject(), QGraphicsRectItem()
{
   int random_pos=rand()%650;
   setPos(random_pos,0);

   setRect(0,0,100,100);
   QTimer *timer=new QTimer(this);
   connect(timer, SIGNAL(timeout()),this, SLOT(move()));
  //every 30ms, the bullet will move
   timer->start(30);
}

void boy::move()
{
    //want to move the arrow up, so only y value changes
    setPos(x(),y()+5);
    //delete boy if it goes out of the scene
    if(pos().y()<-800)
    {
        scene()->removeItem(this);
        delete this;
    }

}
