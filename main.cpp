
#include <QApplication>
//#include <QGraphicsView>
//#include "character.h"
//#include <QGraphicsScene>
//#include <QTimer>
#include "maingame.h"

maingame *shooting;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //QGraphicsScene *gamewindow = new QGraphicsScene();
    // scrollbar keeps extending, want to prevent this

    //character *player = new character();

   // QGraphicsView *view =new QGraphicsView(gamewindow);


    //player->setRect(250,700,100,100);

    //gamewindow->addItem(player);

    //want to make player focused

    //player->setFlag(QGraphicsItem::ItemIsFocusable);
    //player->setFocus();


    //QGraphicsView *view =new QGraphicsView(gamewindow);

    //Do not want scroll bars to extend infinitely
    //view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    //view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    //view->show();

    //view->setFixedSize(600,800);
    //gamewindow->setSceneRect(0,0,600,800);


    //QTimer *timer= new QTimer();
    //QObject::connect(timer, SIGNAL(timeout()), player, SLOT(create_boy()));
    //timer->start(1500);
    shooting =new maingame();
    //shooting->show();
    return a.exec();



}
