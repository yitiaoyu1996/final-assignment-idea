
#include <QApplication>
//#include <QGraphicsView>
//#include "character.h"
//#include <QGraphicsScene>
//#include <QTimer>
#include "maingame.h"

maingame *shooting;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    shooting =new maingame();
    //shooting->show();
    return a.exec();



}
