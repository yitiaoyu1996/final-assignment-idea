#include "arrow.h"
#include <QTimer>
#include <QGraphicsScene>
#include<QList>
#include "boy.h"
#include"maingame.h"
#include"score.h"

extern  maingame*shooting;

arrow::arrow(QGraphicsItem *parent): QObject(), QGraphicsPixmapItem()
{
   setPos(250,710);
    setPixmap(QPixmap(":new/image/heart.png"));
    //QPixmap::scaled();
    successsound=new QMediaPlayer();
    successsound->setMedia(QUrl("qrc:new/sound/success.wav"));
   //setRect(250,700,10,50);
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
            shooting->score->score_increse();

            if(successsound->state()==QMediaPlayer::PlayingState){
                successsound->setPosition(0);
            }
            else if (successsound->state()==QMediaPlayer::StoppedState)
            {
                successsound->play();
            }
            //successsound->play();
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
