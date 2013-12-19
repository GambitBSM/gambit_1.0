include Makefile.common

# TODO: not sure if fastsim is ready to build... no makefile in that directory yet.
FASTSIMOBJS := FastSimBackend.o FastSim.o DetectorResponse.o

ANA_LIB := analyses/libGambitHEColliderAnalysis.so
DELPHES_LIB := delphes/libGambitHEColliderDelphes.so
OPTFLAGS := -DQUIET #-DARCHIVE #-DMKHISTOS

.PHONY: all clean sterile

all: example-py8-delphes example-py8-bsm example-py8-0lep #example-fastsim example-fastsim-py8
	@true

$(ANA_LIB):
	@echo "****\nNow building the analyses...\n****"
	@cd analyses && make

$(DELPHES_LIB):
	@echo "****\nNow building the Delphes customisations...\n****"
	@cd delphes && make

%.o : %.cpp
	$(CXX) -c $< -I../include $(HEC_CXXFLAGS) -DQUIET -fopenmp $(BOOST_CXXFLAGS) $(PY8_CXXFLAGS) $(FJ_CXXFLAGS) $(ROOT_CXXFLAGS) $(DELPHES_CXXFLAGS) -o $@


# Running Pythia8 and Delphes through some analyses with backend/analysis factory machinery and OpenMP thread groups
example-py8-delphes: examples/example-py8-delphes.o Pythia8Backend.o Delphes3Backend.o $(ANA_LIB) $(DELPHES_LIB)
	$(CXX) -lm $^ $(ANA_LIB) $(BOOST_LDFLAGS) $(BOOST_LDFLAGS) $(ROOT_LDFLAGS) $(DELPHES_LDFLAGS) $(PY8_LDFLAGS) -lEG $(OPTFLAGS) -fopenmp -o $@


# Basic example of running OpenMP Py8 and a hard-coded analysis: remove!
example-py8-bsm: examples/example-py8-bsm.o
	$(CXX) -lm $^ $(ANA_LIB) $(BOOST_LDFLAGS) $(PY8_LDFLAGS) $(FJ_LDFLAGS) $(ROOT_LDFLAGS) -fopenmp -o $@

# Basic example of running OpenMP Py8 and using a hard-coded version of the ATLAS 0LEP analysis: remove!
example-py8-0lep: examples/example-py8-0lep.o
	$(CXX) -lm $^ $(ANA_LIB) $(BOOST_LDFLAGS) $(PY8_LDFLAGS) $(FJ_LDFLAGS) $(ROOT_LDFLAGS) -fopenmp -o $@


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
