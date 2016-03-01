//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  This class is used to deliver both information defined in the Standard
///  Model (or potentially just QED X QCD) as a low-energy effective theory (as
///  opposed to correspending information defined in a high-energy model) as well as a
///  corresponding high energy theory. Parameters defined in the low-energy model are
///  often used as input to a physics calculators. In addition, parameters used
///  to define the Standard Model, in SLHA2 format, are provided in the 
///  SMINPUTS data member.
///
///  Access to the pole masses of either SubSpectrum is provided by the
///  "get_Pole_Mass" function, which will search both subspectra for a match.
///  For running parameters, one should access them via the getters of "LE" or 
///  "HE" subspectra.
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
///  \author Abram Krislock
///          (a.m.b.krislock@fys.uio.no)
///  \date 2016 Feb
///
///  *********************************************

#include "gambit/Elements/spectrum.hpp"
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
       swap(first.HE, second.HE); 
       swap(first.LE_new, second.LE_new); 
       swap(first.HE_new, second.HE_new);
       swap(first.SMINPUTS, second.SMINPUTS);
       swap(first.input_Param, second.input_Param);
       swap(first.initialised, second.initialised);
   }
   
   /// @{ Constructors/destructors
   
   /// Default constructor
   Spectrum::Spectrum() : input_Param(NULL), initialised(false) {}
    
   /// Construct new object, cloning the SubSpectrum objects supplied and taking possession of them.
   Spectrum::Spectrum(const SubSpectrum& le, const SubSpectrum& he, const SMInputs& smi, const std::map<str, safe_ptr<double> >* params)
     : LE_new(le.clone())
     , HE_new(he.clone())
     , LE(LE_new.get())   
     , HE(HE_new.get())
     , SMINPUTS(smi)
     , input_Param(params)
     , initialised(true) 
   {}
   
   /// Construct new object, wrapping existing SubSpectrum objects
   ///  Make sure the original objects don't get deleted before this wrapper does!
   Spectrum::Spectrum(SubSpectrum* const le, SubSpectrum* const he, const SMInputs& smi, const std::map<str, safe_ptr<double> >* params)
     : LE(le)
     , HE(he)
     , SMINPUTS(smi)
     , input_Param(params)
     , initialised(true) 
   {}
   
   /// Copy constructor, clones SubSpectrum objects.
   /// Make a non-const copy in order to use e.g. RunBothToScale function.
   Spectrum::Spectrum(const Spectrum& other)
     : LE_new(other.clone_LE())
     , HE_new(other.clone_HE())
     , LE(LE_new.get())   
     , HE(HE_new.get())
     , SMINPUTS(other.SMINPUTS)
     , input_Param(other.input_Param)
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
   
   /// Overloads for PDG types
   /// These just convert the types and then call the properly defined functions
   //DEFINE_PDG_GETTERS(Spectrum,Pole_Mass) //TODO: redo

   /// Linked running
   /// Only possible with non-const object
   void Spectrum::RunBothToScale(double scale)
   {
     LE->RunToScale(scale);
     HE->RunToScale(scale);
   }
   
   /// Standard getters
   /// Return non-owning pointers. Make sure original Spectrum object doesn't
   /// get destroyed before you finish using these or you will cause a segfault.
   SubSpectrum* Spectrum::get_LE() {check_init(); return LE;}
   SubSpectrum* Spectrum::get_HE() {check_init(); return HE;}
   SMInputs&    Spectrum::get_SMInputs() {check_init(); return SMINPUTS;}
   // const versions
   const SubSpectrum* Spectrum::get_LE()       const {check_init(); return LE;}
   const SubSpectrum* Spectrum::get_HE()       const {check_init(); return HE;}
   const SMInputs&    Spectrum::get_SMInputs() const {check_init(); return SMINPUTS;}
   
   /// Clone getters
   /// Note: If you want to clone the whole Spectrum object, just use copy constructor, not these.
   std::unique_ptr<SubSpectrum> Spectrum::clone_LE() const {check_init(); return LE->clone();} 
   std::unique_ptr<SubSpectrum> Spectrum::clone_HE() const {check_init(); return HE->clone();} 
   
   /// Pole mass getters/checkers
   /// "Shortcut" getters/checkers to access pole masses in hosted SubSpectrum objects.
   /// HE object given higher priority; if no match found, LE object will be 
   /// checked. If still no match, error is thrown.
   /// TODO: These currently work for anything! Need to restrict them to only allow
   /// access to pole masses and their estimated uncertainties
   /// Also need to change error messages etc, plus the PDG overloads
   bool Spectrum::has(const Par::Tags partype, const std::string& mass) const 
   {
     return (HE->has(partype,mass) or LE->has(partype,mass)); 
   }
   
   double Spectrum::get(const Par::Tags partype, const std::string& mass) const 
   {
     double result(-1);
     if( HE->has(partype,mass) )
     { result = HE->get(partype,mass); }
     else if( LE->has(partype,mass) ) 
     { result = LE->get(partype,mass); }
     else
     {
        std::ostringstream errmsg;
        errmsg << "Error retrieving particle spectrum data!" << std::endl;
        errmsg << "No pole mass with string reference '"<<mass<<"' could be found in either LE or HE SubSpectrum!" <<std::endl;
        utils_error().raise(LOCAL_INFO,errmsg.str());   
     }
     // In c++11 we could add the [[noreturn]] attribute utils_error.raise()
     // to suppress the compiler warning about not returning anything (and enable
     // extra optimisations), however it isn't implemented in gcc until version 
     // 4.8 (and we decided to support earlier versions).
     return result;
   }
   
   bool Spectrum::has(const Par::Tags partype, const std::string& mass, const int index) const 
   {
     return (HE->has(partype,mass,index) or LE->has(partype,mass,index)); 
   }
   
   double Spectrum::get(const Par::Tags partype, const std::string& mass, const int index) const 
   {
     double result(-1);
     if( HE->has(partype,mass,index) )
     { result = HE->get(partype,mass,index); }
     else if( LE->has(partype,mass,index) ) 
     { result = LE->get(partype,mass,index); }
     else
     {
        std::ostringstream errmsg;
        errmsg << "Error retrieving particle spectrum data!" << std::endl;
        errmsg << "No pole mass with string reference '"<<mass<<"' and index '"<<index<<"' could be found in either LE or HE SubSpectrum!" <<std::endl;
        utils_error().raise(LOCAL_INFO,errmsg.str());   
     }
     // [[noreturn]]
     return result;
   }
  
   /// @{ PDB getter/checker overloads

   /* Input PDG code plus context integer as separate arguments */
   bool Spectrum::has(const Par::Tags partype, 
                        const int pdg_code, const int context) const
   {
      return has( partype, std::make_pair(pdg_code,context) );
   }

   /* Input PDG code plus context integer as separate arguments */
   double Spectrum::get(const Par::Tags partype, 
                        const int pdg_code, const int context) const
   {
      return get( partype, std::make_pair(pdg_code,context) );
   }

   /* Input PDG code plus context integer as pair */
   bool Spectrum::has(const Par::Tags partype, 
                        const std::pair<int,int> pdgpr) const
   {
      /* If there is a short name, then retrieve that plus the index */      
      if( Models::ParticleDB().has_short_name(pdgpr) )                       
      {                                                                      
        return has( partype, Models::ParticleDB().short_name_pair(pdgpr) );
      }                                                                      
      else /* Use the long name with no index instead */                     
      {                                                                      
        return has( partype, Models::ParticleDB().long_name(pdgpr) );      
      }                                                                      
   }

   /* Input PDG code plus context integer as pair */
   double Spectrum::get(const Par::Tags partype, 
                        const std::pair<int,int> pdgpr) const
   {
      /* If there is a short name, then retrieve that plus the index */      
      if( Models::ParticleDB().has_short_name(pdgpr) )                       
      {                                                                      
        return get( partype, Models::ParticleDB().short_name_pair(pdgpr) );
      }                                                                      
      else /* Use the long name with no index instead */                     
      {                                                                      
        return get( partype, Models::ParticleDB().long_name(pdgpr) );      
      }                                                                      
   }

   /* Input short name plus index as pair */
   bool Spectrum::has(const Par::Tags partype, 
                        const std::pair<str,int> shortpr) const
   {
      return has( partype, shortpr.first, shortpr.second);
   }

   /* Input short name plus index as pair */
   double Spectrum::get(const Par::Tags partype, 
                        const std::pair<str,int> shortpr) const
   {
      return get( partype, shortpr.first, shortpr.second);
   }

   /// @}

   /// @{ Getters which first check the sanity of the thing they are returning

   double Spectrum::safeget(const Par::Tags partype,
                            const std::string& mass) const
   {
      double result = get(partype, mass);
      if (Utils::isnan(result))
         utils_error().raise(LOCAL_INFO,"SubSpectrum parameter is nan!!");
      return result;
   }

   double Spectrum::safeget(const Par::Tags partype,
                            const std::string& mass, const int index) const
   {
      double result = get(partype, mass, index);
      if (Utils::isnan(result))
         utils_error().raise(LOCAL_INFO,"SubSpectrum parameter is nan!!");
      return result;
   }

   double Spectrum::safeget(const Par::Tags partype,
                            const int pdg_code, const int context) const
   {
      double result = get(partype, pdg_code, context);
      if (Utils::isnan(result))
         utils_error().raise(LOCAL_INFO,"SubSpectrum parameter is nan!!");
      return result;
   }

   double Spectrum::safeget(const Par::Tags partype,
                            const std::pair<int,int> pdgpr) const
   {
      double result = get(partype, pdgpr);
      if (Utils::isnan(result))
         utils_error().raise(LOCAL_INFO,"SubSpectrum parameter is nan!!");
      return result;
   }

   double Spectrum::safeget(const Par::Tags partype,
                            const std::pair<str,int> shortpr) const
   {
      double result = get(partype, shortpr);
      if (Utils::isnan(result))
         utils_error().raise(LOCAL_INFO,"SubSpectrum parameter is nan!!");
      return result;
   }

   /// @}
 
   /// SLHAea object getter
   /// First constructs an SLHAea object from the SMINPUTS object, then adds the info from
   /// the LE subspectrum (if possible), followed by the HE subspectrum (if possible). Any duplicate
   /// entries are overwritten at each step, so HE takes precendence over LE, and LE takes precedence
   /// over SMINPUTS.
   SLHAstruct Spectrum::getSLHAea() const 
   {
     SLHAstruct slha(SMINPUTS.getSLHAea());    
     LE->add_to_SLHAea(slha);
     HE->add_to_SLHAea(slha);
     return slha;
   }

   /// PDG code translation map, for special cases where an SLHA file has been read in and the PDG codes changed.
   const std::map<int, int>& Spectrum::PDG_translator() const
   {
     return HE->PDG_translator();
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

