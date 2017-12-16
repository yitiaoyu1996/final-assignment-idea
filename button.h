#ifndef BUTTON_H
#define BUTTON_H
#include<QGraphicsRectItem>
#include <QGraphicsSceneMouseEvent>
#include<QObject>

class button : public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    button(QString title, QGraphicsItem *parent=0);
    void mousePressEvent(QGraphicsSceneMouseEvent *clickevent);
signals:
    void clicked();
    private:
    QGraphicsTextItem *textinbutton;
};
#endif // BUTTON_H
