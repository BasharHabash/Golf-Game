#include "window.h"
#include "ui_window.h"
#include <QImage>
#include <QTimer>
#include <iostream>
#include <QMovie>
#include "mycontactlistener.h"

window::window(QWidget *parent) : QMainWindow(parent), ui(new Ui::window)
{
    model = new box2dmodel(1);

    ui->setupUi(this);
    // Create the background
    texture.create(1000, 900);
    background_texture.loadFromFile("../golfcourse.png");
    background.setTexture(background_texture);
    background.setOrigin(0, 0);
    background.scale(.8f, .5f);

    //set icons to buttons
    QPixmap pixmap("../driver2.png");
    QIcon ButtonIcon(pixmap);
    QPixmap ironmap("../iron.png");
    QIcon Icon(ironmap);
    QPixmap puttermap("../putter.png");
    QIcon PutIcon(puttermap);
    ui->driver->setIcon(ButtonIcon);
    ui->driver->setCheckable(true);
    ui->driver->setIconSize(pixmap.rect().size());
    ui->driver->setFixedSize(pixmap.rect().size());
    ui->driver->setChecked(true);
    ui->iron4->setIcon(Icon);
    ui->iron4->setIconSize(pixmap.rect().size());
    ui->iron4->setFixedSize(pixmap.rect().size());
    ui->iron4->setCheckable(true);
    ui->iron5->setIcon(Icon);
    ui->iron5->setIconSize(pixmap.rect().size());
    ui->iron5->setFixedSize(pixmap.rect().size());
    ui->iron5->setCheckable(true);
    ui->iron6->setIcon(Icon);
    ui->iron6->setIconSize(pixmap.rect().size());
    ui->iron6->setFixedSize(pixmap.rect().size());
    ui->iron6->setCheckable(true);
    ui->iron7->setIcon(Icon);
    ui->iron7->setIconSize(pixmap.rect().size());
    ui->iron7->setFixedSize(pixmap.rect().size());
    ui->iron7->setCheckable(true);
    ui->iron8->setIcon(Icon);
    ui->iron8->setIconSize(pixmap.rect().size());
    ui->iron8->setFixedSize(pixmap.rect().size());
    ui->iron8->setCheckable(true);
    ui->iron9->setIcon(Icon);
    ui->iron9->setIconSize(pixmap.rect().size());
    ui->iron9->setFixedSize(pixmap.rect().size());
    ui->iron9->setCheckable(true);
    ui->putter->setIcon(PutIcon);
    ui->putter->setIconSize(pixmap.rect().size());
    ui->putter->setFixedSize(pixmap.rect().size());
    ui->putter->setCheckable(true);

    //set up powerBar
    ui->powerBar->setTickInterval(5);
    ui->powerBar->setMaximum(5);
    ui->powerBar->setMinimum(1);
    ui->powerBar->setValue(5);


    // Create the sprite
    sprite_texture.loadFromFile("../ball.png");
    sprite_texture.setSmooth(true);
    sprite.setTexture(sprite_texture);
    sprite.setOrigin(0,0);
    sprite.setPosition(48,283); //set postion of ball
    renderTexture();
    changeCurrentClub(1);
    loadGif();
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &window::renderTexture);
    timer->start(1);
    connect(ui->Swing, &QPushButton::pressed, this, &window::applyforce);
    connect(ui->openGuide, &QPushButton::pressed, this, &window::openNewWindow);

    connect(model->newWindow->nextLevelButton, &QPushButton::pressed, this, &window::nextLevel);

    ballHitSound = new QMediaPlayer;
    ballHitSound->setMedia(QUrl("qrc:/sounds/ballHitSound.mp3"));

    level2PopupWindow = new QWidget(nullptr);
    QLabel *line1 = new QLabel("Welcome to level 2!");
    QLabel *line2 = new QLabel("Here we have added an obstical blocking your path.");
    QLabel *line3 = new QLabel("If you're stuck, try using a high tragectory iron to get");
    QLabel *line4 = new QLabel("over the obstical and into the hole!");

    QGridLayout* layout = new QGridLayout;
    layout->addWidget(line1);
    layout->addWidget(line2);
    layout->addWidget(line3);
    layout->addWidget(line4);

    level2PopupWindow->setLayout(layout);
    level2PopupWindow->setWindowTitle("Level 2");

    level = 1;

    swings = 0;
}

