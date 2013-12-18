include Makefile.common

ANAOBJS := Analysis_ATLAS_0LEPStop_20invfb.o Analysis_ATLAS_0LEP_XXinvfb.o Analysis_ATLAS_1LEPStop_20invfb.o \
           Analysis_ATLAS_2bStop_20invfb.o Analysis_ATLAS_2LEPStop_20invfb.o Analysis_Perf.o Analysis.o
PY8OBJS := Pythia8Backend.o
FASTSIMOBJS := FastSimBackend.o FastSim.o DetectorResponse.o
DELPHESOBJS := Delphes3Backend.o AbsoluteIsolation.o AbsoluteIsolation_dict.o BTaggingWithTruth.o BTaggingWithTruth_dict.o
MT2OBJS := mt2_bisect.o

###################
## make rule definitions

.PHONY = all clean

all: mt2_bisect example-py8-bsm example-py8-0lep example-delphes-py8 example-MJW-stop #example-fastsim example-fastsim-py8
	@true

%.o : %.cpp $(HEADERS)
	$(CXX) -c $< $(CXXFLAGS) -DQUIET -fopenmp $(BOOSTFLAGS) $(PY8FLAGS) $(FJFLAGS) $(ROOTFLAGS) $(DELPHESFLAGS) -o $@
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
	$(CXX) $^ $(CXXFLAGS) -fopenmp $(BOOSTFLAGS) $(BOOSTSERIALIZATION) $(ROOTFLAGS) $(DELPHESFLAGS) $(PY8FLAGS) -lEG $(OPTFLAGS) -o example-delphes-py8

# TODO: remove this near-duplicate!!!
example-MJW-stop: HEColliderMain-StopMJW.cpp $(ANAOBJS) $(PY8OBJS) $(DELPHESOBJS) $(MT2OBJS)
	$(CXX) $^ $(CXXFLAGS) -fopenmp $(BOOSTFLAGS) $(BOOSTSERIALIZATION) $(ROOTFLAGS) $(DELPHESFLAGS) $(PY8FLAGS) -lEG $(OPTFLAGS) -o example-MJW-stop



# The simplest example of fastsim
example-fastsim: example-fastsim.cpp $(FASTSIMOBJS)
	$(CXX) $^ $(CXXFLAGS) $(BOOSTFLAGS) $(FJFLAGS) $(ROOTFLAGS) -lm -o example-fastsim

# A HECollider example interfaced to FastSim and Pythia8 using the respective backends (reads cmndpythia_zee.cmnd)
example-fastsim-py8: HEColliderMain_FastSim_SingleThread.cpp $(ANAOBJS) $(FASTSIMOBJS) $(PY8OBJS)
	$(CXX) $^ $(CXXFLAGS) -fopenmp $(BOOSTFLAGS) $(BOOSTSERIALIZATION) $(PY8FLAGS) $(FJFLAGS) $(ROOTFLAGS) -lEG -o example-fastsim-py8



AbsoluteIsolation_dict.cc: AbsoluteIsolation.h
	@echo "Generating dictionary from $^"
	@rootcint -f AbsoluteIsolation_dict.cc -c -I$(DELPHES) -I$(DELPHES)/external $^ AbsoluteIsolationLinkDef.h

BTaggingWithTruth_dict.cc: BTaggingWithTruth.h
	@echo "Generating dictionary from $^"
	@rootcint -f BTaggingWithTruth_dict.cc -c -I$(DELPHES) -I$(DELPHES)/external $^ BTaggingWithTruthLinkDef.h


clean:
	@rm -f example-fastsim example-fastsim-py8 example-py8-bsm example-py8-0lep example-delphes-py8 tester_thread* *_dict.* *_rdict.pcm *.o
