//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  This class is used to deliver both information defined in the Standard
///  Model (or potentially just QED X QCD) as a low-energy effective theory (as
///  opposed to correspending information defined in a UV model) as well as a
///  corresponding UV theory. Parameters defined in the low-energy model are
///  often used as input to a physics calculators. In addition, parameters used
///  to define the Standard Model, in SLHA2 format, are provided in the 
///  SMINPUTS data member.
///
///  Access to the pole masses of either SubSpectrum is provided by the
///  "get_Pole_Mass" function, which will search both subspectra for a match.
///  For running parameters, one should access them via the getters of "LE" or 
///  "UV" subspectra.
///
///  *********************************************
///
///  Authors: 
///  <!-- add name and date if you modify -->
///   
///  \author Ben Farmer
///          (benjamin.farmer@fysik.su.se)
///  \date 2015 Mar 
///
///  \author Pat Scott
///          (p.scott@imperial.ac.uk)
///  \date 2015 May 
///
///  *********************************************

#include "gambit/Elements/Spectrum.hpp"
#include "gambit/Utils/standalone_error_handlers.hpp"

namespace Gambit
{

   /// @{ Spectrum class member function definitions
   
   /// Check if object has been fully initialised
   void Spectrum::check_init() const {
     if(not initialised) utils_error().raise(LOCAL_INFO,"Access or deepcopy of empty Spectrum object attempted!");
   }
   
   /// Swap resources of two Spectrum objects
   /// Note: Not a member function! This is an external function which is a friend of the Spectrum class.
   void swap(Spectrum& first, Spectrum& second)
   {
       using std::swap; // enable ADL
       swap(first.LE, second.LE); 
       swap(first.UV, second.UV); 
       swap(first.LE_new, second.LE_new); 
       swap(first.UV_new, second.UV_new);
       swap(first.SMINPUTS, second.SMINPUTS);
       swap(first.initialised, second.initialised);
   }
   
   /// @{ Constructors/destructors
   
   /// Default constructor
   Spectrum::Spectrum() : initialised(false) {}
    
   /// Construct new object, cloning the SubSpectrum objects supplied and taking possession of them.
   Spectrum::Spectrum(const SubSpectrum& le, const SubSpectrum& uv, const SMInputs& smi)
     : LE_new(le.clone())
     , UV_new(uv.clone())
     , LE(LE_new.get())   
     , UV(UV_new.get())
     , SMINPUTS(smi)
     , initialised(true) 
   {}
   
   /// Construct new object, wrapping existing SubSpectrum objects
   ///  Make sure the original objects don't get deleted before this wrapper does!
   Spectrum::Spectrum(SubSpectrum* const le, SubSpectrum* const uv, const SMInputs& smi)
     : LE(le)
     , UV(uv)
     , SMINPUTS(smi)
     , initialised(true) 
   {}
   
   /// Copy constructor, clones SubSpectrum objects.
   /// Make a non-const copy in order to use e.g. RunBothToScale function.
   Spectrum::Spectrum(const Spectrum& other)
     : LE_new(other.clone_LE())
     , UV_new(other.clone_UV())
     , LE(LE_new.get())   
     , UV(UV_new.get())
     , SMINPUTS(other.SMINPUTS)
     , initialised(other.initialised) 
   {}
   
   /// Copy-assignment
   /// Using "copy-and-swap" idiom
   Spectrum& Spectrum::operator=(Spectrum other)
   {
      swap(*this, other);
      return *this;
   } 
   
   /// Move constructor
   Spectrum::Spectrum(Spectrum&& other)
   {
      swap(*this, other);
   }
   
   /// @}
   
   /// Linked running
   /// Only possible with non-const object
   void Spectrum::RunBothToScale(double scale)
   {
     LE->runningpars.RunToScale(scale);
     UV->runningpars.RunToScale(scale);
   }
   
   /// Standard getters
   /// Return non-owning pointers. Make sure original Spectrum object doesn't
   /// get destroyed before you finish using these or you will cause a segfault.
   const SubSpectrum* Spectrum::get_LE()       const {check_init(); return LE;}
   const SubSpectrum* Spectrum::get_UV()       const {check_init(); return UV;}
   const SMInputs&    Spectrum::get_SMInputs() const {check_init(); return SMINPUTS;}
   
