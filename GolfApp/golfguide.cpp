#include "golfguide.h"

GolfGuide::GolfGuide(QWidget *parent) : QWidget(parent)
{
    whatClub = new QPushButton("Which club should I choose?");
    clubStats = new QPushButton("Club statistics");
    scoring = new QPushButton("Basic scoring rules");
    etiquette = new QPushButton("Basic golf etiquette");
    penaltyShots = new QPushButton("Rules for penalty shots");

    layout = new QGridLayout;
    layout->addWidget(whatClub);
    layout->addWidget(clubStats);
    layout->addWidget(scoring);
    layout->addWidget(etiquette);
    layout->addWidget(penaltyShots);

    this->setLayout(layout);
    this->setWindowTitle("guide");

    whatClubWindow = new QWidget();
    clubStatsWindow = new QWidget();
    penaltyShotsWindow = new QWidget();
    scoringWindow = new QWidget();
    etiquetteWindow = new QWidget();


    connect(whatClub, &QPushButton::pressed, this, &GolfGuide::openWhatClubWindow);
    connect(clubStats, &QPushButton::pressed, this, &GolfGuide::openClubStatsWindow);
    connect(scoring, &QPushButton::pressed, this, &GolfGuide::openScoringWindow);
    connect(etiquette, &QPushButton::pressed, this, &GolfGuide::openEtiquetteWindow);
    connect(penaltyShots, &QPushButton::pressed, this, &GolfGuide::openPenaltyShotsWindow);
}

void GolfGuide::openWhatClubWindow()
{
    if(!whatClubWindow->layout())
    {
        QPixmap pic("../WhichClub.png");
        QLabel *label1 = new QLabel(whatClubWindow);
        label1->setPixmap(pic);
        QHBoxLayout *layout = new QHBoxLayout;
        layout->addWidget(label1);
        whatClubWindow->setLayout(layout);
    }

    whatClubWindow->show();
}

void GolfGuide::openClubStatsWindow()
{
    if(!clubStatsWindow->layout())
    {
        QPixmap pic("../ClubStats.png");
        QLabel *label1 = new QLabel(clubStatsWindow);
        label1->setPixmap(pic);
        QHBoxLayout *layout = new QHBoxLayout;
        layout->addWidget(label1);
        clubStatsWindow->setLayout(layout);
    }

    clubStatsWindow->show();
}

void GolfGuide::openScoringWindow()
{
    if(!scoringWindow->layout())
    {
        QPixmap pic("../GolfScoring.png");
        QLabel *label1 = new QLabel(scoringWindow);
        label1->setPixmap(pic);
        QHBoxLayout *layout = new QHBoxLayout;
        layout->addWidget(label1);
        scoringWindow->setLayout(layout);
    }

    scoringWindow->show();
}

void GolfGuide::openPenaltyShotsWindow()
{
    if(!penaltyShotsWindow->layout())
    {
        QPixmap pic("../PenaltyShots.png");
        QLabel *label1 = new QLabel(penaltyShotsWindow);
        label1->setPixmap(pic);
        QHBoxLayout *layout = new QHBoxLayout;
        layout->addWidget(label1);
        penaltyShotsWindow->setLayout(layout);
    }

    penaltyShotsWindow->show();
}

void GolfGuide::openEtiquetteWindow()
{
    if(!etiquetteWindow->layout())
    {
        QPixmap pic("../EtiquettDo.png");
        QPixmap pic2("../EdiquetteDont.png");
        QLabel *label1 = new QLabel(etiquetteWindow);
        label1->setPixmap(pic);
        QLabel *label2 = new QLabel(etiquetteWindow);
        label2->setPixmap(pic2);
        QHBoxLayout *layout = new QHBoxLayout;
        layout->addWidget(label1);
        layout->addWidget(label2);
        etiquetteWindow->setLayout(layout);
    }
    etiquetteWindow->show();
}
