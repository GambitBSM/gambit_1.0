#ifndef xsec_h
#define xsec_h

#include <string>
#include <map>
#include "Pythia8/SusyLesHouches.h"

// Include all NN-classes
#include "networks/NNfunction_nn_chi1_chi1.h"
#include "networks/NNfunction_nn_chi1_chi2.h"
#include "networks/NNfunction_nn_chi1_chi3.h"
#include "networks/NNfunction_nn_chi1_chi4.h"
#include "networks/NNfunction_nn_chi1_charge1p.h"
#include "networks/NNfunction_nn_chi1_charge2p.h"
#include "networks/NNfunction_nn_chi1_charge1m.h"
#include "networks/NNfunction_nn_chi1_charge2m.h"
#include "networks/NNfunction_nn_chi2_chi2.h"
#include "networks/NNfunction_nn_chi2_chi3.h"
#include "networks/NNfunction_nn_chi2_chi4.h"
#include "networks/NNfunction_nn_chi2_charge1p.h"
#include "networks/NNfunction_nn_chi2_charge2p.h"
#include "networks/NNfunction_nn_chi2_charge1m.h"
#include "networks/NNfunction_nn_chi2_charge2m.h"
#include "networks/NNfunction_nn_chi3_chi3.h"
#include "networks/NNfunction_nn_chi3_chi4.h"
#include "networks/NNfunction_nn_chi3_charge1p.h"
#include "networks/NNfunction_nn_chi3_charge2p.h"
#include "networks/NNfunction_nn_chi3_charge1m.h"
#include "networks/NNfunction_nn_chi3_charge2m.h"
#include "networks/NNfunction_nn_chi4_chi4.h"
#include "networks/NNfunction_nn_charge1p_charge1m.h"
#include "networks/NNfunction_nn_charge1p_charge2m.h"
#include "networks/NNfunction_nn_charge2p_charge1m.h"
#include "networks/NNfunction_nn_charge2p_charge2m.h"

#include "networks/NNfunction_ng_chi01.h"
#include "networks/NNfunction_ng_chi02.h"
#include "networks/NNfunction_ng_chi03.h"
#include "networks/NNfunction_ng_chi04.h"
#include "networks/NNfunction_ng_chiPlus1.h"
#include "networks/NNfunction_ng_chiPlus2.h"
#include "networks/NNfunction_ng_chiMinus1.h"
#include "networks/NNfunction_ng_chiMinus2.h"

#include "networks/NNfunction_ns_chi01_cL.h"
#include "networks/NNfunction_ns_chi01_cR.h"
#include "networks/NNfunction_ns_chi01_dL.h"
#include "networks/NNfunction_ns_chi01_dR.h"
#include "networks/NNfunction_ns_chi01_sL.h"
#include "networks/NNfunction_ns_chi01_sR.h"
#include "networks/NNfunction_ns_chi01_uL.h"
#include "networks/NNfunction_ns_chi01_uR.h"
#include "networks/NNfunction_ns_chi02_cL.h"
#include "networks/NNfunction_ns_chi02_cR.h"
#include "networks/NNfunction_ns_chi02_dL.h"
#include "networks/NNfunction_ns_chi02_dR.h"
#include "networks/NNfunction_ns_chi02_sL.h"
#include "networks/NNfunction_ns_chi02_sR.h"
#include "networks/NNfunction_ns_chi02_uL.h"
#include "networks/NNfunction_ns_chi02_uR.h"
#include "networks/NNfunction_ns_chi03_cL.h"
#include "networks/NNfunction_ns_chi03_cR.h"
#include "networks/NNfunction_ns_chi03_dL.h"
#include "networks/NNfunction_ns_chi03_dR.h"
#include "networks/NNfunction_ns_chi03_sL.h"
#include "networks/NNfunction_ns_chi03_sR.h"
#include "networks/NNfunction_ns_chi03_uL.h"
#include "networks/NNfunction_ns_chi03_uR.h"
#include "networks/NNfunction_ns_chi04_cL.h"
#include "networks/NNfunction_ns_chi04_cR.h"
#include "networks/NNfunction_ns_chi04_dL.h"
#include "networks/NNfunction_ns_chi04_dR.h"
#include "networks/NNfunction_ns_chi04_sL.h"
#include "networks/NNfunction_ns_chi04_sR.h"
#include "networks/NNfunction_ns_chi04_uL.h"
#include "networks/NNfunction_ns_chi04_uR.h"
#include "networks/NNfunction_ns_chiMinus1_cL.h"
#include "networks/NNfunction_ns_chiMinus1_dL.h"
#include "networks/NNfunction_ns_chiMinus1_sL.h"
#include "networks/NNfunction_ns_chiMinus1_uL.h"
#include "networks/NNfunction_ns_chiMinus2_cL.h"
#include "networks/NNfunction_ns_chiMinus2_dL.h"
#include "networks/NNfunction_ns_chiMinus2_sL.h"
#include "networks/NNfunction_ns_chiMinus2_uL.h"
#include "networks/NNfunction_ns_chiPlus1_cL.h"
#include "networks/NNfunction_ns_chiPlus1_dL.h"
#include "networks/NNfunction_ns_chiPlus1_sL.h"
#include "networks/NNfunction_ns_chiPlus1_uL.h"
#include "networks/NNfunction_ns_chiPlus2_cL.h"
#include "networks/NNfunction_ns_chiPlus2_dL.h"
#include "networks/NNfunction_ns_chiPlus2_sL.h"
#include "networks/NNfunction_ns_chiPlus2_uL.h"

