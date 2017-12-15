
#include <QApplication>
#include <QGraphicsView>
#include "character.h"
#include <QGraphicsScene>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QGraphicsScene *gamewindow = new QGraphicsScene();
    // scrollbar keeps extending, want to prevent this

    character *player = new character();
   // QGraphicsView *view =new QGraphicsView(gamewindow);


    player->setRect(250,700,100,100);

    gamewindow->addItem(player);

    //want to make player focused

    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();


    QGraphicsView *view =new QGraphicsView(gamewindow);

    //Do not want scroll bars to extend infinitely
   view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->show();

    view->setFixedSize(600,800);
    gamewindow->setSceneRect(0,0,600,800);
    return a.exec();



}
