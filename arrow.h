#ifndef ARROW_H
#define ARROW_H
#include "score.h"
#include <QMediaPlayer>

#include<QGraphicsPixmapItem>

#include<QObject>
class arrow: public QObject,public QGraphicsPixmapItem
{ Q_OBJECT
public:
    arrow(QGraphicsItem *parent=0);

public slots:
    void shoot();
private:
    QMediaPlayer *successsound;
};

#endif // ARROW_H