#include "networks/NNfunction_gg.h"

#include "networks/NNfunction_sg_dL.h"
#include "networks/NNfunction_sg_dR.h"
#include "networks/NNfunction_sg_uL.h"
#include "networks/NNfunction_sg_uR.h"
#include "networks/NNfunction_sg_sL.h"
#include "networks/NNfunction_sg_sR.h"
#include "networks/NNfunction_sg_cL.h"
#include "networks/NNfunction_sg_cR.h"

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
#include "networks/NNfunction_sb_dLuL.h"
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
#include "networks/NNfunction_ss_dLuL.h"
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

#include "networks/NNfunction_bb_b1b1.h"
#include "networks/NNfunction_bb_b2b2.h"
#include "networks/NNfunction_tb_t1t1.h"
#include "networks/NNfunction_tb_t2t2.h"

using namespace std;

namespace xsec{

  class Evaluator {

    // One object of every NN class
    // Mutable so their Value methods can be called despite not being declared const by ROOT...
    mutable NNfunction_nn_chi1_chi1 nn_n1n1;
    mutable NNfunction_nn_chi1_chi2 nn_n1n2;
    mutable NNfunction_nn_chi1_chi3 nn_n1n3;
    mutable NNfunction_nn_chi1_chi4 nn_n1n4;
    mutable NNfunction_nn_chi1_charge1p nn_n1n5;
    mutable NNfunction_nn_chi1_charge2p nn_n1n6;
    mutable NNfunction_nn_chi1_charge1m nn_n1n7;
    mutable NNfunction_nn_chi1_charge2m nn_n1n8;
    mutable NNfunction_nn_chi2_chi2 nn_n2n2;
    mutable NNfunction_nn_chi2_chi3 nn_n2n3;
    mutable NNfunction_nn_chi2_chi4 nn_n2n4;
    mutable NNfunction_nn_chi2_charge1p nn_n2n5;
    mutable NNfunction_nn_chi2_charge2p nn_n2n6;
    mutable NNfunction_nn_chi2_charge1m nn_n2n7;
    mutable NNfunction_nn_chi2_charge2m nn_n2n8;
    mutable NNfunction_nn_chi3_chi3 nn_n3n3;
    mutable NNfunction_nn_chi3_chi4 nn_n3n4;
    mutable NNfunction_nn_chi3_charge1p nn_n3n5;
    mutable NNfunction_nn_chi3_charge2p nn_n3n6;
    mutable NNfunction_nn_chi3_charge1m nn_n3n7;
    mutable NNfunction_nn_chi3_charge2m nn_n3n8;
    mutable NNfunction_nn_chi4_chi4 nn_n4n4;
    mutable NNfunction_nn_charge1p_charge1m nn_n5n7;
    mutable NNfunction_nn_charge1p_charge2m nn_n5n8;
    mutable NNfunction_nn_charge2p_charge1m nn_n6n7;
    mutable NNfunction_nn_charge2p_charge2m nn_n6n8;

