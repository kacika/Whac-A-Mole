#############################################################################
# Makefile for building: mouse
# Generated by qmake (2.01a) (Qt 4.7.0) on: ?? 6? 22 10:10:16 2016
# Project:  mouse.pro
# Template: app
# Command: /opt/qtsdk-2010.05/qt/bin/qmake -spec /opt/qtsdk-2010.05/qt/mkspecs/linux-g++ CONFIG+=debug -o Makefile mouse.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/opt/qtsdk-2010.05/qt/mkspecs/linux-g++ -I. -I/opt/qtsdk-2010.05/qt/include/QtCore -I/opt/qtsdk-2010.05/qt/include/QtGui -I/opt/qtsdk-2010.05/qt/include -I. -I. -I.
LINK          = g++
LFLAGS        = -Wl,-rpath,/opt/qtsdk-2010.05/qt/lib
LIBS          = $(SUBLIBS)  -L/opt/qtsdk-2010.05/qt/lib -lQtGui -L/opt/qtsdk-2010.05/qt/lib -L/usr/X11R6/lib -lQtCore -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /opt/qtsdk-2010.05/qt/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = main.cpp \
		mouse.cpp \
		score.cpp moc_mouse.cpp \
		moc_score.cpp \
		qrc_mouse.cpp
OBJECTS       = main.o \
		mouse.o \
		score.o \
		moc_mouse.o \
		moc_score.o \
		qrc_mouse.o
DIST          = /opt/qtsdk-2010.05/qt/mkspecs/common/g++.conf \
		/opt/qtsdk-2010.05/qt/mkspecs/common/unix.conf \
		/opt/qtsdk-2010.05/qt/mkspecs/common/linux.conf \
		/opt/qtsdk-2010.05/qt/mkspecs/qconfig.pri \
		/opt/qtsdk-2010.05/qt/mkspecs/modules/qt_webkit_version.pri \
		/opt/qtsdk-2010.05/qt/mkspecs/features/qt_functions.prf \
		/opt/qtsdk-2010.05/qt/mkspecs/features/qt_config.prf \
		/opt/qtsdk-2010.05/qt/mkspecs/features/exclusive_builds.prf \
		/opt/qtsdk-2010.05/qt/mkspecs/features/default_pre.prf \
		/opt/qtsdk-2010.05/qt/mkspecs/features/debug.prf \
		/opt/qtsdk-2010.05/qt/mkspecs/features/default_post.prf \
		/opt/qtsdk-2010.05/qt/mkspecs/features/warn_on.prf \
		/opt/qtsdk-2010.05/qt/mkspecs/features/qt.prf \
		/opt/qtsdk-2010.05/qt/mkspecs/features/unix/thread.prf \
		/opt/qtsdk-2010.05/qt/mkspecs/features/moc.prf \
		/opt/qtsdk-2010.05/qt/mkspecs/features/resources.prf \
		/opt/qtsdk-2010.05/qt/mkspecs/features/uic.prf \
		/opt/qtsdk-2010.05/qt/mkspecs/features/yacc.prf \
		/opt/qtsdk-2010.05/qt/mkspecs/features/lex.prf \
		/opt/qtsdk-2010.05/qt/mkspecs/features/include_source_dir.prf \
		mouse.pro
QMAKE_TARGET  = mouse
DESTDIR       = 
TARGET        = mouse

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET): ui_mouse.h ui_score.h $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: mouse.pro  /opt/qtsdk-2010.05/qt/mkspecs/linux-g++/qmake.conf /opt/qtsdk-2010.05/qt/mkspecs/common/g++.conf \
		/opt/qtsdk-2010.05/qt/mkspecs/common/unix.conf \
		/opt/qtsdk-2010.05/qt/mkspecs/common/linux.conf \
		/opt/qtsdk-2010.05/qt/mkspecs/qconfig.pri \
		/opt/qtsdk-2010.05/qt/mkspecs/modules/qt_webkit_version.pri \
		/opt/qtsdk-2010.05/qt/mkspecs/features/qt_functions.prf \
		/opt/qtsdk-2010.05/qt/mkspecs/features/qt_config.prf \
		/opt/qtsdk-2010.05/qt/mkspecs/features/exclusive_builds.prf \
		/opt/qtsdk-2010.05/qt/mkspecs/features/default_pre.prf \
		/opt/qtsdk-2010.05/qt/mkspecs/features/debug.prf \
		/opt/qtsdk-2010.05/qt/mkspecs/features/default_post.prf \
		/opt/qtsdk-2010.05/qt/mkspecs/features/warn_on.prf \
		/opt/qtsdk-2010.05/qt/mkspecs/features/qt.prf \
		/opt/qtsdk-2010.05/qt/mkspecs/features/unix/thread.prf \
		/opt/qtsdk-2010.05/qt/mkspecs/features/moc.prf \
		/opt/qtsdk-2010.05/qt/mkspecs/features/resources.prf \
		/opt/qtsdk-2010.05/qt/mkspecs/features/uic.prf \
		/opt/qtsdk-2010.05/qt/mkspecs/features/yacc.prf \
		/opt/qtsdk-2010.05/qt/mkspecs/features/lex.prf \
		/opt/qtsdk-2010.05/qt/mkspecs/features/include_source_dir.prf \
		/opt/qtsdk-2010.05/qt/lib/libQtGui.prl \
		/opt/qtsdk-2010.05/qt/lib/libQtCore.prl
	$(QMAKE) -spec /opt/qtsdk-2010.05/qt/mkspecs/linux-g++ CONFIG+=debug -o Makefile mouse.pro
