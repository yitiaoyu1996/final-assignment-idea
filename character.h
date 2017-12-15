#ifndef CHARACTER_H
#define CHARACTER_H
#include <QGraphicsRectItem>
#endif // CHARACTER_H
 class character: public QGraphicsRectItem
 {
 public:
     void keyPressEvent(QKeyEvent *event);

 };
