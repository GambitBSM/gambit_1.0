# need to write a proper makefile
# most probably you will need to adapt the location of the HEColliderBit directory

g++ -c DetectorResponse.cpp   `root-config --cflags`
g++ -c fastsim.cpp  `root-config --cflags` -l m
g++ example.cpp -o example fastsim.o DetectorResponse.o  `root-config --cflags` -l m `root-config --libs`
