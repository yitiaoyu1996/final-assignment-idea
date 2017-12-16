#ifndef CHARACTER_H
#define CHARACTER_H
#include <QGraphicsPixmapItem>

#include <QObject>
#include <QmediaPlayer>

 class character: public QObject, public QGraphicsPixmapItem
 {Q_OBJECT

 public:
     character (QGraphicsItem *parent=0);
     void keyPressEvent(QKeyEvent *event);
 public slots:
     void create_boy();
private:
      QMediaPlayer* shootsound;
 };
 #endif // CHARACTER_H

