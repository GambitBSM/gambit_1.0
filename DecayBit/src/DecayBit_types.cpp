//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Type definitions for DecayBit.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Pat Scott
///          (p.scott@imperial.ac.uk)
///  \date 2014 Aug
///
///  \author Peter Athron  
///          (peter.athron@coepp.org.au)
///  \date 2015 Jun 
///
///  *********************************************

#include <sstream>

#include "gambit/Elements/gambit_module_headers.hpp"
#include "gambit/Elements/mssm_slhahelp.hpp"
#include "gambit/DecayBit/DecayBit_types.hpp"
#include "gambit/DecayBit/DecayBit_rollcall.hpp"


namespace Gambit
{

  namespace DecayBit
  {
   
    // Definitions of methods for struct mass_es_pseudonyms
    
    /// Refill strings in struct
    void mass_es_pseudonyms::refill(const SubSpectrum* mssm, double tol, bool hard_error, bool debug)
    {
      filled = false;
      fill(mssm, tol, hard_error, debug);
    }

    /// Fill strings in struct
    void  mass_es_pseudonyms::fill(const SubSpectrum* mssm, double tol, bool hard_error, bool debug) 
    {
      if(filled == true) return;  // Don't refill unnecessarily
     
      fill_mass_es_psn_gauge (isdl, isdlbar, "~d_L", mssm, tol, hard_error, debug);
      fill_mass_es_psn_gauge (isul, isulbar, "~u_L", mssm, tol, hard_error, debug);
      fill_mass_es_psn_gauge (issl, isslbar, "~s_L", mssm, tol, hard_error, debug);
      fill_mass_es_psn_gauge (iscl, isclbar, "~c_L", mssm, tol, hard_error, debug);
      fill_mass_es_psn_family(isb1, isb1bar, "~b_1", mssm, tol, hard_error, debug);
      fill_mass_es_psn_family(ist1, ist1bar, "~t_1", mssm, tol, hard_error, debug);
      
      fill_mass_es_psn_gauge (isell,  isellbar,  "~e_L",   mssm, tol, hard_error, debug);
      fill_mass_es_psn_gauge (ismul,  ismulbar,  "~mu_L",  mssm, tol, hard_error, debug);
      fill_mass_es_psn_family(istau1, istau1bar, "~tau_1", mssm, tol, hard_error, debug);

      fill_mass_es_psn_gauge(isnel,   isnelbar,   "~nu_e_L",   mssm, tol, hard_error, debug);
      fill_mass_es_psn_gauge(isnmul,  isnmulbar,  "~nu_mu_L",  mssm, tol, hard_error, debug);
      fill_mass_es_psn_gauge(isntaul, isntaulbar, "~nu_tau_L", mssm, tol, hard_error, debug);
  
      fill_mass_es_psn_gauge (isdr, isdrbar, "~d_R", mssm, tol, hard_error, debug);
      fill_mass_es_psn_gauge (isur, isurbar, "~u_R", mssm, tol, hard_error, debug);
      fill_mass_es_psn_gauge (issr, issrbar, "~s_R", mssm, tol, hard_error, debug);
      fill_mass_es_psn_gauge (iscr, iscrbar, "~c_R", mssm, tol, hard_error, debug);
      fill_mass_es_psn_family(isb2, isb2bar, "~b_2", mssm, tol, hard_error, debug);
      fill_mass_es_psn_family(ist2, ist2bar, "~t_2", mssm, tol, hard_error, debug);

      fill_mass_es_psn_gauge (iselr, iselrbar,   "~e_R",   mssm, tol, hard_error, debug);
      fill_mass_es_psn_gauge (ismur, ismurbar,   "~mu_R",  mssm, tol, hard_error, debug);
      fill_mass_es_psn_family(istau2, istau2bar, "~tau_2", mssm, tol, hard_error, debug);
            
      filled = true;
  
      if (debug) debug_print(mssm);

    }

