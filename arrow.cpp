#include "arrow.h"
#include <QTimer>
#include <QGraphicsScene>
#include<QList>
#include "boy.h"
arrow::arrow(): QObject(), QGraphicsRectItem()
{

   setRect(250,700,10,50);
   QTimer *timer=new QTimer();
   connect(timer, SIGNAL(timeout()),this, SLOT(shoot()));
  //every 30ms, the bullet will move
   timer->start(30);
}

void arrow::shoot()
{
    //implement collision, this
    QList<QGraphicsItem *> collision=collidingItems();
    // this is a list with all the colliding boys and the heart
    for(int i=0; i<collision.size(); ++i)
        if(typeid(*collision[i])==typeid(boy))
        {
            scene()->removeItem(collision[i]);
            scene()->removeItem(this);
            delete collision[i];
            delete this;
            return;
        }


    //want to move the arrow up, so only y value changes
    setPos(x(),y()-10);
    //delete arrow if it goes out of the scene
    //if(pos().y()<-800)

    if(pos().y()<=-800)
    {
        scene()->removeItem(this);
        delete this;
    }

}
