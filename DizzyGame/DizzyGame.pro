#-------------------------------------------------
#
# Project created by QtCreator 2022-04-21T14:43:39
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DizzyGame
TEMPLATE = app

QMAKE_CFLAGS += -Wno-unused-parameter
QMAKE_CFLAGS -= -Wunused-parameter
QMAKE_CXXFLAGS += -Wno-unused-parameter
QMAKE_CXXFLAGS -= -Wunused-parameter
QMAKE_CXXFLAGS_WARN_ON += -Wno-unused-parameter
QMAKE_CXXFLAGS_WARN_ON -= -Wunused-parameter
QMAKE_CXXFLAGS_WARN_OFF += -Wunused-parameter
QMAKE_CXXFLAGS_WARN_OFF -= -Wno-unused-parameter
QMAKE_CXXFLAGS+= -std=c++11

SOURCES += \
    Actions/cactionadditem.cpp \
    Actions/cactionaddlife.cpp \
    Actions/cactionaddscore.cpp \
    Actions/cactionchangeanimationmode.cpp \
    Actions/cactionchangedescription.cpp \
    Actions/cactionchangedescriptionglobal.cpp \
    Actions/cactionchangename.cpp \
    Actions/cactionchangenameglobal.cpp \
    Actions/cactionchangeposition.cpp \
    Actions/cactioncopyposition.cpp \
    Actions/cactioncopypositionoffset.cpp \
    Actions/cactionenergyupdate.cpp \
    Actions/cactionmessage.cpp \
    Actions/cactionmove.cpp \
    Actions/cactionpickup.cpp \
    Actions/cactionsetanimationstep.cpp \
    Actions/cactionsetenabled.cpp \
    Actions/cactionsingle.cpp \
    Actions/iaction.cpp \
    Conditionals/cconditionalofdizzyintersection.cpp \
    Conditionals/cconditionalofintersection.cpp \
    Conditionals/cconditionalofnotdizzyintersection.cpp \
    Conditionals/cconditionalofpickup.cpp \
    Conditionals/cconditionaloftimer.cpp \
    Conditionals/cconditionalofuse.cpp \
    Conditionals/iconditionalexpression.cpp \
    Game/cdizzy.cpp \
    Game/cgame.cpp \
    Game/cgamestate.cpp \
    Game/cpart.cpp \
    Game/ipart.cpp \
    Graphics/cfontprinter.cpp \
    Graphics/csprite.cpp \
    Graphics/ctile.cpp \
    Graphics/ctilessequence.cpp \
    Graphics/tga.cpp \
    IO/craiifilein.cpp \
    IO/craiifileout.cpp \
    Interpreter/cautomath.cpp \
    Interpreter/clexeme.cpp \
    Interpreter/clexicalanalyzer.cpp \
    Interpreter/csyntaxanalyzer.cpp \
    QtWindows/cmainwindow.cpp \
    QtWindows/main.cpp \
    System/system.cpp \
    Video/cvideo_software.cpp \
    Video/ivideo.cpp
HEADERS  += \
    Actions/cactionadditem.h \
    Actions/cactionaddlife.h \
    Actions/cactionaddscore.h \
    Actions/cactionchangeanimationmode.h \
    Actions/cactionchangedescription.h \
    Actions/cactionchangedescriptionglobal.h \
    Actions/cactionchangename.h \
    Actions/cactionchangenameglobal.h \
    Actions/cactionchangeposition.h \
    Actions/cactioncopyposition.h \
    Actions/cactioncopypositionoffset.h \
    Actions/cactionenergyupdate.h \
    Actions/cactionmessage.h \
    Actions/cactionmove.h \
    Actions/cactionpickup.h \
    Actions/cactionsetanimationstep.h \
    Actions/cactionsetenabled.h \
    Actions/cactionsingle.h \
    Actions/iaction.h \
    Conditionals/cconditionalofdizzyintersection.h \
    Conditionals/cconditionalofintersection.h \
    Conditionals/cconditionalofnotdizzyintersection.h \
    Conditionals/cconditionalofpickup.h \
    Conditionals/cconditionaloftimer.h \
    Conditionals/cconditionalofuse.h \
    Conditionals/iconditionalexpression.h \
    Game/cdizzy.h \
    Game/cgame.h \
    Game/cgamestate.h \
    Game/cpart.h \
    Game/ipart.h \
    Graphics/cfontprinter.h \
    Graphics/csprite.h \
    Graphics/ctile.h \
    Graphics/ctilessequence.h \
    Graphics/tga.h \
    IO/craiifilein.h \
    IO/craiifileout.h \
    Interpreter/cautomath.h \
    Interpreter/clexeme.h \
    Interpreter/clexicalanalyzer.h \
    Interpreter/csyntaxanalyzer.h \
    QtWindows/cmainwindow.h \
    System/system.h \
    Video/cvideo_software.h \
    Video/ivideo.h

FORMS    += cmainwindow.ui

