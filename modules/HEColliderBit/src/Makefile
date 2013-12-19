include Makefile.common

PY8OBJS := Pythia8Backend.o
FASTSIMOBJS := FastSimBackend.o FastSim.o DetectorResponse.o

.PHONY = all clean

all: example-py8-bsm example-py8-0lep example-delphes-py8 example-MJW-stop #example-fastsim example-fastsim-py8
	@true

%.o : %.cpp $(HEADERS)
	$(CXX) -c $< $(CXXFLAGS) -DQUIET -fopenmp $(BOOSTFLAGS) $(PY8FLAGS) $(FJFLAGS) $(ROOTFLAGS) $(DELPHESFLAGS) -o $@

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


clean:
	@rm -f example-fastsim example-fastsim-py8 example-py8-bsm example-py8-0lep example-delphes-py8 tester_thread* *_dict.* *_rdict.pcm *.o
