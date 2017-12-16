#include "button.h"
#include <QGraphicsTextItem>
#include <QBrush>
#include<QGraphicsRectItem>


button::button(QString title, QGraphicsItem *parent)
    : QObject(), QGraphicsRectItem(parent)

{

    setRect(0,0,100,50);
    QBrush bg;
    bg.setColor(Qt::red);
    setBrush(bg);
    //QFont::Bold;
    QGraphicsTextItem *text=new QGraphicsTextItem(title,this);
    text->setPos(50,25);
    text->setDefaultTextColor(Qt::black);

}
