PY8DIR := $(HOME)/local
DELPHESDIR := $(HOME)/local
CXX := g++
CXXFLAGS := -O3 -pedantic -Wall -Wno-long-long #-std=c++11

UTILHEADERS := Event.hpp FastJetUtils.hpp Jet.hpp MathUtils.hpp MCUtils.hpp Particle.hpp PIDCodes.hpp PIDUtils.hpp Vectors.hpp
DELPHESHEADERS := Delphes3Backend.hpp
ALDODETHEADERS := DetectorResponse.hpp FastSim.hpp
PY8HEADERS := Py8Utils.hpp  Pythia8Backend.hpp
HEADERS := $(UTILHEADERS) $(DELPHESHEADERS) $(ALDODETHEADERS) $(PY8HEADERS)

PY8FLAGS := -I$(PY8DIR)/include -L$(PY8DIR)/lib -L$(PY8DIR)/lib/archive -lpythia8 -llhapdfdummy #-lz -lboost_iostreams-mt
FJFLAGS := $(shell fastjet-config --cxxflags --libs --plugins)
ROOTFLAGS := $(shell root-config --cflags --libs --ldflags)
BOOSTFLAGS :=
DELPHESFLAGS := -I$(DELPHESDIR) -I$(DELPHESDIR)/external -L$(DELPHESDIR) -lDelphes

.PHONY = all clean

all: example-fastsim example-fastsim-py8 example-py8-bsm example-ana-0lep example-delphes-py8
	@true

example-fastsim: DetectorResponse.cpp FastSim.cpp example-fastsim.cpp $(HEADERS)
	$(CXX) example-fastsim.cpp FastSim.cpp DetectorResponse.cpp $(CXXFLAGS) $(FJFLAGS) $(ROOTFLAGS) -lm -o example-fastsim

example-fastsim-py8: example-fastsim-py8.cpp DetectorResponse.cpp FastSim.cpp $(HEADERS)
	$(CXX) example-fastsim-py8.cpp DetectorResponse.cpp FastSim.cpp $(CXXFLAGS) -fopenmp $(PY8FLAGS) $(FJFLAGS) $(ROOTFLAGS) -o example-fastsim-py8

example-py8-bsm: example-py8-bsm.cpp $(HEADERS)
	$(CXX) example-py8-bsm.cpp $(CXXFLAGS) -fopenmp $(PY8FLAGS) $(FJFLAGS) $(ROOTFLAGS) -o example-py8-bsm

#example-ana-0lep: Analysis_ATLAS0LEP.hpp
#	$(CXX) Analysis_ATLAS0LEP.hpp $(CXXFLAGS) $(PY8FLAGS) $(FJFLAGS) -o example-ana-0lep

example-delphes-py8: HEColliderMain.cpp Delphes3Backend.cpp Pythia8Backend.cpp
	$(CXX) HEColliderMain.cpp Delphes3Backend.cpp Pythia8Backend.cpp -fopenmp $(BOOSTFLAGS) $(DELPHESFLAGS) $(PY8FLAGS) $(ROOTFLAGS) -lEG -o example-delphes-py8

clean:
	@rm -f example-fastsim example-fastsim-py8 example-py8-bsm example-ana-0lep example-delphes-py8
