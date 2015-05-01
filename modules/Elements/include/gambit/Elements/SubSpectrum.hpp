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
///  \date 2014, 2015 Jan, Feb, Mar 
///
///  *********************************************

#ifndef __SubSpectrum_hpp__
#define __SubSpectrum_hpp__

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

/// TODO: All the errors in this file should be made into proper Gambit warnings I think.
///       They are a bit too "weak" at the moment; we really should stop everything when most of them occur.

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
   
   ///Note: (Ben) I have extracted these classes from the SubSpectrum class, so they are no longer nested.
   ///            I did this because there are no special access rights to nested classes in C++03, and
   ///            while there *are* in C++11, I don't know what compilers support this, and we were
   ///            already declaring the relevant classes as friends anyway. So to make this header less
   ///            confusing (I hope) I have just defined these classes in the host namespace separately.
   class SubSpectrum;
   class RunningPars;
   class Phys;
   
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
    
      protected:
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
   
   /// Getter and checker overloads for easier interaction with particle database
   /// @{
   
   #define DECLARE_PDG_GETTERS(FUNC) \
      /* Overloads of these functions to allow access using PDG codes */ \
      /* as defined in Models/src/particle_database.cpp */ \
      /* These don't have to be virtual; they just call the virtual functions in the end. */ \
      bool   CAT(has_,FUNC)(const int, const int) const;     /* Input PDG code plus context integer */ \
      double CAT(get_,FUNC)(const int, const int) const;     /* Input PDG code plus context integer */ \
      bool   CAT(has_,FUNC)(const std::pair<int,int>) const; /* Input PDG code plus context integer */ \
      double CAT(get_,FUNC)(const std::pair<int,int>) const; /* Input PDG code plus context integer */ \
      bool   CAT(has_,FUNC)(const std::pair<str,int>) const; /* Input short name plus index */         \
      double CAT(get_,FUNC)(const std::pair<str,int>) const; /* Input short name plus index */
   
   #define DEFINE_PDG_GETTERS(CLASS,FUNC)                                          \
      inline bool   CLASS::CAT(has_,FUNC)(const std::pair<str,int> shortpr) const  \
      {                                                                            \
        return CAT(has_,FUNC)(shortpr.first, shortpr.second);                      \
      }                                                                            \
      inline double CLASS::CAT(get_,FUNC)(const std::pair<str,int> shortpr) const  \
      {                                                                            \
        return CAT(get_,FUNC)(shortpr.first, shortpr.second);                      \
      }                                                                            \
                                                                                   \
      inline bool   CLASS::CAT(has_,FUNC)(const int pdg_code, const int context) const \
      {                                                                            \
         /* PDB context integer must be zero for pole mass retrieval               \
            (this is the context integer for mass eigenstate) */                   \
         return CAT(has_,FUNC)( std::make_pair(pdg_code,context) );                \
      }                                                                            \
      inline double CLASS::CAT(get_,FUNC)(const int pdg_code, const int context) const \
      {                                                                            \
         /* PDB context integer must be zero for pole mass retrieval               \
            (this is the context integer for mass eigenstate) */                   \
         return CAT(get_,FUNC)( std::make_pair(pdg_code,context) );                \
      }                                                                            \
                                                                                    \
      inline bool   CLASS::CAT(has_,FUNC)(const std::pair<int,int> pdgpr) const    \
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
      inline double CLASS::CAT(get_,FUNC)(const std::pair<int,int> pdgpr) const    \
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
   
   class RunningPars 
   {
      private:
         /// Run object to a particular scale
         // Override this function in derived class to perform running
         virtual void RunToScaleOverride(double) = 0;
      public:
         /// Constructors/destructors
         RunningPars() {}
         virtual ~RunningPars() {}      
   
         /// Wrapper for RunToScaleOverload which automatically checks limits and
         /// raises warnings.
         // Behaviour modified by "behave" integer:
         // behave = 0  -- If running beyond soft limit requested, halt at soft limit
         //                (assumes hard limits outside of soft limits; but this is not enforced)
         // behave = 1  -- If running beyond soft limit requested, throw warning
         //                  "           "   hard limit     "    , throw error
         // behave = anything else -- Ignore limits and attempt running to requested scale 
         void RunToScale(double scale, int behave=0)
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
    
         /// getters using map (and "checkers")
         virtual bool   has_mass4_parameter(const std::string&) const = 0;
         virtual double get_mass4_parameter(const std::string&) const = 0;
         virtual bool   has_mass4_parameter(const std::string&, int) const = 0;
         virtual double get_mass4_parameter(const std::string&, int) const = 0;
         virtual bool   has_mass4_parameter(const std::string&, int, int) const = 0;
         virtual double get_mass4_parameter(const std::string&, int, int) const = 0;
         virtual bool   has_mass3_parameter(const std::string&) const = 0;
         virtual double get_mass3_parameter(const std::string&) const = 0;
         virtual bool   has_mass3_parameter(const std::string&, int) const = 0;
         virtual double get_mass3_parameter(const std::string&, int) const = 0;
         virtual bool   has_mass3_parameter(const std::string&, int, int) const = 0;
         virtual double get_mass3_parameter(const std::string&, int, int) const = 0;
         virtual bool   has_mass2_parameter(const std::string&) const = 0;
         virtual double get_mass2_parameter(const std::string&) const = 0;
         virtual bool   has_mass2_parameter(const std::string&, int) const = 0;
         virtual double get_mass2_parameter(const std::string&, int) const = 0;
         virtual bool   has_mass2_parameter(const std::string&, int, int) const = 0;
         virtual double get_mass2_parameter(const std::string&, int, int) const = 0;
         virtual bool   has_mass_parameter(const std::string&) const = 0;
         virtual double get_mass_parameter(const std::string&) const = 0;
         virtual bool   has_mass_parameter(const std::string&, int) const = 0;
         virtual double get_mass_parameter(const std::string&, int) const = 0;
         virtual bool   has_mass_parameter(const std::string&, int, int) const = 0;
         virtual double get_mass_parameter(const std::string&, int, int) const = 0;
         virtual bool   has_dimensionless_parameter(const std::string&) const = 0;
         virtual double get_dimensionless_parameter(const std::string&) const = 0;
         virtual bool   has_dimensionless_parameter(const std::string&, int) const = 0;
         virtual double get_dimensionless_parameter(const std::string&, int) const = 0;
         virtual bool   has_dimensionless_parameter(const std::string&, int, int) const = 0;
         virtual double get_dimensionless_parameter(const std::string&, int, int) const = 0;
         virtual bool   has_mass_eigenstate(const std::string&) const = 0;
         virtual double get_mass_eigenstate(const std::string&) const = 0;
         virtual bool   has_mass_eigenstate(const std::string&, int) const = 0;
         virtual double get_mass_eigenstate(const std::string&, int) const = 0;
         virtual bool   has_mass_eigenstate(const std::string&, int, int) const = 0;
         virtual double get_mass_eigenstate(const std::string&, int, int) const = 0;
   
         DECLARE_PDG_GETTERS(mass4_parameter)
         DECLARE_PDG_GETTERS(mass3_parameter)
         DECLARE_PDG_GETTERS(mass2_parameter)
         DECLARE_PDG_GETTERS(mass_parameter)
         DECLARE_PDG_GETTERS(dimensionless_parameter)
         DECLARE_PDG_GETTERS(mass_eigenstate)
   };
   DEFINE_PDG_GETTERS(RunningPars,mass_parameter)
   DEFINE_PDG_GETTERS(RunningPars,mass2_parameter)
   DEFINE_PDG_GETTERS(RunningPars,mass3_parameter)
   DEFINE_PDG_GETTERS(RunningPars,mass4_parameter)
   DEFINE_PDG_GETTERS(RunningPars,dimensionless_parameter)
   DEFINE_PDG_GETTERS(RunningPars,mass_eigenstate)
   
   class Phys 
   {
      public: 
         /// Constructors/destructors
         Phys() {}
         virtual ~Phys() {}      
   
         /// map based getters
         virtual bool   has_Pole_Mass(const std::string&) const = 0;
         virtual double get_Pole_Mass(const std::string&) const = 0;
         virtual bool   has_Pole_Mass(const std::string&, int) const = 0;
         virtual double get_Pole_Mass(const std::string&, int) const = 0;
         virtual bool   has_Pole_Mixing(const std::string&) const = 0;
         virtual double get_Pole_Mixing(const std::string&) const = 0;
         virtual bool   has_Pole_Mixing(const std::string&, int) const = 0;
         virtual double get_Pole_Mixing(const std::string&, int) const = 0;
         virtual bool   has_Pole_Mixing(const std::string&, int, int) const = 0;
         virtual double get_Pole_Mixing(const std::string&, int, int) const = 0;
   
         DECLARE_PDG_GETTERS(Pole_Mass)
         DECLARE_PDG_GETTERS(Pole_Mixing)
   };
   DEFINE_PDG_GETTERS(Phys,Pole_Mass)
   DEFINE_PDG_GETTERS(Phys,Pole_Mixing)
   
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
   /// Get the types like this: MapTypes<WrapTraits>::fmap
   
   /// Types needed for "normal" function pointer maps
   /// i.e. maps containing pointers to member functions of Model
   template <class DerivedSpecTraits>
   struct MapTypes
   {
      // Typedef collection
      typedef typename DerivedSpecTraits::Model Model;
      typedef typename DerivedSpecTraits::Input Input;
      typedef double(Model::*FSptr)(void) const; /* Function pointer signature for Model object member functions with no arguments */
      typedef double(Model::*FSptr1)(int) const; /* Function pointer signature for Model object member functions with one argument */
      typedef double(Model::*FSptr2)(int,int) const; /* Function pointer signature for Model object member functions with two arguments */
      typedef double(*plainfptrM)(const Model&); /* Function pointer for plain functions; used for custom functions */
      typedef double(*plainfptrI)(const Input&); /* Function pointer for plain functions; used for custom functions */
      typedef FcnInfo1<FSptr1> FInfo1; // Structs to help specify valid indices for functions
      typedef FcnInfo2<FSptr2> FInfo2; //    "              " 
      typedef std::map<std::string, FSptr> fmap; /* Typedef for map of strings to function pointers */
      typedef std::map<std::string, FInfo1> fmap1;/*with an index*/
      typedef std::map<std::string, FInfo2> fmap2; /*with 2 indices */
      typedef std::map<std::string, plainfptrM> fmap_extraM;  /* map of plain function pointers */
      typedef std::map<std::string, plainfptrI> fmap_extraI; /* map of plain function pointers */
   
      // Empty maps for default return values
      static const fmap        map_empty;
      static const fmap1       map1_empty;
      static const fmap2       map2_empty;
      static const fmap_extraM map_extraM_empty;
      static const fmap_extraI map_extraI_empty;
   
   };
   // Need to initialise the maps above or else we get "undefined reference to..."
   // errors when we try to access them.
   template <class DT> const typename MapTypes<DT>::fmap        MapTypes<DT>::map_empty;
   template <class DT> const typename MapTypes<DT>::fmap1       MapTypes<DT>::map1_empty;
   template <class DT> const typename MapTypes<DT>::fmap2       MapTypes<DT>::map2_empty;
   template <class DT> const typename MapTypes<DT>::fmap_extraM MapTypes<DT>::map_extraM_empty;
   template <class DT> const typename MapTypes<DT>::fmap_extraI MapTypes<DT>::map_extraI_empty;
   /// @}
   
   /// Need to forward declare Spec class
   template <class, class>
   class Spec;
   
   /// Macros to simplify declaration and filling of maps and map getters
   
   /// @{ Map declaration macros
   
   /// Maps empty by default. Overload the filler function for the ones you need
   /// in the derived SubSpectrum class (accessed here like parent.filler)
   #define DECLARE_MAP(NAME,TAG) \
      static typename MT::CAT(f,TAG)   CAT_3(NAME,_,TAG); /* map */\
      /* getter */ \
      const  typename MT::CAT(f,TAG)&  CAT_4(get_,NAME,_,TAG)() const \
      { \
         return CAT_3(NAME,_,TAG); \
      }; \
   
   #define DECLARE_MAP_COLLECTION(NAME) \
      DECLARE_MAP(NAME,map) /* no indices */ \
      /* Expands to (e.g. NAME=mass0):
         // MAP
         static typename MT::fmap  mass0_map;
         // GETTER
         const  typename MT::fmap& get_mass0_map() const { return mass0_map; }
         {
           return fmap;
         }; 
      */ \
      DECLARE_MAP(NAME,map_extraM);  /* no indices, custom functions (argument=Model&) */ \
      DECLARE_MAP(NAME,map_extraI); /* no indices, custom functions (argument=Input&) */ \
      DECLARE_MAP(NAME,map1);       /* one index */ \
   
   #define DECLARE_MAP_COLLECTION2(NAME) \
      DECLARE_MAP_COLLECTION(NAME) \
      DECLARE_MAP(NAME,map2);       /* two indices */
   
   /// @}
   
   /// @{ Map filling macros
   
   /// Has to be seperate, since the static maps cannot be initialised from within
   /// the class definition 
   /// Note that thanks to the CRTP (used in Spec<T>, from which D is derived) we
   /// can access the map fillers from the derived classes, letting us use these
   /// static class functions in a polymorphic manner. 
   #define FILL_MAP(CLASS,NAME,TAG) \
      template <class D, class DT> \
      typename MapTypes<DT>::CAT(f,TAG) CLASS<D,DT>::CAT_3(NAME,_,TAG)( D::CAT_4(fill_,NAME,_,TAG)() );
   
   #define FILL_MAP_COLLECTION(CLASS,NAME) \
      FILL_MAP(CLASS,NAME,map) \
      /* Expands to (e.g. CLASS=RunparDer, NAME=mass0)
         template <class D, class DT> \
         typename MapTypes<DT>::fmap RunparDer<D,DT>::PoleMass_map(D::fill_mass0_map());
      */ \
      FILL_MAP(CLASS,NAME,map_extraM) \
      FILL_MAP(CLASS,NAME,map_extraI) \
      FILL_MAP(CLASS,NAME,map1) 
   
   #define FILL_MAP_COLLECTION2(CLASS,NAME) \
      FILL_MAP_COLLECTION(CLASS,NAME) \
      FILL_MAP(CLASS,NAME,map2) 
   
   /// @}
   
   /// @{ Fill function declaration macros for Spec<Derived> class
   ///    These are the functions to actually be overridden in the derived 
   ///    SubSpectrum class in order to fill the maps with useful things.
   #define DECLARE_MAP_FILLER(NAME,TAG) \
      static typename MT::CAT(f,TAG) CAT_4(fill_,NAME,_,TAG)() \
      { \
        /* Returns empty map by default */ \
        return MT::CAT(TAG,_empty); \
      } \
   
   #define DECLARE_MAP_FILLER_COLLECTION(NAME) \
      DECLARE_MAP_FILLER(NAME,map) \
      /* Expands to (e.g. NAME=mass0):
         (note: template parameter names simplified)
         static const typename MT::fmap mass0_map_empty; \
         static typename MT::fmap fill_mass0_map()
         {
           return MT::map_empty;
         }
      */ \
      DECLARE_MAP_FILLER(NAME,map_extraM) \
      DECLARE_MAP_FILLER(NAME,map_extraI) \
      DECLARE_MAP_FILLER(NAME,map1)
   
   #define DECLARE_MAP_FILLER_COLLECTION2(NAME) \
      DECLARE_MAP_FILLER_COLLECTION(NAME) \
      DECLARE_MAP_FILLER(NAME,map2)
   /// @}
   
   /// Forward declarations related to FptrFinder class
   template<class,class> class SetMaps;
   template<class,class> class FptrFinder;  
   
   template <class DerivedSpec, class DerivedSpecTraits>
   class PhysDer : public Phys 
   {
         typedef DerivedSpec D;
         typedef DerivedSpecTraits DT;
         typedef PhysDer<D,DT> Self;
         typedef MapTypes<DT> MT; 
         friend class Spec<D,DT>;
         friend class FptrFinder<DT,Self>;
         using Phys::get_Pole_Mass; // Need to expose the base class function overloads with this name
  
      protected:
         /// Needed for access to "parent" object member functions
         /// Needs to be protected so that derived classes can access it
         Spec<D,DT>& parent;
   
      private:      
         /// Getter maps
         DECLARE_MAP_COLLECTION(PoleMass)     // Pole masses
         DECLARE_MAP_COLLECTION2(PoleMixing)  // Pole mass mixing parameters
   
      public:
         // During construction, link the object to its "parent"
         PhysDer(Spec<D,DT>& s) : parent(s) {}
         virtual ~PhysDer() {}    
   
         virtual bool   has_Pole_Mass(const std::string&) const;
         virtual double get_Pole_Mass(const std::string&) const;
         virtual bool   has_Pole_Mass(const std::string&, int) const;
         virtual double get_Pole_Mass(const std::string&, int) const;
         virtual bool   has_Pole_Mixing(const std::string&) const;
         virtual double get_Pole_Mixing(const std::string&) const;
         virtual bool   has_Pole_Mixing(const std::string&, int) const;
         virtual double get_Pole_Mixing(const std::string&, int) const;
         virtual bool   has_Pole_Mixing(const std::string&, int, int) const;
         virtual double get_Pole_Mixing(const std::string&, int, int) const;
   };
   /// Initialise maps (using filler overrides from DerivedSpec if defined)
   FILL_MAP_COLLECTION(PhysDer,PoleMass)
   FILL_MAP_COLLECTION2(PhysDer,PoleMixing)
   
   template <class DerivedSpec, class DerivedSpecTraits>
   class RunparDer : public RunningPars
   {
        typedef DerivedSpec D;
        typedef DerivedSpecTraits DT;
        typedef RunparDer<D,DT> Self;
        typedef MapTypes<DT> MT; 
        friend class Spec<D,DT>;
        friend class FptrFinder<DT,Self>;
   
      protected:
         /// Needed for access to "parent" object member functions
         /// Needs to be protected so that derived classes can access it
         Spec<D,DT>& parent;
   
      private:
         DECLARE_MAP_COLLECTION2(mass0)           // dimensionless quantities
         DECLARE_MAP_COLLECTION2(mass)            // mass dimension 1 quantities
         DECLARE_MAP_COLLECTION2(mass2)           //   "     "      2     "
         DECLARE_MAP_COLLECTION2(mass3)           //   "     "      3     "
         DECLARE_MAP_COLLECTION2(mass4)           //   "     "      4     "
         DECLARE_MAP_COLLECTION2(mass_eigenstate) // tree level mass parameters
   
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
    
         /// Public interface functions
         virtual bool   has_mass4_parameter(const std::string&) const;
         virtual double get_mass4_parameter(const std::string&) const;
         virtual bool   has_mass4_parameter(const std::string&, int) const;
         virtual double get_mass4_parameter(const std::string&, int) const;
         virtual bool   has_mass4_parameter(const std::string&, int, int) const;
         virtual double get_mass4_parameter(const std::string&, int, int) const;
         virtual bool   has_mass3_parameter(const std::string&) const;
         virtual double get_mass3_parameter(const std::string&) const;
         virtual bool   has_mass3_parameter(const std::string&, int) const;
         virtual double get_mass3_parameter(const std::string&, int) const;
         virtual bool   has_mass3_parameter(const std::string&, int, int) const;
         virtual double get_mass3_parameter(const std::string&, int, int) const;
         virtual bool   has_mass2_parameter(const std::string&) const;
         virtual double get_mass2_parameter(const std::string&) const;
         virtual bool   has_mass2_parameter(const std::string&, int) const;
         virtual double get_mass2_parameter(const std::string&, int) const;
         virtual bool   has_mass2_parameter(const std::string&, int, int) const;
         virtual double get_mass2_parameter(const std::string&, int, int) const;
         virtual bool   has_mass_parameter(const std::string&) const;
         virtual double get_mass_parameter(const std::string&) const;
         virtual bool   has_mass_parameter(const std::string&, int) const;
         virtual double get_mass_parameter(const std::string&, int) const;
         virtual bool   has_mass_parameter(const std::string&, int, int) const;
         virtual double get_mass_parameter(const std::string&, int, int) const;
         virtual bool   has_dimensionless_parameter(const std::string&) const;
         virtual double get_dimensionless_parameter(const std::string&) const;
         virtual bool   has_dimensionless_parameter(const std::string&, int) const;
         virtual double get_dimensionless_parameter(const std::string&, int) const;
         virtual bool   has_dimensionless_parameter(const std::string&, int, int) const;
         virtual double get_dimensionless_parameter(const std::string&, int, int) const;
         virtual bool   has_mass_eigenstate(const std::string&) const;
         virtual double get_mass_eigenstate(const std::string&) const;
         virtual bool   has_mass_eigenstate(const std::string&, int) const;
         virtual double get_mass_eigenstate(const std::string&, int) const;
         virtual bool   has_mass_eigenstate(const std::string&, int, int) const;
         virtual double get_mass_eigenstate(const std::string&, int, int) const;
   };
   /// Initialise maps (using filler overrides from DerivedSpec if defined)
   FILL_MAP_COLLECTION2(RunparDer,mass0)           
   FILL_MAP_COLLECTION2(RunparDer,mass)            
   FILL_MAP_COLLECTION2(RunparDer,mass2)           
   FILL_MAP_COLLECTION2(RunparDer,mass3)           
   FILL_MAP_COLLECTION2(RunparDer,mass4)           
   FILL_MAP_COLLECTION2(RunparDer,mass_eigenstate) 
   
   // CRTP used to allow access to some special data members of the derived class.
   template <class DerivedSpec, class DerivedSpecTraits>
   class Spec : public SubSpectrum
   { 
         typedef DerivedSpec D;
         typedef DerivedSpecTraits DT;
         friend class RunparDer<D,DT>;
         friend class PhysDer<D,DT>;
    
      private:   
         typedef MapTypes<DT> MT; 
   
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
      
         /// Fillers for RunparDer
         DECLARE_MAP_FILLER_COLLECTION2(mass0)           // dimensionless quantities
         DECLARE_MAP_FILLER_COLLECTION2(mass)            // mass dimension 1 quantities
         DECLARE_MAP_FILLER_COLLECTION2(mass2)           //   "     "      2     "
         DECLARE_MAP_FILLER_COLLECTION2(mass3)           //   "     "      3     "
         DECLARE_MAP_FILLER_COLLECTION2(mass4)           //   "     "      4     "
         DECLARE_MAP_FILLER_COLLECTION2(mass_eigenstate) // tree level mass parameters
         
         /// Fillers for PhysDer
         DECLARE_MAP_FILLER_COLLECTION(PoleMass)         // Pole masses
         DECLARE_MAP_FILLER_COLLECTION2(PoleMixing)      // Pole mass mixing parameters
         /// @}
      
         /// Function overrides that will work with the above macros:
         /// e.g. (with typedef MapTypes<DerivedSpec> MT)
         /// (virtual) typename MT::fmap        fill_mass0_map();        /* no indices */
         /// (virtual) typename MT::fmap_extraM fill_mass0_map_extraM(); /* no indices, custom functions (argument=Model&) */
         /// (virtual) typename MT::fmap_extraI fill_mass0_map_extraI(); /* no indices, custom functions (argument=Input&) */
         /// (virtual) typename MT::fmap1       fill_mass0_map1();       /* one index */
         /// (virtual) typename MT::fmap2       fill_mass0_map2(); **    /* two indices */
         ///          
         /// Note: virtual keyword optional                                                                      
         /// ** Note: 2-index getters not available for PoleMass, since these are assumed
         /// to be mass-ordered (i.e. a mass matrix wouldn't make sense)
         
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

   /// FptrFinder friend class for implementing named parameter idiom
   template<class DT, class This>
   class SetMaps
   {
      public:
         SetMaps(const std::string& label, const This* const fakethis)
          : label_(label) 
          , fakethis_(fakethis)
          , map_ (NULL)
          , mapM_(NULL)
          , mapI_(NULL)
          , map1_(NULL)
          , map2_(NULL)
         {}
         SetMaps& map (const typename MapTypes<DT>::fmap&        map) { map_=&map;   return *this; }
         SetMaps& mapM(const typename MapTypes<DT>::fmap_extraM& mapM){ mapM_=&mapM; return *this; }
         SetMaps& mapI(const typename MapTypes<DT>::fmap_extraI& mapI){ mapI_=&mapI; return *this; }
         SetMaps& map1(const typename MapTypes<DT>::fmap1&       map1){ map1_=&map1; return *this; }
         SetMaps& map2(const typename MapTypes<DT>::fmap2&       map2){ map2_=&map2; return *this; }

      private:
         friend class FptrFinder<DT,This>; 
         const std::string label_;
         const This* const fakethis_;
         const typename MapTypes<DT>::fmap*        map_;
         const typename MapTypes<DT>::fmap_extraM* mapM_; 
         const typename MapTypes<DT>::fmap_extraI* mapI_; 
         const typename MapTypes<DT>::fmap1*       map1_; 
         const typename MapTypes<DT>::fmap2*       map2_; 
          
   }; 
 

   /// Helper class for locating the function pointer corresponding to a 
   /// requested string, from amongst the various different maps in which
   /// it could be located.
   template<class DT, class This>
   class FptrFinder
   {
      private:
         /// Label to help track down errors if they occur
         const std::string label;
 
         /// Last used search string (only set if there was a problem, for error messages)
         std::string lastname;

         /// This class pretending to be an extra set of class functions, so need the "this" pointer
         const This* const fakethis;

         /// Pointers to const maps to use for search
         const typename MapTypes<DT>::fmap*        map_;
         const typename MapTypes<DT>::fmap_extraM* mapM_; 
         const typename MapTypes<DT>::fmap_extraI* mapI_; 
         const typename MapTypes<DT>::fmap1*       map1_; 
         const typename MapTypes<DT>::fmap2*       map2_; 

         /// Iterators needed for to locate search result
         typename MapTypes<DT>::fmap::const_iterator        it;  // 0
         typename MapTypes<DT>::fmap_extraM::const_iterator itM; // 1
         typename MapTypes<DT>::fmap_extraI::const_iterator itI; // 2
         typename MapTypes<DT>::fmap1::const_iterator       it1; // 3
         typename MapTypes<DT>::fmap2::const_iterator       it2; // 4

         /// Booleans to indicate whether or not it is safe to dereference
         /// the above iterators
         bool it_safe;
         bool itM_safe;
         bool itI_safe;
         bool it1_safe;
         bool it2_safe;

         // int which records which iterator points to the search result 
         int whichiter;    

         // indices required for function call
         int index1;
         int index2;

         // error code
         // -1 : search not yet attempted
         //  0 : no problem, search succeeded
         //  1 : string name lookup failed
         //  2 : string name lookup succeeded, index1 out of bounds
         //  3 : string name lookup succeeded, index2 out of bounds
         int error_code;

         // Messages corresponding to the above error codes
         static const std::map<int, const std::string> error_msg; 

      public:
         // Constructor utilising named "parameters"
         FptrFinder(const SetMaps<DT,This>& params)
           : label(params.label_)
           , lastname("NONE")
           , fakethis(params.fakethis_)
           , map_ (params.map_)   
           , mapM_(params.mapM_)
           , mapI_(params.mapI_)
           , map1_(params.map1_)
           , map2_(params.map2_)
           , it ()
           , itM()
           , itI()
           , it1()
           , it2()
           , it_safe (false)
           , itM_safe(false)
           , itI_safe(false)
           , it1_safe(false)
           , it2_safe(false) 
           , whichiter(-1)
           , index1(-1)
           , index2(-1)
           , error_code(-1) 
         {}

         /// @{ Error reporting
         int          get_error_code(){ return error_code; }
         std::string  get_error_message()
         {
            std::string msg;
            switch(error_code)
            {
                case -1: msg = "Search not yet attempted"; break; 
                case 0:  msg = "No problem, search succeeded"; break;
                case 1:  msg = "String name lookup failed"; break;
                case 2:  msg = "String name lookup succeeded, index1 out of bounds"; break;
                case 3:  msg = "String name lookup succeeded, index2 out of bounds"; break;
                default: msg = "Unrecognised error code! This is a bug in FptrFinder!";
           }
           return msg;
         }
         // Raise error if the calling context can't handle a failed search
         void raise_error()
         {
           std::ostringstream errmsg;
           errmsg << "Error retrieving particle spectrum data!" << std::endl;
           errmsg << "No "<<label<<" with string reference '"<<lastname<<"' exists!" <<std::endl;
           errmsg << "Search failed with error_code "<<error_code<<" from FptrFinder with label "<<label<<": "<<get_error_message();
           utils_error().forced_throw(LOCAL_INFO,errmsg.str());  
         }
         /// @}
 
         /// helper functions for searching individual maps
         template<class Map>
         bool search_map(const std::string& name, const Map* const map, typename Map::const_iterator& it)
         {
           bool found = true; 
           if(map==NULL)
           {
              std::ostringstream errmsg;
              errmsg << "Tried to use FptrFinder to search a SubSpectrum function pointer map, but did not correctly supply the map to FptrFinder! This is a bug in the SubSpectrum class; please report it. (Attempted to access map of type "<<typeid(Map).name()<<")";
              utils_error().forced_throw(LOCAL_INFO,errmsg.str());  
           }
           it = map->find(name);
           if( it == map->end() ){ found = false; }
           return found; 
         }

         /// Check if it is (supposed to be) safe to dereference a map iterator
         /// Throw an error if it isn't
         void check(bool safe)
         {
           if(not safe)
           {
              std::ostringstream errmsg;
              errmsg << "Safety check for map iterator failed! (in FptrFinder). This indicates a bug in the FptrFinder class; please report it.";
              utils_error().forced_throw(LOCAL_INFO,errmsg.str());  
           }
         } 

         /// Methods for setting parameters (named parameter idiom)
         /// E.g. call constructor like this to use named "parameters"
         /// FptrFinder().map(x).map2(z).mapM(y)
         /// Could protect parameters from being reset by putting these setters in a friend class,
         /// which can only set the FptrFinder parameters via the FptrFinder constructor, but this
         /// is good enough for the use here I think.
      
         /// Search function for 0-index maps
         bool find(const std::string& name, bool doublecheck=true)
         {
            bool found = true;   
            error_code = 0;
            //  Search maps for function; if found then store it
            if     ( search_map(name,map_,it)   ){ it_safe=true; whichiter=1; }
            else if( search_map(name,mapM_,itM) ){ itM_safe=true; whichiter=2; }
            else if( search_map(name,mapI_,itI) ){ itI_safe=true; whichiter=3; }
            else if( doublecheck and PDB.has_short_name(name) )
            {
               // Didn't find it in 0-index maps; translate using PDB entry and try 1-index maps
               std::pair<str, int> p = PDB.short_name_pair(name);
               //std::cout << "running doublecheck: re-calling function with PDG short name pair: "<<name<<" --> "<<p.first<<", "<<p.second<<std::endl;
               found = find(p.first, p.second, false);
            }
            else { 
              found = false;
              lastname = name;
              error_code = 1; 
            }
            return found;
         }

         /// Search function for 1-index maps
         bool find(const std::string& name, int i, bool doublecheck=true)
         {
            bool found = true;
            error_code = 0;
            //  Search maps for function; if found then store it
            if( search_map(name,map1_,it1) )
            {
               it1_safe=true; 
               /// Switch index convention
               int offset = fakethis->parent.get_index_offset();
               index1 = i + offset; // set for later use
               /// Check that index is in the permitted set
               if( not within_bounds(index1, it1->second.iset1) )
               {
                  // index1 out of bounds
                  found = false;
                  lastname = name;
                  error_code = 2;
               }
               else {
                  // everything cool. 
                  whichiter=4;
               } 
            }
            else if( doublecheck and PDB.has_particle(std::make_pair(name,i)) )
            {
               // Didn't find it in 1-index maps; translate using PDB entry and try 0-index maps
               //std::cout << "running doublecheck: re-calling function with PDG long name: "<<name<<", "<<i<<" --> "<<PDB.long_name(name,i)<<std::endl;
               found = find(PDB.long_name(name,i), false);
            }
            else { 
              found = false;
              lastname = name;
              error_code = 1;
            }
            return found;
         }

         /// Search function for 2-index maps
         bool find(const std::string& name, int i, int j)
         {
            bool found = true;   
            error_code = 0;
            //  Search maps for function; if found then store it
            if( search_map(name,map2_,it2) )
            {
               it2_safe=true; 
               /// Switch index convention
               int offset = fakethis->parent.get_index_offset();
               index1 = i + offset; // set for later use
               index2 = j + offset; // set for later use
               /// Check that index is in the permitted set
               if( not within_bounds(index1, it2->second.iset1) )
               {
                  // index1 out of bounds
                  found = false;
                  lastname = name;
                  error_code = 2;
               }
               else if( not within_bounds(index2, it2->second.iset2) )
               {
                  // index2 out of bounds
                  found = false;
                  lastname = name;
                  error_code = 3;
               }
               else {
                  // everything cool. 
                  whichiter=5;
               } 
            }
            else { 
              found = false;
              lastname = name;
              error_code = 1;
            }
            return found;
         }

         /// Call whatever function was found
         double callfcn()
         {
            double result(-1); // should not be returned in this state
            if(error_code==0)
            {
               typename DT::Model* model = fakethis->parent.get_Model();
               typename DT::Input* input = fakethis->parent.get_Input();
               switch( whichiter )
               {
                  case 1: {
                    check(it_safe);
                    typename MapTypes<DT>::FSptr f = it->second;
                    result = (model->*f)();
                    break;}
                  case 2: {
                    check(itM_safe);
                    typename MapTypes<DT>::plainfptrM f = itM->second;
                    result = (*f)(*model);
                    break;}
                  case 3: {
                    check(itI_safe);
                    typename MapTypes<DT>::plainfptrI f = itI->second;
                    result = (*f)(*input);
                    break;}
                  case 4: {
                    check(it1_safe);
                    typename MapTypes<DT>::FSptr1 f = it1->second.fptr;
                    result = (model->*f)(index1);
                    break;}
                  case 5: {
                    check(it2_safe);
                    typename MapTypes<DT>::FSptr2 f = it2->second.fptr;
                    result = (model->*f)(index1,index2);
                    break;}
                  default:{
                    std::ostringstream errmsg;
                    errmsg << "Error! Unanticipated whichiter code received while trying to call a function from SubSpectrum maps. This indicates a bug in the FptrFinder class. Please report it! (this FptrFinder has label="<<label<<", current error_code="<<error_code<<", whichiter="<<whichiter<<")"<<std::endl;
                    utils_error().forced_throw(LOCAL_INFO,errmsg.str());  
                    }
               }
            } else if(error_code==-1) 
            {
              std::ostringstream errmsg;
              errmsg << "Error! Tried to call function from SubSpectrum maps without first finding the function! This indicates a bug, probably in the Spectrum or SubSpectrum classes. Please report it! (this FptrFinder has label="<<label<<", current error_code="<<error_code<<")"<<std::endl;
              utils_error().forced_throw(LOCAL_INFO,errmsg.str());  
            } else {
              std::ostringstream errmsg;
              errmsg << "Error! Unanticipated error code received while trying to call a function from SubSpectrum maps. This indicates a bug in the FptrFinder class. Please report it! (this FptrFinder has label="<<label<<", current error_code="<<error_code<<")"<<std::endl;
              utils_error().forced_throw(LOCAL_INFO,errmsg.str());  
            }
            return result;
         }

    }; // end class FptrFinder

 
   /// @{ Getter and checker function definitions
 
   /// @{ Macros to define parameter checker and getter functions
   // No indices
   #define DEFINE_GETTERS(CLASS,FLABEL,MLABEL)                                   \
      template<class D, class DT>                                                \
      bool CLASS<D,DT>::CAT(has_,FLABEL)(const str& name) const       \
      {                                                                          \
         /* Create finder object, tell it what maps to search, and do the search */\
         FptrFinder<DT,CLASS> finder = SetMaps<DT,CLASS>(STRINGIFY(FLABEL),this) \
                                 .map(  CAT_3(get_,MLABEL,_map)() )               \
                                 .mapM( CAT_3(get_,MLABEL,_map_extraM)() )        \
                                 .mapI( CAT_3(get_,MLABEL,_map_extraI)() )        \
                                 .map1( CAT_3(get_,MLABEL,_map1)() );             \
         return finder.find(name);                                               \
      }                                                                          \
                                                                                 \
      template<class D, class DT>                                                \
      double CLASS<D,DT>::CAT(get_,FLABEL)(const str& name) const     \
      {                                                                          \
         double result;                                                          \
         /* Create finder object, tell it what maps to search, and do the search */\
         FptrFinder<DT,CLASS> finder = SetMaps<DT,CLASS>(STRINGIFY(FLABEL),this) \
                                 .map(  CAT_3(get_,MLABEL,_map)() )               \
                                 .mapM( CAT_3(get_,MLABEL,_map_extraM)() )        \
                                 .mapI( CAT_3(get_,MLABEL,_map_extraI)() )        \
                                 .map1( CAT_3(get_,MLABEL,_map1)() );             \
         if( finder.find(name) ){ result = finder.callfcn(); }                   \
         else { finder.raise_error(); }                                           \
         return result;                                                          \
      }                                                                              

   #define DEFINE_GETTERS1(CLASS,FLABEL,MLABEL)                                  \
      template<class D, class DT>                                                \
      bool CLASS<D,DT>::CAT(has_,FLABEL)(const str& name, int i) const\
      {                                                                          \
         /* Create finder object, tell it what maps to search, and do the search */\
         FptrFinder<DT,CLASS> finder = SetMaps<DT,CLASS>(STRINGIFY(FLABEL),this)  \
                                 .map(  CAT_3(get_,MLABEL,_map)() )               \
                                 .mapM( CAT_3(get_,MLABEL,_map_extraM)() )        \
                                 .mapI( CAT_3(get_,MLABEL,_map_extraI)() )        \
                                 .map1( CAT_3(get_,MLABEL,_map1)() );             \
         return finder.find(name,i);                                             \
      }                                                                          \
                                                                                 \
      template<class D, class DT>                                                \
      double CLASS<D,DT>::CAT(get_,FLABEL)(const str& name, int i) const\
      {                                                                          \
         double result;                                                          \
         /* Create finder object, tell it what maps to search, and do the search */\
         FptrFinder<DT,CLASS> finder = SetMaps<DT,CLASS>(STRINGIFY(FLABEL),this) \
                                 .map(  CAT_3(get_,MLABEL,_map)() )               \
                                 .mapM( CAT_3(get_,MLABEL,_map_extraM)() )        \
                                 .mapI( CAT_3(get_,MLABEL,_map_extraI)() )        \
                                 .map1( CAT_3(get_,MLABEL,_map1)() );             \
         if( finder.find(name,i) ){ result = finder.callfcn(); }                 \
         else { finder.raise_error(); }                                           \
         return result;                                                          \
      }                                                                              

   #define DEFINE_GETTERS2(CLASS,FLABEL,MLABEL)                                  \
      template<class D, class DT>                                                \
      bool CLASS<D,DT>::CAT(has_,FLABEL)(const str& name, int i, int j) const\
      {                                                                          \
         /* Create finder object, tell it what maps to search, and do the search */\
         FptrFinder<DT,CLASS> finder = SetMaps<DT,CLASS>(STRINGIFY(FLABEL),this) \
                                 .map2( CAT_3(get_,MLABEL,_map2)() );             \
         return finder.find(name,i,j);                                           \
      }                                                                          \
                                                                                 \
      template<class D, class DT>                                                \
      double CLASS<D,DT>::CAT(get_,FLABEL)(const str& name, int i, int j) const\
      {                                                                          \
         double result;                                                          \
         /* Create finder object, tell it what maps to search, and do the search */\
         FptrFinder<DT,CLASS> finder = SetMaps<DT,CLASS>(STRINGIFY(FLABEL),this)  \
                                 .map2( CAT_3(get_,MLABEL,_map2)() );             \
         if( finder.find(name,i,j) ){ result = finder.callfcn(); }               \
         else { finder.raise_error(); }                                           \
         return result;                                                          \
      }                                                                              

      /// @}

      // mass^4
      DEFINE_GETTERS(RunparDer,mass4_parameter,mass4) 
      DEFINE_GETTERS1(RunparDer,mass4_parameter,mass4) 
      DEFINE_GETTERS2(RunparDer,mass4_parameter,mass4) 
      // mass^3
      DEFINE_GETTERS(RunparDer,mass3_parameter,mass3) 
      DEFINE_GETTERS1(RunparDer,mass3_parameter,mass3) 
      DEFINE_GETTERS2(RunparDer,mass3_parameter,mass3) 
      // mass^2
      DEFINE_GETTERS(RunparDer,mass2_parameter,mass2) 
      DEFINE_GETTERS1(RunparDer,mass2_parameter,mass2) 
      DEFINE_GETTERS2(RunparDer,mass2_parameter,mass2) 
      // mass^1
      DEFINE_GETTERS(RunparDer,mass_parameter,mass) 
      DEFINE_GETTERS1(RunparDer,mass_parameter,mass) 
      DEFINE_GETTERS2(RunparDer,mass_parameter,mass) 
      // mass0
      DEFINE_GETTERS(RunparDer,dimensionless_parameter,mass0) 
      DEFINE_GETTERS1(RunparDer,dimensionless_parameter,mass0) 
      DEFINE_GETTERS2(RunparDer,dimensionless_parameter,mass0) 
      // mass eigenstate
      DEFINE_GETTERS(RunparDer,mass_eigenstate,mass_eigenstate) 
      DEFINE_GETTERS1(RunparDer,mass_eigenstate,mass_eigenstate) 
      DEFINE_GETTERS2(RunparDer,mass_eigenstate,mass_eigenstate) 
      // Pole masses
      DEFINE_GETTERS(PhysDer,Pole_Mass,PoleMass) 
      DEFINE_GETTERS1(PhysDer,Pole_Mass,PoleMass) 
      /* no two-index pole mass getters */
      // Pole mixings
      DEFINE_GETTERS(PhysDer,Pole_Mixing,PoleMixing) 
      DEFINE_GETTERS1(PhysDer,Pole_Mixing,PoleMixing) 
      DEFINE_GETTERS2(PhysDer,Pole_Mixing,PoleMixing) 

   /// @}

} // end namespace Gambit

// Undef the various helper macros to avoid contaminating other files
#undef PDB // Just for safety; this macro is short so could accidentally mess some stuff up
#undef DECLARE_MAP
#undef DECLARE_MAP_COLLECTION
#undef DECLARE_MAP_COLLECTION2
#undef FILL_MAP
#undef FILL_MAP_COLLECTION
#undef FILL_MAP_COLLECTION2
#undef DECLARE_MAP_FILLER
#undef DECLARE_MAP_FILLER_COLLECTION
#undef DECLARE_MAP_FILLER_COLLECTION2
#undef FBODY0
#undef FBODY1
#undef FBODY2
#undef DEFINE_GETTERS                   
#undef DEFINE_GETTERS1                  
#undef DEFINE_GETTERS2     

#endif
