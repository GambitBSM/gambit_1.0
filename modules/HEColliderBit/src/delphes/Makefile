include ../Makefile.common

libGambitHEColliderDelphes.so: AbsoluteIsolation.o  AbsoluteIsolation_dict.o BTaggingWithTruth.o BTaggingWithTruth_dict.o
	$(CXX) -shared $(LDFLAGS) $(HEC_LDFLAGS) $^ $(ROOT_LDFLAGS) $(DELPHES_LDFLAGS) -o $@

%.o : %.cc $(HEADERS)
	$(CXX) -c $< $(CXXFLAGS) $(HEC_CXXFLAGS) -fopenmp $(ROOT_CXXFLAGS) $(DELPHES_CXXFLAGS) -o $@

AbsoluteIsolation_dict.cc: AbsoluteIsolation.h AbsoluteIsolationLinkDef.h
	@echo "Generating dictionary from $^"
	@rootcint -f AbsoluteIsolation_dict.cc -c -I$(DELPHES) -I$(DELPHES)/external $^

BTaggingWithTruth_dict.cc: BTaggingWithTruth.h BTaggingWithTruthLinkDef.h
	@echo "Generating dictionary from $^"
	@rootcint -f BTaggingWithTruth_dict.cc -c -I$(DELPHES) -I$(DELPHES)/external $^

# TODO: add clean
