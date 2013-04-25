# TODO: write a proper makefile
# most probably you will need to adapt the location of the HEColliderBit directory

g++ -c DetectorResponse.cpp   `root-config --cflags`
g++ -c FastSim.cpp  `root-config --cflags` -lm
g++ example-fastsim.cpp -o example-fastsim fastsim.o DetectorResponse.o  `root-config --cflags` -lm `root-config --libs`
