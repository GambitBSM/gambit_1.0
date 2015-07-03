//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Type declaration header for DecayBit.
///
///  Compile-time registration of type definitions 
///  required for the rest of the code to
///  communicate with DecayBit.
///
///  Add to this if you want to define a new type
///  for the functions in DecayBit to return,
///  but you don't expect that type to be needed by 
///  any other modules.
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

#ifndef __DecayBit_types_hpp__
#define __DecayBit_types_hpp__

#include "gambit/Utils/util_types.hpp"
#include "gambit/Elements/subspectrum.hpp"

namespace Gambit
{

  namespace DecayBit
  {
   
     /// Structure to hold mass eigenstate pseudonyms for gauge eigenstates
     struct mass_es_pseudonyms
     {

     public:

        /// Constructor
        mass_es_pseudonyms() : filled (false) {}
        
        /// Known pseudonym strings
        /// @{
        ///   Particles
        ///   @{      
        str isdl;
        str isul;
        str issl;
        str iscl;
        str isb1;
        str ist1;
        str isell;
        str isnel;
        str ismul;
        str isnmul;
        str istau1;
        str isntaul;
        str isdr;
        str isur;
        str issr;
        str iscr;
        str isb2;
        str ist2;
        str iselr;
        str ismur;
        str istau2;
        //str iner;   uncomment to add right-handed nus
        //str inmur;  uncomment to add right-handed nus
        //str intaur; uncomment to add right-handed nus
        ///   @}
        ///   Anti-particles
        ///   @{             
        str isdlbar;
        str isulbar;
        str isslbar;
        str isclbar;
        str isb1bar;
        str ist1bar;
        str isellbar;
        str isnelbar;
        str ismulbar;
        str isnmulbar;
        str istau1bar;
        str isntaulbar;
        str isdrbar;
        str isurbar;
        str issrbar;
        str iscrbar;
        str isb2bar;
        str ist2bar;
        str iselrbar;
        str ismurbar;
        str istau2bar;
        //str inerbar;   uncomment to add right-handed nus
        //str inmurbar;  uncomment to add right-handed nus
        //str intaurbar; uncomment to add right-handed nus
        ///   @}
        /// @}        
        
        /// Fill strings in struct
        void fill(const SubSpectrum*, double, bool, bool);

        /// Refill string in struct
        void refill(const SubSpectrum*, double, bool, bool);

        /// Debug printer for pseudonyms      
        void debug_print(const SubSpectrum*);

        /// Gauge state debug printer for pseudonyms
        void debug_print_gauge(const SubSpectrum*, str&, str&, double&);

        /// Family state debug printer for pseudonyms
        void debug_print_family(const SubSpectrum*, str&, str&, double&, double&);


     private:

        /// Struct has already been filled or not.
        bool filled; 

        /// Helper functions for filling maps from MSSM gauge eigenstates to mass eigenstates.
        /// @{
        void fill_mass_es_psn_gauge(str&, str&, str, const SubSpectrum*, double, bool, bool);
        void fill_mass_es_psn_family(str&, str&, str, const SubSpectrum*, double, bool, bool);
        /// @} 

      };
    
  }

}


#endif
