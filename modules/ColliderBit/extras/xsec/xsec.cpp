#include "xsec.h"
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <cmath>
#include <algorithm>
#include <stdexcept>

using namespace std;

namespace xsec{


  namespace {
    template <typename T> int sgn(T val) {
      return (T(0) < val) - (val < T(0));
    }
  }


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
    pidmap[1000016]="nutauL";

    pidmap[-1000011]="eLbar";
    pidmap[-1000012]="nueLbar";
    pidmap[-1000013]="muLbar";
    pidmap[-1000014]="numuLbar";
    pidmap[-1000015]="tau1bar";
    pidmap[-1000016]="nutauLbar";

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
    pidmap[1000022]="chi10";
    pidmap[1000023]="chi20";
    pidmap[1000024]="chi1+";
    pidmap[-1000024]="chi1-";
    pidmap[1000025]="chi30";
    pidmap[1000035]="chi40";
    pidmap[1000037]="chi2+";
    pidmap[-1000037]="chi2-";

  }


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
    // if (process.empty()) {
    //   cout << "Illegal PID in xsec call: " << pid1 << " " << pid2 << endl;
    //   return -1;
    // }
    return xsec(process, par);
  }


  double Evaluator::xsec(const vector<int>& pids1,
                         const vector<int>& pids2, double * par) const {
    // Make new vectors of unique abs PIDs
    vector<int> apids1, apids2;
    for (size_t i = 0; i < pids1.size(); i++)
      if (std::find(apids1.begin(), apids1.end(), abs(pids1[i])) == apids1.end()) apids1.push_back(abs(pids1[i]));
    for (size_t i = 0; i < pids2.size(); i++)
      if (std::find(apids2.begin(), apids2.end(), abs(pids2[i])) == apids2.end()) apids2.push_back(abs(pids2[i]));

    // Iterate over all PID combinations to find the total xsec
    // Need to consider all +- and AB/BA combinations
    double xs = 0;
    set<string> seen_processes;
    // Loop over vector 1 and its +- variations
    for (size_t i = 0; i < apids1.size(); i++){
      for (size_t pmi = 0; pmi <= 1; pmi++){
        const int pid1 = apids1[i] * pow(-1, pmi);

        // Loop over vector 2 and its +- variations
        for (size_t j = 0; j < apids2.size(); j++){
          for (size_t pmj = 0; pmj <= 1; pmj++){
            const int pid2 = apids2[j] * pow(-1, pmj);

            // Calculate the xsec for the AB combination, if it exists and hasn't already been seen
            const string pa = get_process(pid1, pid2);
            if (!pa.empty() && std::find(seen_processes.begin(), seen_processes.end(), pa) == seen_processes.end()) {
              seen_processes.insert(pa);
              const double xsec_ij = xsec(pa, par);
              if (xsec_ij > 0) {
                xs += xsec_ij;
                cout << "  " << pid1 << " " << pid2 << " -> " << pa << " = " << xsec_ij << " pb" << endl;
              }
            }

            // Calculate the xsec for the BA combination, if it exists and hasn't already been seen
            const string pb = get_process(pid2, pid1);
            if (!pb.empty() && std::find(seen_processes.begin(), seen_processes.end(), pb) == seen_processes.end()) {
              seen_processes.insert(pb);
              const double xsec_ji = xsec(pb, par);
              if (xsec_ji > 0) {
                xs += xsec_ji;
                cout << "  " << pid2 << " " << pid1 << " -> " << pb << " = " << xsec_ji << " pb" << endl;
              }
            }

          }
        }

      }
    }
    return xs;
  }


  double Evaluator::xsec(const vector<int>& parts1, const vector<int>& parts2, Pythia8::SusyLesHouches& point) const {
    double par[24];
    _params_from_py8slha(par, point);
    return xsec(parts1, parts2, par);
  }


  double Evaluator::xsec(const vector<int>& parts1, const vector<int>& parts2, const string& slhafile) const {
    Pythia8::SusyLesHouches point(slhafile);
    return xsec(parts1, parts2, point);
  }


  void Evaluator::_params_from_py8slha(double par[24], Pythia8::SusyLesHouches & point) const {
    // TODO: fix m_A use in MSOFT

    // Find scales
    double Qxsec = 1000.; // we want params at 1 TeV since that's where the interpolators were fitted
    double Qmsoft = point.msoft.q()*1000; //< hack for ATLAS' SUSY-HIT GeV/TeV corruption DANGER DANGER DANGER!
    double Qextpar = point.extpar(0);
    double Qhmix = point.hmix.q()*1000; //< hack for ATLAS' SUSY-HIT GeV/TeV corruption DANGER DANGER DANGER!
    cout << "Qmsoft " << Qmsoft << endl;
    cout << "Qextpar " << Qextpar << endl;

    // If EXTPAR exists and scale is very near 1 TeV then we use those soft masses
    // extpar(0) will be 0 when the block does not exist
    // Also use if EXTPAR scale is closer to 1 TeV than MSOFT scale.
    // Order of parameters defined by Martin's NN training string
    // @tanB,@M_1,@M_2,@M_3,@mA,@meL,@mmuL,@mtauL,@meR,@mmuR,@mtauR,@mqL1,@mqL2,@mqL3,@muR,@mcR,@mtR,@mdR,@msR,@mbR,@At,@Ab,@Atau,@mu
    if(abs(Qextpar-Qxsec) < 1.0 || (abs(Qextpar-Qxsec) < abs(Qmsoft-Qxsec) && Qextpar > 1.0)){
      par[0] = point.minpar(3);  // \tan\beta
      par[1] = point.extpar(1);  // M_1
      par[2] = point.extpar(2);  // M_2
      par[3] = point.extpar(3);  // M_3
      par[4] = point.extpar(26); // m_A pole mass
      par[5] = point.extpar(31); // meL
      par[6] = point.extpar(32); // mmuL
      par[7] = point.extpar(33); // mtauL
      par[8] = point.extpar(34); // meR
      par[9] = point.extpar(35); // mmuR
      par[10] = point.extpar(36); // mtauR
      par[11] = point.extpar(41); // mqL1
      par[12] = point.extpar(42); // mqL2
      par[13] = point.extpar(43); // mqL3
      par[14] = point.extpar(44); // muR
      par[15] = point.extpar(45); // mcR
      par[16] = point.extpar(46); // mtR
      par[17] = point.extpar(47); // mdR
      par[18] = point.extpar(48); // msR
      par[19] = point.extpar(49); // mbR
      par[20] = point.extpar(11); // A_t
      par[21] = point.extpar(12); // A_b
      par[22] = point.extpar(13); // A_\tau
      par[23] = point.extpar(23); // \mu
      // Return now if we do not need to do RGE
      if(abs(Qextpar-Qxsec) < 1.0) return;
    }
    // If not, use MSOFT and HMIX blocks.
    // This uses that HMIX and MSOFT is at the same scale,
    // however, exceptions have not been seen in the wild.
    // Order of parameters defined by Martin's NN training string
    // @tanB,@M_1,@M_2,@M_3,@mA,@meL,@mmuL,@mtauL,@meR,@mmuR,@mtauR,@mqL1,@mqL2,@mqL3,@muR,@mcR,@mtR,@mdR,@msR,@mbR,@At,@Ab,@Atau,@mu
    else if (abs(Qmsoft-Qhmix) < 1.0 && abs(Qmsoft) > 0.1){
      par[0] = point.hmix(2);  // \tan\beta
      par[1] = point.msoft(1);  // M_1
      par[2] = point.msoft(2);  // M_2
      par[3] = point.msoft(3);  // M_3

      //cout << endl << "Started with these masses: " << endl;
      //cout << par[1] << " " << par[2] << " " << par[3] << endl;

      par[4] = sqrt(point.hmix(4));  // m_A WARNING: not pole
      par[5] = point.msoft(31); // meL
      par[6] = point.msoft(32); // mmuL
      par[7] = point.msoft(33); // mtauL
      par[8] = point.msoft(34); // meR
      par[9] = point.msoft(35); // mmuR
      par[10] = point.msoft(36); // mtauR
      par[11] = point.msoft(41); // mqL1
      par[12] = point.msoft(42); // mqL2
      par[13] = point.msoft(43); // mqL3
      par[14] = point.msoft(44); // muR
      par[15] = point.msoft(45); // mcR
      par[16] = point.msoft(46); // mtR
      par[17] = point.msoft(47); // mdR
      par[18] = point.msoft(48); // msR
      par[19] = point.msoft(49); // mbR
      par[20] = point.au(3,3);   // A_t
      par[21] = point.ad(3,3);   // A_b
      par[22] = point.ae(3,3);   // A_\tau
      par[23] = point.hmix(1);   // \mu
    }
    else{
      throw runtime_error("Cannot handle your SLHA file");
    }

    // RGE run parameters to Qxsec = 1 TeV
    // Constants for RGEs
    double dt = log(Qxsec/Qmsoft);
    cout << "dt " << dt << endl;
    double pi = 2.*asin(1.);
    double b[4] = {0,33./5.,1.,-3.};
    double g[4];
    g[1] = sqrt(5./3.)*point.gauge(1);
    g[2] = point.gauge(2);
    g[3] = point.gauge(3);

    // Loop for running
    int nt = 10;
    dt = dt/nt;
    for(int it = 0; it < nt; it++){

      // Gauge couplings and gaugino soft masses
      for(int i = 1; i < 4; i++){
        par[i] = par[i] + 1./8./pow(pi,2)*b[i]*pow(g[i],2)*par[i]*dt;
        g[i] = g[i] + 1./16./pow(pi,2)*b[i]*pow(g[i],3)*dt;
      }
      //cout << par[1] << " " << par[2] << " " << par[3] << endl;
    }

  }


  double Evaluator::xsec(const string& process, Pythia8::SusyLesHouches & point) const {
    double par[24];
    _params_from_py8slha(par, point);
    return xsec(process, par);
  }


  double Evaluator::xsec(const string& process, const string& slhafile) const {
    Pythia8::SusyLesHouches point(slhafile);
    return xsec(process, point);
  }


  double Evaluator::xsec(int pid1, int pid2, Pythia8::SusyLesHouches& point) const {
    const string process = get_process(pid1, pid2);
    // if (process.empty()) {
    //   cout << "Illegal PID in xsec call: " << pid1 << " " << pid2 << endl;
    //   return -1;
    // }
    return xsec(process, point);
  }


  double Evaluator::xsec(int pid1, int pid2, const string& slhafile) const {
    Pythia8::SusyLesHouches point(slhafile);
    return xsec(pid1, pid2, point);
  }


  double Evaluator::xsec(const string& process, double* par) const {
    // Returns cross section in pb
    // par is expected to be 24 parameter array with MSSM parameters:
    // tanB, M_1, M_2, M_3, At, Ab, Atau, mu, mA
    // meL, mmuL, mtauL, meR, mmuR, mtauR
    // mqL1, muR, mdR, mqL2, mcR, msR, mqL3, mtR, mbR

    // The NN gives log10 of cross section
    try {
      const double xsec = pow(10., log10xsec(process, par));
      //cout << process << " got evaluated: " << xsec << " pb" << endl;
      return xsec;
    } catch (const std::exception& e) {
      //cout << "Something went wrong, wrong process?" << endl;
      return -1;
    }
  }


  double Evaluator::log10xsec(const string& process, double* par) const {
    // Returns log10(cross section in pb)
    // par is expected to be 24 parameter array with MSSM parameters:
    // tanB, M_1, M_2, M_3, At, Ab, Atau, mu, mA
    // meL, mmuL, mtauL, meR, mmuR, mtauR
    // mqL1, muR, mdR, mqL2, mcR, msR, mqL3, mtR, mbR

    //#define NO_IMPL_PROC throw std::runtime_error(("Unimplemented xsec process type, " + process).c_str())

    // Check that parameters are reasonable, reset if not
    // cout << "CHECKING PARAMS" << endl;
    for (int i = 1; i < 24; i++) {
      const double val = par[i];
      if (i == 0) { // tanB in [2,50]
        if (val < 2.) par[i] = 2.;
        if (val > 50.) par[i] = 50.;
      } else if (i > 0 && i < 20 && abs(val) > 2000.) { // Soft masses in [-2000,2000]
        par[i] = sgn(val) * 2000.;
      }
      if (val != par[i])
        cout << "Param " << i << " reset to NN validity boundary: "
             << val << " -> " << par[i] << endl;
    }

    // Gluino pair production
    if(process == "gg") return gg.Value(0,par);

    // Neutralino/chargino + gluino production
    if(process == "chi10g") return ng_chi01.Value(0,par);
    if(process == "chi20g") return ng_chi02.Value(0,par);
    if(process == "chi30g") return ng_chi03.Value(0,par);
    if(process == "chi40g") return ng_chi04.Value(0,par);
    if(process == "chi1+g") return ng_chiPlus1.Value(0,par);
    if(process == "chi2+g") return ng_chiPlus2.Value(0,par);
    if(process == "chi1-g") return ng_chiMinus1.Value(0,par);
    if(process == "chi2-g") return ng_chiMinus2.Value(0,par);

    // Neutralino & chargino pair production
    if(process == "chi10chi10") return nn_n1n1.Value(0,par);
    if(process == "chi10chi20") return nn_n1n2.Value(0,par);
    if(process == "chi10chi30") return nn_n1n3.Value(0,par);
    if(process == "chi10chi40") return nn_n1n4.Value(0,par);
    if(process == "chi10chi1+") return nn_n1n5.Value(0,par);
    if(process == "chi10chi2+") return nn_n1n6.Value(0,par);
    if(process == "chi10chi1-") return nn_n1n7.Value(0,par);
    if(process == "chi10chi2-") return nn_n1n8.Value(0,par);
    if(process == "chi20chi20") return nn_n2n2.Value(0,par);
    if(process == "chi20chi30") return nn_n2n3.Value(0,par);
    if(process == "chi20chi40") return nn_n2n4.Value(0,par);
    if(process == "chi20chi1+") return nn_n2n5.Value(0,par);
    if(process == "chi20chi2+") return nn_n2n6.Value(0,par);
    if(process == "chi20chi1-") return nn_n2n7.Value(0,par);
    if(process == "chi20chi2-") return nn_n2n8.Value(0,par);
    if(process == "chi30chi30") return nn_n3n3.Value(0,par);
    if(process == "chi30chi40") return nn_n3n4.Value(0,par);
    if(process == "chi30chi1+") return nn_n3n5.Value(0,par);
    if(process == "chi30chi2+") return nn_n3n6.Value(0,par);
    if(process == "chi30chi1-") return nn_n3n7.Value(0,par);
    if(process == "chi30chi2-") return nn_n3n8.Value(0,par);
    if(process == "chi40chi40") return nn_n4n4.Value(0,par);
    if(process == "chi40chi1+") return 0;
    if(process == "chi40chi2+") return 0;
    if(process == "chi40chi1-") return 0;
    if(process == "chi40chi2-") return 0;
    if(process == "chi1+chi1-") return nn_n5n7.Value(0,par);
    if(process == "chi1+chi2-") return nn_n5n8.Value(0,par);
    if(process == "chi2+chi1-") return nn_n6n7.Value(0,par);
    if(process == "chi2+chi2-") return nn_n6n8.Value(0,par);

    // Squark + gluino production
    // Adds squark+gluino and antisquark+gluino
    if(process == "cLg") return cLg.Value(0,par);
    if(process == "cRg") return cRg.Value(0,par);
    if(process == "dLg") return dLg.Value(0,par);
    if(process == "dRg") return dRg.Value(0,par);
    if(process == "sLg") return sLg.Value(0,par);
    if(process == "sRg") return sRg.Value(0,par);
    if(process == "uLg") return uLg.Value(0,par);
    if(process == "uRg") return uRg.Value(0,par);

    // Neutralino/chargino + squark
    if(process == "chi10dL") return ns_chi01_dL.Value(0,par);
    if(process == "chi10dR") return ns_chi01_dR.Value(0,par);
    if(process == "chi10uL") return ns_chi01_uL.Value(0,par);
    if(process == "chi10uR") return ns_chi01_uR.Value(0,par);
    if(process == "chi10sL") return ns_chi01_sL.Value(0,par);
    if(process == "chi10sR") return ns_chi01_sR.Value(0,par);
    if(process == "chi10cL") return ns_chi01_cL.Value(0,par);
    if(process == "chi10cR") return ns_chi01_cR.Value(0,par);
    if(process == "chi20dL") return ns_chi02_dL.Value(0,par);
    if(process == "chi20dR") return ns_chi02_dR.Value(0,par);
    if(process == "chi20uL") return ns_chi02_uL.Value(0,par);
    if(process == "chi20uR") return ns_chi02_uR.Value(0,par);
    if(process == "chi20sL") return ns_chi02_sL.Value(0,par);
    if(process == "chi20sR") return ns_chi02_sR.Value(0,par);
    if(process == "chi20cL") return ns_chi02_cL.Value(0,par);
    if(process == "chi20cR") return ns_chi02_cR.Value(0,par);
    if(process == "chi30dL") return ns_chi03_dL.Value(0,par);
    if(process == "chi30dR") return ns_chi03_dR.Value(0,par);
    if(process == "chi30uL") return ns_chi03_uL.Value(0,par);
    if(process == "chi30uR") return ns_chi03_uR.Value(0,par);
    if(process == "chi30sL") return ns_chi03_sL.Value(0,par);
    if(process == "chi30sR") return ns_chi03_sR.Value(0,par);
    if(process == "chi30cL") return ns_chi03_cL.Value(0,par);
    if(process == "chi30cR") return ns_chi03_cR.Value(0,par);
    if(process == "chi40dL") return ns_chi04_dL.Value(0,par);
    if(process == "chi40dR") return ns_chi04_dR.Value(0,par);
    if(process == "chi40uL") return ns_chi04_uL.Value(0,par);
    if(process == "chi40uR") return ns_chi04_uR.Value(0,par);
    if(process == "chi40sL") return ns_chi04_sL.Value(0,par);
    if(process == "chi40sR") return ns_chi04_sR.Value(0,par);
    if(process == "chi40cL") return ns_chi04_cL.Value(0,par);
    if(process == "chi40cR") return ns_chi04_cR.Value(0,par);
    if(process == "chi1+dL") return ns_chiPlus1_dL.Value(0,par);
    if(process == "chi1+uL") return ns_chiPlus1_uL.Value(0,par);
    if(process == "chi1+sL") return ns_chiPlus1_sL.Value(0,par);
    if(process == "chi1+cL") return ns_chiPlus1_cL.Value(0,par);
    if(process == "chi2+dL") return ns_chiPlus2_dL.Value(0,par);
    if(process == "chi2+uL") return ns_chiPlus2_uL.Value(0,par);
    if(process == "chi2+sL") return ns_chiPlus2_sL.Value(0,par);
    if(process == "chi2+cL") return ns_chiPlus2_cL.Value(0,par);
    if(process == "chi1-dL") return ns_chiMinus1_dL.Value(0,par);
    if(process == "chi1-uL") return ns_chiMinus1_uL.Value(0,par);
    if(process == "chi1-sL") return ns_chiMinus1_sL.Value(0,par);
    if(process == "chi1-cL") return ns_chiMinus1_cL.Value(0,par);
    if(process == "chi2-dL") return ns_chiMinus2_dL.Value(0,par);
    if(process == "chi2-uL") return ns_chiMinus2_uL.Value(0,par);
    if(process == "chi2-sL") return ns_chiMinus2_sL.Value(0,par);
    if(process == "chi2-cL") return ns_chiMinus2_cL.Value(0,par);

    // Squark + antisquark production
    if(process == "dLcRbar") return sb_dLcR.Value(0,par);
    if(process == "dLdLbar") return sb_dLdL.Value(0,par);
    if(process == "dLuLbar") return sb_dLuL.Value(0,par);
    if(process == "dLdRbar") return sb_dLdR.Value(0,par);
    if(process == "dLsRbar") return sb_dLsR.Value(0,par);
    if(process == "dLuRbar") return sb_dLuR.Value(0,par);
    if(process == "dRcRbar") return sb_dRcR.Value(0,par);
    if(process == "dRdRbar") return sb_dRdR.Value(0,par);
    if(process == "dRsRbar") return sb_dRsR.Value(0,par);
    if(process == "uLcRbar") return sb_uLcR.Value(0,par);
    if(process == "uLdRbar") return sb_uLdR.Value(0,par);
    if(process == "uLsRbar") return sb_uLsR.Value(0,par);
    if(process == "uLuLbar") return sb_uLuL.Value(0,par);
    if(process == "uLuRbar") return sb_uLuR.Value(0,par);
    if(process == "uRcRbar") return sb_uRcR.Value(0,par);
    if(process == "uRdRbar") return sb_uRdR.Value(0,par);
    if(process == "uRsRbar") return sb_uRsR.Value(0,par);
    if(process == "uRuRbar") return sb_uRuR.Value(0,par);
    if(process == "sLcRbar") return sb_sLcR.Value(0,par);
    if(process == "sLdLbar") return sb_sLdL.Value(0,par);
    if(process == "sLdRbar") return sb_sLdR.Value(0,par);
    if(process == "sLsLbar") return sb_sLsL.Value(0,par);
    if(process == "sLsRbar") return sb_sLsR.Value(0,par);
    if(process == "sLuLbar") return sb_sLuL.Value(0,par);
    if(process == "sLuRbar") return sb_sLuR.Value(0,par);
    if(process == "sRcRbar") return sb_sRcR.Value(0,par);
    if(process == "sRsRbar") return sb_sRsR.Value(0,par);
    if(process == "cLcLbar") return sb_cLcL.Value(0,par);
    if(process == "cLcRbar") return sb_cLcR.Value(0,par);
    if(process == "cLdLbar") return sb_cLdL.Value(0,par);
    if(process == "cLdRbar") return sb_cLdR.Value(0,par);
    if(process == "cLsLbar") return sb_cLsL.Value(0,par);
    if(process == "cLsRbar") return sb_cLsR.Value(0,par);
    if(process == "cLuLbar") return sb_cLuL.Value(0,par);
    if(process == "cLuRbar") return sb_cLuR.Value(0,par);
    if(process == "cRcRbar") return sb_cRcR.Value(0,par);

    if(process == "b1b1bar") return bb_b1b1.Value(0,par);
    if(process == "b2b2bar") return bb_b2b2.Value(0,par);
    if(process == "t1t1bar") return tb_t1t1.Value(0,par);
    if(process == "t2t2bar") return tb_t2t2.Value(0,par);

    // Squark + squark production
    if(process == "uLcR") return ss_uLcR.Value(0,par);
    if(process == "uLdR") return ss_uLdR.Value(0,par);
    if(process == "uLsR") return ss_uLsR.Value(0,par);
    if(process == "uLuL") return ss_uLuL.Value(0,par);
    if(process == "uLuR") return ss_uLuR.Value(0,par);
    if(process == "uRcR") return ss_uRcR.Value(0,par);
    if(process == "uRdR") return ss_uRdR.Value(0,par);
    if(process == "uRsR") return ss_uRsR.Value(0,par);
    if(process == "uRuR") return ss_uRuR.Value(0,par);
    if(process == "dLcR") return ss_dLcR.Value(0,par);
    if(process == "dLdL") return ss_dLdL.Value(0,par);
    if(process == "dLdR") return ss_dLdR.Value(0,par);
    if(process == "dLsR") return ss_dLsR.Value(0,par);
    if(process == "dLuL") return ss_dLuL.Value(0,par);
    if(process == "dLuR") return ss_dLuR.Value(0,par);
    if(process == "dRcR") return ss_dRcR.Value(0,par);
    if(process == "dRdR") return ss_dRdR.Value(0,par);
    if(process == "dRsR") return ss_dRsR.Value(0,par);
    if(process == "dLdR") return ss_dLdR.Value(0,par);
    if(process == "sLcR") return ss_sLcR.Value(0,par);
    if(process == "sLdL") return ss_sLdL.Value(0,par);
    if(process == "sLdR") return ss_sLdR.Value(0,par);
    if(process == "sLsL") return ss_sLsL.Value(0,par);
    if(process == "sLsR") return ss_sLsR.Value(0,par);
    if(process == "sLuL") return ss_sLuR.Value(0,par);
    if(process == "sLuR") return ss_sLuR.Value(0,par);
    if(process == "sRcR") return ss_sRcR.Value(0,par);
    if(process == "sRsR") return ss_sRsR.Value(0,par);
    if(process == "cLcL") return ss_cLcL.Value(0,par);
    if(process == "cLcR") return ss_cLcR.Value(0,par);
    if(process == "cLdL") return ss_cLdL.Value(0,par);
    if(process == "cLdR") return ss_cLdR.Value(0,par);
    if(process == "cLsL") return ss_cLsL.Value(0,par);
    if(process == "cLsR") return ss_cLsR.Value(0,par);
    if(process == "cLuL") return ss_cLuL.Value(0,par);
    if(process == "cLuR") return ss_cLuR.Value(0,par);
    if(process == "cRcR") return ss_cRcR.Value(0,par);

    // Slepton pair production
    // First five are actually sums over first two generations
    if(process == "eLeLbar") return 0;
    if(process == "eReRbar") return 0;
    if(process == "nueLnueLbar") return 0;
    if(process == "eLbarnueL") return 0;
    if(process == "eLnueLbar") return 0;
    if(process == "tau1tau1bar") return 0;
    if(process == "tau2tau2bar") return 0;
    if(process == "tau1tau2bar") return 0;
    if(process == "nutauLnutauLbar") return 0;
    if(process == "tau1barnutauL") return 0;
    if(process == "tau1nutauL") return 0;
    if(process == "tau2barnutauL") return 0;
    if(process == "tau2nutauL") return 0;

    throw std::runtime_error(("Unknown xsec process type, " + process).c_str());
  }

}


// extern "C" {
//   void foo() { cout << "DIE" << endl; }
// }
