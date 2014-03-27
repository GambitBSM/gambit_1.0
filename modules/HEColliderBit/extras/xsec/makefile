CXXFLAGS := -std=c++11 -fPIC

FILES_NETWORKS = \
  networks/NNfunction_NN_1_1.o \
  networks/NNfunction_NN_1_2.o \
  networks/NNfunction_NN_1_3.o \
  networks/NNfunction_NN_1_4.o \
  networks/NNfunction_NN_1_5.o \
  networks/NNfunction_NN_1_6.o \
  networks/NNfunction_NN_1_7.o \
  networks/NNfunction_NN_1_8.o \
  networks/NNfunction_NN_2_2.o \
  networks/NNfunction_NN_2_3.o \
  networks/NNfunction_NN_2_4.o \
  networks/NNfunction_NN_2_5.o \
  networks/NNfunction_NN_2_6.o \
  networks/NNfunction_NN_2_7.o \
  networks/NNfunction_NN_2_8.o \
  networks/NNfunction_NN_3_3.o \
  networks/NNfunction_NN_3_4.o \
  networks/NNfunction_NN_3_5.o \
  networks/NNfunction_NN_3_6.o \
  networks/NNfunction_NN_3_7.o \
  networks/NNfunction_NN_3_8.o \
  networks/NNfunction_NN_4_4.o \
  networks/NNfunction_NN_5_7.o \
  networks/NNfunction_NN_5_8.o \
  networks/NNfunction_NN_6_7.o \
  networks/NNfunction_NN_6_8.o \
  networks/NNfunction_NG_1.o \
  networks/NNfunction_NG_2.o \
  networks/NNfunction_NG_3.o \
  networks/NNfunction_NG_4.o \
  networks/NNfunction_NG_5.o \
  networks/NNfunction_NG_6.o \
  networks/NNfunction_NG_7.o \
  networks/NNfunction_NG_8.o \
  networks/NNfunction_b1b1.o \
  networks/NNfunction_sb_cLdL.o \
  networks/NNfunction_sb_dLuR.o \
  networks/NNfunction_sb_sRcR.o \
  networks/NNfunction_ss_cLcL.o \
  networks/NNfunction_ss_dLdR.o \
  networks/NNfunction_ss_sLuL.o \
  networks/NNfunction_ss_uRsR.o \
  networks/NNfunction_b2b2.o \
  networks/NNfunction_sb_cLdR.o \
  networks/NNfunction_sb_dRcR.o \
  networks/NNfunction_sb_sRsR.o \
  networks/NNfunction_ss_cLcR.o \
  networks/NNfunction_ss_dLsR.o \
  networks/NNfunction_ss_sLuR.o \
  networks/NNfunction_ss_uRuR.o \
  networks/NNfunction_cLg.o \
  networks/NNfunction_sb_cLsL.o \
  networks/NNfunction_sb_dRdR.o \
  networks/NNfunction_sb_uLcR.o \
  networks/NNfunction_ss_cLdL.o \
  networks/NNfunction_ss_dLuR.o \
  networks/NNfunction_ss_sRcR.o \
  networks/NNfunction_t1t1.o \
  networks/NNfunction_cRg.o \
  networks/NNfunction_sb_cLsR.o \
  networks/NNfunction_sb_dRsR.o \
  networks/NNfunction_sb_uLdR.o \
  networks/NNfunction_ss_cLdR.o \
  networks/NNfunction_ss_dRcR.o \
  networks/NNfunction_ss_sRsR.o \
  networks/NNfunction_t2t2.o \
  networks/NNfunction_dLg.o \
  networks/NNfunction_sb_cLuL.o \
  networks/NNfunction_sb_sLcR.o \
  networks/NNfunction_sb_uLsR.o \
  networks/NNfunction_ss_cLsL.o \
  networks/NNfunction_ss_dRdR.o \
  networks/NNfunction_ss_uLcR.o \
  networks/NNfunction_uLg.o \
  networks/NNfunction_dRg.o \
  networks/NNfunction_sb_cLuR.o \
  networks/NNfunction_sb_sLdL.o \
  networks/NNfunction_sb_uLuL.o \
  networks/NNfunction_ss_cLsR.o \
  networks/NNfunction_ss_dRsR.o \
  networks/NNfunction_ss_uLdR.o \
  networks/NNfunction_uRg.o \
  networks/NNfunction_gg.o \
  networks/NNfunction_sb_cRcR.o \
  networks/NNfunction_sb_sLdR.o \
  networks/NNfunction_sb_uLuR.o \
  networks/NNfunction_ss_cLuL.o \
  networks/NNfunction_ss_sLcR.o \
  networks/NNfunction_ss_uLsR.o \
  networks/NNfunction_sLg.o \
  networks/NNfunction_sb_dLcR.o \
  networks/NNfunction_sb_sLsL.o \
  networks/NNfunction_sb_uRcR.o \
  networks/NNfunction_ss_cLuR.o \
  networks/NNfunction_ss_sLdL.o \
  networks/NNfunction_ss_uLuL.o \
  networks/NNfunction_sRg.o \
  networks/NNfunction_sb_dLdL.o \
  networks/NNfunction_sb_sLsR.o \
  networks/NNfunction_sb_uRdR.o \
  networks/NNfunction_ss_cRcR.o \
  networks/NNfunction_ss_sLdR.o \
  networks/NNfunction_ss_uLuR.o \
  networks/NNfunction_sb_cLcL.o \
  networks/NNfunction_sb_dLdR.o \
  networks/NNfunction_sb_sLuL.o \
  networks/NNfunction_sb_uRsR.o \
  networks/NNfunction_ss_dLcR.o \
  networks/NNfunction_ss_sLsL.o \
  networks/NNfunction_ss_uRcR.o \
  networks/NNfunction_sb_cLcR.o \
  networks/NNfunction_sb_dLsR.o \
  networks/NNfunction_sb_sLuR.o \
  networks/NNfunction_sb_uRuR.o \
  networks/NNfunction_ss_dLdL.o \
  networks/NNfunction_ss_sLsR.o \
  networks/NNfunction_ss_uRdR.o

.PHONY = all clean

SLHA = ../../../../modules/contrib/SLHAPy8

all: testxsec evalxsec libxsec.a libxsec.so
	@true

%xsec: %_xsec.cpp libxsec.a
	$(CXX) $(CXXFLAGS) $^ -o $@ -I$(SLHA)

libxsec.a: $(FILES_NETWORKS) xsec.o SusyLesHouches.o
	ar rcs $@ $^
	ranlib $@

libxsec.so: $(FILES_NETWORKS) xsec.o SusyLesHouches.o
	$(CXX) -shared -o $@ $^

SusyLesHouches.o:
	$(CXX) $(CXXFLAGS) -c $(SLHA)/src/SusyLesHouches.cc -I$(SLHA)

%.o: %.cpp %.h
	$(CXX) $(CXXFLAGS) -c $< -o $@ -I$(SLHA)

networks/%.o: networks/%.cxx networks/%.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f networks/*.o *.o libxsec.a
