# Quick make script to compile minitest.cpp against necessary GAMBIT components

CC = g++
LN = $(CC)
LNFLAGS= -lstdc++ -rdynamic -dynamic -ldl

# Boost is required. Read GAMBIT README for details
ifdef BOOST
BOOSTINC=$(BOOST)
else
BOOSTINC=./
endif

GAMBITPATH=/home/farmer/Dropbox/Projects/repos/GAMBIT-raw3/modules

CCEXTRA=-Wextra -pipe -g -pg

INCLUDES= -Imodels \
          -Iinclude \
          -I$(GAMBITPATH)/UtilsBit/include \
          -I$(GAMBITPATH)/CoreBit/include \
          -I$(BOOSTINC) #-I/usr/include 

CFLAGS= $(CCEXTRA) $(INCLUDES)

# Need these libs! Main gambit code must already be compiled! Kind of annoying
# that this is necessary. Happens because ModelParametersBase makes use of the
# core logging functions.
GAMBITLIBS= $(GAMBITPATH)/CoreBit/build/gambit_core.o \
            $(GAMBITPATH)/CoreBit/build/logcore.o \
            
MODELBITLIBS= models/MSSM.o

default: minitest
.PHONY: default

clean: 
	@echo cleaning
	@rm -f *.o
.PHONY: clean

%.o: %.cpp 
	@echo ___________Compiling $<:
	$(CC) $(CFLAGS) -c $< -o $@

minitest: minitest.o $(MODELBITLIBS)
	@echo ___________Linking $@:
	$(LN) $< $(GAMBITLIBS) $(CFLAGS) -o $@ $(LNFLAGS)

