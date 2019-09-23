#ifndef NEXTLEVEL_H
#define NEXTLEVEL_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QLayout>


class nextLevel : public QWidget
{
    Q_OBJECT
public:
    explicit nextLevel(QWidget *parent = nullptr);

    QVBoxLayout *layout;
    QWidget *newWindow;
    QLabel *congratsLabel;
    QPushButton *nextLevelButton;
};

#endif // NEXTLEVEL_H