void window::applyforce(){
    ui->Swing->setEnabled(false);
    swinging = true;
    movie->start();
    QTimer *timer2 = new QTimer;
    timer2->setSingleShot(true);
    connect(timer2,&QTimer::timeout,this,&window::swing);
    timer2->start(900);
    swings++;
    ui->lcdNumber->display(swings);
}

void window::swing() {
    for (b2Body* BodyIterator = model->world->GetBodyList(); BodyIterator != 0; BodyIterator = BodyIterator->GetNext())
          {
              if (BodyIterator->GetType() == b2_dynamicBody)
              {
                   BodyIterator->ApplyLinearImpulse(b2Vec2(clubX, clubY),BodyIterator->GetWorldCenter());
                   ballHitSound->play();
                   swinging = false;
              }

          }
}

//initial params?
void window::renderTexture() {

    //Initial setup
    model->world->Step(1/30.f, 1, 1);
    for (b2Body* BodyIterator = model->world->GetBodyList(); BodyIterator != nullptr; BodyIterator = BodyIterator->GetNext())
          {
              if (BodyIterator->GetType() == b2_dynamicBody)
              {
                  if(BodyIterator->GetLinearVelocity() == b2Vec2(0,0)&& swinging == false && !ui->Swing->isEnabled())
                  {
                      ballHitSound = new QMediaPlayer;
                      ballHitSound->setMedia(QUrl("qrc:/sounds/ballHitSound.mp3"));
                      ui->Swing->setEnabled(true);
                      ui->golfbag->hide();
                      if(!model->newWindow->isActiveWindow())
                      {
                           ui->Golfer->move(SCALE * BodyIterator->GetPosition().x-88,SCALE * BodyIterator->GetPosition().y-130 );
                      }
                      loadGif();
                  }
                   sprite.setPosition( SCALE * BodyIterator->GetPosition().x,SCALE * BodyIterator->GetPosition().y );
              }

          }
    texture.draw(background);
    if(!model->newWindow->isActiveWindow())
    {
        texture.draw(sprite);
    }
    texture.display();
    sf::Texture rt = texture.getTexture();
    sf::Image irt = rt.copyToImage();
    const uint8_t *pp = irt.getPixelsPtr();
    QImage qi(pp, 1000, 400, QImage::Format_ARGB32);
    qi = qi.rgbSwapped();
    ui->label->setPixmap(QPixmap::fromImage(qi));

}

//changes club to correct force values
void window::changeCurrentClub(int club)
{
    switch(club)
    {
        case 0: currentClub = 0;
                clubY = 0;
                clubX =7;
                break;
        case 1: currentClub = 1;
                clubY = -11;
                clubX = 15;
                break;
        case 4: currentClub = 4;
                clubY = -14;
                clubX=11;
                break;
        case 5: currentClub = 5;
                clubY = -14.2;
                clubX = 10;
                break;
        case 6: currentClub = 6;
                clubY = -14.4;
                clubX = 9;
                break;
        case 7: currentClub = 7;
                clubY = -14.6;
                clubX = 7;
                break;
        case 8: currentClub = 8;
                clubY = -14.8;
                clubX = 6;
                break;
        case 9: currentClub = 9;
                clubY = -15;
                clubX = 5;
                break;


    }
}

//changes the power of the swing
void window::changePower()
{
    changeCurrentClub(currentClub);
    clubX = clubX - (5 - ui->powerBar->value());
}

