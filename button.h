#ifndef BUTTON_H
#define BUTTON_H
#include<QGraphicsRectItem>
#include<QObject>

class button : public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    button(QString title, QGraphicsItem *parent=0);

signals:
    void clicked();
    private:
    QGraphicsTextItem *title;
};
#endif // BUTTON_H
