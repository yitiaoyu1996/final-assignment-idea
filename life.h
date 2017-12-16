#ifndef LIFE_H
#define LIFE_H
#include <QGraphicsTextItem>
#include <QGraphicsPixmapItem>

class life: public QGraphicsTextItem{

  public:
     life (QGraphicsItem *parent=0);
     void life_decrease();
     int get_lifeleft();


private:
     int lifeleft;

};

#endif // LIFE_H
