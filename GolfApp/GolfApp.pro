#-------------------------------------------------
#
# Project created by QtCreator 2017-11-20T21:47:53
#
#-------------------------------------------------

QT       += core gui
QT       += multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QtSFMLImageRenderTest
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
    box2dmodel.cpp \
    window.cpp \
    golfguide.cpp\
    mycontactlistener.cpp \
    nextlevel.cpp
HEADERS += \
    box2dmodel.h \
    window.h \
    golfguide.h\
    mycontactlistener.h \
    nextlevel.h

FORMS += \
    window.ui

unix:!macx: LIBS += -lsfml-audio -lsfml-graphics -lsfml-window -lsfml-system


win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../Box2D_v2.1.2/Box2D/Build/Box2D/release/ -lBox2D
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../Box2D_v2.1.2/Box2D/Build/Box2D/debug/ -lBox2D
else:unix: LIBS += -L$$PWD/../Box2D_v2.1.2/Box2D/Build/Box2D/ -lBox2D

INCLUDEPATH += $$PWD/../Box2D_v2.1.2/Box2D
DEPENDPATH += $$PWD/../Box2D_v2.1.2/Box2D

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../Box2D_v2.1.2/Box2D/Build/Box2D/release/libBox2D.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../Box2D_v2.1.2/Box2D/Build/Box2D/debug/libBox2D.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../Box2D_v2.1.2/Box2D/Build/Box2D/release/Box2D.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../Box2D_v2.1.2/Box2D/Build/Box2D/debug/Box2D.lib
else:unix: PRE_TARGETDEPS += $$PWD/../Box2D_v2.1.2/Box2D/Build/Box2D/libBox2D.a

RESOURCES += \
    rcs.qrc
