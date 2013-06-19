#PY8DIR := $(HOME)/heplocal
#FJDIR := $(HOME)/heplocal
#DELPHESDIR := $(HOME)/heplocal
#You can set your own xxxDIR variables in your .bashrc 
PY8DIR := $(PYTHIA8DIR)
FJDIR := $(FASTJETDIR)
DELPHESDIR := $(DELPSDIR)
BOOST :=$(BOOSTDIR)


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
BOOSTSERIALIZATION := -L$(BOOST)/stage/lib -lboost_serialization
DELPHESFLAGS := -I$(DELPHESDIR) -I$(DELPHESDIR)/external -L$(DELPHESDIR) -lDelphes

.PHONY = all clean

all: example-fastsim example-fastsim-py8 example-py8-bsm example-py8-0lep example-delphes-py8 
	@true

# the simples example of fastsim
example-fastsim: DetectorResponse.cpp FastSim.cpp example-fastsim.cpp $(HEADERS)
	$(CXX) example-fastsim.cpp FastSim.cpp DetectorResponse.cpp $(CXXFLAGS) $(BOOSTFLAGS) $(FJFLAGS) $(ROOTFLAGS) -lm -o example-fastsim

# A HECollider example interfaced to fastim and pythia using the respective backends 
# this examples reads the cmndpythia_zee.cmnd file
example-fastsim-py8: HEColliderMain_FastSim_SingleThread.cpp DetectorResponse.cpp FastSim.cpp FastSimBackend.cpp Pythia8Backend.cpp Analysis.cpp  Analysis_Perf.cpp $(HEADERS)
	$(CXX) HEColliderMain_FastSim_SingleThread.cpp DetectorResponse.cpp FastSim.cpp FastSimBackend.cpp  Pythia8Backend.cpp Analysis.cpp Analysis_Perf.cpp $(CXXFLAGS) -fopenmp $(BOOSTFLAGS) $(BOOSTSERIALIZATION)  $(PY8FLAGS) $(FJFLAGS) $(ROOTFLAGS) -lEG -o example-fastsim-py8

example-py8-bsm: example-py8-bsm.cpp $(HEADERS)
	$(CXX) example-py8-bsm.cpp Analysis.cpp $(CXXFLAGS) -fopenmp $(BOOSTFLAGS) $(PY8FLAGS) $(FJFLAGS) $(ROOTFLAGS) -o example-py8-bsm

example-py8-0lep: example-py8-0lep.cpp Analysis_ATLAS0LEP.hpp Analysis.cpp
	$(CXX) example-py8-0lep.cpp Analysis.cpp Analysis_Perf.cpp $(CXXFLAGS) $(BOOSTFLAGS) $(PY8FLAGS) $(FJFLAGS)  $(ROOTFLAGS) -o example-py8-0lep

example-delphes-py8: HEColliderMain.cpp Delphes3Backend.cpp Pythia8Backend.cpp Analysis_ATLAS0LEP.hpp
	$(CXX) HEColliderMain.cpp Delphes3Backend.cpp Pythia8Backend.cpp Analysis.cpp Analysis_Perf.cpp -fopenmp $(BOOSTFLAGS) $(BOOSTSERIALIZATION) $(DELPHESFLAGS) $(PY8FLAGS) $(ROOTFLAGS) -lEG -o example-delphes-py8

clean:
	@rm -f example-fastsim example-fastsim-py8 example-py8-bsm example-py8-0lep example-delphes-py8
