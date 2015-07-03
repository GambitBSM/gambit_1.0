//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Function definitions for DecayBit decay
///  utilities.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Pat Scott
///          (p.scott@imperial.ac.uk)
///  \date 2015 May
///
///  \author Peter Athron  
///          (peter.athron@coepp.org.au)
///  \date 2015 Jun 
///
///  *********************************************

#include "gambit/Elements/gambit_module_headers.hpp"
#include "gambit/DecayBit/DecayBit_rollcall.hpp"
#include "gambit/DecayBit/decay_utils.hpp"
#include "gambit/Elements/mssm_slhahelp.hpp"

namespace Gambit
{

  namespace DecayBit
  {
      
    /// Construct a decay table entry for a particle, from the entry for its antiparticle
    DecayTable::Entry CP_conjugate(const DecayTable::Entry& in)      
    {  
      typedef std::map< std::multiset< std::pair<int,int> >, std::pair<double, double> > channelmap;
      DecayTable::Entry out;

      // Copy all the basic info to the new DecayTable entry
      out.width_in_GeV = in.width_in_GeV;                    
      out.positive_error = in.positive_error;
      out.negative_error = out.negative_error;
      out.calculator = in.calculator;
      out.calculator_version = in.calculator;
      out.warnings = in.warnings;
      out.errors = in.errors;

      // Iterate over all the open decay channels
      for (auto i : in.channels)
      {
        // Retrieve the decay final states
        std::multiset< std::pair<int,int> > particles = i.first;
        // Determine the antiparticles of the final states
        std::multiset< std::pair<int,int> > antiparticles;
        for (auto particle : particles)
        {
          std::pair<int,int> antiparticle(-1*(particle.first), particle.second); 
          // If the antiparticle exists as a distinct particle, add it.
          if (Models::ParticleDB().has_particle(antiparticle)) antiparticles.insert(antiparticle);
          //Otherwise, use the original particle
          else antiparticles.insert(particle);
        }
        // Set the corresponding branching fraction and error in the conjugate entry
        out.channels[antiparticles] = i.second;
      }

      // Hand over the CP-conjugate entry
      return out;
    }


    /// Helper functions for filling maps from MSSM gauge eigenstates to mass eigenstates.
    /// @{

    void fill_mass_es_psn_gauge(str & is, str & isbar,  
                                str gauge_es,
                                const SubSpectrum* mssm,
                                double tol)
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
         /// FIXME decide on error vs warning vs invalid_point
         /// FIXME add deviation and states to exception message        
         DecayBit_error().raise(LOCAL_INFO, "function fill_mass_es_psn_gauge has"
          "too large sfermion mixing for state that assumed to be a pure gauge state");
         DecayBit_warning().raise(LOCAL_INFO, "This point violates the assumption that "
          "certain sfermion states have no family mixing by a degree larger than tol "
          "made in a DecayBit routine.");
         invalid_point().raise("This point violates the assumption that certain sfermion"
          " states have no family mixing  by a degree larger than tol made in a DecayBit routine.");
      }  

      // FIXME Debug code -- remove when fully tested
      if (false)
      {
        std::cout << "******** Extra tests ********* " << std::endl;
        std::cout << "gauge_es = " << gauge_es << std::endl;
        std::cout << "mass_es = " << mass_es << std::endl;
        double max_mix_r = 0.0;
        str g_es = slhahelp::gauge_es_from_mass_es(mass_es, 
                                                            max_mix_r, mssm);
        std::cout << "g_es = " << g_es << std::endl;
        std::cout << "max_mix = "  << max_mix<< std::endl;
        std::cout << "max_mix_r = "  << max_mix_r << std::endl;
        if(g_es != gauge_es) std::cout << "g_s error! " << std::endl;
        if(max_mix_r != max_mix) std::cout << "g_s max_mix_r error! " 
                                          << std::endl;
        
        str ges = slhahelp::gauge_es_from_mass_es(mass_es, mssm, 
                                                           1e-3, LOCAL_INFO);
        std::cout << "ges = "  << ges << std::endl;
        if(ges != gauge_es) std::cout << "ges error! " << std::endl;
        str mes = slhahelp::mass_es_from_gauge_es(gauge_es, mssm, 
                                                           1e-3, LOCAL_INFO);
        std::cout << "mes = "  << ges << std::endl;
        if(mes != mass_es) std::cout << "mes error! " << std::endl;
      }

      return;

    }


    void fill_mass_es_psn_family(str & is, str & isbar,  
                                 str family_state,
                                 const SubSpectrum* mssm,
                                 double tol)
    { 
      /// use slhahelp routine which first identifies the mass_es which 
      /// best matches the requested family state. then returns the
      /// decomposition of that mass_es state in terms of gauge states 
      /// from the same family as the family state
      std::vector<double> right_fam_gauge_comp; 
      str mass_es = slhahelp::mass_es_closest_to_family(family_state, 
                                                        right_fam_gauge_comp,
                                                        mssm);
      /// Do very simple test for now, discuss best approach
      /// This is a question for decaybit
      double mix_mag_sq = 0.0;
      for(auto i = right_fam_gauge_comp.begin(); 
          i != right_fam_gauge_comp.end(); i++)
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
        DecayBit_error().raise(LOCAL_INFO, "function get_mass_admix_for_gauge "
         "called with types for the gauge eigenstate and mass eigenstate that don't match."); 
        DecayBit_warning().raise(LOCAL_INFO,
         "This point violates the assumption that certain sfermion states have "
         "no family mixing  by a degree larger than tol made in a DecayBit routine.");
        invalid_point().raise("This point violates the assumption that certain sfermion "
         "states have no family mixing  by a degree larger than tol made in a DecayBit routine.");
      }
      
      // FIXME Debug code -- remove when fully tested
      if (false)
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
        // this is banned but just for temp test
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
      
      return;
    }


  }

}  