    mutable NNfunction_ng_chi01 ng_chi01;
    mutable NNfunction_ng_chi02 ng_chi02;
    mutable NNfunction_ng_chi03 ng_chi03;
    mutable NNfunction_ng_chi04 ng_chi04;
    mutable NNfunction_ng_chiPlus1 ng_chiPlus1;
    mutable NNfunction_ng_chiPlus2 ng_chiPlus2;
    mutable NNfunction_ng_chiMinus1 ng_chiMinus1;
    mutable NNfunction_ng_chiMinus2 ng_chiMinus2;

    mutable NNfunction_ns_chi01_cL ns_chi01_cL;
    mutable NNfunction_ns_chi01_cR ns_chi01_cR;
    mutable NNfunction_ns_chi01_dL ns_chi01_dL;
    mutable NNfunction_ns_chi01_dR ns_chi01_dR;
    mutable NNfunction_ns_chi01_sL ns_chi01_sL;
    mutable NNfunction_ns_chi01_sR ns_chi01_sR;
    mutable NNfunction_ns_chi01_uL ns_chi01_uL;
    mutable NNfunction_ns_chi01_uR ns_chi01_uR;
    mutable NNfunction_ns_chi02_cL ns_chi02_cL;
    mutable NNfunction_ns_chi02_cR ns_chi02_cR;
    mutable NNfunction_ns_chi02_dL ns_chi02_dL;
    mutable NNfunction_ns_chi02_dR ns_chi02_dR;
    mutable NNfunction_ns_chi02_sL ns_chi02_sL;
    mutable NNfunction_ns_chi02_sR ns_chi02_sR;
    mutable NNfunction_ns_chi02_uL ns_chi02_uL;
    mutable NNfunction_ns_chi02_uR ns_chi02_uR;
    mutable NNfunction_ns_chi03_cL ns_chi03_cL;
    mutable NNfunction_ns_chi03_cR ns_chi03_cR;
    mutable NNfunction_ns_chi03_dL ns_chi03_dL;
    mutable NNfunction_ns_chi03_dR ns_chi03_dR;
    mutable NNfunction_ns_chi03_sL ns_chi03_sL;
    mutable NNfunction_ns_chi03_sR ns_chi03_sR;
    mutable NNfunction_ns_chi03_uL ns_chi03_uL;
    mutable NNfunction_ns_chi03_uR ns_chi03_uR;
    mutable NNfunction_ns_chi04_cL ns_chi04_cL;
    mutable NNfunction_ns_chi04_cR ns_chi04_cR;
    mutable NNfunction_ns_chi04_dL ns_chi04_dL;
    mutable NNfunction_ns_chi04_dR ns_chi04_dR;
    mutable NNfunction_ns_chi04_sL ns_chi04_sL;
    mutable NNfunction_ns_chi04_sR ns_chi04_sR;
    mutable NNfunction_ns_chi04_uL ns_chi04_uL;
    mutable NNfunction_ns_chi04_uR ns_chi04_uR;
    mutable NNfunction_ns_chiMinus1_cL ns_chiMinus1_cL;
    mutable NNfunction_ns_chiMinus1_dL ns_chiMinus1_dL;
    mutable NNfunction_ns_chiMinus1_sL ns_chiMinus1_sL;
    mutable NNfunction_ns_chiMinus1_uL ns_chiMinus1_uL;
    mutable NNfunction_ns_chiMinus2_cL ns_chiMinus2_cL;
    mutable NNfunction_ns_chiMinus2_dL ns_chiMinus2_dL;
    mutable NNfunction_ns_chiMinus2_sL ns_chiMinus2_sL;
    mutable NNfunction_ns_chiMinus2_uL ns_chiMinus2_uL;
    mutable NNfunction_ns_chiPlus1_cL ns_chiPlus1_cL;
    mutable NNfunction_ns_chiPlus1_dL ns_chiPlus1_dL;
    mutable NNfunction_ns_chiPlus1_sL ns_chiPlus1_sL;
    mutable NNfunction_ns_chiPlus1_uL ns_chiPlus1_uL;
    mutable NNfunction_ns_chiPlus2_cL ns_chiPlus2_cL;
    mutable NNfunction_ns_chiPlus2_dL ns_chiPlus2_dL;
    mutable NNfunction_ns_chiPlus2_sL ns_chiPlus2_sL;
    mutable NNfunction_ns_chiPlus2_uL ns_chiPlus2_uL;

