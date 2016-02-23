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

#ifndef __subspectrum_hpp__
#define __subspectrum_hpp__

#include <map>
#include <set>
#include <cfloat>
#include <sstream>

#include "gambit/Utils/cats.hpp"
#include "gambit/Utils/safebool.hpp"
#include "gambit/Utils/standalone_error_handlers.hpp"
#include "gambit/Elements/slhaea_helpers.hpp"
#include "gambit/Elements/spectrum_helpers.hpp"
#include "gambit/Models/partmap.hpp"


// Particle database access
#define PDB Models::ParticleDB()        

namespace Gambit
{

   /// Helper macro for throwing errors in base class versions of virtual functions
   #define vfcn_error(local_info) \
     utils_error().forced_throw(local_info,"This virtual function (of SubSpectrum object) has not been overridden in the derived class!")
   
   class SubSpectrum;
 
   /// Struct to hold collections of function pointer maps to be filled by derived classes
   template <class MapTypes>
   struct MapCollection
   {
      typename MapTypes::fmap0        map0;
      typename MapTypes::fmap0_extraM map0_extraM;
      typename MapTypes::fmap0_extraI map0_extraI;
      typename MapTypes::fmap1        map1;    
      typename MapTypes::fmap1_extraM map1_extraM;
      typename MapTypes::fmap1_extraI map1_extraI;
      typename MapTypes::fmap2        map2;    
      typename MapTypes::fmap2_extraM map2_extraM;
      typename MapTypes::fmap2_extraI map2_extraI;
   };

   /// Interface to getter and setter functions, factored out for slightly esoteric reasons.
   class CommonAbstract
   { 
      public:
         /// Constructors/destructors
         CommonAbstract() {}
         virtual ~CommonAbstract() {}     

         /* Getters and checker declarations for parameter retrieval with zero, one, and two indices */
         /* note: set check_antiparticle = SafeBool(false) to disable matching on antiparticle entries */
         virtual bool   has(const Par::Tags, const str&, SafeBool check_antiparticle = SafeBool(true)) const = 0;
         virtual double get(const Par::Tags, const str&, SafeBool check_antiparticle = SafeBool(true)) const = 0;
         virtual bool   has(const Par::Tags, const str&, int, SafeBool check_antiparticle = SafeBool(true)) const = 0;
         virtual double get(const Par::Tags, const str&, int, SafeBool check_antiparticle = SafeBool(true)) const = 0;
         virtual bool   has(const Par::Tags, const str&, int, int) const = 0;
         virtual double get(const Par::Tags, const str&, int, int) const = 0;

         /* Setter declarations, for setting parameters in a derived model object,
            and for overriding model object values with values stored outside
            the model object (for when values cannot be inserted back into the
            model object)
            Note; these are NON-CONST */
         virtual void set(const Par::Tags, const double, const str&, SafeBool check_antiparticle = SafeBool(true)) = 0;
         virtual void set(const Par::Tags, const double, const str&, int, SafeBool check_antiparticle = SafeBool(true)) = 0;
         virtual void set(const Par::Tags, const double, const str&, int, int) = 0;
   };
   
  
   /// Definition of struct to hold various override values for a given ParamTag
   struct OverrideMaps
   {    
      std::map<str,double>                             m0; // No indices
      std::map<str,std::map<int,double>>               m1; // One index
      std::map<str,std::map<int,std::map<int,double>>> m2; // Two indices
      /* e.g. retrieve like this: contents = m2[name][i][j]; */
   };

  
   /// Helper getter and checker functions for Spec class, just factored out into their own class.
   /// i.e. the PDG overloads, and functions which handle the override maps.
   class CommonFuncs: public virtual CommonAbstract
   {
      public:
         /// Need to explicitly introduce the functions from CommonAbstract into this
         /// context, since otherwise they get hidden by the ones with the same name
         /// declared here
         using CommonAbstract::has;
         using CommonAbstract::get;
 
         /// Map of override maps
         std::map<Par::Tags,OverrideMaps> override_maps;

         /// Initialiser function for override_maps
         static std::map<Par::Tags,OverrideMaps> create_override_maps();

         /// @{ Constructors/destructors
         CommonFuncs() : override_maps(create_override_maps()) {}      
         virtual ~CommonFuncs() {}
         /// @}

         /* The parameter overrides are handled entirely by this base class, so
            they are not virtual.  */
         void set_override(const Par::Tags, const double, const str&, const bool safety = true);
         void set_override(const Par::Tags, const double, const str&, const int, const bool safety = true);
         void set_override(const Par::Tags, const double, const str&, const int, const int, const bool safety = true);

         /* Helpers for override functions which take parameter names and indices as vectors, and
            loop over them, to make it easy to set many parameters to the same value.
            No two-index versions at the moment, but could be added if needed. */
         void set_override_vector(const Par::Tags, const double, const std::vector<str>&, bool safety = true);
         void set_override_vector(const Par::Tags, const double, const std::vector<str>&, const std::vector<int>, bool safety = true);
         void set_override_vector(const Par::Tags, const double, const std::vector<str>&, const int, bool safety = true);
         void set_override_vector(const Par::Tags, const double, const str&, const std::vector<int>, bool safety = true);