    /// Helper function for getting mass eigenstates from gauge eigenstates
    void mass_es_pseudonyms::fill_mass_es_psn_gauge(str& is, str& isbar, str gauge_es, const SubSpectrum* mssm, 
                                                    double tol, bool hard_error_on_mixing_failure, bool debug)
    { 
      double max_mix = 0; 
      str mass_es = slhahelp::mass_es_from_gauge_es(gauge_es, max_mix, mssm);

      if((max_mix*max_mix) >= 1-tol)
      {
         is = mass_es;   
         isbar = Models::ParticleDB().get_antiparticle(mass_es);
      }
      else
      {
         std::stringstream ss;
         ss << "MSSM mass(-squared) eigenstate " << mass_es << " is only " << max_mix*max_mix*100 << "% gauge eigenstate " << gauge_es << "." << endl
            << "The requested tolerance is " << tol*100 << " => too much sfermion mixing to assume that this is a pure gauge eigenstate.";
         if (hard_error_on_mixing_failure)
         {
           DecayBit_error().raise(LOCAL_INFO, ss.str());
         }
         else
         {
           invalid_point().raise(ss.str());
         }
      }  

      if (debug) debug_print_gauge(mssm, gauge_es, mass_es, max_mix);
    }

    /// Helper function for getting family states from gauge eigenstates
    void mass_es_pseudonyms::fill_mass_es_psn_family(str& is, str& isbar, str family_state, const SubSpectrum* mssm,
                                                     double tol, bool hard_error_on_mixing_failure, bool debug)
    { 
      /// First identify the mass eigenstate that best matches the requested family state.
      /// Then get the decomposition of that mass eigenstate into the two gauge states from the same family as the family state.
      std::vector<double> right_fam_gauge_comp; 
      str mass_es = slhahelp::mass_es_closest_to_family(family_state, right_fam_gauge_comp, mssm);

      /// Simplest possible test.
      double mix_mag_sq = 0.0;
      for(auto i = right_fam_gauge_comp.begin(); i != right_fam_gauge_comp.end(); i++)
      {
         double mix = *i;
         mix_mag_sq += mix*mix;
      }    

      if(mix_mag_sq > 1-tol) 
      {
        is = mass_es;
        isbar = Models::ParticleDB().get_antiparticle(mass_es);
      }
      else 
      {
         std::stringstream ss;
         ss << "MSSM mass(-squared) eigenstate " << mass_es << " is only " << mix_mag_sq*100 << "% the same family as "
            << "family state " << family_state << "." << endl << "The requested tolerance is " << tol*100 
            << "% => too much inter-family sfermion mixing to assume that this is a pure family state.";
         if (hard_error_on_mixing_failure)
         {
           DecayBit_error().raise(LOCAL_INFO, ss.str());
         }
         else
         {
           invalid_point().raise(ss.str());
         }
      }
      
      if (debug) debug_print_family(mssm, family_state, mass_es, mix_mag_sq, tol);
    }

