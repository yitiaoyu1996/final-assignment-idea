#include "score.h"
#include <QFont>
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>


Score::Score(QGraphicsItem *parent):QGraphicsTextItem(parent)
{
    heart=0;
    //QPixmap(":/new/image/heart.png");
    setPlainText(QString("Score: ")+QString::number(heart));
    //setPos(50,50);
    setDefaultTextColor(Qt::red);
    setFont(QFont("futura",12));
    //QFont::Bold;
    setPos(0,0);



}
void Score::score_increse()
{
    ++heart;
    setPlainText(QString("Score: ")+QString::number(heart));
}

int Score::get_score()
{
    return heart;
}

