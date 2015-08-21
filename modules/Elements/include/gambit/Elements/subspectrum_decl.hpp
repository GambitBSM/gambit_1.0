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

#ifndef __SubSpectrumDecl_hpp__
#define __SubSpectrumDecl_hpp__

#include <map>
#include <set>
#include <cfloat>
#include <sstream>

#include "gambit/Utils/cats.hpp"
#include "gambit/Utils/standalone_error_handlers.hpp"
#include "gambit/Models/partmap.hpp"

#include "SLHAea/slhaea.h"

// Particle database access
#define PDB Models::ParticleDB()        

namespace Gambit {

   /// Helper function for checking if indices are valid
   inline bool within_bounds(const int i, const std::set<int> allowed)
   {
     return ( allowed.find(i) != allowed.end() );
   }
   
   /// Helper macro for throwing errors in base class versions of virtual functions
   ///TODO: probably want a Gambit error here
   #define vfcn_error(local_info) \
     utils_error().forced_throw(local_info,"This virtual function (of SubSpectrum object) has not been overridden in the derived class!")
   
   /// @{ Macros for defining the old interface
   ///    These can be removed once all uses of the old interface have been removed

   /// Getter and checker overloads for easier interaction with particle database
   /// @{

   #define DECLARE_PDG_GETTERS(FUNC) \
      /* Overloads of getter/checker functions to allow access using PDG codes */ \
      /* as defined in Models/src/particle_database.cpp */ \
      /* These don't have to be virtual; they just call the virtual functions in the end. */ \
      bool   CAT(has_,FUNC)(const int, const int) const;     /* Input PDG code plus context integer */ \
      double CAT(get_,FUNC)(const int, const int) const;     /* Input PDG code plus context integer */ \
      bool   CAT(has_,FUNC)(const std::pair<int,int>) const; /* Input PDG code plus context integer */ \
      double CAT(get_,FUNC)(const std::pair<int,int>) const; /* Input PDG code plus context integer */ \
      bool   CAT(has_,FUNC)(const std::pair<str,int>) const; /* Input short name plus index */         \
      double CAT(get_,FUNC)(const std::pair<str,int>) const; /* Input short name plus index */
   
   #define DECLARE_GETTERS(FUNC,PARTYPE) \
      /* Getters and checker declarations for parameter retrieval with zero, one, and two indices */ \
      bool   CAT(has_,FUNC)(const std::string& name) const { return this->has(PARTYPE,name); } \
      double CAT(get_,FUNC)(const std::string& name) const { return this->get(PARTYPE,name); } \
      bool   CAT(has_,FUNC)(const std::string& name, int i) const { return this->has(PARTYPE,name,i); } \
      double CAT(get_,FUNC)(const std::string& name, int i) const { return this->get(PARTYPE,name,i); } \
      bool   CAT(has_,FUNC)(const std::string& name, int i, int j) const { return this->has(PARTYPE,name,i,j); } \
      double CAT(get_,FUNC)(const std::string& name, int i, int j) const { return this->get(PARTYPE,name,i,j); } \
      /* Might as well declare the PDG overloads at the same time */ \
      DECLARE_PDG_GETTERS(FUNC) \

  #define DECLARE_SETTERS(FUNC,PARTYPE) \
      /* Setter declarations, for setting parameters in a derived model object,
         and for overriding model object values with values stored outside
         the model object (for when values cannot be inserted back into the
         model object)
         Note; these are NON-CONST */ \
      void CAT(set_,FUNC)(const double v, const std::string& name) { return this->set(PARTYPE,v,name); } \
      void CAT(set_,FUNC)(const double v, const std::string& name, int i) { return this->set(PARTYPE,v,name,i); } \
      void CAT(set_,FUNC)(const double v, const std::string& name, int i, int j) { return this->set(PARTYPE,v,name,i,j); } \
      /* The parameter overrides are handled entirely by this base class, so
         they are not virtual.  */ \
      void CAT(set_override_,FUNC)(const double v, const std::string& name, bool safety = true) { return this->set_override(PARTYPE,v,name,safety); } \
      void CAT(set_override_,FUNC)(const double v, const std::string& name, int i, bool safety = true) { return this->set_override(PARTYPE,v,name,i,safety); } \
      void CAT(set_override_,FUNC)(const double v, const std::string& name, int i, int j, bool safety = true) { return this->set_override(PARTYPE,v,name,i,j,safety); } \
      /* TODO: Do we want PDG versions of these too? I guess so. */

