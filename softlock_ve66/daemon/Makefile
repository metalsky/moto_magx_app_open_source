#############################################################################
# Makefile for building lock
# Generated by tmake at 16:35, 2010/09/24
#     Project: lock
#    Template: app
#############################################################################

####### Compiler, tools and options

CC	=	arm-linux-gnueabi-gcc
CXX	=	arm-linux-gnueabi-g++
CFLAGS	=	-pipe -Wall -W -O3 -DNO_DEBUG
CXXFLAGS=	-pipe -DQWS -fno-exceptions -fno-rtti -Wall -W -O3 -DNO_DEBUG
INCPATH	=	-I$(QTDIR)/include
LINK	=	arm-linux-gnueabi-gcc
LFLAGS	=	-Wl,-rpath,$(QTDIR)/lib
LIBS	=	$(SUBLIBS) -L$(QTDIR)/lib -lm -lqte-mt -lezxappbase -lezxam
MOC	=	$(QTDIR)/bin/moc
UIC	=	$(QTDIR)/bin/uic

TAR	=	tar -cf
GZIP	=	gzip -9f

####### Files

HEADERS =	gui.h \
		myapplication.h
SOURCES =	gui.cpp \
		main.cpp \
		myapplication.cpp
OBJECTS =	gui.o \
		main.o \
		myapplication.o
INTERFACES =	
UICDECLS =	
UICIMPLS =	
SRCMOC	=	moc_gui.cpp \
		moc_myapplication.cpp
OBJMOC	=	moc_gui.o \
		moc_myapplication.o
DIST	=	
TARGET	=	lock
INTERFACE_DECL_PATH = .

####### Implicit rules

.SUFFIXES: .cpp .cxx .cc .C .c

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o $@ $<

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o $@ $<

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o $@ $<

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o $@ $<

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o $@ $<

####### Build rules


all: $(TARGET)

$(TARGET): $(UICDECLS) $(OBJECTS) $(OBJMOC) 
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJMOC) $(LIBS)

moc: $(SRCMOC)

tmake: Makefile

Makefile: lock.pro
	tmake lock.pro -o Makefile

dist:
	$(TAR) lock.tar lock.pro $(SOURCES) $(HEADERS) $(INTERFACES) $(DIST)
	$(GZIP) lock.tar

clean:
	-rm -f $(OBJECTS) $(OBJMOC) $(SRCMOC) $(UICIMPLS) $(UICDECLS) $(TARGET)
	-rm -f *~ core

####### Sub-libraries


###### Combined headers


####### Compile

gui.o: gui.cpp \
		gui.h

main.o: main.cpp \
		gui.h \
		myapplication.h

myapplication.o: myapplication.cpp \
		myapplication.h

moc_gui.o: moc_gui.cpp \
		gui.h

moc_myapplication.o: moc_myapplication.cpp \
		myapplication.h

moc_gui.cpp: gui.h
	$(MOC) gui.h -o moc_gui.cpp

moc_myapplication.cpp: myapplication.h
	$(MOC) myapplication.h -o moc_myapplication.cpp

