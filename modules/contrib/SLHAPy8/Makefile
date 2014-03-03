# Makefile for Pythia8 SLHA interface code.
# The code files are ripped straight from Pythia v8180, without modification
#
# This Makefile is basically a clone of the one we are using for yaml-cpp
# (as of 3 Mar 2014). The header is stored in the 'Pythia8' directory rather
# than 'include' as in the rest of GAMBIT because the source files are
# written assuming this directory structure in their include statements.
# We could change this, but for now I have just conformed to Pythia's way of
# doing things.
#
# Note: SLHAPy8_CC is the c compiler, and should be set by the parent makefile.
#
# Ben Farmer, 3 Mar 2014

SLHAPy8_CFLAGS:= -Wall -g -O3 -I.
SLHAPy8_SRC:=$(wildcard src/*.cc) 
SLHAPy8_LIBS:=$(addprefix build/,$(notdir $(patsubst %.cc,%.o,$(SLHAPy8_SRC))))

build/%.o: src/%.cc
	$(SLHAPy8_CC) -c -o $@ $< $(SLHAPy8_CFLAGS)

slhapy8: $(SLHAPy8_LIBS)
	ar rcs libslhapy8.a $^

clean:
	rm -f libslhapy8.a
	rm -f build/*.o
