CC=g++
CFLAGS=-c -g -Wall `root-config --cflags`
LDFLAGS=`root-config --glibs`
DELPHESINCL=-I/home/mwhi/heplocal/external -I/home/mwhi/heplocal/modules -I/home/mwhi/heplocal 
DELPHESLIB=-L/home/mwhi/heplocal -lDelphes

ATLAS0Lep: ATLAS0Lep.o 
	$(CC) $(LDFLAGS) $(DELPHESLIB)  ATLAS0Lep.o  -o ATLAS0Lep

ATLAS0Lep.o : ATLAS0Lep.cxx
	$(CC) $(CFLAGS) $(DELPHESINCL) ATLAS0Lep.cxx

ATLAS0Lep-INT: ATLAS0Lep-INT.o
	$(CC) $(LDFLAGS) $(DELPHESLIB)  ATLAS0Lep-INT.o  -o ATLAS0Lep-INT

ATLAS0Lep-INT.o : ATLAS0Lep-INT.cxx
	$(CC) $(CFLAGS) $(DELPHESINCL) ATLAS0Lep-INT.cxx
