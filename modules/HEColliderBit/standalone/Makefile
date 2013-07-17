CC := g++
CFLAGS := -O3 -pedantic -Wall -Wno-long-long #-std=c++11
ROOTFLAGS := $(shell root-config --cflags --libs --ldflags)

#You can set your own xxxDIR variables in your .bashrc 
DELPHESDIR := $(DELPSDIR)

DELPHESFLAGS := -I$(DELPHESDIR)/external -I$(DELPHESDIR)/modules -I$(DELPHESDIR) -L$(DELPHESDIR) -lDelphes

ATLAS0Lep : ATLAS0Lep.cxx
	$(CC) ATLAS0Lep.cxx $(CFLAGS) $(ROOTFLAGS) $(DELPHESFLAGS) -lEG -o ATLAS0Lep

ATLAS0Lep-INT : ATLAS0Lep-INT.cxx
	$(CC) ATLAS0Lep-INT.cxx $(CFLAGS) $(ROOTFLAGS) $(DELPHESFLAGS) -lEG -o ATLAS0Lep-INT