   #define DEFINE_PDG_GETTERS(CLASS,FUNC)                                          \
      bool   CLASS::CAT(has_,FUNC)(const std::pair<str,int> shortpr) const  \
      {                                                                            \
        return CAT(has_,FUNC)(shortpr.first, shortpr.second);                      \
      }                                                                            \
      double CLASS::CAT(get_,FUNC)(const std::pair<str,int> shortpr) const  \
      {                                                                            \
        return CAT(get_,FUNC)(shortpr.first, shortpr.second);                      \
      }                                                                            \
                                                                                   \
      bool   CLASS::CAT(has_,FUNC)(const int pdg_code, const int context) const \
      {                                                                            \
         /* PDB context integer must be zero for pole mass retrieval
            (this is the context integer for mass eigenstate) */                   \
         return CAT(has_,FUNC)( std::make_pair(pdg_code,context) );                \
      }                                                                            \
      double CLASS::CAT(get_,FUNC)(const int pdg_code, const int context) const \
      {                                                                            \
         /* PDB context integer must be zero for pole mass retrieval
            (this is the context integer for mass eigenstate) */                   \
         return CAT(get_,FUNC)( std::make_pair(pdg_code,context) );                \
      }                                                                            \
                                                                                    \
      bool   CLASS::CAT(has_,FUNC)(const std::pair<int,int> pdgpr) const    \
      {                                                                            \
         /* If there is a short name, then retrieve that plus the index */         \
         if( Models::ParticleDB().has_short_name(pdgpr) )                          \
         {                                                                         \
           return CAT(has_,FUNC)( Models::ParticleDB().short_name_pair(pdgpr) );   \
         }                                                                         \
         else /* Use the long name with no index instead */                        \
         {                                                                         \
           return CAT(has_,FUNC)( Models::ParticleDB().long_name(pdgpr) );         \
         }                                                                         \
      }                                                                            \
      double CLASS::CAT(get_,FUNC)(const std::pair<int,int> pdgpr) const    \
      {                                                                            \
         /* If there is a short name, then retrieve that plus the index */         \
         if( Models::ParticleDB().has_short_name(pdgpr) )                          \
         {                                                                         \
           return CAT(get_,FUNC)( Models::ParticleDB().short_name_pair(pdgpr) );   \
         }                                                                         \
         else /* Use the long name with no index instead */                        \
         {                                                                         \
           return CAT(get_,FUNC)( Models::ParticleDB().long_name(pdgpr) );         \
         }                                                                         \
      } 
   /// @} 

   /// @}

   class SubSpectrum;
   class RunningPars;
   class Phys;
 
   /// List of parameter types used to classify spectrum contents
   namespace Par
   {
     enum Phys {
         Pole_Mass = 0,
         Pole_Mixing
     };
     enum Running {
         mass4 = 2,
         mass3,
         mass2,
         mass1,
         dimensionless,
         mass_eigenstate
      };

      /// Map from enum value to string, for error messages
      static std::map<int,std::string> fill_map()
      {
         std::map<int,std::string> name;
         name[Pole_Mass]       = "Pole_Mass";
         name[Pole_Mixing]     = "Pole_Mixing";
         name[mass4]           = "mass4";
         name[mass3]           = "mass3";
         name[mass2]           = "mass2";
         name[mass1]           = "mass1";
         name[dimensionless]   = "dimensionless";
         name[mass_eigenstate] = "mass4";
         return name;
      }
      static const std::map<int,std::string> toString = fill_map();
   }

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

   /// Virtual base class for interacting with spectrum generator output
   // Includes facilities for running RGEs
   class SubSpectrum {
      public:
         /// Dump out spectrum information to slha (if possible, and not including input parameters etc. just at the moment...)
         virtual void dump2slha(const std::string&) const { vfcn_error(LOCAL_INFO); }
   
         /// Clone the SubSpectrum object
         virtual std::unique_ptr<SubSpectrum> clone() const = 0;
      
         /// Get spectrum information in SLHAea format (if possible)
         SLHAea::Coll empty_SLHAea;  // never used; just to avoid "no return statement in function returning non-void" warnings
         virtual SLHAea::Coll getSLHAea() const { vfcn_error(LOCAL_INFO); return empty_SLHAea; }
   
         /// Get integer offset convention used by internal model class (needed by getters which take indices) 
         virtual int get_index_offset() const { vfcn_error(LOCAL_INFO); return 0; }
      
         /// Constructors/destructors
         SubSpectrum(RunningPars& rp, Phys& p) : phys(p), runningpars(rp) {}
         virtual ~SubSpectrum() {} 
   
