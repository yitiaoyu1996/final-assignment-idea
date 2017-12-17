#include "life.h"
#include <QFont>
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include "maingame.h"

extern maingame *shooting;
life::life(QGraphicsItem *parent): QGraphicsTextItem(parent)
{
    lifeleft=3;
    //QPixmap(":/new/image/heart.png");
    setPlainText(QString("Life: ")+QString::number(lifeleft));
    //setPos(50,50);
    setDefaultTextColor(Qt::red);
    setFont(QFont("futura",12));
    //QFont::Bold;
    setPos(500,0);

}
void life::life_decrease()
{
    --lifeleft;
    setPlainText(QString("Life: ")+QString::number(lifeleft));
    if(lifeleft==0)
    {
        shooting->gameOver();
    }

}

int life::get_lifeleft()
{
    return lifeleft;
}



