#ifndef BOY_H
#define BOY_H

#endif // BOY_H


#include <QGraphicsRectItem>
#include<QObject>
class boy: public QObject,public QGraphicsRectItem
{ Q_OBJECT
public:
   boy();

public slots:
    void move();
};

//#endif // BOY_H
