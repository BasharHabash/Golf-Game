#include "mycontactlistener.h"
#include "box2dmodel.h"
#include <Box2D/Box2D.h>
#include <iostream>
#include "window.h"

MyContactListener::MyContactListener(nextLevel* next)
{
    ballInHole = new QMediaPlayer;
    ballInHole->setMedia(QUrl("qrc:/sounds/ballInHole.mp3"));
    nextLevelWindow = next;
}


void MyContactListener::BeginContact(b2Contact* contact)
{
    //check if one of the bodies is a golf ball
    if (contact->GetFixtureA()->GetBody()->GetType() == b2_dynamicBody || contact->GetFixtureA()->GetBody()->GetType() == b2_dynamicBody)
    {
        //b2Vec2 holeLocation(915.f/30, 325.f/30);
        //check if one of the bodies is the hole
        if (contact->GetFixtureA()->GetBody()->GetPosition() == holeLocation || contact->GetFixtureB()->GetBody()->GetPosition() == holeLocation)
        {
            ballInHole->play();
            nextLevelWindow->show();
        }
    }
}
