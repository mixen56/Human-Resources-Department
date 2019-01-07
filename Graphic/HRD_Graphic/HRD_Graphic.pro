#-------------------------------------------------
#
# Project created by QtCreator 2018-12-18T19:49:20
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = HRD_Graphic
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

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    _Main_worker_.cpp \
    _Unit_.cpp \
    _Us_worker_.cpp \
    _Worker_.cpp \
    enter_name.cpp \
    createnewunit_ask.cpp \
    output.cpp \
    transfer_dialog.cpp \
    empty_unit.cpp \
    dismiss.cpp

HEADERS += \
        mainwindow.h \
    _Unit_.h \
    _Worker_.h \
    mymap.h \
    enter_name.h \
    createnewunit_ask.h \
    output.h \
    transfer_dialog.h \
    empty_unit.h \
    dismiss.h

FORMS += \
    mainwindow.ui \
    enter_name.ui \
    createnewunit_ask.ui \
    output.ui \
    transfer_dialog.ui \
    empty_unit.ui \
    dismiss.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resoursec.qrc