         //Models::partmap& particle_database;
         /// new constructor.  Pass Models::ParticleDB() in as the third argument in all cases.  You will need to include partmap.hpp in order to be able to do this.
         //SubSpectrum(RunningPars& rp, Phys& p, Models::partmap& pdb) : phys(p), runningpars(rp), particle_database(pdb) {}
      
         /// Member objects containing physical and running parameters
         Phys& phys;
         RunningPars& runningpars;
   
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
         /// SubSpectrum.runningpars
         /// These virtual functions are here just to simplify the wrapper definitions.
   
         /// Run object to a particular scale
         virtual void RunToScale(double) { vfcn_error(LOCAL_INFO); }
         /// Returns the renormalisation scale of parameters
         virtual double GetScale() const { vfcn_error(LOCAL_INFO); return -1;}
         /// Manually set the renormalisation scale of parameters 
         /// somewhat dangerous to allow this but may be needed
         virtual void SetScale(double) { vfcn_error(LOCAL_INFO); }
         
   };
   
  
   /// Definition of struct to hold various override values for a given ParamTag
   struct OverrideMaps
   {    
      std::map<std::string,double>                             m0; // No indices
      std::map<std::string,std::map<int,double>>               m1; // One index
      std::map<std::string,std::map<int,std::map<int,double>>> m2; // Two indices
      /* e.g. retrieve like this: contents = m2[name][i][j]; */
   };

   /// Member functions common to both RunningPars and Phys
   /// Uses ParamType template parameter to allow checking of which parameter enum
   /// the ParamType arguments come from.
   template <class ParamType>
   class CommonAbstract
   { 
      public:
         /// Constructors/destructors
         CommonAbstract() {}
         virtual ~CommonAbstract() {}      

         /* Getters and checker declarations for parameter retrieval with zero, one, and two indices */
         virtual bool   has(const ParamType, const std::string&) const = 0;
         virtual double get(const ParamType, const std::string&) const = 0;
         virtual bool   has(const ParamType, const std::string&, int) const = 0;
         virtual double get(const ParamType, const std::string&, int) const = 0;
         virtual bool   has(const ParamType, const std::string&, int, int) const = 0;
         virtual double get(const ParamType, const std::string&, int, int) const = 0;

         /* Setter declarations, for setting parameters in a derived model object,
            and for overriding model object values with values stored outside
            the model object (for when values cannot be inserted back into the
            model object)
            Note; these are NON-CONST */
         virtual void set(const ParamType, const double, const std::string&) = 0;
         virtual void set(const ParamType, const double, const std::string&, int) = 0;
         virtual void set(const ParamType, const double, const std::string&, int, int) = 0;
   };
 
   /// More functions shared by both Phys and RunningPars classes, but none of which need to be
   /// overridden in derived classed. These define the set_override functions which allow "masking" of
   /// any spectrum contents with user-input values.
   template <class ParamType>
   class CommonFuncs: public virtual CommonAbstract<ParamType>
   {
      public:
         /// Need to explicitly introduce the functions from CommonAbstract into this
         /// context, since otherwise they get hidden by the ones with the same name 
         /// declared here
         using CommonAbstract<ParamType>::has;
         using CommonAbstract<ParamType>::get;

         CommonFuncs(const std::string& cname, const std::map<ParamType,OverrideMaps>& override_maps) 
           : classname(cname)
           , get_override_maps(override_maps) 
         {}
         virtual ~CommonFuncs() {}

         std::string classname;
         std::map<ParamType,OverrideMaps> get_override_maps;
 
         /* The parameter overrides are handled entirely by this base class, so
            they are not virtual.  */
         void set_override(const ParamType, const double, const std::string&, bool safety = true);
         void set_override(const ParamType, const double, const std::string&, int, bool safety = true);
         void set_override(const ParamType, const double, const std::string&, int, int, bool safety = true);

         /* Overloads of getter/checker functions to allow access using PDG codes */
         /* as defined in Models/src/particle_database.cpp */
         /* These don't have to be virtual; they just call the virtual functions in the end. */
         bool   has(const ParamType, const int, const int) const;     /* Input PDG code plus context integer */
         double get(const ParamType, const int, const int) const;     /* Input PDG code plus context integer */
         bool   has(const ParamType, const std::pair<int,int>) const; /* Input PDG code plus context integer */
         double get(const ParamType, const std::pair<int,int>) const; /* Input PDG code plus context integer */
         bool   has(const ParamType, const std::pair<str,int>) const; /* Input short name plus index */
         double get(const ParamType, const std::pair<str,int>) const; /* Input short name plus index */

         /// TODO: extra PDB overloads to handle all the one and two index cases (well all the ones that are feasible...)
   };
 