   /// Clone getters
   /// Note: If you want to clone the whole Spectrum object, just use copy constructor, not these.
   std::unique_ptr<SubSpectrum> Spectrum::clone_LE() const {check_init(); return LE->clone();} 
   std::unique_ptr<SubSpectrum> Spectrum::clone_UV() const {check_init(); return UV->clone();} 
   
   /// Pole mass getters/checkers
   /// "Shortcut" getters/checkers to access pole masses in hosted SubSpectrum objects.
   /// UV object given higher priority; if no match found, LE object will be 
   /// checked. If still no match, error is thrown.
   bool Spectrum::has_Pole_Mass(const std::string& mass) const 
   {
     return (UV->phys.has_Pole_Mass(mass) or LE->phys.has_Pole_Mass(mass)); 
   }
   
   double Spectrum::get_Pole_Mass(const std::string& mass) const 
   {
     double result(-1);
     if( UV->phys.has_Pole_Mass(mass) )
     { result = UV->phys.get_Pole_Mass(mass); }
     else if( LE->phys.has_Pole_Mass(mass) ) 
     { result = LE->phys.get_Pole_Mass(mass); }
     else
     {
        std::ostringstream errmsg;
        errmsg << "Error retrieving particle spectrum data!" << std::endl;
        errmsg << "No pole mass with string reference '"<<mass<<"' could be found in either LE or UV SubSpectrum!" <<std::endl;
        utils_error().raise(LOCAL_INFO,errmsg.str());   
     }
     // In c++11 we could add the [[noreturn]] attribute utils_error.raise()
     // to suppress the compiler warning about not returning anything (and enable
     // extra optimisations), however it isn't implemented in gcc until version 
     // 4.8 (and we decided to support earlier versions).
     return result;
   }
   
   bool Spectrum::has_Pole_Mass(const std::string& mass, const int index) const 
   {
     return (UV->phys.has_Pole_Mass(mass,index) or LE->phys.has_Pole_Mass(mass,index)); 
   }
   
   double Spectrum::get_Pole_Mass(const std::string& mass, const int index) const 
   {
     double result(-1);
     if( UV->phys.has_Pole_Mass(mass,index) )
     { result = UV->phys.get_Pole_Mass(mass,index); }
     else if( LE->phys.has_Pole_Mass(mass,index) ) 
     { result = LE->phys.get_Pole_Mass(mass,index); }
     else
     {
        std::ostringstream errmsg;
        errmsg << "Error retrieving particle spectrum data!" << std::endl;
        errmsg << "No pole mass with string reference '"<<mass<<"' and index '"<<index<<"' could be found in either LE or UV SubSpectrum!" <<std::endl;
        utils_error().raise(LOCAL_INFO,errmsg.str());   
     }
     // [[noreturn]]
     return result;
   }
   
   /// SLHAea object getter
   /// "Shortcut" getter. Tries to retrieve SLHAea object from UV SubSpectrum. If this fails,
   /// attempts to get it from the LE SubSpectrum (though probably this will never work).
   /// Error raised if this still fails.
   SLHAea::Coll Spectrum::getSLHAea() const 
   {
     SLHAea::Coll output;
     try { 
       output = UV->getSLHAea(); 
     }
     catch(const Gambit::exception& e) {
       try {
         output = LE->getSLHAea(); 
       }
       catch(const Gambit::exception& e2) {
          std::ostringstream errmsg;
          errmsg << "Could not convert particle spectrum data into SLHAea object! (errors returned by both UV->getSLHAea() and LE->getSLHAea())" << std::endl;
          errmsg << "(Error from UV SubSpectrum: "<< e.what() <<")"<< std::endl;
          errmsg << "(Error from LE SubSpectrum: "<< e2.what() <<")"<< std::endl;
          utils_error().raise(LOCAL_INFO,errmsg.str());   
       }
     }
     // TODO: do we want to remove the above error, since can always return the SMInputs entries?     

     // Add any information from SMInputs to the SLHAea object, if those entries don't exist already
     SMINPUTS.add_to_SLHAea(output);

     return output;
   }

   // The expressions in all of the following CKM functions are from the CKMFitter paper hep-ph/0406184v3.