/opt/qtsdk-2010.05/qt/mkspecs/common/g++.conf:
/opt/qtsdk-2010.05/qt/mkspecs/common/unix.conf:
/opt/qtsdk-2010.05/qt/mkspecs/common/linux.conf:
/opt/qtsdk-2010.05/qt/mkspecs/qconfig.pri:
/opt/qtsdk-2010.05/qt/mkspecs/modules/qt_webkit_version.pri:
/opt/qtsdk-2010.05/qt/mkspecs/features/qt_functions.prf:
/opt/qtsdk-2010.05/qt/mkspecs/features/qt_config.prf:
/opt/qtsdk-2010.05/qt/mkspecs/features/exclusive_builds.prf:
/opt/qtsdk-2010.05/qt/mkspecs/features/default_pre.prf:
/opt/qtsdk-2010.05/qt/mkspecs/features/debug.prf:
/opt/qtsdk-2010.05/qt/mkspecs/features/default_post.prf:
/opt/qtsdk-2010.05/qt/mkspecs/features/warn_on.prf:
/opt/qtsdk-2010.05/qt/mkspecs/features/qt.prf:
/opt/qtsdk-2010.05/qt/mkspecs/features/unix/thread.prf:
/opt/qtsdk-2010.05/qt/mkspecs/features/moc.prf:
/opt/qtsdk-2010.05/qt/mkspecs/features/resources.prf:
/opt/qtsdk-2010.05/qt/mkspecs/features/uic.prf:
/opt/qtsdk-2010.05/qt/mkspecs/features/yacc.prf:
/opt/qtsdk-2010.05/qt/mkspecs/features/lex.prf:
/opt/qtsdk-2010.05/qt/mkspecs/features/include_source_dir.prf:
/opt/qtsdk-2010.05/qt/lib/libQtGui.prl:
/opt/qtsdk-2010.05/qt/lib/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -spec /opt/qtsdk-2010.05/qt/mkspecs/linux-g++ CONFIG+=debug -o Makefile mouse.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/mouse1.0.0 || $(MKDIR) .tmp/mouse1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/mouse1.0.0/ && $(COPY_FILE) --parents mouse.h score.h .tmp/mouse1.0.0/ && $(COPY_FILE) --parents mouse.qrc .tmp/mouse1.0.0/ && $(COPY_FILE) --parents main.cpp mouse.cpp score.cpp .tmp/mouse1.0.0/ && $(COPY_FILE) --parents mouse.ui score.ui .tmp/mouse1.0.0/ && (cd `dirname .tmp/mouse1.0.0` && $(TAR) mouse1.0.0.tar mouse1.0.0 && $(COMPRESS) mouse1.0.0.tar) && $(MOVE) `dirname .tmp/mouse1.0.0`/mouse1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/mouse1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_mouse.cpp moc_score.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_mouse.cpp moc_score.cpp
moc_mouse.cpp: ui_mouse.h \
		mouse.h
	/opt/qtsdk-2010.05/qt/bin/moc $(DEFINES) $(INCPATH) mouse.h -o moc_mouse.cpp

moc_score.cpp: score.h
	/opt/qtsdk-2010.05/qt/bin/moc $(DEFINES) $(INCPATH) score.h -o moc_score.cpp

compiler_rcc_make_all: qrc_mouse.cpp
compiler_rcc_clean:
	-$(DEL_FILE) qrc_mouse.cpp
qrc_mouse.cpp: mouse.qrc \
		images/rabbit.gif
	/opt/qtsdk-2010.05/qt/bin/rcc -name mouse mouse.qrc -o qrc_mouse.cpp

compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_mouse.h ui_score.h
compiler_uic_clean:
	-$(DEL_FILE) ui_mouse.h ui_score.h
ui_mouse.h: mouse.ui
	/opt/qtsdk-2010.05/qt/bin/uic mouse.ui -o ui_mouse.h

ui_score.h: score.ui
	/opt/qtsdk-2010.05/qt/bin/uic score.ui -o ui_score.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_rcc_clean compiler_uic_clean 

####### Compile

main.o: main.cpp mouse.h \
		ui_mouse.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

mouse.o: mouse.cpp mouse.h \
		ui_mouse.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o mouse.o mouse.cpp

score.o: score.cpp score.h \
		ui_score.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o score.o score.cpp

moc_mouse.o: moc_mouse.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_mouse.o moc_mouse.cpp

moc_score.o: moc_score.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_score.o moc_score.cpp

qrc_mouse.o: qrc_mouse.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qrc_mouse.o qrc_mouse.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

