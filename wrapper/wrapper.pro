# --------- QHexViewWrapper profile -------------------
# Last changed by $Author: florian $
# $Id: PythonQt.pro 35381 2006-03-16 13:05:52Z florian $
# $Source$
# --------------------------------------------------

TARGET   = QHexViewWrapper
TEMPLATE = app

SUBDIRS = QHexView

DESTDIR           = ../bin

QT += widgets

INCLUDEPATH += $$PWD/../QHexView \
  $$PWD/../QHexView/model \
  $$PWD/../QHexView/model/buffer \
  $$PWD/../QHexView/model/commands \

SOURCES += \
  $$PWD/main.cpp \

RESOURCES += QHexViewWrapper.qrc

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../QHexView/release/ -lQHexView
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../QHexView/debug/ -lQHexView

INCLUDEPATH += $$PWD/../QHexView
DEPENDPATH += $$PWD/../QHexView

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../build-PythonQt-Desktop_Qt_5_15_2_MSVC2019_64bit-Release/lib/ -lPythonQt-Qt5-Python3.9
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../build-PythonQt-Desktop_Qt_5_15_2_MSVC2019_64bit-Release/lib/ -lPythonQt-Qt5-Python3.9

INCLUDEPATH += $$PWD/../../pythonqt/src
DEPENDPATH += $$PWD/../../pythonqt/src

include ( ../../pythonqt/build/python.prf )

include(com_trolltech_qt_hexview.pri)
