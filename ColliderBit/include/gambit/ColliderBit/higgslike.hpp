#ifndef higgslike_H
#define higgslike_H

#include <vector>
#include <cmath>
#include <sstream>
#include <string>
#include <iostream>
#include <fstream>
#include <map>
//#include "gambit/Elements/gambit_module_headers.hpp"
#include "gambit/Elements/virtual_higgs.hpp"

using namespace std;
namespace Gambit {
namespace ColliderBit {

// create a signal stength object for each measurment

class Signal_strength
{

public:

double mu, lb, ub; // signal strength, lower and upper bounds
double sig_mu; // 1 sigma on signal strength
double mh, sig_mh; // reported mass and uncertainty

// channels

std::vector<string> prod;
std::vector<string> decay;

Signal_strength(){}

Signal_strength(std::string filename,std::string path){
set_data_from_file(filename,path);
compute_uncertainty();
set_all_channels(); // TODO make this set only required channels
}

Signal_strength(double _mu, double _ub,double _lb,double _mh, double _sig_mh){
mu = _mu;
ub = _ub;
lb = _lb;
mh = _mh;
sig_mh = _sig_mh;
compute_uncertainty();
set_all_channels();
}   // constructor


Signal_strength(double _mu,double _sig_mu,double _mh, double _sig_mh){
mu = _mu;
mh = _mh;
sig_mh = _sig_mh;
sig_mu = _sig_mu;
set_all_channels();
}   // constructor


void compute_uncertainty()
{
// set 1 sigma confidence interval as the greater of the two uncertainties
double a = ub-mu;
double b = mu-lb;
if (a<0){ cout << "upper uncertainty on signal strength less than central value!";}
if (b<0){ cout << "lower uncertainty on signal strength greater than central value!";}
sig_mu = a > b ? a : b;
}


void set_all_channels()
{
  
  decay.push_back("ss");
  decay.push_back("cc");
  decay.push_back("bb");
  decay.push_back("mumu");
  decay.push_back("tautau");
  decay.push_back("WW");
  decay.push_back("ZZ");
  decay.push_back("Zga");
  decay.push_back("gaga");
  decay.push_back("gg");
  //decay.push_back("tt");
  // don't include HH -> invisible here
  
  prod.push_back("all");
}

void set_data_from_file(std::string filename,std::string path);
  
  
};


void get_data(vector<std::string> &A,int &n,const char *filename);

std::map <int, Signal_strength> read_expt_data(std::string);



class Decays
{
  private:
  
  
  std::map <std::string,double> BR;
  std::map <std::string,double> sig;
  
  bool map_set = 0;
  
  
  public:
  
  
  
  // constructor
  Decays (){};
  
  double  width_in_GeV;
  double _mh; // Higgs mass
  
  
  double BR_hjss;
  double BR_hjcc;
  double BR_hjbb;
  double BR_hjmumu;
  double BR_hjtautau;
  double BR_hjWW;
  double BR_hjZZ;
  double BR_hjZga;
  double BR_hjgaga;
  double BR_hjgg;
  
  // not used by Higgs signals?
  double BR_hjtt;
  
  double BR_invisible;
  
  // cross sections
  
  double CS_lep_hjZ_ratio = 1;
  double CS_lep_bbhj_ratio = 1;
  double CS_lep_tautauhj_ratio = 1;
  double CS_gg_hj_ratio = 1;
  double CS_bb_hj_ratio = 1;
  double CS_bg_hjb_ratio = 1;
  double CS_ud_hjWp_ratio = 1;
  double CS_cs_hjWp_ratio = 1;
  double CS_ud_hjWm_ratio = 1;
  double CS_cs_hjWm_ratio = 1;
  double CS_gg_hjZ_ratio = 1;
  double CS_dd_hjZ_ratio = 1;
  double CS_uu_hjZ_ratio = 1;
  double CS_ss_hjZ_ratio = 1;
  double CS_cc_hjZ_ratio = 1;
  double CS_bb_hjZ_ratio = 1;
  double CS_tev_vbf_ratio = 1;
  double CS_tev_tthj_ratio = 1;
  double CS_lhc7_vbf_ratio = 1;
  double CS_lhc7_tthj_ratio = 1;
  double CS_lhc8_vbf_ratio = 1;
  double CS_lhc8_tthj_ratio = 1;
  
  
  void set_BF(double mh);
  
  
  double total_BF()
  {
  return BR_hjss+BR_hjcc+BR_hjbb+BR_hjmumu+BR_hjtautau+BR_hjWW+\
  BR_hjZZ+BR_hjZga+BR_hjgaga+BR_hjgg;
  }
  
  
  void add_SS_decay(double ms, double lambda_hs);
  
  
  std::map <std::string,double> get_BR_map()
  {
  if (!map_set) set_maps();
  return BR;
  }
  std::map <std::string,double> get_sig_map()
  {
  if (!map_set) set_maps();
  return sig;
  }
  
  void set_maps()
  {
  
  
  BR["ss"] = BR_hjss;
  BR["cc"] = BR_hjcc;
  BR["bb"] = BR_hjbb;
  BR["mumu"] = BR_hjmumu;
  BR["tautau"] = BR_hjtautau;
  BR["WW"] = BR_hjWW;
  BR["ZZ"] = BR_hjZZ;
  BR["Zga"] = BR_hjZga;
  BR["gaga"] = BR_hjgaga;
  
  BR["gg"] = BR_hjgg;
  BR["tt"] = BR_hjtt;
  BR["inv"] = BR_invisible;
  sig["all"] = 1;
  map_set = 1;
  
  
  }

  

  
};


class Effective_couplings{


  public:
  
  Decays SM_decays;
  bool SM_decays_set = 0;
  
  double C_WW2, C_ZZ2 ,C_tt2, C_bb2, C_cc2, C_tautau2 ,C_gaga2;
  double C_gg2, C_mumu2,C_Zga2, C_hiZ2,C_ss2;
  
  
  
  // constructor
  Effective_couplings (double mh){
  Decays sm;
  sm.set_BF(mh);
  SM_decays = sm;
  SM_decays_set = 1;
  }; // initilise with a particular mass
  
  Effective_couplings(){};
  
  void compute_scaling_factors(Decays deays);




};




}
}



#endif