   class RunningPars: public CommonFuncs<Par::Running>
   {
      private:
         /// Run object to a particular scale
         // Override this function in derived class to perform running
         virtual void RunToScaleOverride(double) = 0;
      public:
         /// Constructors/destructors
         RunningPars() 
           : CommonFuncs<Par::Running>("RunningPars",create_override_maps())
         {}
         virtual ~RunningPars() {}      

         typedef Par::Running ParamType; // Used by CommonAbstract to determine which entries of Par are permitted
  
         /// Wrapper for RunToScaleOverload which automatically checks limits and
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
   
         /// returns the renormalisation scale of parameters
         virtual double GetScale() const = 0; 
         /// Sets the renormalisation scale of parameters 
         /// somewhat dangerous to allow this but may be needed
         virtual void SetScale(double) = 0;
        
         /// Default limits to RGE running; warning/error raised if running beyond these is attempted.
         // If these aren't overridden in the derived class then effectively no limit on running will exist.
         virtual double hard_upper() const = 0; 
         virtual double soft_upper() const = 0; 
         virtual double soft_lower() const = 0; 
         virtual double hard_lower() const = 0; 

         /// Create empty override maps, themselves stored in a map
         static std::map<ParamType,OverrideMaps> create_override_maps()
         {
            std::map<ParamType,OverrideMaps> tmp;
            tmp[Par::mass4];
            tmp[Par::mass3];
            tmp[Par::mass2];
            tmp[Par::mass1];
            tmp[Par::dimensionless];
            tmp[Par::mass_eigenstate];
            return tmp;
         }

         /// @{ Old interface; remove eventually

         /// getters using map (and "checkers")
	 DECLARE_GETTERS(mass4_parameter,Par::mass4)
	 DECLARE_GETTERS(mass3_parameter,Par::mass3)
	 DECLARE_GETTERS(mass2_parameter,Par::mass2)
	 DECLARE_GETTERS(mass_parameter,Par::mass1)
	 DECLARE_GETTERS(dimensionless_parameter,Par::dimensionless)
	 DECLARE_GETTERS(mass_eigenstate,Par::mass_eigenstate)
	
	 /// setters (and parameter overrides)
	 DECLARE_SETTERS(mass4_parameter,Par::mass4)
	 DECLARE_SETTERS(mass3_parameter,Par::mass3)
	 DECLARE_SETTERS(mass2_parameter,Par::mass2)
	 DECLARE_SETTERS(mass_parameter,Par::mass1)
	 DECLARE_SETTERS(dimensionless_parameter,Par::dimensionless)
	 DECLARE_SETTERS(mass_eigenstate,Par::mass_eigenstate)
         /// @}
   };

   class Phys: public CommonFuncs<Par::Phys>
   {
      public: 
         /// Constructors/destructors
         Phys()
           : CommonFuncs<Par::Phys>("Phys",create_override_maps())
         {}
         virtual ~Phys() {}      
 
         typedef Par::Phys ParamType; // Used by CommonAbstract to determine which entries of Par are permitted

         /// Create empty override maps, themselves stored in a map
         static std::map<ParamType,OverrideMaps> create_override_maps()
         {
            std::map<ParamType,OverrideMaps> tmp;
            tmp[Par::Pole_Mass];
            tmp[Par::Pole_Mixing];
            return tmp;
         }

         /// @{ Old interface; remove eventually

         /// getters using map (and "checkers")
	 DECLARE_GETTERS(Pole_Mass,Par::Pole_Mass)
	 DECLARE_GETTERS(Pole_Mixing,Par::Pole_Mixing)
	
	 /// setters (and parameter overrides)
	 DECLARE_SETTERS(Pole_Mass,Par::Pole_Mass)
	 DECLARE_SETTERS(Pole_Mixing,Par::Pole_Mixing)
         /// @}
   };
   
   /// =====================================================
   
   
   /// Structs to hold function pointers and valid index sets
   /// @{
   
   template <class Fptr>
   struct FcnInfo1
   {
       Fptr fptr; 
       std::set<int> iset1;   
       FcnInfo1() {}
       FcnInfo1(Fptr p, std::set<int> s)
         : fptr(p)
         , iset1(s)
       {}
   };
   
   template <class Fptr>
   struct FcnInfo2
   {
       Fptr fptr; 
       std::set<int> iset1;   
       std::set<int> iset2;
       FcnInfo2() {}
       FcnInfo2(Fptr p, std::set<int> s1, std::set<int> s2)
         : fptr(p)
         , iset1(s1)
         , iset2(s2)
       {}
   };
   
   /// @}
   
