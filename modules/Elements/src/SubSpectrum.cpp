//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Abstract class for accessing general spectrum information.
///
///  *********************************************
///
///  Authors: 
///  <!-- add name and date if you modify -->
///   
///  \author Peter Athron  
///          (peter.athron@coepp.org.au)
///  \date 2014, 2015 Jan, Feb, Mar 
///
///  \author Ben Farmer
///          (benjamin.farmer@fysik.su.se)
///  \date 2014, 2015 Jan - Jul 
///
///  *********************************************

#include "gambit/Elements/SubSpectrum.hpp"

namespace Gambit {

   /// @{ Helper macros

   #define DEFINE_OVERRIDE_SETTERS1(CLASS,FUNC) \
      /* Function definitions for the set_override_FUNC functions, which
         allow manual overrides of the values usually retrieved by the
         getters to be input. Set 'safety' to false if you want to be 
         permitted to add completely new entries to the spectrum contents.
         Note however that these override values will currently not show up 
         if you e.g. convert the spectrum to SLHAea. The values are contained 
         only in the SubSpectrum object itself and know nothing of the underlying
         model. */ \
      void CLASS::CAT(set_override_,FUNC)(const double value, const std::string& name, bool safety) \
      {                                                      \
         if(safety and not CAT(has_,FUNC)(name))             \
         {                                                   \
           std::ostringstream errmsg;                        \
           errmsg << "Error setting override value in SubSpectrum object!" << std::endl; \
           errmsg << "No "<<STRINGIFY(FUNC)<<" with string reference '"<<name<<"' exists in the "<<STRINGIFY(CLASS)<<" component of the wrapped spectrum!" <<std::endl; \
           errmsg << "If you intended to add this value to the spectrum without overriding anything, please call this function with the optional 'safety' boolean parameter set to 'false'. It can then be later retrieved using the normal getters with the same name used here." << std::endl;                     \
           utils_error().forced_throw(LOCAL_INFO,errmsg.str());  \
         }                                                   \
         CAT_3(override_,FUNC,_map)[name] = value;           \
      }                                                      \
                                                             \
      void CLASS::CAT(set_override_,FUNC)(const double value, const std::string& name, int i, bool safety) \
      {                                                      \
         if(safety and not CAT(has_,FUNC)(name,i))           \
         {                                                   \
           std::ostringstream errmsg;                        \
           errmsg << "Error setting override value in SubSpectrum object!" << std::endl; \
           errmsg << "No "<<STRINGIFY(FUNC)<<" with string reference '"<<name<<"' and index '"<<i<<"' exists in the "<<STRINGIFY(CLASS)<<" component of the wrapped spectrum!" <<std::endl; \
           errmsg << "If you intended to add this value to the spectrum without overriding anything, please call this function with the optional 'safety' boolean parameter set to 'false'. It can then be later retrieved using the normal getters with the same name and index used here." << std::endl;           \
           utils_error().forced_throw(LOCAL_INFO,errmsg.str());  \
         }                                                   \
         CAT_3(override_,FUNC,_map1)[name][i] = value;       \
      }                                                      \
                                                             
   #define DEFINE_OVERRIDE_SETTERS(CLASS,FUNC) \
      /* Adds the two-index setters */ \
      DEFINE_OVERRIDE_SETTERS1(CLASS,FUNC) \
      void CLASS::CAT(set_override_,FUNC)(const double value, const std::string& name, int i, int j, bool safety) \
      {                                                      \
         if(safety and not CAT(has_,FUNC)(name,i,j))         \
         {                                                   \
           std::ostringstream errmsg;                        \
           errmsg << "Error setting override value in SubSpectrum object!" << std::endl; \
           errmsg << "No "<<STRINGIFY(FUNC)<<" with string reference '"<<name<<"' and indices '"<<i<<","<<j<<"' exists in the "<<STRINGIFY(CLASS)<<" component of the wrapped spectrum!" <<std::endl; \
           errmsg << "If you intended to add this value to the spectrum without overriding anything, please call this function with the optional 'safety' boolean parameter set to 'false'. It can then be later retrieved using the normal getters with the same name and indices used here." << std::endl;         \
           utils_error().forced_throw(LOCAL_INFO,errmsg.str());  \
         }                                                   \
         CAT_3(override_,FUNC,_map2)[name][i][j] = value;    \
      }                                                    
   /// @}


   /// @{ Member function definitions for SubSpectrum class
   /// @}

   /// @{ Member function definitions for Phys class

