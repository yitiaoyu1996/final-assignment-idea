#include "character.h"
#include <QKeyEvent>
#include<QGraphicsScene>
#include "arrow.h"

void character::keyPressEvent(QKeyEvent *event)
{
  if(event->key()==Qt::Key_Left)
  {
      setPos(x()-10,y());
  }
  else if(event->key()==Qt::Key_Right)
  {
      setPos(x()+10,y());

  }

  else if(event->key()==Qt::Key_Space)
  {
      arrow *a = new arrow();
      //constructor alrealy set the size
      //add the arrow to the scene
      a->setPos(x(),y());
      scene()->addItem(a);
  }


}
