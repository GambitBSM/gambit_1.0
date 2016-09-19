#ifndef higgslike_H
#define higgslike_H

#include <vector>
//#include <cmath>
//#include <sstream>
#include <string>
//#include <iostream>
#include <fstream>
#include <map>

#include "gambit/Elements/virtual_higgs.hpp"
#include "gambit/Elements/shared_types.hpp"


namespace Gambit
{

  namespace ColliderBit
  {

    class Signal_strength;

    void get_data(std::vector<std::string> &A,int &n,const char *filename);   

    std::map <int, Signal_strength> read_expt_data(std::string);
    
    class Signal_strength
    {
    
      public:
      
        double mu, lb, ub; // signal strength, lower and upper bounds
        double sig_mu; // 1 sigma on signal strength
        double mh, sig_mh; // reported mass and uncertainty
        
        // channels
        
        std::vector<std::string> prod;
        std::vector<std::string> decay;
        
        /// Constructor
        Signal_strength(){}
        
        /// Constructor
        Signal_strength(std::string filename,std::string path)
        {
          set_data_from_file(filename,path);
          compute_uncertainty();
          //set_all_channels(); // TODO make this set only required channels
        }
    
        /// Constructor
        Signal_strength(double _mu, double _ub,double _lb,double _mh, double _sig_mh)
        {
          mu = _mu;
          ub = _ub;
          lb = _lb;
          mh = _mh;
          sig_mh = _sig_mh;
          compute_uncertainty();
          set_all_channels();
        }
        
        /// Constructor
        Signal_strength(double _mu,double _sig_mu,double _mh, double _sig_mh)
        {
          mu = _mu;
          mh = _mh;
          sig_mh = _sig_mh;
          sig_mu = _sig_mu;
          set_all_channels();
        }
        
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
        
        void set_decay(std::string c)
        {
          if (c == "1"){ decay.push_back("gaga");}
          if (c == "2"){ decay.push_back("WW");}
          if (c == "3"){ decay.push_back("ZZ");}
          if (c == "4"){ decay.push_back("tautau");}
          if (c == "5"){ decay.push_back("bb");}
        }
        
        void set_data_from_file(std::string filename,std::string path);
            
    };
    
    
    class gambit_Higgs_ModelParameters
    {

      private:
            
        std::map <std::string,double> BR;
        std::map <std::string,double> sig;
        
        bool map_set = 0;

            
      public:

        /// Constructor
        gambit_Higgs_ModelParameters (){};
        
        double  width_in_GeV;
        double _mh;
        
        
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
        
        // set the SM BRs for computation of theory signal strength
        void set_sm(double mh);
                
        double total_BF()
        {
          return BR_hjss+BR_hjcc+BR_hjbb+BR_hjmumu+BR_hjtautau+BR_hjWW+\
          BR_hjZZ+BR_hjZga+BR_hjgaga+BR_hjgg;
        }
        
        // Add an invisible width for the scalar singlet model (not required in GAMBIT)
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
          sig["ggH"] = 1.0;
          sig["WH"] = 1.0;
          sig["ZH"] = 1.0;
          sig["VBF"] = 1.0;
          sig["ttH"] = 1.0;          
          BR["ss"] = BR_hjss;
          BR["cc"] = BR_hjcc;
          BR["bb"] = BR_hjbb;
          BR["mumu"] = BR_hjmumu;
          BR["tautau"] = BR_hjtautau;
          BR["WW"] = BR_hjWW;
          BR["ZZ"] = BR_hjZZ;
          BR["Zga"] = BR_hjZga;
          BR["Zgamma"] = BR_hjZga;
          BR["gaga"] = BR_hjgaga;
          BR["gammagamma"] = BR_hjgaga;
          BR["gg"] = BR_hjgg;
          BR["tt"] = BR_hjtt;
          BR["inv"] = BR_invisible;
          sig["all"] = 1.0;
          map_set = 1;
        }

    };
    
    
    class Effective_couplings
    {
    
      public:
      
        gambit_Higgs_ModelParameters SM_decays;
        bool SM_decays_set = 0;
        
        double C_WW2, C_ZZ2 ,C_tt2, C_bb2, C_cc2, C_tautau2 ,C_gaga2;
        double C_gg2, C_mumu2,C_Zga2, C_hiZ2,C_ss2;
        
        /// Constructor  
        Effective_couplings(){};

        /// Constructor; initialise with a particular mass
        Effective_couplings (double mh)
        {
          gambit_Higgs_ModelParameters sm;
          sm.set_sm(mh);
          SM_decays = sm;
          SM_decays_set = 1;
        }
        
        void compute_scaling_factors(gambit_Higgs_ModelParameters decays, hb_ModelParameters_effC &result);
    
    };
        
  }
  
}



#endif