   /// PDG overloads for getter functions
   DEFINE_PDG_GETTERS(Phys,Pole_Mass)
   DEFINE_PDG_GETTERS(Phys,Pole_Mixing)

   /// Definitions of set_override functions
   DEFINE_OVERRIDE_SETTERS1(Phys,Pole_Mass)
   DEFINE_OVERRIDE_SETTERS(Phys,Pole_Mixing)

   /// @}

   /// @{ Member function definitions for RunningPars class

   /// PDG overloads for getter functions
   DEFINE_PDG_GETTERS(RunningPars,mass_parameter)
   DEFINE_PDG_GETTERS(RunningPars,mass2_parameter)
   DEFINE_PDG_GETTERS(RunningPars,mass3_parameter)
   DEFINE_PDG_GETTERS(RunningPars,mass4_parameter)
   DEFINE_PDG_GETTERS(RunningPars,dimensionless_parameter)
   DEFINE_PDG_GETTERS(RunningPars,mass_eigenstate)

   /// Definitions of set_override functions
   DEFINE_OVERRIDE_SETTERS(RunningPars,mass_parameter)
   DEFINE_OVERRIDE_SETTERS(RunningPars,mass2_parameter)
   DEFINE_OVERRIDE_SETTERS(RunningPars,mass3_parameter)
   DEFINE_OVERRIDE_SETTERS(RunningPars,mass4_parameter)
   DEFINE_OVERRIDE_SETTERS(RunningPars,dimensionless_parameter)
   DEFINE_OVERRIDE_SETTERS(RunningPars,mass_eigenstate)

   /// Wrapper for RunToScaleOverload which automatically checks limits and
   /// raises warnings.
   // Behaviour modified by "behave" integer:
   // behave = 0  -- If running beyond soft limit requested, halt at soft limit
   //                (assumes hard limits outside of soft limits; but this is not enforced)
   // behave = 1  -- If running beyond soft limit requested, throw warning
   //                  "           "   hard limit     "    , throw error
   // behave = anything else -- Ignore limits and attempt running to requested scale 
   void RunningPars::RunToScale(double scale, int behave)
   {
      if(behave==0 or behave==1) 
      {
         if(scale < hard_lower() or scale > hard_upper()) {
            if(behave==1) {
               std::ostringstream msg;
               msg << "RGE running requested outside hard limits! This is forbidden with behave=1. Set behave=0 (default) to automatically stop running at soft limits, or behave=2 to force running to requested scale (may trigger errors from underlying RGE code!)." << std::endl;
               msg << "  Requested : "<< scale << std::endl;
               msg << "  hard_upper: "<< hard_upper() << std::endl;
               msg << "  hard_lower: "<< hard_lower() << std::endl;
               utils_error().raise(LOCAL_INFO, msg.str());
            } else { // behave==0
               if     (scale < soft_lower()) { scale=soft_lower(); } 
               else if(scale > soft_upper()) { scale=soft_upper(); }
               else {
                 // Hard limits must be outside soft limits; this is a bug in the derived Spectum object
                 std::ostringstream msg;
                 msg << "RGE running requested outside hard limits, but within soft limits! The soft limits should always be within the hard limits, so this is a bug in the derived SubSpectrum object being accessed. I cannot tell you which class this is though; check the dependency graph to see which ones are being created, and if necessary consult your debugger." << std::endl;
                 msg << "  Requested : "<< scale << std::endl;
                 msg << "  hard_upper: "<< hard_upper() << std::endl;
                 msg << "  soft_upper: "<< soft_upper() << std::endl;
                 msg << "  soft_lower: "<< soft_lower() << std::endl;
                 msg << "  hard_lower: "<< hard_lower() << std::endl;
                 utils_error().raise(LOCAL_INFO, msg.str());
               } 
            }
         } else if(scale < soft_lower() or scale > soft_upper()) {
            if(behave==1) {
               std::ostringstream msg;
               msg << "RGE running requested outside soft limits! Accuracy may be low. Note: Set behave=2 to suppress this warning, or behave=0 (default) to automatically stop running when soft limit is hit." << std::endl;
               msg << "  Requested : "<< scale << std::endl;
               msg << "  soft_upper: "<< soft_upper() << std::endl;
               msg << "  soft_lower: "<< soft_lower() << std::endl;
               utils_warning().raise(LOCAL_INFO, msg.str());
            } else { // behave==0
               if(scale < soft_lower()) scale=soft_lower();
               if(scale > soft_upper()) scale=soft_upper();
            }
         }
      }
      RunToScaleOverride(scale);
   }
 
   /// @}

}