   /// @{ Traits structs for function pointer maps
   /// Get the types like this: MapTypes<WrapTraits,MapTag::Get>::fmap
   ///                 or this: MapTypes<WrapTraits,MapTag::Set>::fmap
  
   /// Tags
   struct MapTag {
     struct Get {};
     struct Set {};
   };

   /// Fully unspecialised MapTypes declaration
   template <class DerivedSpecTraits, class GetOrSet>
   struct MapTypes;

   /// Types needed for function pointer maps
   /// Partial specialisation for "getter" maps
   template <class DerivedSpecTraits>
   struct MapTypes<DerivedSpecTraits, MapTag::Get>
   {
      // Typedef collection
      typedef typename DerivedSpecTraits::Model Model;
      typedef typename DerivedSpecTraits::Input Input;
      typedef double(Model::*FSptr)(void) const; /* Function pointer signature for Model object member functions with no arguments */
      typedef double(Model::*FSptr1)(int) const; /* Function pointer signature for Model object member functions with one argument */
      typedef double(Model::*FSptr2)(int,int) const; /* Function pointer signature for Model object member functions with two arguments */
      typedef double(*plainfptrM)(const Model&); /* Function pointer for plain functions; used for custom functions */
      typedef double(*plainfptrM1)(const Model&,int); /* ... with one index */
      typedef double(*plainfptrM2)(const Model&,int,int); /* ... with two indices */
      typedef double(*plainfptrI)(const Input&);     /* Function pointer for plain functions; used for custom functions */
      typedef double(*plainfptrI1)(const Input&,int); /* ... with one index */
      typedef double(*plainfptrI2)(const Input&,int,int); /* with two indices */
      typedef FcnInfo1<FSptr1> FInfo1; // Structs to help specify valid indices for functions
      typedef FcnInfo2<FSptr2> FInfo2; //    "              " 
      typedef FcnInfo1<plainfptrM1> FInfo1M; //    "              " 
      typedef FcnInfo2<plainfptrM2> FInfo2M; //    "              " 
      typedef FcnInfo1<plainfptrI1> FInfo1I; //    "              " 
      typedef FcnInfo2<plainfptrI2> FInfo2I; //    "              " 
      typedef std::map<std::string, FSptr> fmap0; /* Typedef for map of strings to function pointers */
      typedef std::map<std::string, FInfo1> fmap1;/*with an index*/
      typedef std::map<std::string, FInfo2> fmap2; /*with 2 indices */
      typedef std::map<std::string, plainfptrM> fmap0_extraM;  /* map of plain function pointers */
      typedef std::map<std::string, FInfo1M> fmap1_extraM;  /* map of plain function pointers */
      typedef std::map<std::string, FInfo2M> fmap2_extraM;  /* map of plain function pointers */
      typedef std::map<std::string, plainfptrI> fmap0_extraI; /* map of plain function pointers */
      typedef std::map<std::string, FInfo1I> fmap1_extraI; /* map of plain function pointers */
      typedef std::map<std::string, FInfo2I> fmap2_extraI; /* map of plain function pointers */
   };

   /// Types needed for function pointer maps
   /// Partial specialisation for "setter" maps
   template <class DerivedSpecTraits>
   struct MapTypes<DerivedSpecTraits, MapTag::Set>
   {
      // Typedef collection
      typedef typename DerivedSpecTraits::Model Model;
      typedef typename DerivedSpecTraits::Input Input;
      typedef void(Model::*FSptr)(double); /* Function pointer signature for Model object member functions with no arguments */
      typedef void(Model::*FSptr1)(int,double); /* Function pointer signature for Model object member functions with one argument */
      typedef void(Model::*FSptr2)(int,int,double); /* Function pointer signature for Model object member functions with two arguments */
      typedef void(*plainfptrM)(Model&, double); /* Function pointer for plain functions; used for custom functions */
      typedef void(*plainfptrM1)(Model&, double, int); /* Function pointer for plain functions; used for custom functions */
      typedef void(*plainfptrM2)(Model&, double, int, int); /* Function pointer for plain functions; used for custom functions */
      typedef void(*plainfptrI)(Input&, double); /* Function pointer for plain functions; used for custom functions */
      typedef void(*plainfptrI1)(Input&, double, int); /* Function pointer for plain functions; used for custom functions */
      typedef void(*plainfptrI2)(Input&, double, int, int); /* Function pointer for plain functions; used for custom functions */
      typedef FcnInfo1<FSptr1> FInfo1; // Structs to help specify valid indices for functions
      typedef FcnInfo2<FSptr2> FInfo2; //    "              " 
      typedef FcnInfo1<plainfptrM1> FInfo1M; //    "              " 
      typedef FcnInfo2<plainfptrM2> FInfo2M; //    "              " 
      typedef FcnInfo1<plainfptrI1> FInfo1I; //    "              " 
      typedef FcnInfo2<plainfptrI2> FInfo2I; //    "              " 
      typedef std::map<std::string, FSptr> fmap0; /* Typedef for map of strings to function pointers */
      typedef std::map<std::string, FInfo1> fmap1;/*with an index*/
      typedef std::map<std::string, FInfo2> fmap2; /*with 2 indices */
      typedef std::map<std::string, plainfptrM> fmap0_extraM;  /* map of plain function pointers */
      typedef std::map<std::string, FInfo1M> fmap1_extraM;  /* map of plain function pointers */
      typedef std::map<std::string, FInfo2M> fmap2_extraM;  /* map of plain function pointers */
      typedef std::map<std::string, plainfptrI> fmap0_extraI; /* map of plain function pointers */
      typedef std::map<std::string, FInfo1I> fmap1_extraI; /* map of plain function pointers */
      typedef std::map<std::string, FInfo2I> fmap2_extraI; /* map of plain function pointers */
   };

