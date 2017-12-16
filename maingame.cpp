#include <QGraphicsView>
#include "character.h"
#include <QGraphicsScene>
#include <QTimer>
#include "maingame.h"
#include "boy.h"
#include<QMediaPlayer>
#include <QImage>
#include <QBrush>
#include <QObject>

maingame::maingame(QWidget *parent) : QGraphicsView()
{
    gamewindow = new QGraphicsScene();
    gamewindow->setSceneRect(0,0,600,800);
    gamewindow->setBackgroundBrush(QBrush(QImage(":/new/image/bg1.jpg")));

    // scrollbar keeps extending, want to prevent this

    //1 character *player = new character();

    QGraphicsView *view =new QGraphicsView(gamewindow);

    //2 gamewindow->addItem(player);

    score=new Score();
    gamewindow->addItem(score);

    life1=new life();
    gamewindow->addItem(life1);

    //want to make player focused

    // 3 player->setFlag(QGraphicsItem::ItemIsFocusable);
    // 4 player->setFocus();
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->show();

    view->setFixedSize(600,800);

   // 3 QTimer *timer= new QTimer();
    // 4 QObject::connect(timer, SIGNAL(timeout()), player, SLOT(create_boy()));
   // 5 timer->start(1500);

     QMediaPlayer *background = new QMediaPlayer();
     background->setMedia(QUrl("qrc:new/sound/background.mp3"));
     background->play();
     //show();
}

void maingame::displayMainMenu(QString titlename, QString start)
{
   title=new QGraphicsTextItem(titlename);
   title->setFont(QFont ("new", 35));
   title->setPos(100,100);
   gamewindow->addItem(title);

   button *play=new button("Play",title);
   play->setPos(150,150);

    connect(play, SIGNAL(clicked()), this, SLOT(start()));

    button *quit =new button ("Quit", title);
    quit->setPos(150,220);
    connect(quit, SIGNAL(clicked()), this, SLOT(close()));

}

void maingame ::start(){
    character *player = new character();
    gamewindow->addItem(player);
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();
    QTimer *timer= new QTimer();
    QObject::connect(timer, SIGNAL(timeout()), player, SLOT(create_boy()));

    timer->start(1500);

    gamewindow->removeItem(title);
    delete title;
}

void maingame::gameOver(){
    displayMainMenu("Game Over!", "Play Again");
    gamewindow->removeItem(player);
}




