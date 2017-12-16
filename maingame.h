#ifndef MAINGAME_H
#define MAINGAME_H
#include <QGraphicsView>
#include"button.h"
#include <QKeyEvent>
#include "character.h"
#include <QGraphicsScene>
#include <QTimer>
#include "Score.h"
#include "life.h"
#include <QGraphicsTextItem>
#include <QObject>
#include <QGraphicsView>

class maingame: public QGraphicsView{
  Q_OBJECT
  public:
    maingame(QWidget *parent=0);

    QGraphicsScene *gamewindow;
    character *player;
    Score *score;
    life *life1;
    void displayMainMenu(QString title, QString start);
    QGraphicsTextItem *title;
    button *a;
    void gameOver();

  public slots:
    void start();
};

#endif // MAINGAME_H
