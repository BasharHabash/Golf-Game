#ifndef PAINTSFMLTEXTUREWINDOW_H
#define PAINTSFMLTEXTUREWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <SFML/Graphics.hpp>
#include "ui_window.h"
#include <QPushButton>
#include "box2dmodel.h"
#include <QMediaPlayer>
#include "golfguide.h"
#include "mycontactlistener.h"
#include "nextlevel.h"

namespace Ui {
class window;
}

class window : public QMainWindow
{
    Q_OBJECT

public:
    explicit window(QWidget *parent = nullptr);
    void inthehole();
    ~window();

private:
    Ui::window *ui;
    // Create a new render-texture
    sf::RenderTexture texture;
    sf::Texture sprite_texture;
    sf::Texture background_texture;
    sf::Sprite sprite;
    sf::Sprite background;
    QTimer *timer;
    QMovie* movie;
    QMediaPlayer* ballHitSound;
    int currentClub;
    double clubX;
    double clubY;
    bool swinging;
    float SCALE = 30.f;
    void uncheck_club_buttons(int club);
    void loadGif();
    int swings;
    int level1Par = 3;
    QWidget *level2PopupWindow;
    QWidget *introWindow;
    int level;



    box2dmodel* model;
    GolfGuide* guide;

    void renderTexture();
    void applyforce();
    void swing();
    void changeCurrentClub(int club);
    void changePower();

    //buttons
private slots:
    void on_driver_pressed();
    void on_iron4_pressed();
    void on_iron5_pressed();
    void on_iron6_pressed();
    void on_iron7_pressed();
    void on_iron8_pressed();
    void on_iron9_pressed();
    void on_putter_pressed();
    void on_powerBar_valueChanged();
    void on_reset_pressed();
    void openNewWindow();
    void nextLevel();
};

#endif // PAINTSFMLTEXTUREWINDOW_H
