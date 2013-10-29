## You can set these xxxDIR variables in your .bashrc if needed

ifndef PYTHIA8
  PYTHIA8 := $(PYTHIA8DIR)
  ifndef PYTHIA8
    PYTHIA8 := $(PY8DIR)
  endif
endif
ifdef PYTHIA8
  $(info Pythia8 path = $(PYTHIA8))
else
  $(warning $$PYTHIA8DIR or $$PY8DIR variable not defined)
endif

ifndef DELPHES
  DELPHES := $(DELPHESDIR)
  ifndef DELPHES
    DELPHES := $(DELPSDIR)
  endif
endif
ifdef DELPHES
  $(info Delphes path = $(DELPHES))
else
  $(warning $$DELPHESDIR or $$DELPSDIR variable not defined)
endif

ifndef BOOST
  BOOST := $(BOOSTDIR)
endif
ifdef BOOST
  $(info Boost path = $(BOOST))
else
  $(warning $$BOOSTDIR variable not defined)
endif


###################
## Compiler choices and flags

CXX := g++

CXXFLAGS := -std=c++0x -O3 -pedantic -Wall -Wno-long-long -Werror=uninitialized #-Werror=delete-non-virtual-dtor

# TODO: pythia8-config isn't standard yet, so also allow a fallback
PY8FLAGS := $(shell pythia8-config --cxxflags --libs 2> /dev/null)
ifndef PY8FLAGS
PY8FLAGS := -I$(PYTHIA8)/include -L$(PYTHIA8)/lib -L$(PYTHIA8)/lib/archive -lpythia8 -llhapdfdummy
endif
$(info Pythia version = $(shell cat `pythia8-config --xmldoc`/Version.xml | grep versionNumber | cut -d'"' -f4))

FJFLAGS := $(shell fastjet-config --cxxflags --libs --plugins)
ROOTFLAGS := $(shell root-config --cflags --libs --ldflags)
DELPHESFLAGS := -I$(DELPHES) -I$(DELPHES)/external -L$(DELPHES) -lDelphes
BOOSTFLAGS := -I$(BOOST)
BOOSTSERIALIZATION := -L$(BOOST)/stage/lib -lboost_serialization


###################
## Other useful variables for make rules

UTILHEADERS := Event.hpp FastJetUtils.hpp Jet.hpp MathUtils.hpp MCUtils.hpp Particle.hpp PIDCodes.hpp PIDUtils.hpp Vectors.hpp
DELPHESHEADERS := Delphes3Backend.hpp
ALDODETHEADERS := DetectorResponse.hpp FastSim.hpp
PY8HEADERS := Py8Utils.hpp  Pythia8Backend.hpp
HEADERS := $(UTILHEADERS) $(DELPHESHEADERS) $(ALDODETHEADERS) $(PY8HEADERS)

ANAOBJS := Analysis_ATLAS_0LEPStop_20invfb.o Analysis_ATLAS_0LEP_XXinvfb.o Analysis_ATLAS_1LEPStop_20invfb.o \
           Analysis_ATLAS_2bStop_20invfb.o Analysis_ATLAS_2LEPStop_20invfb.o Analysis_Perf.o Analysis.o
PY8OBJS := Pythia8Backend.o
FASTSIMOBJS :=  FastSimBackend.o FastSim.o DetectorResponse.o
DELPHESOBJS := Delphes3Backend.o AbsoluteIsolation.o AbsoluteIsolation_dict.o BTaggingWithTruth.o BTaggingWithTruth_dict.o
MT2OBJS := mt2_bisect.o

###################
## make rule definitions

.PHONY = all clean

all: mt2_bisect example-py8-bsm example-py8-0lep example-delphes-py8 example-MJW-stop #example-fastsim example-fastsim-py8
	@true

