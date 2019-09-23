#include <Box2D/Box2D.h>
#include "window.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    window w;
    w.show();

    QWidget *introWindow = new QWidget(nullptr);
    QLabel *intro1 = new QLabel("Welcome to golf basics!");
    QLabel *intro2 = new QLabel("We have a selection of different clubs with a");
    QLabel *intro3 = new QLabel("guide to help you choose which one and why.");
    QLabel *intro4 = new QLabel("After completing all 3 levels you will have a better");
    QLabel *intro5 = new QLabel("understanding of how the basics of golf work.");

    QGridLayout* layout2 = new QGridLayout;
    layout2->addWidget(intro1);
    layout2->addWidget(intro2);
    layout2->addWidget(intro3);
    layout2->addWidget(intro4);
    layout2->addWidget(intro5);

    introWindow->setLayout(layout2);
    introWindow->setWindowTitle("Hello!");
    introWindow->show();

    return a.exec();
}
