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
    textinbutton =new QGraphicsTextItem(title,this);
    int xcor=rect().width()/2-textinbutton->boundingRect().width()/2;
    int ycor=rect().height()/2-textinbutton->boundingRect().height()/2;
    textinbutton->setPos(xcor,ycor);
    textinbutton->setDefaultTextColor(Qt::black);

}

void button::mousePressEvent(QGraphicsSceneMouseEvent *clickevent)

{
    if(clickevent)
        emit clicked();
}
