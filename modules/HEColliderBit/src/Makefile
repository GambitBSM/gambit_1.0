PY8DIR := $(HOME)/local
CXX := g++
CXXFLAGS := -O3 -pedantic -Wall -Wno-long-long #-std=c++11
HEADERS := MathUtils.hpp  MCUtils.hpp  Particle.hpp  Vectors.hpp

PY8FLAGS := -I$(PY8DIR)/include -L$(PY8DIR)/lib -L$(PY8DIR)/lib/archive -lpythia8 -llhapdfdummy #-lz -lboost_iostreams-mt
FJFLAGS := $(shell fastjet-config --cxxflags --libs --plugins)
ROOTFLAGS := $(shell root-config --cflags --libs --ldflags)

.PHONY = all clean

all: example-fastsim example-py8 example-py8-bsm
	@true

example-fastsim: DetectorResponse.cpp FastSim.cpp example-fastsim.cpp $(HEADERS)
	$(CXX) example-fastsim.cpp FastSim.cpp DetectorResponse.cpp $(CXXFLAGS) $(FJFLAGS) $(ROOTFLAGS) -lm -o example-fastsim

example-fastsim-py8: example-fastsim-py8.cpp DetectorResponse.cpp FastSim.cpp $(HEADERS)
	$(CXX) example-fastsim-py8.cpp DetectorResponse.cpp FastSim.cpp $(CXXFLAGS) -fopenmp $(PY8FLAGS) $(FJFLAGS) $(ROOTFLAGS) -o example-fastsim-py8

example-py8-bsm: example-py8-bsm.cpp $(HEADERS)
	$(CXX) example-py8-bsm.cpp $(CXXFLAGS) -fopenmp $(PY8FLAGS) $(FJFLAGS) $(ROOTFLAGS) -o example-py8-bsm

clean:
	@rm -f example-fastsim example-fastsim-py8 example-py8-bsm
