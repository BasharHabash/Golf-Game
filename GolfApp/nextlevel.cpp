#include "nextlevel.h"

nextLevel::nextLevel(QWidget *parent) : QWidget(parent)
{
    congratsLabel = new QLabel("Congrats! You beat the level, try to get under par or even a hole in one before moving on!");
    nextLevelButton = new QPushButton("Next Level");
    layout = new QVBoxLayout;
    layout->addWidget(congratsLabel);
    layout->addWidget(nextLevelButton);
    this->setLayout(layout);
    this->setWindowTitle("Yay!");
}
