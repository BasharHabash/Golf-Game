#ifndef GOLFGUIDE_H
#define GOLFGUIDE_H

#include <QWidget>
#include <QPushButton>
#include <QHBoxLayout>
#include <QLabel>
#include <QPixmap>
#include <QFormLayout>

class GolfGuide : public QWidget
{
    Q_OBJECT
public:
    explicit GolfGuide(QWidget *parent = nullptr);

    QPushButton *whatClub;
    QPushButton *clubStats;
    QPushButton *penaltyShots;
    QPushButton *scoring;
    QPushButton *etiquette;

    QGridLayout *layout;

    QWidget *whatClubWindow;
    QWidget *clubStatsWindow;
    QWidget *penaltyShotsWindow;
    QWidget *scoringWindow;
    QWidget *etiquetteWindow;

    void openWhatClubWindow();
    void openClubStatsWindow();
    void openPenaltyShotsWindow();
    void openScoringWindow();
    void openEtiquetteWindow();

signals:

public slots:
};

#endif // GOLFGUIDE_H
