include ../Makefile.common

ANAOBJS := Analysis.o
  # Analysis_ATLAS_0LEPStop_20invfb.o \
  # Analysis_ATLAS_0LEP_XXinvfb.o \
  # Analysis_ATLAS_1LEPStop_20invfb.o \
  # Analysis_ATLAS_2bStop_20invfb.o \
  # Analysis_ATLAS_2LEPStop_20invfb.o \
  # Analysis_Perf.o

libGambitHEColliderAnalysis.so: $(ANAOBJS) mt2_bisect.o
	$(CXX) -shared $(LDFLAGS) $(HEC_LDFLAGS) $(BOOST_LDFLAGS) $(FJ_LDFLAGS) $(ROOT_LDFLAGS) -lm $^ -o $@

%.o : %.cpp
    # TODO: get rid of the ROOT usage in all the analyses
	$(CXX) -c $< -I../../include $(CXXFLAGS) $(HEC_CXXFLAGS) -DQUIET $(BOOST_CXXFLAGS) $(FJ_CXXFLAGS) $(ROOT_CXXFLAGS) -o $@

mt2_bisect.o: mt2_bisect.cpp mt2_bisect.h
	$(CXX) -c $(CXXFLAGS) $(HEC_CXXFLAGS) -Wno-error=uninitialized -Wno-unused-but-set-variable $< -o $@

# TODO: add clean