         /* Overloads of getter/checker functions to allow access using PDG codes */
         /* as defined in Models/src/particle_database.cpp */
         /* These don't have to be virtual; they just call the virtual functions in the end. */
         bool   has(const Par::Tags, const int, const int, SafeBool check_antiparticle = SafeBool(true)) const;     /* Input PDG code plus context integer */
         double get(const Par::Tags, const int, const int, SafeBool check_antiparticle = SafeBool(true)) const;     /* Input PDG code plus context integer */
         bool   has(const Par::Tags, const std::pair<int,int>, SafeBool check_antiparticle = SafeBool(true)) const; /* Input PDG code plus context integer */
         double get(const Par::Tags, const std::pair<int,int>, SafeBool check_antiparticle = SafeBool(true)) const; /* Input PDG code plus context integer */
         bool   has(const Par::Tags, const std::pair<str,int>, SafeBool check_antiparticle = SafeBool(true)) const; /* Input short name plus index */
         double get(const Par::Tags, const std::pair<str,int>, SafeBool check_antiparticle = SafeBool(true)) const; /* Input short name plus index */

         /// @{ PDB overloads for setters

         /* Input PDG code plus context integer */
         void set_override(const Par::Tags, const double, const int, const int,     const bool safety = true);  
         void set_override(const Par::Tags, const double, const std::pair<int,int>, const bool safety = true);

         /* Input short name plus index */
         void set_override(const Par::Tags, const double, const std::pair<str,int>, const bool safety = true);

         /// @}

         /// TODO: extra PDB overloads to handle all the one and two index cases (well all the ones that are feasible...)
   };

   /// Virtual base class for interacting with spectrum generator output
   // Includes facilities for running RGEs
   // This is the interface class that most module-writers see
   class SubSpectrum : public virtual CommonAbstract,
                       public virtual CommonFuncs
   {
      private:
         const std::map<int, int> empty_map;
     
      public:
   
         /// Clone the SubSpectrum object
         virtual std::unique_ptr<SubSpectrum> clone() const = 0;
      
         /// Dump out spectrum information to an SLHA file (if possible)
         virtual void getSLHA(const str&) const;

         /// Get spectrum information in SLHAea format (if possible)
         virtual SLHAstruct getSLHAea() const;

         /// Add spectrum information to an SLHAea object (if possible)
         virtual void add_to_SLHAea(SLHAstruct&) const {}
   
         /// PDG code translation map, for special cases where an SLHA file has been read in and the PDG codes changed.
         virtual const std::map<int, int>& PDG_translator() const { return empty_map; }

         /// Get integer offset convention used by internal model class (needed by getters which take indices) 
         virtual int get_index_offset() const { vfcn_error(LOCAL_INFO); return 0; }
      
         /// Constructors/destructors
         virtual ~SubSpectrum() {} 
   
         //Models::partmap& particle_database;
         /// new constructor.  Pass Models::ParticleDB() in as the third argument in all cases.  You will need to include partmap.hpp in order to be able to do this.
         //SubSpectrum(RunningPars& rp, Phys& p, Models::partmap& pdb) : phys(p), runningpars(rp), particle_database(pdb) {}
      
         /// Member object containing low-energy effective Standard Model parameters
         //SMLowEnergyEffective& SMeff;
   
         ///  returns the lightest stable particle (lsp) mass 
         ///   gives 3 integers to specify the state 
         ///  for most general case of a particle type with mass matrix 
         ///  row and col set to -1 when not needed 
         /// (row opmnly is used for vector)
         /// particle_type = 0 (neutralino), 1(Sneutrino), 2(up squark), 
         /// 3(down squarks), 4(charged slepton), 5(Chargino), 6(gluino)
         ///  Add more for 
         virtual double get_lsp_mass(int& /*particle_type*/, int& /*row*/, int& /*col*/) const { vfcn_error(LOCAL_INFO); return -1; }
         /// There may be more than one *new* stable particle
         ///  this method will tell you how many.
         /// If more than zero you probbaly *need* to know what model
         ///  you are working on, so we don't give all stable particles
         virtual int get_numbers_stable_particles() const { vfcn_error(LOCAL_INFO); return -1; }  
     
         /// Limits to RGE running; warning/error raised if running beyond these is attempted.
         /// If these aren't overridden in the derived class then effectively no limit on running will exist.
         /// These are public so that module writers can use them to check what the limits are.
         virtual double hard_upper() const {return DBL_MAX;}
         virtual double soft_upper() const {return DBL_MAX;}
         virtual double soft_lower() const {return 0.;}
         virtual double hard_lower() const {return 0.;}
    
         /// Functions to be overridden in classes derived from Spec<Derived> 
         /// (i.e. the final wrappers)
         /// Not actually called via SubSpectrum object directly; call via 
         /// SubSpectrum.runningpars()
         /// These virtual functions are here just to simplify the wrapper definitions.
         /// TODO: Can we hide these from the user? Currently won't compile unless these are public, but can perhaps add more friend declarations and make protected.

         /// Run spectrum to new scale
         virtual void RunToScaleOverride(double) { vfcn_error(LOCAL_INFO); }
         /// Returns the renormalisation scale of parameters
         virtual double GetScale() const { vfcn_error(LOCAL_INFO); return -1;}
         /// Manually set the renormalisation scale of parameters 
         /// somewhat dangerous to allow this but may be needed
         virtual void SetScale(double) { vfcn_error(LOCAL_INFO); }
 
         /// Run spectrum to a new scale
         /// This function is a wrapper for RunToScaleOverride which automatically checks limits and
         /// raises warnings.
         // Behaviour modified by "behave" integer:
         // behave = 0  -- If running beyond soft limit requested, halt at soft limit
         //                (assumes hard limits outside of soft limits; but this is not enforced)
         // behave = 1  -- If running beyond soft limit requested, throw warning
         //                  "           "   hard limit     "    , throw error
         // behave = anything else -- Ignore limits and attempt running to requested scale 
         void RunToScale(double scale, int behave = 0)
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
        
   };
  
} // end namespace Gambit

// Undef the various helper macros to avoid contaminating other files
#undef PDB

#endif
