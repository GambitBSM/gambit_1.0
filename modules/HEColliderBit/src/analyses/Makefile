include ../Makefile.common

ANAOBJS := Analysis.o \
  Analysis_ATLAS_0LEPStop_20invfb.o \
  Analysis_ATLAS_0LEP_XXinvfb.o \
  Analysis_ATLAS_1LEPStop_20invfb.o \
  Analysis_ATLAS_2bStop_20invfb.o \
  Analysis_ATLAS_2LEPStop_20invfb.o \
  Analysis_Perf.o

libGambitHEColliderAnalysis.a: $(ANAOBJS) mt2_bisect.o
	$(CXX) $(LDFLAGS) $^ -o $@

%.o : %.cpp
    # TODO: get rid of the ROOT usage in all the analyses
	$(CXX) -c $< -I../../include $(CXXFLAGS) -DQUIET $(BOOSTFLAGS) $(FJFLAGS) $(ROOTFLAGS) -o $@

mt2_bisect.o: mt2_bisect.cpp mt2_bisect.h
	$(CXX) mt2_bisect.cpp -c -lm -o mt2_bisect.o
