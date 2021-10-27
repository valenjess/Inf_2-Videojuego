QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    jugar_o_fin.cpp \
    main.cpp \
    mainwindow.cpp \
    multigamer.cpp \
    multini.cpp \
    multregis.cpp \
    onegamer.cpp \
    oneini.cpp \
    oneregis.cpp

HEADERS += \
    jugar_o_fin.h \
    mainwindow.h \
    multigamer.h \
    multini.h \
    multregis.h \
    onegamer.h \
    oneini.h \
    oneregis.h

FORMS += \
    jugar_o_fin.ui \
    mainwindow.ui \
    multigamer.ui \
    multini.ui \
    multregis.ui \
    onegamer.ui \
    oneini.ui \
    oneregis.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
