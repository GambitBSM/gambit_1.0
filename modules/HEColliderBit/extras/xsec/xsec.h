#ifndef xsec_h
#define xsec_h

#include <string>
#include "SusyLesHouches.h"

// Include all NN-classes
#include "networks/NNfunction_n1n1.h"
#include "networks/NNfunction_n1n2.h"

#include "networks/NNfunction_b1b1.h"
#include "networks/NNfunction_b2b2.h"
#include "networks/NNfunction_cLg.h"
#include "networks/NNfunction_cRg.h"
#include "networks/NNfunction_dLg.h"
#include "networks/NNfunction_dRg.h"
#include "networks/NNfunction_gg.h"
#include "networks/NNfunction_sLg.h"
#include "networks/NNfunction_sRg.h"
#include "networks/NNfunction_sb_cLcL.h"
#include "networks/NNfunction_sb_cLcR.h"
#include "networks/NNfunction_sb_cLdL.h"
#include "networks/NNfunction_sb_cLdR.h"
#include "networks/NNfunction_sb_cLsL.h"
#include "networks/NNfunction_sb_cLsR.h"
#include "networks/NNfunction_sb_cLuL.h"
#include "networks/NNfunction_sb_cLuR.h"
#include "networks/NNfunction_sb_cRcR.h"
#include "networks/NNfunction_sb_dLcR.h"
#include "networks/NNfunction_sb_dLdL.h"
#include "networks/NNfunction_sb_dLdR.h"
#include "networks/NNfunction_sb_dLsR.h"
#include "networks/NNfunction_sb_dLuR.h"
#include "networks/NNfunction_sb_dRcR.h"
#include "networks/NNfunction_sb_dRdR.h"
#include "networks/NNfunction_sb_dRsR.h"
#include "networks/NNfunction_sb_sLcR.h"
#include "networks/NNfunction_sb_sLdL.h"
#include "networks/NNfunction_sb_sLdR.h"
#include "networks/NNfunction_sb_sLsL.h"
#include "networks/NNfunction_sb_sLsR.h"
#include "networks/NNfunction_sb_sLuL.h"
#include "networks/NNfunction_sb_sLuR.h"
#include "networks/NNfunction_sb_sRcR.h"
#include "networks/NNfunction_sb_sRsR.h"
#include "networks/NNfunction_sb_uLcR.h"
#include "networks/NNfunction_sb_uLdR.h"
#include "networks/NNfunction_sb_uLsR.h"
#include "networks/NNfunction_sb_uLuL.h"
#include "networks/NNfunction_sb_uLuR.h"
#include "networks/NNfunction_sb_uRcR.h"
#include "networks/NNfunction_sb_uRdR.h"
#include "networks/NNfunction_sb_uRsR.h"
#include "networks/NNfunction_sb_uRuR.h"
#include "networks/NNfunction_ss_cLcL.h"
#include "networks/NNfunction_ss_cLcR.h"
#include "networks/NNfunction_ss_cLdL.h"
#include "networks/NNfunction_ss_cLdR.h"
#include "networks/NNfunction_ss_cLsL.h"
#include "networks/NNfunction_ss_cLsR.h"
#include "networks/NNfunction_ss_cLuL.h"
#include "networks/NNfunction_ss_cLuR.h"
#include "networks/NNfunction_ss_cRcR.h"
#include "networks/NNfunction_ss_dLcR.h"
#include "networks/NNfunction_ss_dLdL.h"
#include "networks/NNfunction_ss_dLdR.h"
#include "networks/NNfunction_ss_dLsR.h"
#include "networks/NNfunction_ss_dLuR.h"
#include "networks/NNfunction_ss_dRcR.h"
#include "networks/NNfunction_ss_dRdR.h"
#include "networks/NNfunction_ss_dRsR.h"
#include "networks/NNfunction_ss_sLcR.h"
#include "networks/NNfunction_ss_sLdL.h"
#include "networks/NNfunction_ss_sLdR.h"
#include "networks/NNfunction_ss_sLsL.h"
#include "networks/NNfunction_ss_sLsR.h"
#include "networks/NNfunction_ss_sLuL.h"
#include "networks/NNfunction_ss_sLuR.h"
#include "networks/NNfunction_ss_sRcR.h"
#include "networks/NNfunction_ss_sRsR.h"
#include "networks/NNfunction_ss_uLcR.h"
#include "networks/NNfunction_ss_uLdR.h"
#include "networks/NNfunction_ss_uLsR.h"
#include "networks/NNfunction_ss_uLuL.h"
#include "networks/NNfunction_ss_uLuR.h"
#include "networks/NNfunction_ss_uRcR.h"
#include "networks/NNfunction_ss_uRdR.h"
#include "networks/NNfunction_ss_uRsR.h"
#include "networks/NNfunction_ss_uRuR.h"
#include "networks/NNfunction_t1t1.h"
#include "networks/NNfunction_t2t2.h"
#include "networks/NNfunction_uLg.h"
#include "networks/NNfunction_uRg.h"