   /// @}
   
   /// Need to forward declare Spec class
   template <class, class>
   class Spec;

   /// Forward declarations related to FptrFinder class
   template<class,class,class> class SetMaps;
   template<class,class,class> class FptrFinder;  
   template<class,class,class> class CallFcn;  
  
   /// Class containing member functions common to both RunparDer and PhysDer.
   /// This is the equivalent of CommonAbstract, but now it knows about the wrapper
   /// class via the CRTP, and this time we will actually define these functions
   /// (previously we just defined the interface)
   ///
   /// Potential point of confusion; we derive virtually from CommonAbstract, because
   /// both PhysDer and RunparDer will have CommonAbstract in their inheritance tree
   /// already. So when e.g. PhysDer uses multiple inheritance to pull in these
   /// function definitions, we get a diamond shaped inheritance. This should be
   /// fine since CommonAbstract just defines an abstract interface, but to ensure
   /// only one copy of it exists when the most derived class is constructed, we
   /// use the virtual keyword here. Anyway that is how I think this should work.
   /// Note that a class singlely derived from CommonDer will not be constructable,
   /// but that is no problem in the usage here.
   ///
   /// Need to make sure that the template parameter to CommonAbstract matches across all
   /// uses in the inheritance tree, so that the virtual function overrides match
   /// correctly. Unfortunately we cannot extract this type from PhysOrRun either, due
   /// to some template instantiation order voodoo, so we pass it as a second
   /// template parameter.
   template <class PhysOrRun, class ParamType>
   class CommonDer : public virtual CommonAbstract<ParamType>
   {
      public:

         /* Getters and checker declarations for parameter retrieval with zero, one, and two indices */
         bool   has(const ParamType, const std::string&) const;
         double get(const ParamType, const std::string&) const;
         bool   has(const ParamType, const std::string&, int) const;
         double get(const ParamType, const std::string&, int) const;
         bool   has(const ParamType, const std::string&, int, int) const;
         double get(const ParamType, const std::string&, int, int) const;

         /* Setter declarations, for setting parameters in a derived model object,
            and for overriding model object values with values stored outside
            the model object (for when values cannot be inserted back into the
            model object)
            Note; these are NON-CONST */
         void set(const ParamType, const double, const std::string&);
         void set(const ParamType, const double, const std::string&, int);
         void set(const ParamType, const double, const std::string&, int, int);
   };

 
   template <class DerivedSpec, class DerivedSpecTraits>
   class PhysDer : public Phys,
                   public CommonDer<PhysDer<DerivedSpec,DerivedSpecTraits>, Par::Phys>
   {
      public:
         typedef DerivedSpec D;
         typedef DerivedSpecTraits DT;
         typedef PhysDer<D,DT> Self;
         typedef MapTypes<DT,MapTag::Get> MTget; 
         typedef MapTypes<DT,MapTag::Set> MTset; 
         typedef Par::Phys ParamType;
         friend class CommonDer<PhysDer<DerivedSpec,DerivedSpecTraits>, Par::Phys>; // base class
         friend class Spec<D,DT>;
         friend class FptrFinder<DT,Self,MapTag::Get>;
         friend class FptrFinder<DT,Self,MapTag::Set>;
         friend class CallFcn<DT,Self,MapTag::Get>;
         friend class CallFcn<DT,Self,MapTag::Set>;
  
      protected:
         /// Needed for access to "parent" object member functions
         /// Needs to be protected so that derived classes can access it
         Spec<D,DT>& parent;
   
         /// Will need a map of map collections for both the getters and setters,
         /// containing the map collections for the permitted parameter types
         static const std::map<ParamType,MapCollection<MTget>> getter_maps;
         static const std::map<ParamType,MapCollection<MTset>> setter_maps;

         // Note the function calls D::fill_maps<MTget>(). The D:: causes the *derived* class
         // version of this filler function to be called. So in order to fill the maps with
         // information, these specialisations of the filler functions are what must over
         // overriden in the derived ("wrapper") classes.
 
      public:
         // During construction, link the object to its "parent"
         PhysDer(Spec<D,DT>& s) : parent(s) {}
         virtual ~PhysDer() {}    

   };
   /// Initialise maps (using filler overrides from DerivedSpec if defined)
   template <class D, class DT>
   const std::map<Par::Phys,MapCollection<typename PhysDer<D,DT>::MTget>> 
             PhysDer<D,DT>::getter_maps(D::phys_fill_getter_maps());

