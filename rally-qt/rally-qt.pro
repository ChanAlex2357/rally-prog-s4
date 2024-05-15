QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    categorypilote.cpp \
    chrono.cpp \
    main.cpp \
    mainwindow.cpp \
    pilote.cpp \
    rally.cpp \
    rally_fomulaire.cpp \
    specials.cpp

HEADERS += \
    categorypilote.h \
    chrono.h \
    mainwindow.h \
    pilote.h \
    rally.h \
    rally_fomulaire.h \
    specials.h

FORMS += \
    mainwindow.ui \
    rally_fomulaire.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
