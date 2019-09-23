#ifndef MYCONTACTLISTENER_H
#define MYCONTACTLISTENER_H

#include <Box2D/Box2D.h>
#include <QObject>
#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QLayout>
#include <QMainWindow>
#include <QMediaPlayer>
#include "nextlevel.h"

class MyContactListener: public b2ContactListener
{
public:
    MyContactListener(nextLevel* next);
    void BeginContact(b2Contact* contact);
    b2Vec2 holeLocation;
    nextLevel *nextLevelWindow;
    QMediaPlayer* ballInHole;

private slots:
signals:
    void test();
};

#endif // MYCONTACTLISTENER_H
