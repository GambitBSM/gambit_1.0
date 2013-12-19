include Makefile.common

PY8OBJS := Pythia8Backend.o
DELPHESOBJS := Delphes3Backend.o
# TODO: not sure if fastsim is ready to build... no makefile in that directory yet.
FASTSIMOBJS := FastSimBackend.o FastSim.o DetectorResponse.o

ANA_LIB := analyses/libGambitHEColliderAnalysis.so
#ANA_LDFLAGS := -Lanalysis -lGambitHEColliderAnalysis
OPTFLAGS := -DQUIET #-DARCHIVE #-DMKHISTOS

.PHONY: all clean sterile

all: $(ANA_LIB) example-py8-bsm example-py8-0lep example-py8-delphes #example-fastsim example-fastsim-py8
	@true

$(ANA_LIB):
	@echo ****
	@echo Now building the analyses.....
	@echo ****
	@cd analyses && make

%.o : %.cpp
	$(CXX) -c $< -I../include $(HEC_CXXFLAGS) -DQUIET -fopenmp $(BOOST_CXXFLAGS) $(PY8_CXXFLAGS) $(FJ_CXXFLAGS) $(ROOT_CXXFLAGS) $(DELPHES_CXXFLAGS) -o $@

# Basic example of running Py8: remove!
example-py8-bsm: examples/example-py8-bsm.o
	$(CXX) -lm $^ $(ANA_LIB) $(BOOST_LDFLAGS) $(PY8_LDFLAGS) $(FJ_LDFLAGS) $(ROOT_LDFLAGS) -fopenmp -o $@

# Basic example of running Py8 and using a hard-coded version of the ATLAS 0LEP analysis: remove!
example-py8-0lep: examples/example-py8-0lep.o
	$(CXX) -lm $^ $(ANA_LIB) $(BOOST_LDFLAGS) $(PY8_LDFLAGS) $(FJ_LDFLAGS) $(ROOT_LDFLAGS) -fopenmp -o $@

# Running Pythia8 and Delphes through some analyses with backend/analysis factory machinery and OpenMP thread groups
example-py8-delphes: examples/example-py8-delphes.o $(PY8OBJS) $(DELPHESOBJS)
	$(CXX) -lm $^ $(ANA_LIB) $(BOOST_LDFLAGS) $(BOOST_LDFLAGS) $(ROOT_LDFLAGS) $(DELPHES_LDFLAGS) $(PY8_LDFLAGS) -lEG $(OPTFLAGS) -fopenmp -o $@


# The simplest example of fastsim
example-fastsim: examples/example-fastsim.o $(FASTSIMOBJS)
	$(CXX) -lm $^ $(ANA_LIB) $(BOOST_LDFLAGS) $(FJ_LDFLAGS) $(ROOT_LDFLAGS) -lm -o $@

# A HECollider example interfaced to FastSim and Pythia8 using the respective backends (reads cmndpythia_zee.cmnd)
example-fastsim-py8: examples/example-fastsim-py8.o $(FASTSIMOBJS) $(PY8OBJS)
	$(CXX) -lm $^ $(ANA_LIB) $(BOOST_LDFLAGS) $(BOOST_LDFLAGS) $(PY8_LDFLAGS) $(FJ_LDFLAGS) $(ROOT_LDFLAGS) -lEG -o $@


clean:
	@rm -f example-fastsim example-fastsim-py8 example-py8-bsm example-py8-0lep example-delphes-py8 tester_thread* *_dict.* *_rdict.pcm *.o

sterile:
	@make clean
	@cd analyses; make clean
