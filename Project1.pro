#-------------------------------------------------
#
# Project created by QtCreator 2017-09-19T22:50:23
#
#-------------------------------------------------

QT       += webenginewidgets

HEADERS =   mainwindow.h
SOURCES =   main.cpp \
            mainwindow.cpp
RESOURCES = jquery.qrc

# install
target.path = $$[QT_INSTALL_EXAMPLES]/webenginewidgets/contentmanipulation
INSTALLS += target
