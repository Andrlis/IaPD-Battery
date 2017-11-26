#-------------------------------------------------
#
# Project created by QtCreator 2017-11-06T16:28:59
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BatteryManager
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    battery.cpp \
    displaycontroller.cpp \
    updatethread.cpp

HEADERS  += mainwindow.h \
    battery.h \
    displaycontroller.h \
    updatethread.h

FORMS    += mainwindow.ui
