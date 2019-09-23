#ifndef BOX2DMODEL_H
#define BOX2DMODEL_H

#include <Box2D/Box2D.h>
#include <QObject>
#include <QWidget>
#include "mycontactlistener.h"
#include "nextlevel.h"


class box2dmodel : public QObject
{
    Q_OBJECT

public:
    box2dmodel(int level);
    bool updateWorld();
    b2Body* golfBall;
    b2World *world;
    //at global scope
    MyContactListener *listener;
    int getLevel();
    nextLevel *newWindow;
    int level;

private:
    b2Vec2 *gravity;
    float SCALE = 30.f;

    void createGround(float x, float y);
    void createTeebox(float X, float Y);
    void createTree(float X, float Y);
    void createTree2(float X, float Y);
    void createHole(float X, float y);
    void createWater(float X, float y);
    void createGolfBallModel();
    int makeYCord(int y);
};

#endif // BOX2DMODEL_H
