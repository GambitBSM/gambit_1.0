#include "xsec.h"
#include <iostream>
#include <string>
#include <map>
#include <cmath>
#include <stdexcept>

using namespace std;

namespace xsec{


void Evaluator::_init_pidmap() {
    // Make pid map

    // Sfermions
    pidmap[1000001]="dL";
    pidmap[1000002]="uL";
    pidmap[1000003]="sL";
    pidmap[1000004]="cL";
    pidmap[1000005]="b1";
    pidmap[1000006]="t1";

    pidmap[-1000001]="dLbar";
    pidmap[-1000002]="uLbar";
    pidmap[-1000003]="sLbar";
    pidmap[-1000004]="cLbar";
    pidmap[-1000005]="b1bar";
    pidmap[-1000006]="t1bar";

    pidmap[1000011]="eL";
    pidmap[1000012]="nueL";
    pidmap[1000013]="muL";
    pidmap[1000014]="numuL";
    pidmap[1000015]="tau1";
    pidmap[1000016]="taunuL";

    pidmap[-1000011]="eLbar";
    pidmap[-1000012]="nueLbar";
    pidmap[-1000013]="muLbar";
    pidmap[-1000014]="numuLbar";
    pidmap[-1000015]="tau1bar";
    pidmap[-1000016]="taunuLbar";

    pidmap[2000001]="dR";
    pidmap[2000002]="uR";
    pidmap[2000003]="sR";
    pidmap[2000004]="cR";
    pidmap[2000005]="b2";
    pidmap[2000006]="t2";

    pidmap[-2000001]="dRbar";
    pidmap[-2000002]="uRbar";
    pidmap[-2000003]="sRbar";
    pidmap[-2000004]="cRbar";
    pidmap[-2000005]="b2bar";
    pidmap[-2000006]="t2bar";

    pidmap[2000011]="eR";
    pidmap[2000013]="muR";
    pidmap[2000015]="tau2";

    pidmap[-2000011]="eRbar";
    pidmap[-2000013]="muRbar";
    pidmap[-2000015]="tau2bar";

    // Gauginos
    pidmap[1000021]="g";
    pidmap[1000022]="n1";
    pidmap[1000023]="n2";
    pidmap[1000024]="c1";
    pidmap[-1000024]="c1bar";
    pidmap[1000025]="n3";
    pidmap[1000035]="n4";
    pidmap[1000037]="c2";
    pidmap[-1000037]="c2bar";

}


/*
vector<double> Evaluator::xsec(const vector<int>& parts1,
                               const vector<int>& parts2, double * par){

    // Vector to store cross sections
    vector<double> xsec;

    // Iterate over all pid combinations
    for(int i = 0; i < parts1.size()*parts2.size(); i++){
        // Is this a valid final state?

        // Calculate cross section
    }

    return xsec;
}
*/


string Evaluator::get_process(int pid1, int pid2) const {
    // Figure out process string
    map<int,string>::const_iterator it1 = pidmap.find(pid1);
    map<int,string>::const_iterator it2 = pidmap.find(pid2);
    if (it1 != pidmap.end() && it2 != pidmap.end())
        return it1->second + it2->second;
    return "";
}


double Evaluator::xsec(int pid1, int pid2, double * par) const {
    const string process = get_process(pid1, pid2);
    if (process.empty()) {
      cout << "Illegal PID in xsec call: " << pid1 << " " << pid2 << endl;
      return -1;
    }
    return xsec(process, par);
}


double Evaluator::xsec(const string& process, const Pythia8::SusyLesHouches & point) const {

    // Get parameters from SLHA object
    double par[24];
    // Uses MSOFT and HMIX blocks defined at scale Q
    // TODO: be carefull about scale definitions!
    par[0] = point.minpar(3); // \tan\beta
    par[1] = point.msoft(1);  // M_1
    par[2] = point.msoft(2);  // M_2
    par[3] = point.msoft(3);  // M_3
    par[4] = point.au(3,3);   // A_t
    par[5] = point.ad(3,3);   // A_b
    par[6] = point.ae(3,3);   // A_\tau
    par[7] = point.hmix(1);   // \mu
    par[8] = sqrt(point.hmix(4));  // m_A
    par[9] = point.msoft(31); // meL
    par[10] = point.msoft(32); // mmuL
    par[11] = point.msoft(33); // mtauL
    par[12] = point.msoft(34); // meR
    par[13] = point.msoft(35); // mmuR
    par[14] = point.msoft(36); // mtauR
    par[15] = point.msoft(41); // mqL1
    par[16] = point.msoft(44); // muR
    par[17] = point.msoft(47); // mdR
    par[18] = point.msoft(42); // mqL2
    par[19] = point.msoft(45); // mcR
    par[20] = point.msoft(48); // msR
    par[21] = point.msoft(43); // mqL3
    par[22] = point.msoft(46); // mtR
    par[23] = point.msoft(49); // mbR

    // Evaluate
    return xsec(process, par);
}


double Evaluator::xsec(int pid1, int pid2, const Pythia8::SusyLesHouches & point) const {
    const string process = get_process(pid1, pid2);
    if (process.empty()) {
      cout << "Illegal PID in xsec call: " << pid1 << " " << pid2 << endl;
      return -1;
    }
    return xsec(process, point);
}


double Evaluator::xsec(const string& process, double * par) const {
    // Returns cross section in pb
    // par is expected to be 24 parameter array with MSSM parameters:
    // tanB, M_1, M_2, M_3, At, Ab, Atau, mu, mA
    // meL, mmuL, mtauL, meR, mmuR, mtauR
    // mqL1, muR, mdR, mqL2, mcR, msR, mqL3, mtR, mbR

    // The NN gives log10 of cross section
    try {
      const double xsec = pow(10.,log10xsec(process, par));
      cout << process << " got evaluated: " << xsec << " pb" << endl;
      return xsec;
    } catch (const std::exception& e) {
      cout << "Something went wrong, wrong process?" << endl;
    }
    return -1;
}


double Evaluator::log10xsec(const string& process, double * par) const {
    // Returns log10(cross section in pb)
    // par is expected to be 24 parameter array with MSSM parameters:
    // tanB, M_1, M_2, M_3, At, Ab, Atau, mu, mA
    // meL, mmuL, mtauL, meR, mmuR, mtauR
    // mqL1, muR, mdR, mqL2, mcR, msR, mqL3, mtR, mbR

    if(process == "nn_n1n1") return nn_n1n1.Value(0,par);
    if(process == "nn_n1n2") return nn_n1n2.Value(0,par);

    if(process == "nn_n1n3") return nn_n1n3.Value(0,par);
    if(process == "nn_n1n4") return nn_n1n4.Value(0,par);
    if(process == "nn_n1n5") return nn_n1n5.Value(0,par);

    if(process == "b1b1") return b1b1.Value(0,par);
    if(process == "b2b2") return b2b2.Value(0,par);
    if(process == "t1t1") return t1t1.Value(0,par);
    if(process == "t2t2") return t2t2.Value(0,par);

    if(process == "cLg") return cLg.Value(0,par);
    if(process == "cRg") return cRg.Value(0,par);
    if(process == "dLg") return dLg.Value(0,par);
    if(process == "dRg") return dRg.Value(0,par);
    if(process == "sLg") return sLg.Value(0,par);
    if(process == "sRg") return sRg.Value(0,par);
    if(process == "uLg") return uLg.Value(0,par);
    if(process == "uRg") return uRg.Value(0,par);

    if(process == "sb_cLcL") return sb_cLcL.Value(0,par);
    if(process == "sb_cLcR") return sb_cLcR.Value(0,par);
    if(process == "sb_cLdL") return sb_cLdL.Value(0,par);
    if(process == "sb_cLdR") return sb_cLdR.Value(0,par);
    if(process == "sb_cLsL") return sb_cLsL.Value(0,par);
    if(process == "sb_cLsR") return sb_cLsR.Value(0,par);
    if(process == "sb_cLuL") return sb_cLuL.Value(0,par);
    if(process == "sb_cLuR") return sb_cLuR.Value(0,par);
    if(process == "sb_cRcR") return sb_cRcR.Value(0,par);
    if(process == "sb_dLcR") return sb_dLcR.Value(0,par);
    if(process == "sb_dLdL") return sb_dLdL.Value(0,par);
    if(process == "sb_dLdR") return sb_dLdR.Value(0,par);
    if(process == "sb_dLsR") return sb_dLsR.Value(0,par);
    if(process == "sb_dLuR") return sb_dLuR.Value(0,par);
    if(process == "sb_dRcR") return sb_dRcR.Value(0,par);
    if(process == "sb_dRdR") return sb_dRdR.Value(0,par);
    if(process == "sb_dRsR") return sb_dRsR.Value(0,par);
    if(process == "sb_sLcR") return sb_sLcR.Value(0,par);
    if(process == "sb_sLdL") return sb_sLdL.Value(0,par);
    if(process == "sb_sLdR") return sb_sLdR.Value(0,par);
    if(process == "sb_sLsL") return sb_sLsL.Value(0,par);
    if(process == "sb_sLsR") return sb_sLsR.Value(0,par);
    if(process == "sb_sLuL") return sb_sLuL.Value(0,par);
    if(process == "sb_sLuR") return sb_sLuR.Value(0,par);
    if(process == "sb_sRcR") return sb_sRcR.Value(0,par);
    if(process == "sb_sRsR") return sb_sRsR.Value(0,par);
    if(process == "sb_uLcR") return sb_uLcR.Value(0,par);
    if(process == "sb_uLdR") return sb_uLdR.Value(0,par);
    if(process == "sb_uLsR") return sb_uLsR.Value(0,par);
    if(process == "sb_uLuL") return sb_uLuL.Value(0,par);
    if(process == "sb_uLuR") return sb_uLuR.Value(0,par);
    if(process == "sb_uRcR") return sb_uRcR.Value(0,par);
    if(process == "sb_uRdR") return sb_uRdR.Value(0,par);
    if(process == "sb_uRsR") return sb_uRsR.Value(0,par);
    if(process == "sb_uRuR") return sb_uRuR.Value(0,par);

    if(process == "ss_cLcL") return ss_cLcL.Value(0,par);
    if(process == "ss_cLcR") return ss_cLcR.Value(0,par);
    if(process == "ss_cLdL") return ss_cLdL.Value(0,par);
    if(process == "ss_cLdR") return ss_cLdR.Value(0,par);
    if(process == "ss_cLsL") return ss_cLsL.Value(0,par);
    if(process == "ss_cLsR") return ss_cLsR.Value(0,par);
    if(process == "ss_cLuL") return ss_cLuL.Value(0,par);
    if(process == "ss_cLuR") return ss_cLuR.Value(0,par);
    if(process == "ss_cRcR") return ss_cRcR.Value(0,par);
    if(process == "ss_dLcR") return ss_dLcR.Value(0,par);
    if(process == "ss_dLdL") return ss_dLdL.Value(0,par);
    if(process == "ss_dLdR") return ss_dLdR.Value(0,par);
    if(process == "ss_dLsR") return ss_dLsR.Value(0,par);
    if(process == "ss_dLuR") return ss_dLuR.Value(0,par);
    if(process == "ss_dRcR") return ss_dRcR.Value(0,par);
    if(process == "ss_dRdR") return ss_dRdR.Value(0,par);
    if(process == "ss_dRsR") return ss_dRsR.Value(0,par);
    if(process == "ss_sLcR") return ss_sLcR.Value(0,par);
    if(process == "ss_sLdL") return ss_sLdL.Value(0,par);
    if(process == "ss_dLdR") return ss_dLdR.Value(0,par);
    if(process == "ss_sLdR") return ss_sLdR.Value(0,par);
    if(process == "ss_sLsL") return ss_sLsL.Value(0,par);
    if(process == "ss_sLsR") return ss_sLsR.Value(0,par);
    if(process == "ss_sLuL") return ss_sLuR.Value(0,par);
    if(process == "ss_sLuR") return ss_sLuR.Value(0,par);
    if(process == "ss_sRcR") return ss_sRcR.Value(0,par);
    if(process == "ss_sRsR") return ss_sRsR.Value(0,par);
    if(process == "ss_uLcR") return ss_uLcR.Value(0,par);
    if(process == "ss_uLdR") return ss_uLdR.Value(0,par);
    if(process == "ss_uLsR") return ss_uLsR.Value(0,par);
    if(process == "ss_uLuL") return ss_uLuL.Value(0,par);
    if(process == "ss_uLuR") return ss_uLuR.Value(0,par);
    if(process == "ss_uRcR") return ss_uRcR.Value(0,par);
    if(process == "ss_uRdR") return ss_uRdR.Value(0,par);
    if(process == "ss_uRsR") return ss_uRsR.Value(0,par);
    if(process == "ss_uRuR") return ss_uRuR.Value(0,par);

    if(process == "gg") return gg.Value(0,par);

    throw std::runtime_error(("Unknown xsec process type, " + process).c_str());
}

}
