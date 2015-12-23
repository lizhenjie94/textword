#-------------------------------------------------
#
# Project created by QtCreator 2015-12-20T22:12:58
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = WordText
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    usedatabase.cpp \
    anwser.cpp \
    askfornum.cpp \
    delete.cpp \
    entry.cpp \
    renew.cpp \
    renewproperty.cpp \
    score.cpp \
    solve.cpp \
    text.cpp

HEADERS  += mainwindow.h \
    usedatabase.h \
    anwser.h \
    askfornum.h \
    delete.h \
    entry.h \
    renew.h \
    renewproperty.h \
    score.h \
    solve.h \
    text.h

FORMS    += mainwindow.ui \
    anwser.ui \
    askfornum.ui \
    delete.ui \
    entry.ui \
    renew.ui \
    renewproperty.ui \
    score.ui \
    solve.ui \
    text.ui
