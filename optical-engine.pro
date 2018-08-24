#-------------------------------------------------
#
# Project created by QtCreator 2018-07-24T19:34:01
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = optical-engine
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
    Source/main.cpp \
    Source/MenuBar/menubar.cpp \
    Source/Components/mirror.cpp \
    Source/Components/lens.cpp \
    Source/Components/componentmanager.cpp \
    Source/Components/component.cpp \
    Source/UI/componentui.cpp \
    Source/Components/componentfactory.cpp

HEADERS += \
Source/MenuBar/menubar.h \
Source/Components/mirror.h \
Source/Components/lens.h \
Source/Components/componentmanager.h \
    Source/Components/component.h \
    Source/UI/componentui.h \
    Source/Components/componentfactory.h

INCLUDEPATH += Source/

FORMS +=