    /// General debug printer for pseudonyms      
    void mass_es_pseudonyms::debug_print(const SubSpectrum* mssm)
    {
      std::cout.precision(8);
      std::cout << "Dmix :" << std::endl;;
      for(int i = 1; i <=6; i++)
      {
        for(int j = 1; j <=6; j++)
        {
          std::cout << "     " << i << j << " = "  
                    << std::scientific << std::setw(10)  
                    <<  mssm->phys().get_Pole_Mixing("~d", i, j);
        }
        std::cout << std::endl;
      }
        
      std::cout << "Umix :" << std::endl;;
      for(int i = 1; i <=6; i++)
      {
        for(int j = 1; j <=6; j++)
        {
          std::cout << "     " << i << j << " = "  
                    << mssm->phys().get_Pole_Mixing("~u", i, j);
        }
        std::cout << std::endl;
      }
               
      std::cout << "Emix :" << std::endl;;
      for(int i = 1; i <=6; i++)
      {
        for(int j = 1; j <=6; j++)
        {
          std::cout << "     " << i << j << " = "  
                    << mssm->phys().get_Pole_Mixing("~e", i, j);
        }
        std::cout << std::endl;
      }

      std::cout << "NUmix :" << std::endl;;
      for(int i = 1; i <=3; i++)
      {
        for(int j = 1; j <=3; j++)
        {
         std::cout << "     " << i << j << " = "  
                   << mssm->phys().get_Pole_Mixing("~nu", i, j);
        }
        std::cout << std::endl;
      }

      std::cout << "isdl = "  << isdl << std::endl;
      std::cout << "isdlbar = "  << isdlbar << std::endl;
      std::cout << "isdr = "  << isdr << std::endl;
      std::cout << "isdrbar = "  << isdrbar << std::endl;
      
      std::cout << "isul = "  << isul << std::endl;
      std::cout << "isulbar = "  << isulbar << std::endl;
      std::cout << "isur = "  << isur << std::endl;
      std::cout << "isurbar = "  << isurbar << std::endl;
      
      std::cout << "issl = "  << issl << std::endl;
      std::cout << "isslbar = "  << isslbar << std::endl;
      std::cout << "issr = "  << issr << std::endl;
      std::cout << "issrbar = "  << issrbar << std::endl;
      
      std::cout << "iscl = "  << iscl << std::endl;
      std::cout << "isclbar = "  << isclbar << std::endl;
      std::cout << "iscr = "  << iscr << std::endl;
      std::cout << "iscrbar = "  << iscrbar << std::endl;
      
      std::cout << "isb1 = "  << isb1 << std::endl;
      std::cout << "isb1bar = "  << isb1bar << std::endl;
      std::cout << "isb2 = "  << isb2 << std::endl;
      std::cout << "isb2bar = "  << isb2bar << std::endl;
      
      std::cout << "ist1 = "  << ist1 << std::endl;
      std::cout << "ist1bar = "  << ist1bar << std::endl;
      std::cout << "ist2 = "  << ist2 << std::endl;
      std::cout << "ist2bar = "  << ist2bar << std::endl;
      
      std::cout << "isell = "  << isell << std::endl;
      std::cout << "isellbar = "  << isellbar << std::endl;
      std::cout << "iselr = "  << iselr << std::endl;
      std::cout << "iselrbar = "  << iselrbar << std::endl;
      
      std::cout << "isnel = "  << isnel << std::endl;
      std::cout << "isnelbar = "  << isnelbar << std::endl;
      
      std::cout << "ismul = "  << ismul << std::endl;
      std::cout << "ismulbar = "  << ismulbar << std::endl;
      std::cout << "ismur = "  << ismur << std::endl;
      std::cout << "ismurbar = "  << ismurbar << std::endl;
      
      std::cout << "isnmull = "  << isnmul << std::endl;
      std::cout << "isnmullbar = "  << isnmulbar << std::endl;
      
      std::cout << "istau1 = "  << istau1 << std::endl;
      std::cout << "istau1bar = "  << istau1bar << std::endl;
      std::cout << "istau2 = "  << istau2 << std::endl;
      std::cout << "istau2bar = "  << istau2bar << std::endl;
      
      std::cout << "isntaul = "  << isntaul << std::endl;
      std::cout << "isntaulbar = "  << isntaulbar << std::endl;

    }