   ///Helper function to calculate Wolfenstein rho+i*eta from rhobar and etabar
   std::complex<double> Spectrum::rhoplusieta(double lambda, double A, double rhobar, double etabar)
   {
     std::complex<double> x(rhobar, etabar);  
     double y = pow(A*lambda*lambda,2);
     return sqrt((1.0-y)/(1.0-lambda*lambda))*x/(1.0-x*y);
   }

   /// CKM Wolfenstein --> V_ud standard parameterisation convertor
   double Spectrum::Wolf2V_ud(double l, double A, double rhobar, double etabar)
   {
     double norm = std::norm(rhoplusieta(l,A,rhobar,etabar));
     return 1.0 - 0.5*pow(l,2) - 0.125*pow(l,4) - 0.0625*pow(l,6)*(1.0+8.0*A*A*norm) 
            - 0.0078125*pow(l,8)*(5.0-32.0*A*A*norm);
   }
   
   /// CKM Wolfenstein --> V_us standard parameterisation convertor
   double Spectrum::Wolf2V_us(double l, double A, double rhobar, double etabar)
   {
     double norm = std::norm(rhoplusieta(l,A,rhobar,etabar));
     return l - 0.5*A*A*pow(l,7)*norm; 
   }
   
   /// CKM Wolfenstein --> V_ub standard parameterisation convertor
   std::complex<double> Spectrum::Wolf2V_ub(double l, double A, double rhobar, double etabar)
   {
     return A*pow(l,3)*std::conj(rhoplusieta(l,A,rhobar,etabar));   
   }
   
   /// CKM Wolfenstein --> V_cd standard parameterisation convertor
   std::complex<double> Spectrum::Wolf2V_cd(double l, double A, double rhobar, double etabar)
   {
     std::complex<double> x(rhoplusieta(l,A,rhobar,etabar));
     return 0.5*pow(A*l,2)*(pow(l,3)*(1.0-2.0*x) + pow(l,5)*x) - l;       
   }
   
   /// CKM Wolfenstein --> V_cs standard parameterisation convertor
   std::complex<double> Spectrum::Wolf2V_cs(double l, double A, double rhobar, double etabar)
   {
     double l2 = l*l;
     double fA2 = 4.0*A*A;
     return 1.0 - 0.5*l2 - 0.125*l2*l2*(1.0+fA2) 
            - 0.0625*pow(l2,3)*(1.0-fA2+4.0*fA2*rhoplusieta(l,A,rhobar,etabar))
            - 0.0078125*pow(l2,4)*(5.0-fA2*(2.0+4.0*fA2));
   }
   
   /// CKM Wolfenstein --> V_cb standard parameterisation convertor
   double Spectrum::Wolf2V_cb(double l, double A, double rhobar, double etabar)
   {
     return A*l*l * (1.0 - 0.5*A*A*pow(l,6)*std::norm(rhoplusieta(l,A,rhobar,etabar)));
   }
   
   /// CKM Wolfenstein --> V_td standard parameterisation convertor
   std::complex<double> Spectrum::Wolf2V_td(double l, double A, double rhobar, double etabar)
   {
     std::complex<double> x(rhoplusieta(l,A,rhobar,etabar));
     return A*l*l * (l*(1.0-x) + 0.5*pow(l,3)*x + 0.125*pow(l,5)*(1.0+4.0*A*A)*x);
   }
   
   /// CKM Wolfenstein --> V_ts standard parameterisation convertor
   std::complex<double> Spectrum::Wolf2V_ts(double l, double A, double rhobar, double etabar)
   {
     std::complex<double> x(rhoplusieta(l,A,rhobar,etabar));
     return A*l*l * (0.5*pow(l,2)*(1.0-2.0*x) + 0.125*pow(l,4) + 0.0625*pow(l,6)*(1.0+8.0*A*A*x) - 1.0);
   }
   
   /// CKM Wolfenstein --> V_tb standard parameterisation convertor
   double Spectrum::Wolf2V_tb(double l, double A, double rhobar, double etabar)
   {
     double norm = std::norm(rhoplusieta(l,A,rhobar,etabar));
     double l4 = pow(l,4);
     return 1.0 - 0.5*A*A*l4 * (1.0 + l*l*norm + 0.25*A*A*l4);   
   }

} // end namespace Gambit

