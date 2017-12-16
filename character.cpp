#include "character.h"
#include <QKeyEvent>
#include<QGraphicsScene>
#include "arrow.h"
#include"boy.h"
#include"maingame.h"

character::character(QGraphicsItem *parent): QGraphicsPixmapItem(parent)
{
    shootsound=new QMediaPlayer();
    shootsound->setMedia(QUrl("qrc:new/sound/shoot.wav"));
    setPos(250,710);
  setPixmap(QPixmap(":/new/image/girl1.png"));

}

void character::keyPressEvent(QKeyEvent *event)
{
  if(event->key()==Qt::Key_Left )
  {
      if(pos().x()>0)
      setPos(x()-10,y());
  }
  else if(event->key()==Qt::Key_Right )

  {
      if(pos().x()<540)
      setPos(x()+10,y());

  }

  else if(event->key()==Qt::Key_Space)
  {
      arrow *a = new arrow();
      //constructor alrealy set the size
      //add the arrow to the scene
      a->setPos(x(),y());
      scene()->addItem(a);
      //if(shootsound->state()==QMediaPlayer::PlayingState){
        //  shootsound->setPosition(0);
      //}
      //else if (shootsound->state()==QMediaPlayer::StoppedState)
      //{
        //  shootsound->play();
      //}
      shootsound->play();
  }


}

void character::create_boy()
{
    boy* grey=new boy();
    scene()->addItem(grey);
}