using namespace std;

namespace xsec{

class Evaluator {
    NNfunction_n1n1 nn_n1n1;
    NNfunction_n1n2 nn_n1n2;
    
    NNfunction_b1b1 b1b1;
    NNfunction_b2b2 b2b2;
    NNfunction_cLg cLg;
    NNfunction_cRg cRg;
    NNfunction_dLg dLg;
    NNfunction_dRg dRg;
    NNfunction_gg gg;
    NNfunction_sLg sLg;
    NNfunction_sRg sRg;
    NNfunction_sb_cLcL sb_cLcL;
    NNfunction_sb_cLcR sb_cLcR;
    NNfunction_sb_cLdL sb_cLdL;
    NNfunction_sb_cLdR sb_cLdR;
    NNfunction_sb_cLsL sb_cLsL;
    NNfunction_sb_cLsR sb_cLsR;
    NNfunction_sb_cLuL sb_cLuL;
    NNfunction_sb_cLuR sb_cLuR;
    NNfunction_sb_cRcR sb_cRcR;
    NNfunction_sb_dLcR sb_dLcR;
    NNfunction_sb_dLdL sb_dLdL;
    NNfunction_sb_dLdR sb_dLdR;
    NNfunction_sb_dLsR sb_dLsR;
    NNfunction_sb_dLuR sb_dLuR;
    NNfunction_sb_dRcR sb_dRcR;
    NNfunction_sb_dRdR sb_dRdR;
    NNfunction_sb_dRsR sb_dRsR;
    NNfunction_sb_sLcR sb_sLcR;
    NNfunction_sb_sLdL sb_sLdL;
    NNfunction_sb_sLdR sb_sLdR;
    NNfunction_sb_sLsL sb_sLsL;
    NNfunction_sb_sLsR sb_sLsR;
    NNfunction_sb_sLuL sb_sLuL;
    NNfunction_sb_sLuR sb_sLuR;
    NNfunction_sb_sRcR sb_sRcR;
    NNfunction_sb_sRsR sb_sRsR;
    NNfunction_sb_uLcR sb_uLcR;
    NNfunction_sb_uLdR sb_uLdR;
    NNfunction_sb_uLsR sb_uLsR;
    NNfunction_sb_uLuL sb_uLuL;
    NNfunction_sb_uLuR sb_uLuR;
    NNfunction_sb_uRcR sb_uRcR;
    NNfunction_sb_uRdR sb_uRdR;
    NNfunction_sb_uRsR sb_uRsR;
    NNfunction_sb_uRuR sb_uRuR;
    NNfunction_ss_cLcL ss_cLcL;
    NNfunction_ss_cLcR ss_cLcR;
    NNfunction_ss_cLdL ss_cLdL;
    NNfunction_ss_cLdR ss_cLdR;
    NNfunction_ss_cLsL ss_cLsL;
    NNfunction_ss_cLsR ss_cLsR;
    NNfunction_ss_cLuL ss_cLuL;
    NNfunction_ss_cLuR ss_cLuR;
    NNfunction_ss_cRcR ss_cRcR;
    NNfunction_ss_dLcR ss_dLcR;
    NNfunction_ss_dLdL ss_dLdL;
    NNfunction_ss_dLdR ss_dLdR;
    NNfunction_ss_dLsR ss_dLsR;
    NNfunction_ss_dLuR ss_dLuR;
    NNfunction_ss_dRcR ss_dRcR;
    NNfunction_ss_dRdR ss_dRdR;
    NNfunction_ss_dRsR ss_dRsR;
    NNfunction_ss_sLcR ss_sLcR;
    NNfunction_ss_sLdL ss_sLdL;
    NNfunction_ss_sLdR ss_sLdR;
    NNfunction_ss_sLsL ss_sLsL;
    NNfunction_ss_sLsR ss_sLsR;
    NNfunction_ss_sLuL ss_sLuL;
    NNfunction_ss_sLuR ss_sLuR;
    NNfunction_ss_sRcR ss_sRcR;
    NNfunction_ss_sRsR ss_sRsR;
    NNfunction_ss_uLcR ss_uLcR;
    NNfunction_ss_uLdR ss_uLdR;
    NNfunction_ss_uLsR ss_uLsR;
    NNfunction_ss_uLuL ss_uLuL;
    NNfunction_ss_uLuR ss_uLuR;
    NNfunction_ss_uRcR ss_uRcR;
    NNfunction_ss_uRdR ss_uRdR;
    NNfunction_ss_uRsR ss_uRsR;
    NNfunction_ss_uRuR ss_uRuR;
    NNfunction_t1t1 t1t1;
    NNfunction_t2t2 t2t2;
    NNfunction_uLg uLg;
    NNfunction_uRg uRg;
    
public:
    Evaluator();
    double xsec(string process, double * par);
    double xsec(string process, Pythia8::SusyLesHouches * point);

};

}
    
#endif // xsec_h