void window::loadGif()
{
    if(currentClub == 0)
    {
         movie = new QMovie("../golfer-putt.gif");
    }
   else if(currentClub == 1)
    {
        movie = new QMovie("../golfer.gif");
    }
    else {
        movie = new QMovie("../golfer-iron.gif");
    }

    // Make sure the GIF was loaded correctly
    if (!movie->isValid())
    {
        // Something went wrong :(
    }
    // Play GIF
    //QLabel* label = new QLabel(this);
    ui->Golfer->setMovie(movie);
    movie->setSpeed(75);
    movie->start();
    movie->setPaused(true);
    movie->jumpToFrame(0);
}
//button logic
void window::on_putter_pressed()
{
    changeCurrentClub(0);
    uncheck_club_buttons(0);
    loadGif();
    changePower();


}
void window::on_driver_pressed()
{
    changeCurrentClub(1);
    uncheck_club_buttons(1);
    loadGif();
    changePower();

}
void window::on_iron4_pressed()
{
    changeCurrentClub(4);
    uncheck_club_buttons(4);
    loadGif();
    changePower();

}
void window::on_iron5_pressed()
{
    changeCurrentClub(5);
    uncheck_club_buttons(5);
    loadGif();
    changePower();
   ;
}
void window::on_iron6_pressed()
{
    changeCurrentClub(6);
    uncheck_club_buttons(6);
    loadGif();
    changePower();

}
void window::on_iron7_pressed()
{
    changeCurrentClub(7);
    uncheck_club_buttons(7);
    loadGif();
    changePower();

}
void window::on_iron8_pressed()
{
    changeCurrentClub(8);
    uncheck_club_buttons(8);
    loadGif();
    changePower();

}
void window::on_iron9_pressed()
{
    changeCurrentClub(9);
    uncheck_club_buttons(9);
    loadGif();
    changePower();

}
void window::on_powerBar_valueChanged()
{
    changePower();
}
void window::uncheck_club_buttons(int club)
{
   if (club != 0)
       ui->putter->setChecked(false);
   if (club != 1)
       ui->driver->setChecked(false);
   if (club != 4)
       ui->iron4->setChecked(false);
   if (club != 5)
       ui->iron5->setChecked(false);
   if (club != 6)
       ui->iron6->setChecked(false);
   if (club != 7)
       ui->iron7->setChecked(false);
   if (club != 8)
       ui->iron8->setChecked(false);
   if (club != 9)
       ui->iron9->setChecked(false);

}


void window::on_reset_pressed()
{
    if(model->getLevel() == 1)
    {
        model = new box2dmodel(1);
        ui->Golfer->move(-40,140);
    }
    else
    {
        if(level == 2)
        {
            model = new box2dmodel(2);
            ui->Golfer->move(-40,187);
        }
        else
        {
            model = new box2dmodel(3);
            ui->Golfer->move(-40,187);
        }

    }


    connect(model->newWindow->nextLevelButton, &QPushButton::pressed, this, &window::nextLevel);

    movie->start();
    movie->setPaused(true);
    movie->jumpToFrame(0);
    ballHitSound = new QMediaPlayer(this);
    ballHitSound->setMedia(QUrl("qrc:/sounds/ballHitSound.mp3"));
    changePower();
    ui->Swing->setEnabled(true);
    swings = 0;
    ui->lcdNumber->display(swings);
}

void window::openNewWindow()
{
    guide = new GolfGuide();
    guide->show();
}


void window::nextLevel()
{
    if(level == 1)
    {
        level2PopupWindow->show();
        model->newWindow->close();
        background_texture.loadFromFile("../golfcourse2.png");
        background.setTexture(background_texture);
        model = new box2dmodel(2);
        movie->start();
        movie->setPaused(true);
        movie->jumpToFrame(0);
        changePower();
        ui->Golfer->move(-40,187);
        ui->Swing->setEnabled(true);
        swings = 0;
        ui->lcdNumber->display(swings);
        ui->par->setText("4");
        level = 2;
    }
    else
    {
        model->newWindow->close();
        background_texture.loadFromFile("../golfcourse3.png");
        background.setTexture(background_texture);
        model = new box2dmodel(3);
        movie->start();
        movie->setPaused(true);
        movie->jumpToFrame(0);
        changePower();
        ui->Golfer->move(-40,187);
        ui->Swing->setEnabled(true);
        swings = 0;
        ui->lcdNumber->display(swings);
        ui->par->setText("5");
        level = 3;
    }

    connect(model->newWindow->nextLevelButton, &QPushButton::pressed, this, &window::nextLevel);

}

window::~window()
{
    delete ui;
}
