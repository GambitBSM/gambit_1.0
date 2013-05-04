PY8DIR := $(HOME)/heplocal
FJDIR := $(HOME)/heplocal
DELPHESDIR := $(HOME)/heplocal
CXX := g++
CXXFLAGS := -O3 -pedantic -Wall -Wno-long-long #-std=c++11

UTILHEADERS := Event.hpp FastJetUtils.hpp Jet.hpp MathUtils.hpp MCUtils.hpp Particle.hpp PIDCodes.hpp PIDUtils.hpp Vectors.hpp
DELPHESHEADERS := Delphes3Backend.hpp
ALDODETHEADERS := DetectorResponse.hpp FastSim.hpp
PY8HEADERS := Py8Utils.hpp  Pythia8Backend.hpp
HEADERS := $(UTILHEADERS) $(DELPHESHEADERS) $(ALDODETHEADERS) $(PY8HEADERS)

# TODO: pythia8-config isn't standard yet, so also allow a fallback
PY8FLAGS := $(shell pythia8-config --cxxflags --libs 2> /dev/null)
ifndef PY8FLAGS
PY8FLAGS := -I$(PY8DIR)/include -L$(PY8DIR)/lib -L$(PY8DIR)/lib/archive -lpythia8 -llhapdfdummy
endif
FJFLAGS := $(shell fastjet-config --cxxflags --libs --plugins)
ROOTFLAGS := $(shell root-config --cflags --libs --ldflags)
BOOSTFLAGS := -I$(BOOST)
DELPHESFLAGS := -I$(DELPHESDIR) -I$(DELPHESDIR)/external -L$(DELPHESDIR) -lDelphes

.PHONY = all clean

all: example-fastsim example-fastsim-py8 example-py8-bsm example-py8-0lep example-delphes-py8
	@true

example-fastsim: DetectorResponse.cpp FastSim.cpp example-fastsim.cpp $(HEADERS)
	$(CXX) example-fastsim.cpp FastSim.cpp DetectorResponse.cpp $(CXXFLAGS) $(FJFLAGS) $(ROOTFLAGS) -lm -o example-fastsim

example-fastsim-py8: example-fastsim-py8.cpp DetectorResponse.cpp FastSim.cpp $(HEADERS)
	$(CXX) example-fastsim-py8.cpp DetectorResponse.cpp FastSim.cpp $(CXXFLAGS) -fopenmp $(PY8FLAGS) $(FJFLAGS) $(ROOTFLAGS) -o example-fastsim-py8

example-py8-bsm: example-py8-bsm.cpp $(HEADERS)
	$(CXX) example-py8-bsm.cpp Analysis.cpp $(CXXFLAGS) -fopenmp $(BOOSTFLAGS) $(PY8FLAGS) $(FJFLAGS) $(ROOTFLAGS) -o example-py8-bsm

example-py8-0lep: example-py8-0lep.cpp Analysis_ATLAS0LEP.hpp Analysis.cpp
	$(CXX) example-py8-0lep.cpp Analysis.cpp $(CXXFLAGS) $(PY8FLAGS) $(FJFLAGS) -o example-py8-0lep

example-delphes-py8: HEColliderMain.cpp Delphes3Backend.cpp Pythia8Backend.cpp Analysis_ATLAS0LEP.hpp
	$(CXX) HEColliderMain.cpp Delphes3Backend.cpp Pythia8Backend.cpp Analysis.cpp -fopenmp $(BOOSTFLAGS) $(DELPHESFLAGS) $(PY8FLAGS) $(ROOTFLAGS) -lEG -o example-delphes-py8

clean:
	@rm -f example-fastsim example-fastsim-py8 example-py8-bsm example-py8-0lep example-delphes-py8
