#include "arrow.h"
#include <QTimer>
#include <QGraphicsScene>
arrow::arrow()
{

   setRect(250,700,10,50);
   QTimer *timer=new QTimer();
   connect(timer, SIGNAL(timeout()),this, SLOT(shoot()));
  //every 30ms, the bullet will move
   timer->start(30);
}

void arrow::shoot()
{
    //want to move the arrow up, so only y value changes
    setPos(x(),y()-10);
    //delete arrow if it goes out of the scene
    if(pos().y()<-800)
    {
        scene()->removeItem(this);
        delete this;
    }

}
