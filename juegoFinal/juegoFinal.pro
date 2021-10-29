QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    agua.cpp \
    arania.cpp \
    dosini.cpp \
    dosreg.cpp \
    enemigoprincipal.cpp \
    fuego.cpp \
    jugarosalir.cpp \
    main.cpp \
    juego.cpp \
    modojuego.cpp \
    muljugador.cpp \
    personajeprincipal.cpp \
    unini.cpp \
    unjugador.cpp \
    unreg.cpp

HEADERS += \
    agua.h \
    arania.h \
    dosini.h \
    dosreg.h \
    enemigoprincipal.h \
    fuego.h \
    juego.h \
    jugarosalir.h \
    modojuego.h \
    muljugador.h \
    personajeprincipal.h \
    unini.h \
    unjugador.h \
    unreg.h

FORMS += \
    dosini.ui \
    dosreg.ui \
    juego.ui \
    jugarosalir.ui \
    modojuego.ui \
    muljugador.ui \
    unini.ui \
    unjugador.ui \
    unreg.ui


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target


RESOURCES += \
    pictures.qrc

DISTFILES +=
