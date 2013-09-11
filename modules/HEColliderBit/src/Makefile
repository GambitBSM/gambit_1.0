#PYTHIA8 := $(HOME)/heplocal
#DELPHES := $(HOME)/heplocal
#BOOST := $(HOME)/heplocal
#You can set your own xxxDIR variables in your .bashrc
ifndef PYTHIA8
PYTHIA8 := $(PYTHIA8DIR)
endif
ifndef DELPHES
DELPHES := $(DELPSDIR)
endif
ifndef BOOST
BOOST := $(BOOSTDIR)
endif

# TODO: Check that all these variables are defined

CXX := g++

CXXFLAGS := -std=c++0x -O3 -pedantic -Wall -Wno-long-long -Werror=uninitialized #-Werror=delete-non-virtual-dtor

UTILHEADERS := Event.hpp FastJetUtils.hpp Jet.hpp MathUtils.hpp MCUtils.hpp Particle.hpp PIDCodes.hpp PIDUtils.hpp Vectors.hpp
DELPHESHEADERS := Delphes3Backend.hpp
ALDODETHEADERS := DetectorResponse.hpp FastSim.hpp
PY8HEADERS := Py8Utils.hpp  Pythia8Backend.hpp
HEADERS := $(UTILHEADERS) $(DELPHESHEADERS) $(ALDODETHEADERS) $(PY8HEADERS)

# TODO: pythia8-config isn't standard yet, so also allow a fallback
PY8FLAGS := $(shell pythia8-config --cxxflags --libs 2> /dev/null)
ifndef PY8FLAGS
PY8FLAGS := -I$(PYTHIA8)/include -L$(PYTHIA8)/lib -L$(PYTHIA8)/lib/archive -lpythia8 -llhapdfdummy
endif

FJFLAGS := $(shell fastjet-config --cxxflags --libs --plugins)
ROOTFLAGS := $(shell root-config --cflags --libs --ldflags)
BOOSTFLAGS := -I$(BOOST)
BOOSTSERIALIZATION := -L$(BOOST)/stage/lib -lboost_serialization
DELPHESFLAGS := -I$(DELPHES) -I$(DELPHES)/external -L$(DELPHES) -lDelphes 
MT2FLAGS := mt2_bisect.o


.PHONY = all clean

all: mt2_bisect example-py8-bsm example-py8-0lep example-delphes-py8 example-MJW-stop #example-fastsim example-fastsim-py8
	@true

# mt2 calculator
mt2_bisect: mt2_bisect.cpp mt2_bisect.h
	$(CXX) mt2_bisect.cpp -c -lm -o mt2_bisect.o

# The simplest example of fastsim
example-fastsim: DetectorResponse.cpp FastSim.cpp example-fastsim.cpp $(HEADERS)
	$(CXX) example-fastsim.cpp FastSim.cpp DetectorResponse.cpp $(CXXFLAGS) $(BOOSTFLAGS) $(FJFLAGS) $(ROOTFLAGS) $(MT2FLAGS) -lm -o example-fastsim

# A HECollider example interfaced to FastSim and Pythia8 using the respective backends (reads cmndpythia_zee.cmnd)
example-fastsim-py8: HEColliderMain_FastSim_SingleThread.cpp DetectorResponse.cpp FastSim.cpp FastSimBackend.cpp Pythia8Backend.cpp Analysis.cpp  Analysis_Perf.cpp $(HEADERS)
	$(CXX) HEColliderMain_FastSim_SingleThread.cpp DetectorResponse.cpp FastSim.cpp FastSimBackend.cpp  Pythia8Backend.cpp Analysis.cpp Analysis_Perf.cpp $(CXXFLAGS) -fopenmp $(BOOSTFLAGS) $(BOOSTSERIALIZATION) $(PY8FLAGS) $(FJFLAGS) $(ROOTFLAGS) $(MT2FLAGS) -lEG -o example-fastsim-py8

example-py8-bsm: example-py8-bsm.cpp $(HEADERS)
	$(CXX) example-py8-bsm.cpp Analysis.cpp Analysis_Perf.cpp $(CXXFLAGS) -fopenmp $(BOOSTFLAGS) $(PY8FLAGS) $(FJFLAGS) $(ROOTFLAGS) $(MT2FLAGS) -o example-py8-bsm

example-py8-0lep: example-py8-0lep.cpp Analysis_ATLAS0LEP.hpp Analysis.cpp
	$(CXX) example-py8-0lep.cpp Analysis.cpp Analysis_Perf.cpp $(CXXFLAGS) $(BOOSTFLAGS) $(PY8FLAGS) $(FJFLAGS)  $(ROOTFLAGS) $(MT2FLAGS) -o example-py8-0lep

OPTFLAGS := -DQUIET #-DARCHIVE #-DMKHISTOS
example-delphes-py8: HEColliderMain.cpp Delphes3Backend.cpp Pythia8Backend.cpp Analysis_ATLAS0LEP.hpp AbsoluteIsolation.cc AbsoluteIsolation_dict.cc BTaggingWithTruth.cc BTaggingWithTruth_dict.cc
	$(CXX) HEColliderMain.cpp Delphes3Backend.cpp Pythia8Backend.cpp Analysis.cpp Analysis_Perf.cpp AbsoluteIsolation.cc AbsoluteIsolation_dict.cc BTaggingWithTruth.cc BTaggingWithTruth_dict.cc \
      -fopenmp $(CXXFLAGS) $(BOOSTFLAGS) $(BOOSTSERIALIZATION) $(DELPHESFLAGS) $(PY8FLAGS) $(ROOTFLAGS) $(MT2FLAGS) -lEG $(OPTFLAGS) -o example-delphes-py8

example-MJW-stop: HEColliderMain-StopMJW.cpp Delphes3Backend.cpp Pythia8Backend.cpp Analysis_ATLAS0LEP.hpp AbsoluteIsolation.cc AbsoluteIsolation_dict.cc BTaggingWithTruth.cc BTaggingWithTruth_dict.cc
	$(CXX) HEColliderMain-StopMJW.cpp Delphes3Backend.cpp Pythia8Backend.cpp Analysis.cpp Analysis_Perf.cpp AbsoluteIsolation.cc AbsoluteIsolation_dict.cc BTaggingWithTruth.cc BTaggingWithTruth_dict.cc \
      -fopenmp $(CXXFLAGS) $(BOOSTFLAGS) $(BOOSTSERIALIZATION) $(DELPHESFLAGS) $(PY8FLAGS) $(ROOTFLAGS) $(MT2FLAGS) -lEG $(OPTFLAGS) -o example-MJW-stop

AbsoluteIsolation_dict.cc: AbsoluteIsolation.h
	@echo "Generating dictionary ..."
	@rootcint -f AbsoluteIsolation_dict.cc -c -I$(DELPHES) -I$(DELPHES)/external AbsoluteIsolation.h AbsoluteIsolationLinkDef.h

BTaggingWithTruth_dict.cc: BTaggingWithTruth.h
	@echo "Generating dictionary ..."
	@rootcint -f BTaggingWithTruth_dict.cc -c -I$(DELPHES) -I$(DELPHES)/external BTaggingWithTruth.h BTaggingWithTruthLinkDef.h

clean:
	@rm -f example-fastsim example-fastsim-py8 example-py8-bsm example-py8-0lep example-delphes-py8 tester_thread* *_dict.cc *_dict.h