   template <class D, class DT>
   const std::map<Par::Phys,MapCollection<typename PhysDer<D,DT>::MTset>> 
             PhysDer<D,DT>::setter_maps(D::phys_fill_setter_maps());

   // Note the function calls D::fill_getter_maps(). The D:: causes the DerivedSpec 
   // version of this filler function to be called. So in order to fill the maps with
   // information, these filler functions are what must over overriden in the derived 
   // ("wrapper") classes.
 
 
   template <class DerivedSpec, class DerivedSpecTraits>
   class RunparDer : public RunningPars,
                     public CommonDer<RunparDer<DerivedSpec,DerivedSpecTraits>, Par::Running>
   {
      public:
         typedef DerivedSpec D;
         typedef DerivedSpecTraits DT;
         typedef RunparDer<D,DT> Self;
         typedef MapTypes<DT,MapTag::Get> MTget; 
         typedef MapTypes<DT,MapTag::Set> MTset; 
         typedef Par::Running ParamType;
         friend class CommonDer<RunparDer<DerivedSpec,DerivedSpecTraits>, Par::Running>; // base class
         friend class Spec<D,DT>;
         friend class FptrFinder<DT,Self,MapTag::Get>;
         friend class FptrFinder<DT,Self,MapTag::Set>;
         friend class CallFcn<DT,Self,MapTag::Get>;
         friend class CallFcn<DT,Self,MapTag::Set>;

      protected:
         /// Needed for access to "parent" object member functions
         /// Needs to be protected so that derived classes can access it
         Spec<D,DT>& parent;
   
         /// Will need a map of map collections for both the getters and setters,
         /// containing the map collections for the permitted parameter types
         static const std::map<ParamType,MapCollection<MTget>> getter_maps;
         static const std::map<ParamType,MapCollection<MTset>> setter_maps;

         // Note the function calls D::fill_maps<MTget>(). The D:: causes the *derived* class
         // version of this filler function to be called. So in order to fill the maps with
         // information, these specialisations of the filler functions are what must over
         // overriden in the derived ("wrapper") classes.

      public:
         // During construction, link the object to its "parent"
         RunparDer(Spec<D,DT>& s) : parent(s) {}
         virtual ~RunparDer() {}
   
         /// Functions to connect to overrides defined in classes derived from SubSpectrum
         virtual void   RunToScaleOverride(double scale) { parent.RunToScale(scale); }
         virtual double GetScale() const       { return parent.GetScale(); }
         virtual void   SetScale(double scale) { parent.SetScale(scale); }
         virtual double hard_upper() const { return parent.hard_upper(); }
         virtual double soft_upper() const { return parent.soft_upper(); }
         virtual double soft_lower() const { return parent.soft_lower(); }
         virtual double hard_lower() const { return parent.hard_lower(); }
    
   };
   /// Initialise maps (using filler overrides from DerivedSpec if defined)
   template <class D, class DT>
   const std::map<Par::Running,MapCollection<typename RunparDer<D,DT>::MTget>> 
             RunparDer<D,DT>::getter_maps(D::runningpars_fill_getter_maps());

   template <class D, class DT>
   const std::map<Par::Running,MapCollection<typename RunparDer<D,DT>::MTset>> 
             RunparDer<D,DT>::setter_maps(D::runningpars_fill_setter_maps());

   // Note the function calls D::fill_getter_maps(). The D:: causes the DerivedSpec 
   // version of this filler function to be called. So in order to fill the maps with
   // information, these filler functions are what must over overriden in the derived 

   
   // CRTP used to allow access to some special data members of the derived class.
   template <class DerivedSpec, class DerivedSpecTraits>
   class Spec : public SubSpectrum
   { 
      private:
         typedef DerivedSpec D;
         typedef DerivedSpecTraits DT;
         friend class RunparDer<D,DT>;
         friend class PhysDer<D,DT>;
    
