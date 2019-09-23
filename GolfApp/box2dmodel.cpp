#include "box2dmodel.h"
#include <iostream>

box2dmodel::box2dmodel(int l)
{
    newWindow = new nextLevel();
    listener = new MyContactListener(newWindow);

    gravity = new b2Vec2(0.f, 9.8f);
    world = new b2World(*gravity, true);
    level = l;
    if(level == 1)
    {

        createGolfBallModel();
        createGround(300.f, 325.f);
        createTeebox(0.f, 300.f);
        createHole(915.f, 325.f);
        listener->holeLocation = b2Vec2(915.f/30 , 325.f/30);
        world->SetContactListener(listener);
    }
    else if(level == 2)
    {
        createGolfBallModel();
        createGround(0.f, 340.f);
        createTree(700.f, 325.f);
        createHole(960.f, 340.f);
        listener->holeLocation = b2Vec2(960.f/30, 340.f/30);
        world->SetContactListener(listener);
    }
    else if(level == 3)
    {

        createGround(0.f, 340.f);
        createGolfBallModel();
        createTree(700.f, 325.f);
        createTree(280.f, 260.f);
        createHole(960.f, 340.f);
        listener->holeLocation = b2Vec2(960.f/30, 340.f/30);
        world->SetContactListener(listener);
    }
}

void box2dmodel::createGround(float X, float Y)
{
      b2BodyDef BodyDef;
      BodyDef.position = b2Vec2(X/SCALE, Y/SCALE);
      BodyDef.type = b2_staticBody;
      b2Body* Body = world->CreateBody(&BodyDef);

      b2PolygonShape Shape;
      if(level == 1){
           Shape.SetAsBox((1500.f/2)/SCALE, (5.f)/SCALE);
      }
      if (level == 2 || level == 3){
           Shape.SetAsBox((2000.f/2)/SCALE, (5.f)/SCALE);
      }

      b2FixtureDef FixtureDef;
      FixtureDef.density = 0.f;
      FixtureDef.restitution = .35f;
      FixtureDef.friction = .5f;
      FixtureDef.shape = &Shape;
      Body->CreateFixture(&FixtureDef);
}

void box2dmodel::createTeebox(float X, float Y)
{
      b2BodyDef BodyDef;
      BodyDef.position = b2Vec2(X/SCALE, Y/SCALE);
      BodyDef.type = b2_staticBody;
      b2Body* Body = world->CreateBody(&BodyDef);

      b2PolygonShape Shape;
      Shape.SetAsBox((150.f/2)/SCALE, (25.f/2)/SCALE);
      b2FixtureDef FixtureDef;
      FixtureDef.density = 0.f;
      FixtureDef.shape = &Shape;
      Body->CreateFixture(&FixtureDef);
}

void box2dmodel::createTree(float X, float Y)
{
    b2BodyDef BodyDef;
    BodyDef.position = b2Vec2(X/SCALE, Y/SCALE);
    BodyDef.type = b2_staticBody;
    b2Body* Body = world->CreateBody(&BodyDef);

    b2PolygonShape Shape;
    Shape.SetAsBox((50.f/2)/SCALE, (170.f/2)/SCALE);
    b2FixtureDef FixtureDef;
    FixtureDef.density = 0.f;
    FixtureDef.shape = &Shape;
    Body->CreateFixture(&FixtureDef);
}

void box2dmodel::createTree2(float X, float Y)
{
    b2BodyDef BodyDef;
    BodyDef.position = b2Vec2(X/SCALE, Y/SCALE);
    BodyDef.type = b2_staticBody;
    b2Body* Body = world->CreateBody(&BodyDef);

    b2PolygonShape Shape;
    Shape.SetAsBox((75.f/2)/SCALE, (250.f/2)/SCALE);
    b2FixtureDef FixtureDef;
    FixtureDef.density = 0.f;
    FixtureDef.shape = &Shape;
    Body->CreateFixture(&FixtureDef);
}

void box2dmodel::createHole(float X, float Y)
{
    b2BodyDef BodyDef;
    BodyDef.position = b2Vec2(X/SCALE, Y/SCALE);
    BodyDef.type = b2_staticBody;
    b2Body* Body = world->CreateBody(&BodyDef);

    b2PolygonShape Shape;
    Shape.SetAsBox((10.f/2)/SCALE, (20.f/2)/SCALE);
    b2FixtureDef FixtureDef;


    FixtureDef.density = 2.f;
    FixtureDef.shape = &Shape;
    Body->CreateFixture(&FixtureDef);

}
int box2dmodel::getLevel(){
    return level;

}

void box2dmodel::createGolfBallModel()
{
      b2BodyDef BodyDef;
      BodyDef.position = b2Vec2(48/SCALE, 270/SCALE);
      BodyDef.type = b2_dynamicBody;
      b2Body* Body = world->CreateBody(&BodyDef);

      b2PolygonShape Shape;
      Shape.SetAsBox((32.f/2)/SCALE, (32.f/2)/SCALE);
      b2FixtureDef FixtureDef;
      FixtureDef.density = 1.f;
      FixtureDef.friction = 0.7f;
      FixtureDef.shape = &Shape;
      Body->CreateFixture(&FixtureDef);

      struct bodyUserData
      {
         int object = 1;
      };
      bodyUserData* ballStruct = new bodyUserData;
      Body->SetUserData(ballStruct);
      //MyContactListener* list = new MyContactListener;
      //world->SetContactListener(list);


}

bool box2dmodel::updateWorld()
{
    return true;
}

int box2dmodel::makeYCord(int y)
{




}
