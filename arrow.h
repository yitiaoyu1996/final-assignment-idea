#ifndef ARROW_H
#define ARROW_H
#include <QGraphicsRectItem>
#include<QObject>
class arrow: public QObject,public QGraphicsRectItem
{ Q_OBJECT
public:
    arrow();

public slots:
    void shoot();
};

#endif // ARROW_H
