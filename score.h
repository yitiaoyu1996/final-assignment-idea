#ifndef SCORE_H
#define SCORE_H
#include <QGraphicsTextItem>
#include <QGraphicsPixmapItem>

class Score: public QGraphicsTextItem{
  public:
     Score(QGraphicsItem *parent=0);
     void score_increse();
     int get_score();
private:
     int heart;

};

#endif // SCORE_H