    mutable NNfunction_gg gg;

    mutable NNfunction_sg_dL dLg;
    mutable NNfunction_sg_dR dRg;
    mutable NNfunction_sg_uL uLg;
    mutable NNfunction_sg_uR uRg;
    mutable NNfunction_sg_sL sLg;
    mutable NNfunction_sg_sR sRg;
    mutable NNfunction_sg_cL cLg;
    mutable NNfunction_sg_cR cRg;

    mutable NNfunction_sb_cLcL sb_cLcL;
    mutable NNfunction_sb_cLcR sb_cLcR;
    mutable NNfunction_sb_cLdL sb_cLdL;
    mutable NNfunction_sb_cLdR sb_cLdR;
    mutable NNfunction_sb_cLsL sb_cLsL;
    mutable NNfunction_sb_cLsR sb_cLsR;
    mutable NNfunction_sb_cLuL sb_cLuL;
    mutable NNfunction_sb_cLuR sb_cLuR;
    mutable NNfunction_sb_cRcR sb_cRcR;
    mutable NNfunction_sb_dLcR sb_dLcR;
    mutable NNfunction_sb_dLdL sb_dLdL;
    mutable NNfunction_sb_dLuL sb_dLuL;
    mutable NNfunction_sb_dLdR sb_dLdR;
    mutable NNfunction_sb_dLsR sb_dLsR;
    mutable NNfunction_sb_dLuR sb_dLuR;
    mutable NNfunction_sb_dRcR sb_dRcR;
    mutable NNfunction_sb_dRdR sb_dRdR;
    mutable NNfunction_sb_dRsR sb_dRsR;
    mutable NNfunction_sb_sLcR sb_sLcR;
    mutable NNfunction_sb_sLdL sb_sLdL;
    mutable NNfunction_sb_sLdR sb_sLdR;
    mutable NNfunction_sb_sLsL sb_sLsL;
    mutable NNfunction_sb_sLsR sb_sLsR;
    mutable NNfunction_sb_sLuL sb_sLuL;
    mutable NNfunction_sb_sLuR sb_sLuR;
    mutable NNfunction_sb_sRcR sb_sRcR;
    mutable NNfunction_sb_sRsR sb_sRsR;
    mutable NNfunction_sb_uLcR sb_uLcR;
    mutable NNfunction_sb_uLdR sb_uLdR;
    mutable NNfunction_sb_uLsR sb_uLsR;
    mutable NNfunction_sb_uLuL sb_uLuL;
    mutable NNfunction_sb_uLuR sb_uLuR;
    mutable NNfunction_sb_uRcR sb_uRcR;
    mutable NNfunction_sb_uRdR sb_uRdR;
    mutable NNfunction_sb_uRsR sb_uRsR;
    mutable NNfunction_sb_uRuR sb_uRuR;
    
