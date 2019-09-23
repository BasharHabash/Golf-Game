/********************************************************************************
** Form generated from reading UI file 'window.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_H
#define UI_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_window
{
public:
    QWidget *widget;
    QLabel *label;
    QPushButton *Swing;
    QLabel *Golfer;
    QPushButton *iron6;
    QPushButton *iron8;
    QPushButton *iron5;
    QPushButton *driver;
    QPushButton *iron7;
    QPushButton *iron9;
    QPushButton *putter;
    QLabel *golfbag;
    QPushButton *iron4;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_5;
    QLabel *label_10;
    QSlider *powerBar;
    QLabel *label_11;
    QPushButton *reset;
    QPushButton *openGuide;
    QLCDNumber *lcdNumber;
    QLabel *label_2;
    QLabel *label_12;
    QLabel *par;
    QLabel *label_13;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *window)
    {
        if (window->objectName().isEmpty())
            window->setObjectName(QStringLiteral("window"));
        window->resize(1299, 571);
        widget = new QWidget(window);
        widget->setObjectName(QStringLiteral("widget"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 10, 1481, 421));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(127, 127, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(63, 63, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(0, 0, 127, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(0, 0, 170, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        label->setPalette(palette);
        Swing = new QPushButton(widget);
        Swing->setObjectName(QStringLiteral("Swing"));
        Swing->setGeometry(QRect(0, 440, 113, 32));
        Golfer = new QLabel(widget);
        Golfer->setObjectName(QStringLiteral("Golfer"));
        Golfer->setGeometry(QRect(-40, 140, 211, 181));
        iron6 = new QPushButton(widget);
        iron6->setObjectName(QStringLiteral("iron6"));
        iron6->setGeometry(QRect(1030, 220, 89, 25));
        iron8 = new QPushButton(widget);
        iron8->setObjectName(QStringLiteral("iron8"));
        iron8->setGeometry(QRect(1030, 340, 89, 25));
        iron5 = new QPushButton(widget);
        iron5->setObjectName(QStringLiteral("iron5"));
        iron5->setGeometry(QRect(1030, 160, 89, 25));
        driver = new QPushButton(widget);
        driver->setObjectName(QStringLiteral("driver"));
        driver->setGeometry(QRect(1030, 40, 91, 25));
        iron7 = new QPushButton(widget);
        iron7->setObjectName(QStringLiteral("iron7"));
        iron7->setGeometry(QRect(1030, 280, 89, 25));
        iron9 = new QPushButton(widget);
        iron9->setObjectName(QStringLiteral("iron9"));
        iron9->setGeometry(QRect(1030, 400, 89, 25));
        putter = new QPushButton(widget);
        putter->setObjectName(QStringLiteral("putter"));
        putter->setGeometry(QRect(1030, 460, 89, 25));
        golfbag = new QLabel(widget);
        golfbag->setObjectName(QStringLiteral("golfbag"));
        golfbag->setGeometry(QRect(1040, 0, 67, 17));
        iron4 = new QPushButton(widget);
        iron4->setObjectName(QStringLiteral("iron4"));
        iron4->setGeometry(QRect(1030, 100, 89, 25));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(1130, 100, 16, 16));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(1130, 160, 16, 16));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(1130, 220, 16, 16));
        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(1130, 280, 16, 16));
        label_8 = new QLabel(widget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(1130, 340, 16, 16));
        label_9 = new QLabel(widget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(1130, 400, 16, 16));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(1130, 460, 67, 17));
        label_10 = new QLabel(widget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(1130, 40, 67, 17));
        powerBar = new QSlider(widget);
        powerBar->setObjectName(QStringLiteral("powerBar"));
        powerBar->setGeometry(QRect(220, 470, 160, 16));
        powerBar->setOrientation(Qt::Horizontal);
        label_11 = new QLabel(widget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(150, 460, 67, 21));
        reset = new QPushButton(widget);
        reset->setObjectName(QStringLiteral("reset"));
        reset->setGeometry(QRect(0, 480, 111, 31));
        openGuide = new QPushButton(widget);
        openGuide->setObjectName(QStringLiteral("openGuide"));
        openGuide->setGeometry(QRect(870, 454, 111, 31));
        lcdNumber = new QLCDNumber(widget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(730, 460, 64, 23));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(650, 460, 67, 17));
        label_12 = new QLabel(widget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(490, 460, 67, 17));
        par = new QLabel(widget);
        par->setObjectName(QStringLiteral("par"));
        par->setGeometry(QRect(530, 460, 67, 17));
        label_13 = new QLabel(widget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(870, 400, 67, 17));
        window->setCentralWidget(widget);
        menuBar = new QMenuBar(window);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1299, 22));
        window->setMenuBar(menuBar);
        mainToolBar = new QToolBar(window);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        window->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(window);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        window->setStatusBar(statusBar);

        retranslateUi(window);

        QMetaObject::connectSlotsByName(window);
    } // setupUi

    void retranslateUi(QMainWindow *window)
    {
        window->setWindowTitle(QApplication::translate("window", "Window", Q_NULLPTR));
        label->setText(QString());
        Swing->setText(QApplication::translate("window", "Swing", Q_NULLPTR));
        Golfer->setText(QString());
        iron6->setText(QString());
        iron8->setText(QString());
        iron5->setText(QString());
        driver->setText(QString());
        iron7->setText(QString());
        iron9->setText(QString());
        putter->setText(QString());
        golfbag->setText(QApplication::translate("window", "Golf Bag", Q_NULLPTR));
        iron4->setText(QString());
        label_3->setText(QApplication::translate("window", "4", Q_NULLPTR));
        label_4->setText(QApplication::translate("window", "5", Q_NULLPTR));
        label_6->setText(QApplication::translate("window", "6", Q_NULLPTR));
        label_7->setText(QApplication::translate("window", "7", Q_NULLPTR));
        label_8->setText(QApplication::translate("window", "8", Q_NULLPTR));
        label_9->setText(QApplication::translate("window", "9", Q_NULLPTR));
        label_5->setText(QApplication::translate("window", "Putter", Q_NULLPTR));
        label_10->setText(QApplication::translate("window", "Driver", Q_NULLPTR));
        label_11->setText(QApplication::translate("window", "Power:", Q_NULLPTR));
        reset->setText(QApplication::translate("window", "Reset", Q_NULLPTR));
        openGuide->setText(QApplication::translate("window", "Guide", Q_NULLPTR));
        label_2->setText(QApplication::translate("window", "Strokes", Q_NULLPTR));
        label_12->setText(QApplication::translate("window", " Par ", Q_NULLPTR));
        par->setText(QApplication::translate("window", "3", Q_NULLPTR));
        label_13->setText(QApplication::translate("window", "160 Yards", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class window: public Ui_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_H