%.o : %.cpp $(HEADERS)
	$(CXX) -c $< $(CXXFLAGS) -fopenmp $(BOOSTFLAGS) $(PY8FLAGS) $(FJFLAGS) $(ROOTFLAGS) $(DELPHESFLAGS) -o $@
%.o : %.cc $(HEADERS)
	$(CXX) -c $< $(CXXFLAGS) -fopenmp $(BOOSTFLAGS) $(PY8FLAGS) $(FJFLAGS) $(ROOTFLAGS) $(DELPHESFLAGS) -o $@
mt2_bisect: mt2_bisect.cpp mt2_bisect.h
	$(CXX) mt2_bisect.cpp -c -lm -o mt2_bisect.o


example-py8-bsm: example-py8-bsm.cpp $(ANAOBJS) $(MT2OBJS)
	$(CXX) $^ $(CXXFLAGS) -fopenmp $(BOOSTFLAGS) $(PY8FLAGS) $(FJFLAGS) $(ROOTFLAGS)  -o example-py8-bsm

example-py8-0lep: example-py8-0lep.cpp $(ANAOBJS) $(MT2OBJS)
	$(CXX) $^ $(CXXFLAGS) $(BOOSTFLAGS) $(PY8FLAGS) $(FJFLAGS)  $(ROOTFLAGS) -o example-py8-0lep

OPTFLAGS := -DQUIET #-DARCHIVE #-DMKHISTOS
example-delphes-py8: HEColliderMain.cpp $(ANAOBJS) $(PY8OBJS) $(DELPHESOBJS) $(MT2OBJS)
	$(CXX) $^ $(CXXFLAGS) -fopenmp $(BOOSTFLAGS) $(BOOSTSERIALIZATION) $(DELPHESFLAGS) $(PY8FLAGS) $(ROOTFLAGS) -lEG $(OPTFLAGS) -o example-delphes-py8

example-MJW-stop: HEColliderMain-StopMJW.cpp $(ANAOBJS) $(PY8OBJS) $(DELPHESOBJS) $(MT2OBJS)
	$(CXX) $^ $(CXXFLAGS) -fopenmp $(BOOSTFLAGS) $(BOOSTSERIALIZATION) $(DELPHESFLAGS) $(PY8FLAGS) $(ROOTFLAGS) -lEG $(OPTFLAGS) -o example-MJW-stop



# The simplest example of fastsim
example-fastsim: example-fastsim.cpp $(FASTSIMOBJS)
	$(CXX) $^ $(CXXFLAGS) $(BOOSTFLAGS) $(FJFLAGS) $(ROOTFLAGS) -lm -o example-fastsim

# A HECollider example interfaced to FastSim and Pythia8 using the respective backends (reads cmndpythia_zee.cmnd)
example-fastsim-py8: HEColliderMain_FastSim_SingleThread.cpp $(ANAOBJS) $(FASTSIMOBJS) $(PY8OBJS)
	$(CXX) $^ $(CXXFLAGS) -fopenmp $(BOOSTFLAGS) $(BOOSTSERIALIZATION) $(PY8FLAGS) $(FJFLAGS) $(ROOTFLAGS) -lEG -o example-fastsim-py8



AbsoluteIsolation_dict.cc: AbsoluteIsolation.h
	@echo "Generating dictionary from $<"
	@rootcint -f AbsoluteIsolation_dict.cc -c -I$(DELPHES) -I$(DELPHES)/external AbsoluteIsolation.h AbsoluteIsolationLinkDef.h

BTaggingWithTruth_dict.cc: BTaggingWithTruth.h
	@echo "Generating dictionary from $<"
	@rootcint -f BTaggingWithTruth_dict.cc -c -I$(DELPHES) -I$(DELPHES)/external BTaggingWithTruth.h BTaggingWithTruthLinkDef.h


clean:
	@rm -f example-fastsim example-fastsim-py8 example-py8-bsm example-py8-0lep example-delphes-py8 tester_thread* *_dict.cc *_dict.h
