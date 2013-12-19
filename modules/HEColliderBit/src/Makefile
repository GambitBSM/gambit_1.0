include Makefile.common

PY8OBJS := Pythia8Backend.o
DELPHESOBJS := Delphes3Backend.o
# TODO not sure if fastsim is ready to build... no makefile in that directory yet.
FASTSIMOBJS := FastSimBackend.o FastSim.o DetectorResponse.o
ANA := analysis/libGambitHEColliderAnalysis.so

.PHONY: all clean sterile

all: $(ANA) example-py8-bsm example-py8-0lep example-delphes-py8 example-MJW-stop #example-fastsim example-fastsim-py8
	@true

$(ANA):
	@echo ****
	@echo Now building the analyses.....
	@echo ****
	@cd analyses; make

%.o : %.cpp
	$(CXX) -c $< -I../include $(HEC_CXXFLAGS) -DQUIET -fopenmp $(BOOST_CXXFLAGS) $(PY8_CXXFLAGS) $(FJ_CXXFLAGS) $(ROOT_CXXFLAGS) $(DELPHES_CXXFLAGS) -o $@

example-py8-bsm: examples/example-py8-bsm.o
	$(CXX) -lm $^ $(ANA_LDFLAGS) $(BOOST_LDFLAGS) $(PY8_LDFLAGS) $(FJ_LDFLAGS) $(ROOT_LDFLAGS) -o example-py8-bsm

example-py8-0lep: examples/example-py8-0lep.o
	$(CXX) -lm $^ $(ANA_LDFLAGS) $(BOOST_LDFLAGS) $(PY8_LDFLAGS) $(FJ_LDFLAGS) $(ROOT_LDFLAGS) -o example-py8-0lep


OPTFLAGS := -DQUIET #-DARCHIVE #-DMKHISTOS
example-delphes-py8: examples/HEColliderMain.o $(PY8OBJS) $(DELPHESOBJS)
	$(CXX) -lm $^ $(ANA_LDFLAGS) $(BOOST_LDFLAGS) $(BOOST_LDFLAGS) $(ROOT_LDFLAGS) $(DELPHES_LDFLAGS) $(PY8_LDFLAGS) -lEG $(OPTFLAGS) -o example-delphes-py8

# TODO: remove this near-duplicate!!!
example-MJW-stop: examples/HEColliderMain-StopMJW.o $(PY8OBJS) $(DELPHESOBJS)
	$(CXX) -lm $^ $(ANA_LDFLAGS) $(BOOST_LDFLAGS) $(BOOST_LDFLAGS) $(ROOT_LDFLAGS) $(DELPHES_LDFLAGS) $(PY8_LDFLAGS) -lEG $(OPTFLAGS) -o example-MJW-stop


# The simplest example of fastsim
example-fastsim: examples/example-fastsim.o $(FASTSIMOBJS)
	$(CXX) -lm $^ $(ANA_LDFLAGS) $(BOOST_LDFLAGS) $(FJ_LDFLAGS) $(ROOT_LDFLAGS) -lm -o example-fastsim

# A HECollider example interfaced to FastSim and Pythia8 using the respective backends (reads cmndpythia_zee.cmnd)
example-fastsim-py8: examples/HEColliderMain_FastSim_SingleThread.o $(FASTSIMOBJS) $(PY8OBJS)
	$(CXX) -lm $^ $(ANA_LDFLAGS) $(BOOST_LDFLAGS) $(BOOST_LDFLAGS) $(PY8_LDFLAGS) $(FJ_LDFLAGS) $(ROOT_LDFLAGS) -lEG -o example-fastsim-py8


clean:
	@rm -f example-fastsim example-fastsim-py8 example-py8-bsm example-py8-0lep example-delphes-py8 tester_thread* *_dict.* *_rdict.pcm *.o

sterile:
	@make clean
	@cd analyses; make clean
