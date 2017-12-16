#ifndef BOY_H
#define BOY_H


#include <QGraphicsPixmapItem>
#include<QMediaPlayer>
#include<QObject>
class boy: public QObject,public QGraphicsPixmapItem
{ Q_OBJECT
public:
   boy(QGraphicsItem *parent=0);

public slots:
    void move();
private:
    QMediaPlayer *misssound;
};

#endif // BOY_H