      public:
         typedef MapTypes<DT,MapTag::Get> MTget; 
         typedef MapTypes<DT,MapTag::Set> MTset; 

      private:   
  
         /// Note: DerivedSpecTraits will need to typedef Model and Input
         /// Also make sure to initialise the members "model" and "input" in the 
         /// derived class via this class's full constructor.
         /// "Grab" these typedefs here to simplify notation
         typedef typename DT::Model Model;
         typedef typename DT::Input Input;
   
         /// Internal instances of specialised running and physical parameter classes   
         RunparDer<D,DT> rp;
         PhysDer<D,DT> pp;
         /// Model object on which to call function pointers
         Model* model; 
         /// Contains extra data input on SubSpectrum object creation
         Input* input;
     
      protected:
         /// @{ Map filler functions
         /// Override as needed in derived classes

         /// Filler for RunparDer
         static const std::map<Par::Running,MapCollection<MTget>> runningpars_fill_getter_maps()
         {     
            std::map<Par::Running,MapCollection<MTget>> tmp;
            tmp[Par::mass4];             // mass dimension 4 quantities           
            tmp[Par::mass3];             //   "     "      3     "
            tmp[Par::mass2];             //   "     "      2     "
            tmp[Par::mass1];             //   "     "      3     "
            tmp[Par::dimensionless];     // dimensionless quantities
            tmp[Par::mass_eigenstate];   // tree level mass parameters
            return tmp;
         }
         static const std::map<Par::Running,MapCollection<MTset>> runningpars_fill_setter_maps()
         {     
            std::map<Par::Running,MapCollection<MTset>> tmp;
            tmp[Par::mass4];             // mass dimension 4 quantities           
            tmp[Par::mass3];             //   "     "      3     "
            tmp[Par::mass2];             //   "     "      2     "
            tmp[Par::mass1];             //   "     "      3     "
            tmp[Par::dimensionless];     // dimensionless quantities
            tmp[Par::mass_eigenstate];   // tree level mass parameters
            return tmp;
         }

         /// Fillers for PhysDer
         static const std::map<Par::Phys,MapCollection<MTget>> phys_fill_getter_maps()
         {     
            std::map<Par::Phys,MapCollection<MTget>> tmp;
            tmp[Par::Pole_Mass];          // Pole masses
            tmp[Par::Pole_Mixing];        // Pole mass mixing parameters
            return tmp;
         }
         static const std::map<Par::Phys,MapCollection<MTset>> phys_fill_setter_maps()
         {     
            std::map<Par::Phys,MapCollection<MTset>> tmp;
            tmp[Par::Pole_Mass];          // Pole masses
            tmp[Par::Pole_Mixing];        // Pole mass mixing parameters
            return tmp;
         }
         /// @}
         
      public: 
         /// Minimal constructor used in default constructors of derived classes
         /// Assumes that "Model" and "Input" classes have default constructors
         Spec()
           : SubSpectrum(rp,pp)
           , rp(*this)
           , pp(*this)
           , model()
           , input()
         {}
      
         /// Constructor initialising just "model" member (Input unused (e.g. no special computations))
         Spec(Model& m)
           : SubSpectrum(rp,pp)
           , rp(*this)
           , pp(*this)
           , model(&m)
           , input()
         {}
      
         /// Constructor initialising just "input" member (Model unused (e.g. no RGEs))
         Spec(Input& i)
           : SubSpectrum(rp,pp)
           , rp(*this)
           , pp(*this)
           , model()
           , input(&i)
         {}
      
         /// Full constructor
         Spec(Model& m, Input& i)
           : SubSpectrum(rp,pp)
           , rp(*this)
           , pp(*this)
           , model(&m)
           , input(&i)
         {}
     
         Model* get_Model(){ return model; } 
         Input* get_Input(){ return input; }

 
         /// CRTP-style polymorphic clone function
         /// Now derived classes will not need to re-implement the clone function.
         virtual std::unique_ptr<SubSpectrum> clone() const       
         {
           return std::unique_ptr<SubSpectrum>(
              new DerivedSpec(static_cast<DerivedSpec const &>(*this))
              );
         }
       
   };
  
   /// Dummy classes to satisfy template parameters for Spec class in cases when those objects
   /// are not needed by the getters.
   class DummyModel {};
   class DummyInput {};

} // end namespace Gambit

// Undef the various helper macros to avoid contaminating other files
#undef PDB

#endif
