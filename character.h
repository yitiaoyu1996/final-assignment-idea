#ifndef CHARACTER_H
#define CHARACTER_H
#include <QGraphicsRectItem>
#endif // CHARACTER_H
#include <QObject>

 class character: public QObject, public QGraphicsRectItem
 {Q_OBJECT

 public:
     void keyPressEvent(QKeyEvent *event);
 public slots:
     void create_boy();

 };