    mutable NNfunction_ss_cLcL ss_cLcL;
    mutable NNfunction_ss_cLcR ss_cLcR;
    mutable NNfunction_ss_cLdL ss_cLdL;
    mutable NNfunction_ss_cLdR ss_cLdR;
    mutable NNfunction_ss_cLsL ss_cLsL;
    mutable NNfunction_ss_cLsR ss_cLsR;
    mutable NNfunction_ss_cLuL ss_cLuL;
    mutable NNfunction_ss_cLuR ss_cLuR;
    mutable NNfunction_ss_cRcR ss_cRcR;
    mutable NNfunction_ss_dLcR ss_dLcR;
    mutable NNfunction_ss_dLdL ss_dLdL;
    mutable NNfunction_ss_dLdR ss_dLdR;
    mutable NNfunction_ss_dLsR ss_dLsR;
    mutable NNfunction_ss_dLuL ss_dLuL;
    mutable NNfunction_ss_dLuR ss_dLuR;
    mutable NNfunction_ss_dRcR ss_dRcR;
    mutable NNfunction_ss_dRdR ss_dRdR;
    mutable NNfunction_ss_dRsR ss_dRsR;
    mutable NNfunction_ss_sLcR ss_sLcR;
    mutable NNfunction_ss_sLdL ss_sLdL;
    mutable NNfunction_ss_sLdR ss_sLdR;
    mutable NNfunction_ss_sLsL ss_sLsL;
    mutable NNfunction_ss_sLsR ss_sLsR;
    mutable NNfunction_ss_sLuL ss_sLuL;
    mutable NNfunction_ss_sLuR ss_sLuR;
    mutable NNfunction_ss_sRcR ss_sRcR;
    mutable NNfunction_ss_sRsR ss_sRsR;
    mutable NNfunction_ss_uLcR ss_uLcR;
    mutable NNfunction_ss_uLdR ss_uLdR;
    mutable NNfunction_ss_uLsR ss_uLsR;
    mutable NNfunction_ss_uLuL ss_uLuL;
    mutable NNfunction_ss_uLuR ss_uLuR;
    mutable NNfunction_ss_uRcR ss_uRcR;
    mutable NNfunction_ss_uRdR ss_uRdR;
    mutable NNfunction_ss_uRsR ss_uRsR;
    mutable NNfunction_ss_uRuR ss_uRuR;
    
    mutable NNfunction_bb_b1b1 bb_b1b1;
    mutable NNfunction_bb_b2b2 bb_b2b2;
    mutable NNfunction_tb_t1t1 tb_t1t1;
    mutable NNfunction_tb_t2t2 tb_t2t2;

    // Map for pid codes and strings
    map<int,string> pidmap;

    void _init_pidmap();

    void _params_from_py8slha(double par[24], Pythia8::SusyLesHouches & point) const;

  public:

    Evaluator() { _init_pidmap(); }

    string get_process(int pid1, int pid2) const;

    double xsec(const vector<int>& parts1, const vector<int>& parts2, double * par) const;
    double xsec(const vector<int>& parts1, const vector<int>& parts2, Pythia8::SusyLesHouches& point) const;
    double xsec(const vector<int>& parts1, const vector<int>& parts2, const string& slhafile) const;

    double xsec(int pid1, int pid2, double * par) const;
    double xsec(int pid1, int pid2, Pythia8::SusyLesHouches& point) const;
    double xsec(int pid1, int pid2, const string& slhafile) const;

    double xsec(const string& process, double * par) const;
    double xsec(const string& process, Pythia8::SusyLesHouches& point) const;
    double xsec(const string& process, const string& slhafile) const;

    double log10xsec(const string& process, double * par) const;

  };

  /// @name Unbound functions
  //@{
  inline double xsec(const vector<int>& pids1, const vector<int>& pids2, double * par) { Evaluator e; return e.xsec(pids1, pids2, par); }
  inline double xsec(const vector<int>& pids1, const vector<int>& pids2, Pythia8::SusyLesHouches& point) { Evaluator e; return e.xsec(pids1, pids2, point); }
  inline double xsec(const vector<int>& pids1, const vector<int>& pids2, const string& slhafile) { Evaluator e; return e.xsec(pids1, pids2, slhafile); }

  inline double xsec(int pid1, int pid2, double * par) { Evaluator e; return e.xsec(pid1, pid2, par); }
  inline double xsec(int pid1, int pid2, Pythia8::SusyLesHouches& point) { Evaluator e; return e.xsec(pid1, pid2, point); }
  inline double xsec(int pid1, int pid2, const string& slhafile) { Evaluator e; return e.xsec(pid1, pid2, slhafile); }

  inline double xsec(const string& process, double * par) { Evaluator e; return e.xsec(process, par); }
  inline double xsec(const string& process, Pythia8::SusyLesHouches& point) { Evaluator e; return e.xsec(process, point); }
  inline double xsec(const string& process, const string& slhafile) { Evaluator e; return e.xsec(process, slhafile); }
  //@}


}


// extern "C" {
//   void foo(); //{ cout << "DIE" << endl; }
// }


#endif // xsec_h
