#ifndef MAINGAME_H
#define MAINGAME_H
#include <QGraphicsView>
#include "character.h"
#include <QGraphicsScene>
#include <QTimer>
#include "Score.h"
#include "life.h"
class maingame{
  public:
    maingame(QWidget *parent=0);

    QGraphicsScene *gamewindow;
    character *player;
    Score *score;
    life *life1;
};
#endif // MAINGAME_H
