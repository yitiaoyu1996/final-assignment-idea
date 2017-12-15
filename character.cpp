#include "character.h"
#include <QKeyEvent>
#include<QGraphicsScene>
#include "arrow.h"
#include"boy.h"

void character::keyPressEvent(QKeyEvent *event)
{
  if(event->key()==Qt::Key_Left )
  {
      if(pos().x()>-250)
      setPos(x()-10,y());
  }
  else if(event->key()==Qt::Key_Right )

  {
      if(pos().x()+100<350)
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

void character::create_boy()
{
    boy* grey=new boy();
    scene()->addItem(grey);
}