    /// Gauge state debug printer for pseudonyms
    void mass_es_pseudonyms::debug_print_gauge(const SubSpectrum* mssm, str& gauge_es, str& mass_es, double& max_mix)
    {
      std::cout << "******** Extra tests ********* " << std::endl;
      std::cout << "gauge_es = " << gauge_es << std::endl;
      std::cout << "mass_es = " << mass_es << std::endl;

      double max_mix_r = 0.0;
      str g_es = slhahelp::gauge_es_from_mass_es(mass_es, max_mix_r, mssm);
      std::cout << "g_es = " << g_es << std::endl;
      std::cout << "max_mix = "  << max_mix<< std::endl;
      std::cout << "max_mix_r = "  << max_mix_r << std::endl;
      if(g_es != gauge_es) std::cout << "g_s error! " << std::endl;
      if(max_mix_r != max_mix) std::cout << "g_s max_mix_r error! " << std::endl;
      
      str ges = slhahelp::gauge_es_from_mass_es(mass_es, mssm, 1e-3, LOCAL_INFO);
      std::cout << "ges = "  << ges << std::endl;
      if(ges != gauge_es) std::cout << "ges error! " << std::endl;
      str mes = slhahelp::mass_es_from_gauge_es(gauge_es, mssm, 1e-3, LOCAL_INFO);
      std::cout << "mes = "  << ges << std::endl;
      if(mes != mass_es) std::cout << "mes error! " << std::endl;
    }

    /// Family state debug printer for pseudonyms
    void mass_es_pseudonyms::debug_print_family(const SubSpectrum* mssm, str& family_state, str& mass_es, double& mix_mag_sq, double& tol)
    {
      std::cout << "******** Extra tests ********* " << std::endl;
      std::cout << "family_state = "  << family_state <<std::endl;
      std::cout << "mass_es obtained from family_state = "  << mass_es 
                << std::endl;
      double sum_sq_mix;
      str fs = slhahelp::family_state_closest_to_mass_es(mass_es, sum_sq_mix,
                                                         mssm);
      std::cout << "fs obtained from mass_es = " << fs << std::endl;
      std::cout << "sum_sq_mix = " << sum_sq_mix << std::endl;
      std::cout << "mix_mag_sq = " << mix_mag_sq << std::endl; 
      if(fs != family_state) std::cout << "fs error! = " << std::endl;
      str f_s = slhahelp::family_state_closest_to_mass_es(mass_es, mssm,
                                                          1e-3, LOCAL_INFO);
      std::cout << "f_s obtained from mass_es = " << f_s << std::endl;
      if(f_s != family_state) std::cout << "f_s error! = " << std::endl;
    
      str m_es = slhahelp::mass_es_closest_to_family(family_state, mssm, tol, 
                                                     LOCAL_INFO);
      std::cout << "m_es = "  << m_es << std::endl;
      if(m_es != mass_es) std::cout << "m_es error! = " << std::endl;
      
      std::cout << "******** Special family_state_mix_matrix tests ********" 
                << std::endl;
      str mass_es1, mass_es2, type;
      str types[] = {"~u","~d", "~e"};
      std::set<str> set_type = {types, types+3};
      std::set<str>::iterator it;
      for (it = set_type.begin(); it != set_type.end(); ++it)
      {
        type = *it;
        for(int gen = 1;  gen <=3; gen++)
        {
          std::cout << "entering type = " << type << " and gen " 
                   << gen << std::endl;   
          std::vector<double> f_mix_matrix = slhahelp::family_state_mix_matrix(type,gen, mass_es1, mass_es2, mssm);
          std::cout << "mass_es1 = " << mass_es1 << std::endl;
          std::cout << "mass_es2 = " << mass_es2 << std::endl;
          for(int i = 0;  i<=3; i++)
          {
            std::cout << "f_mix_matrix[" << i << "] = "  
                      << f_mix_matrix[i] << std::endl;
          }
          double row1sq = f_mix_matrix[0] * f_mix_matrix[0];
          row1sq += f_mix_matrix[1] * f_mix_matrix[1];
          double row2sq = f_mix_matrix[2] * f_mix_matrix[2];
          row2sq += f_mix_matrix[3] * f_mix_matrix[3];
          std::cout << "row1sq = " <<  row1sq << "  row2sq = " 
                    <<  row2sq << std::endl;
        }
      }
    }


  }

}
