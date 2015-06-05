//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Type definition header for DecayBit.
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
///  *********************************************


#ifndef __DecayBit_types_hpp__
#define __DecayBit_types_hpp__

namespace Gambit
{

  namespace DecayBit
  {
     //////////// MSSM /////////////////////
     void fill_p_to_ap_map ();

     /// put in a strict at least instead of global variables
     struct mass_es_pseudonyms2 {
     public:
        mass_es_pseudonyms2(){filled = false;}
        mass_es_pseudonyms2(const SubSpectrum* mssm, double tol);
        std::string isdl;
        std::string isul;
        std::string issl;
        std::string iscl;
        std::string isb1;
        std::string ist1;
        std::string isell;
        std::string isnel;
        std::string ismul;
        std::string isnmul;
        std::string istau1;
        std::string isntau1;
        std::string isdr;
        std::string isur;
        std::string issr;
        std::string iscr;
        std::string isb2;
        std::string ist2;
        std::string iselr;
        /// This doesn't exist in the MSSM why is it here?
        ///std::string iner; // 2000012 until we don't have RHNs in particle_database
        std::string ismur;
        /// This doesn't exist in the MSSM why is it here?
        ///  std::string inmur; // 2000014
        std::string istau2;
        /// This doesn't exist in the MSSM why is it here?
        /// std::string intau2; // 2000016
        
        std::string isdlbar;
        std::string isulbar;
        std::string isslbar;
        std::string isclbar;
        std::string isb1bar;
        std::string ist1bar;
        std::string isellbar;
        std::string isnelbar;  //need to add sneutrinos to helpers
        std::string ismulbar;
        std::string isnmulbar;
        std::string istau1bar;
        std::string isntau1bar;
        std::string isdrbar;
        std::string isurbar;
        std::string issrbar;
        std::string iscrbar;
        std::string isb2bar;
        std::string ist2bar;
        std::string iselrbar;
        /// This doesn't exist in the MSSM why is it here?
        ///std::string isnerbar;// -2000012 until we don't have RHNs in particle_database
        std::string ismurbar;
        /// This doesn't exist in the MSSM why is it here?
        /// std::string isnmurbar; // -2000014
        std::string istau2bar;
        /// This doesn't exist in the MSSM why is it here?
        ///std::string isntau2bar; // -2000016
        
        void fill_mass_es_psns2(const SubSpectrum* mssm, double tol);
        void test_print(const SubSpectrum* mssm);
     private:
        bool filled; 
     };

     
     
    
  }

}


#endif
