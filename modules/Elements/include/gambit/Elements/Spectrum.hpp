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

#ifndef __Spectrum_hpp__
#define __Spectrum_hpp__

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
  utils_error().raise(local_info,"This virtual function (of Spectrum object) has not been overridden in the derived class!")

///Note: (Ben) I have extracted these classes from the Spectrum class, so they are no longer nested.
///            I did this because there are no special access rights to nested classes in C++03, and
///            while there *are* in C++11, I don't know what compilers support this, and we were
///            already declaring the relevant classes as friends anyway. So to make this header less
///            confusing (I hope) I have just defined these classes in the host namespace separately.
class Spectrum;
class RunningPars;
class Phys;

/// Virtual base class for interacting with spectrum generator output
// Includes facilities for running RGEs
class Spectrum {
   public:
      /// Dump out spectrum information to slha (if possible, and not including input parameters etc. just at the moment...)
      virtual void dump2slha(const std::string&) const { vfcn_error(LOCAL_INFO); }

      /// Clone the Spectrum object
      virtual std::unique_ptr<Spectrum> clone() const = 0;
   
      /// Get spectrum information in SLHAea format (if possible)
      SLHAea::Coll empty_SLHAea;  // never used; just to avoid "no return statement in function returning non-void" warnings
      virtual SLHAea::Coll getSLHAea() const { vfcn_error(LOCAL_INFO); return empty_SLHAea; }

      /// Get integer offset convention used by internal model class (needed by getters which take indices) 
      virtual int get_index_offset() const { vfcn_error(LOCAL_INFO); return 0; }
   
      /// Constructors/destructors
      Spectrum(RunningPars& rp, Phys& p) : phys(p), runningpars(rp) {}
      virtual ~Spectrum() {} 

      //Models::partmap& particle_database;
      /// new constructor.  Pass Models::ParticleDB() in as the third argument in all cases.  You will need to include partmap.hpp in order to be able to do this.
      //Spectrum(RunningPars& rp, Phys& p, Models::partmap& pdb) : phys(p), runningpars(rp), particle_database(pdb) {}
   
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
   
   protected:
      /// Functions to be overridden in classes derived from Spec<Derived> 
      /// (i.e. the final wrappers)
      /// Not actually called via Spectrum object directly; call via 
      /// Spectrum.runningpars
      /// These virtual functions are here just to simplify the wrapper definitions.

      /// Run object to a particular scale
      virtual void RunToScale(double) { vfcn_error(LOCAL_INFO); }
      /// Returns the renormalisation scale of parameters
      virtual double GetScale() const { vfcn_error(LOCAL_INFO); return -1;}
      /// Manually set the renormalisation scale of parameters 
      /// somewhat dangerous to allow this but may be needed
      virtual void SetScale(double) { vfcn_error(LOCAL_INFO); }
     
      /// Default limits to RGE running; warning/error raised if running beyond these is attempted.
      // If these aren't overridden in the derived class then effectively no limit on running will exist.
      virtual double hard_upper() const {return DBL_MAX;}
      virtual double soft_upper() const {return DBL_MAX;}
      virtual double soft_lower() const {return 0.;}
      virtual double hard_lower() const {return 0.;}
 
};

/// Getter overloads for easier interaction with particle database
/// @{

#define DECLARE_PDG_GETTERS(FUNC) \
   /* Overloads of these functions to allow access using PDG codes */ \
   /* as defined in Models/src/particle_database.cpp */ \
   /* These don't have to be virtual; they just call the virtual functions in the end. */ \
   double FUNC(const int, const int) const;     /* Input PDG code plus context integer */ \
   double FUNC(const std::pair<int,int>) const; /* Input PDG code plus context integer */ \
   double FUNC(const std::pair<str,int>) const; /* Input short name plus index */

#define DEFINE_PDG_GETTERS(CLASS,FUNC)                                        \
   inline double CLASS::FUNC(const std::pair<str,int> shortpr) const          \
   {                                                                          \
     return FUNC(shortpr.first, shortpr.second);                              \
   }                                                                          \
                                                                              \
   inline double CLASS::FUNC(const int pdg_code, const int context) const     \
   {                                                                          \
      /* PDB context integer must be zero for pole mass retrieval             \
         (this is the context integer for mass eigenstate) */                 \
      return FUNC( std::make_pair(pdg_code,context) );                        \
   }                                                                          \
                                                                              \
   inline double CLASS::FUNC(const std::pair<int,int> pdgpr) const            \
   {                                                                          \
      /* If there is a short name, then retrieve that plus the index */       \
      if( PDB.has_short_name(pdgpr) )                                         \
      {                                                                       \
        return FUNC( PDB.short_name_pair(pdgpr) );                            \
      }                                                                       \
      else /* Use the long name with no index instead */                      \
      {                                                                       \
        return FUNC( PDB.long_name(pdgpr) );                                  \
      }                                                                       \
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
                    msg << "RGE running requested outside hard limits, but within soft limits! The soft limits should always be within the hard limits, so this is a bug in the derived Spectrum object being accessed. I cannot tell you which class this is though; check the dependency graph to see which ones are being created, and if necessary consult your debugger." << std::endl;
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
 
      /// getters using map
      virtual double get_mass4_parameter(const std::string&, bool=true) const = 0;
      virtual double get_mass4_parameter(const std::string&, int, bool=true) const = 0;
      virtual double get_mass4_parameter(const std::string&, int, int) const = 0;
      virtual double get_mass3_parameter(const std::string&, bool=true) const = 0;
      virtual double get_mass3_parameter(const std::string&, int, bool=true) const = 0;
      virtual double get_mass3_parameter(const std::string&, int, int) const = 0;
      virtual double get_mass2_parameter(const std::string&, bool=true) const = 0;
      virtual double get_mass2_parameter(const std::string&, int, bool=true) const = 0;
      virtual double get_mass2_parameter(const std::string&, int, int) const = 0;
      virtual double get_mass_parameter(const std::string&, bool=true) const = 0;
      virtual double get_mass_parameter(const std::string&, int, bool=true) const = 0;
      virtual double get_mass_parameter(const std::string&, int, int) const = 0;
      virtual double get_dimensionless_parameter(const std::string&, bool=true) const = 0;
      virtual double get_dimensionless_parameter(const std::string&, int, bool=true) const = 0;
      virtual double get_dimensionless_parameter(const std::string&, int, int) const = 0;
      virtual double get_mass_eigenstate(const std::string&, bool=true) const = 0;
      virtual double get_mass_eigenstate(const std::string&, int, bool=true) const = 0;
      virtual double get_mass_eigenstate(const std::string&, int, int) const = 0;

      DECLARE_PDG_GETTERS(get_mass4_parameter)
      DECLARE_PDG_GETTERS(get_mass3_parameter)
      DECLARE_PDG_GETTERS(get_mass2_parameter)
      DECLARE_PDG_GETTERS(get_mass_parameter)
      DECLARE_PDG_GETTERS(get_dimensionless_parameter)
      DECLARE_PDG_GETTERS(get_mass_eigenstate)
};
DEFINE_PDG_GETTERS(RunningPars,get_mass_parameter)
DEFINE_PDG_GETTERS(RunningPars,get_mass2_parameter)
DEFINE_PDG_GETTERS(RunningPars,get_mass3_parameter)
DEFINE_PDG_GETTERS(RunningPars,get_mass4_parameter)
DEFINE_PDG_GETTERS(RunningPars,get_dimensionless_parameter)
DEFINE_PDG_GETTERS(RunningPars,get_mass_eigenstate)

class Phys 
{
   public: 
      /// Constructors/destructors
      Phys() {}
      virtual ~Phys() {}      

      /// map based getters
      virtual double get_Pole_Mass(const std::string&, bool=true) const { vfcn_error(LOCAL_INFO); return -1; };
      virtual double get_Pole_Mass(const std::string&, int, bool=true) const { vfcn_error(LOCAL_INFO); return -1; };
      virtual double get_Pole_Mixing(const std::string&, bool=false) const { vfcn_error(LOCAL_INFO); return -1; };
      virtual double get_Pole_Mixing(const std::string&, int, bool=false) const { vfcn_error(LOCAL_INFO); return -1; };
      virtual double get_Pole_Mixing(const std::string&, int, int) const { vfcn_error(LOCAL_INFO); return -1; };

      DECLARE_PDG_GETTERS(get_Pole_Mass)
      DECLARE_PDG_GETTERS(get_Pole_Mixing)
};
DEFINE_PDG_GETTERS(Phys,get_Pole_Mass)
DEFINE_PDG_GETTERS(Phys,get_Pole_Mixing)

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
/// in the derived Spectrum class (accessed here like parent.filler)
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
///    Spectrum class in order to fill the maps with useful things.
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
 
/// @{ Friend helper functions of PhysDer and RunparDer
/// Helper macros and forward declarations
#define FBODY0 const typename MapTypes<DT>::fmap&, \
                       const typename MapTypes<DT>::fmap_extraM&, \
                       const typename MapTypes<DT>::fmap_extraI&, \
                       const str&, const str&, \
                       const Self*, double(Self::*)(const str&, int, bool) const, \
                       bool
#define FBODY1 const typename MapTypes<DT>::fmap1&, \
                     const std::string&, const int, const str&, \
                     const Self*, double(Self::*)(const str&, bool) const, \
                     bool
#define FBODY2 const typename MapTypes<DT>::fmap2&, \
                       const str&, const int, const int, const str&, \
                       const Self*

template<class DT, class Self> double getter_0indices(FBODY0);
template<class DT, class Self> double getter_1index  (FBODY1);
template<class DT, class Self> double getter_2indices(FBODY2);

/// @}
 
template <class DerivedSpec, class DerivedSpecTraits>
class PhysDer : public Phys 
{
      typedef DerivedSpec D;
      typedef DerivedSpecTraits DT;
      typedef PhysDer<D,DT> Self;
      typedef MapTypes<DT> MT; 
      typedef double (PhysDer::*fp0)(const str&, bool) const;
      typedef double (PhysDer::*fp1)(const str&, int, bool) const;
      friend class Spec<D,DT>;
      using Phys::get_Pole_Mass; // Need to expose the base class function overloads with this name
      /// Friend helper functions
      friend double getter_0indices<DT,Self>(FBODY0);
      friend double getter_1index  <DT,Self>(FBODY1);
      friend double getter_2indices<DT,Self>(FBODY2);

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

      virtual double get_Pole_Mass(const std::string&, bool) const;
      virtual double get_Pole_Mass(const std::string&, int, bool) const;
      virtual double get_Pole_Mixing(const std::string&, bool) const;
      virtual double get_Pole_Mixing(const std::string&, int, bool) const;
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
     typedef double (RunparDer::*fp0)(const str&, bool) const;
     typedef double (RunparDer::*fp1)(const str&, int, bool) const;
     friend class Spec<D,DT>;
     /// Friend helper functions
     friend double getter_0indices<DT,Self>(FBODY0);
     friend double getter_1index  <DT,Self>(FBODY1);
     friend double getter_2indices<DT,Self>(FBODY2);

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

      /// Functions to connect to overrides defined in classes derived from Spectrum
      virtual void   RunToScaleOverride(double scale) { parent.RunToScale(scale); }
      virtual double GetScale() const       { return parent.GetScale(); }
      virtual void   SetScale(double scale) { parent.SetScale(scale); }
      virtual double hard_upper() const { return parent.hard_upper(); }
      virtual double soft_upper() const { return parent.soft_upper(); }
      virtual double soft_lower() const { return parent.soft_lower(); }
      virtual double hard_lower() const { return parent.hard_lower(); }
 
      /// Public interface functions
      virtual double get_mass4_parameter(const std::string&, bool) const;
      virtual double get_mass4_parameter(const std::string&, int, bool) const;
      virtual double get_mass4_parameter(const std::string&, int, int) const;
      virtual double get_mass3_parameter(const std::string&, bool) const;
      virtual double get_mass3_parameter(const std::string&, int, bool) const;
      virtual double get_mass3_parameter(const std::string&, int, int) const;
      virtual double get_mass2_parameter(const std::string&, bool) const;
      virtual double get_mass2_parameter(const std::string&, int, bool) const;
      virtual double get_mass2_parameter(const std::string&, int, int) const;
      virtual double get_mass_parameter(const std::string&, bool) const;
      virtual double get_mass_parameter(const std::string&, int, bool) const;
      virtual double get_mass_parameter(const std::string&, int, int) const;
      virtual double get_dimensionless_parameter(const std::string&, bool) const;
      virtual double get_dimensionless_parameter(const std::string&, int, bool) const;
      virtual double get_dimensionless_parameter(const std::string&, int, int) const;
      virtual double get_mass_eigenstate(const std::string&, bool) const;
      virtual double get_mass_eigenstate(const std::string&, int, bool) const;
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
class Spec : public Spectrum
{ 
      typedef DerivedSpec D;
      typedef DerivedSpecTraits DT;
      friend class RunparDer<D,DT>;
      friend class PhysDer<D,DT>;
      /// Helper template friend functions (need to access 'model' and 'input')
      template<class DT, class Self> friend double getter_0indices(FBODY0);
      template<class DT, class Self> friend double getter_1index  (FBODY1);
      template<class DT, class Self> friend double getter_2indices(FBODY2);
 
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
      /// Contains extra data input on Spectrum object creation
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
        : Spectrum(rp,pp)
        , rp(*this)
        , pp(*this)
        , model()
        , input()
      {}
   
      /// Constructor initialising just "model" member (Input unused (e.g. no special computations))
      Spec(Model& m)
        : Spectrum(rp,pp)
        , rp(*this)
        , pp(*this)
        , model(&m)
        , input()
      {}
   
      /// Constructor initialising just "input" member (Model unused (e.g. no RGEs))
      Spec(Input& i)
        : Spectrum(rp,pp)
        , rp(*this)
        , pp(*this)
        , model()
        , input(&i)
      {}
   
      /// Full constructor
      Spec(Model& m, Input& i)
        : Spectrum(rp,pp)
        , rp(*this)
        , pp(*this)
        , model(&m)
        , input(&i)
      {}
   
      /// CRTP-style polymorphic clone function
      /// Now derived classes will not need to re-implement the clone function.
      virtual std::unique_ptr<Spectrum> clone() const       
      {
        return std::unique_ptr<Spectrum>(
           new DerivedSpec(static_cast<DerivedSpec const &>(*this))
           );
      }
    
};

/// @{ Getter function definitions

/// To define all the getters, it is useful to define first the following helper functions which will
/// be reused a lot (which just extract the named functions from the supplied maps and run them)

/// Getter/runner for functions taking no indices
// (note: currently only the no-index getters are set up to allow an "extra" map of function pointers to be defined. Can be extended
//  if needed.)
// template parameters:
// DT - DerivedSpecTraits; carries typedef fro Model and Input
// O  - The host class which uses this function, i.e. Phys or RunningPars
template<class DT, class O>
double getter_0indices(/* function maps */
                       const typename MapTypes<DT>::fmap& map, 
                       const typename MapTypes<DT>::fmap_extraM& map_extraM, 
                       const typename MapTypes<DT>::fmap_extraI& map_extraI, 
                       /* function call data (and error message data */
                       const std::string& name, const std::string& maplabel, 
                       /* host object pointer and pointer to alternate getter */
                       const O* fakethis, double(O::*fptr)(const std::string&, int, bool) const, 
                       bool doublecheck)
{
   typename MapTypes<DT>::fmap::const_iterator it = map.find(name); ///  Find desired Model object function
   typename MapTypes<DT>::fmap_extraM::const_iterator itM;
   typename MapTypes<DT>::fmap_extraI::const_iterator itI; 
   double result = -1;
   if(it==map.end()) { itM = map_extraM.find(name); } ///  Check if it exists in the extraM map
   if(it==map.end() and itM==map_extraM.end()) { itI = map_extraI.find(name); } ///  Check if it exists in the extraI map

   /// TODO: Currently there will be a segfault if, say fmap is filled, but "model" not initialised to point to something.
   /// Can probably wrap the pointers in a safer structure so that this obvious error can be identified easily.
   if( it!=map.end() )
   {
      //  Get function out of map and call it on the bound Model object
      typename MapTypes<DT>::FSptr f = it->second;
      typename DT::Model* model = fakethis->parent.model;
      result = (model->*f)();
   }
   else if( itM!=map_extraM.end() )
   {
      // Get function out of the extraM map and call it with Model object as the argument
      typename MapTypes<DT>::plainfptrM f = itM->second;
      typename DT::Model* model = fakethis->parent.model;
      result = (*f)(*model);
   }
   else if( itI!=map_extraI.end() )
   {
      // Get function out of the extraI map and call it with Input object as the argument
      typename MapTypes<DT>::plainfptrI f = itI->second;
      typename DT::Input* input = fakethis->parent.input;
      result = (*f)(*input);
   }
   else
   {
      if( doublecheck and PDB.has_short_name(name) ){
         // No long name exists matching "name" in the function pointer maps
         // Check if a corresponding short name plus index pair exists in 1index getter maps
         // (fptr should point to the appropriate 1 index, class member of O, getter)
         std::pair<str, int> p = PDB.short_name_pair(name);
         std::cout << "running doublecheck: re-calling function with PDG short name pair: "<<name<<" --> "<<p.first<<", "<<p.second<<std::endl;
         result = (fakethis->*fptr)(p.first, p.second, false);
      } else {
         std::ostringstream errmsg;
         errmsg << "Error retrieving particle spectrum data!" << std::endl;
         errmsg << "No "<<maplabel<<" with string reference '"<<name<<"' exists!" <<std::endl;
         utils_error().raise(LOCAL_INFO,errmsg.str());  
      }
   }
   return result;
}


/// Getter/runner for functions taking one index
// template parameters:
// DT - DerivedSpecTraits; carries typedef fro Model and Input
// O  - The host class which uses this function, i.e. Phys or RunningPars
template<class DT, class O>
double getter_1index(/* function maps */
                     const typename MapTypes<DT>::fmap1& map, 
                     /* function call data (and error message data) */
                     const std::string& name, const int i, const std::string& maplabel, 
                     /* host object pointer and pointer to alternate getter */
                     const O* fakethis, double(O::*fptr)(const std::string&, bool) const, 
                     bool doublecheck)
{
   typename MapTypes<DT>::fmap1::const_iterator it = map.find(name); ///  Find desired Model object function
   double result = -1;
   if( it==map.end() )
   {
      if( doublecheck ) {
         // No short name exists for short name plus index pair.
         // Check if long name exists in 0index getter maps
         // (fptr should point to the appropriate 0 index, class member of O, getter)           
         std::cout << "running doublecheck: re-calling function with PDG long name: "<<name<<", "<<i<<" --> "<<PDB.long_name(name,i)<<std::endl;
         result = (fakethis->*fptr)(PDB.long_name(name,i), false);
      } else {
         std::ostringstream errmsg;
         errmsg << "Error retrieving particle spectrum data!" << std::endl;
         errmsg << "No "<<maplabel<<" with string reference '"<<name<<"' exists!" <<std::endl;
         utils_error().raise(LOCAL_INFO,errmsg.str());  
      }
   }
   else
   {
       /// Switch index convention
       int offset = fakethis->parent.get_index_offset();
       int io = i + offset;
       /// Check that index is in the permitted set
       if( not within_bounds(io, it->second.iset1) )
       {
          std::ostringstream errmsg;
          errmsg << "Error retrieving particle spectrum data!" << std::endl;
          errmsg << "Index "<<i<<" out of bounds for "<<maplabel<<" with string reference '"<<name<<"'!" <<std::endl;
          utils_error().raise(LOCAL_INFO,errmsg.str());  
       }

       ///  Get function out of map and call it on the bound flexiSUSY object
       typename MapTypes<DT>::FSptr1 f = it->second.fptr;
       typename DT::Model* model = fakethis->parent.model;
       result = (model->*f)(io);
   }
   return result;
}

/// Getter/runner for functions taking two indices
// template parameters:
// DT - DerivedSpecTraits; carries typedef fro Model and Input
// O  - The host class which uses this function, i.e. Phys or RunningPars
template<class DT, class O>
double getter_2indices(/* function maps */
                       const typename MapTypes<DT>::fmap2& map, 
                       /* function call data (and error message data) */
                       const std::string& name, const int i, const int j, const std::string& maplabel, 
                       /* host object pointer */
                       const O* fakethis)
{
   typename MapTypes<DT>::fmap2::const_iterator it = map.find(name); ///  Find desired FlexiSUSY function
   double result = -1;
   if( it==map.end() )
   {
      std::ostringstream errmsg;
      errmsg << "Error retrieving particle spectrum data!" << std::endl;
      errmsg << "No "<<maplabel<<" with string reference '"<<name<<"' exists!" <<std::endl;
      utils_error().raise(LOCAL_INFO,errmsg.str());  
   }
   else
   {
       /// Switch index convention
       int offset = fakethis->parent.get_index_offset();
       int io = i + offset;
       int jo = j + offset;
       /// Check that index is in the permitted set
       if( not within_bounds(io, it->second.iset1) )
       {
          std::ostringstream errmsg;
          errmsg << "Error retrieving particle spectrum data!" << std::endl;
          errmsg << "First index ("<<i<<") out of bounds for "<<maplabel<<" with string reference '"<<name<<"'!" <<std::endl;
          utils_error().raise(LOCAL_INFO,errmsg.str());  
       }
       /// Check that index is in the permitted set
       if( not within_bounds(jo, it->second.iset2) )
       {
          std::ostringstream errmsg;
          errmsg << "Error retrieving particle spectrum data!" << std::endl;
          errmsg << "Second index ("<<j<<") out of bounds for "<<maplabel<<" with string reference '"<<name<<"'!" <<std::endl;
          utils_error().raise(LOCAL_INFO,errmsg.str());  
       }

       ///  Get function out of map and call it on the bound flexiSUSY object
       typename MapTypes<DT>::FSptr2 f = it->second.fptr;
       typename DT::Model* model = fakethis->parent.model;
       result = (model->*f)(io,jo);
   }
   return result;
}



/// mass4
template<class D, class DT>
double RunparDer<D,DT>::get_mass4_parameter(const str& mass, bool doublecheck) const
{
   fp1 f1 = &RunparDer<D,DT>::get_mass4_parameter; // needed for overload resolution
   return getter_0indices<DT>( get_mass4_map(), 
                               get_mass4_map_extraM(), 
                               get_mass4_map_extraI(), 
                               mass, "mass4",
                               this, f1, doublecheck);
}

template <class D, class DT>
double RunparDer<D,DT>::get_mass4_parameter(const str& mass, int i, bool doublecheck) const
{
   fp0 f0 = &RunparDer<D,DT>::get_mass4_parameter;
   return getter_1index<DT>( get_mass4_map1(), 
                             mass, i, "mass4",
                             this, f0, doublecheck);
}

template <class D, class DT>
double  RunparDer<D,DT>::get_mass4_parameter(const str& mass, int i, int j) const
{
   return getter_2indices<DT>(get_mass4_map2(), 
                              mass, i, j, "mass4", 
                              this);
}

/// mass^3
template <class D, class DT>
double RunparDer<D,DT>::get_mass3_parameter(const str& mass, bool doublecheck) const
{
   fp1 f1 = &RunparDer<D,DT>::get_mass3_parameter;
   return getter_0indices<DT>(get_mass3_map(), 
                              get_mass3_map_extraM(), 
                              get_mass3_map_extraI(), 
                              mass, "mass3", 
                              this, f1, doublecheck);
}

template <class D, class DT>
double RunparDer<D,DT>::get_mass3_parameter(const str& mass, int i, bool doublecheck) const
{
   fp0 f0 = &RunparDer<D,DT>::get_mass3_parameter;
   return getter_1index<DT>(get_mass3_map1(), 
                            mass, i, "mass3", 
                            this, f0, doublecheck);
}

template <class D, class DT>
double  RunparDer<D,DT>::get_mass3_parameter(const std::string& mass, int i, int j) const
{
   return getter_2indices<DT>(get_mass3_map2(), 
                              mass, i, j, "mass3",
                              this);
}

/// mass^2
template <class D, class DT>
double  RunparDer<D,DT>::get_mass2_parameter(const std::string& mass, bool doublecheck) const
{
   fp1 f1 = &RunparDer<D,DT>::get_mass2_parameter;
   return getter_0indices<DT>(get_mass2_map(), 
                              get_mass2_map_extraM(), 
                              get_mass2_map_extraI(), 
                              mass, "mass2", 
                              this, f1, doublecheck);
}

template <class D, class DT>
double  RunparDer<D,DT>::get_mass2_parameter(const std::string& mass, int i, bool doublecheck) const
{
   fp0 f0 = &RunparDer<D,DT>::get_mass2_parameter;
   return getter_1index<DT>(get_mass2_map1(), 
                            mass, i, "mass2", 
                            this, f0, doublecheck);
}

template <class D, class DT>
double  RunparDer<D,DT>::get_mass2_parameter(const std::string& mass, int i, int j) const
{
   return getter_2indices<DT>(get_mass2_map2(),
                              mass, i, j, "mass2",
                              this);
}

/// mass^1
template <class D, class DT>
double  RunparDer<D,DT>::get_mass_parameter(const std::string& mass, bool doublecheck) const
{
   fp1 f1 = &RunparDer<D,DT>::get_mass_parameter;
   return getter_0indices<DT>(get_mass_map(), 
                              get_mass_map_extraM(), 
                              get_mass_map_extraI(), 
                              mass, "mass", 
                              this, f1, doublecheck);
}

template <class D, class DT>
double  RunparDer<D,DT>::get_mass_parameter(const std::string& mass, int i, bool doublecheck) const
{
   fp0 f0 = &RunparDer<D,DT>::get_mass_parameter;
   return getter_1index<DT>(get_mass_map1(), 
                            mass, i, "mass",
                            this, f0, doublecheck);            
}

template <class D, class DT>
double  RunparDer<D,DT>::get_mass_parameter(const std::string& mass, int i, int j) const
{
   return getter_2indices<DT>(get_mass_map2(), 
                              mass, i, j, "mass", 
                              this);
}

/// mass^0
template <class D, class DT>
double  RunparDer<D,DT>::get_dimensionless_parameter(const std::string& par, bool doublecheck) const
{
   fp1 f1 = &RunparDer<D,DT>::get_dimensionless_parameter;
   return getter_0indices<DT>(get_mass0_map(), 
                              get_mass0_map_extraM(), 
                              get_mass0_map_extraI(), 
                              par, "dimensionless parameter", 
                              this, f1, doublecheck);
}

template <class D, class DT>
double  RunparDer<D,DT>::get_dimensionless_parameter(const std::string& par, int i, bool doublecheck) const
{
   fp0 f0 = &RunparDer<D,DT>::get_dimensionless_parameter;
   return getter_1index<DT>(get_mass0_map1(), 
                            par, i, "dimensionless parameter",
                            this, f0, doublecheck);
}

template <class D, class DT>
double  RunparDer<D,DT>::get_dimensionless_parameter(const std::string& par, int i, int j) const
{
   return getter_2indices<DT>(get_mass0_map2(), 
                              par, i, j, "dimensionless parameter",
                              this);
}

/// mass_eigenstate
template <class D, class DT>
double  RunparDer<D,DT>::get_mass_eigenstate(const std::string& mass, bool doublecheck) const
{
   fp1 f1 = &RunparDer<D,DT>::get_mass_eigenstate;
   return getter_0indices<DT>(get_mass_eigenstate_map(), 
                              get_mass_eigenstate_map_extraM(), 
                              get_mass_eigenstate_map_extraI(), 
                              mass, "mass_eigenstate",
                              this, f1, doublecheck);
}

template <class D, class DT>
double  RunparDer<D,DT>::get_mass_eigenstate(const std::string& mass, int i, bool doublecheck) const
{
   fp0 f0 = &RunparDer<D,DT>::get_mass_eigenstate;
   return getter_1index<DT>(get_mass_eigenstate_map1(), 
                            mass, i, "mass eigenstate",
                            this, f0, doublecheck);
}

template <class D, class DT>
double  RunparDer<D,DT>::get_mass_eigenstate(const std::string& mass, int i, int j) const
{
   return getter_2indices<DT>(get_mass_eigenstate_map2(), 
                              mass, i, j, "mass_eigenstate", 
                              this);
}

/// Pole masses
template <class D, class DT>
double PhysDer<D,DT>::get_Pole_Mass(const std::string& mass, bool doublecheck) const
{
   fp1 f1 = &PhysDer<D,DT>::get_Pole_Mass;
   return getter_0indices<DT>(get_PoleMass_map(), 
                              get_PoleMass_map_extraM(), 
                              get_PoleMass_map_extraI(), 
                              mass, "pole mass",
                              this, f1, doublecheck);
}

template <class D, class DT>
double PhysDer<D,DT>::get_Pole_Mass(const std::string& mass, int i, bool doublecheck) const
{
   fp0 f0 = &PhysDer<D,DT>::get_Pole_Mass;
   return getter_1index<DT>(get_PoleMass_map1(), 
                            mass, i, "pole mass",
                            this, f0, doublecheck);
}

/// Pole mixings
template <class D, class DT>
double PhysDer<D,DT>::get_Pole_Mixing(const std::string& mixing, bool doublecheck) const
{
   fp1 f1 = &PhysDer<D,DT>::get_Pole_Mixing;
   return getter_0indices<DT>(get_PoleMixing_map(), 
                              get_PoleMixing_map_extraM(), 
                              get_PoleMixing_map_extraI(), 
                              mixing, "pole mixing",
                              this, f1, doublecheck);
}

template <class D, class DT>
double PhysDer<D,DT>::get_Pole_Mixing(const std::string& mixing, int i, bool doublecheck) const
{
   fp0 f0 = &PhysDer<D,DT>::get_Pole_Mixing;
   return getter_1index<DT>(get_PoleMixing_map1(), 
                            mixing, i, "pole mixing",
                            this, f0, doublecheck);
}

template <class D, class DT>
double PhysDer<D,DT>::get_Pole_Mixing(const std::string& mixing, int i, int j) const
{
   return getter_2indices<DT>(get_PoleMixing_map2(), 
                              mixing, i, j, "pole mixing",
                              this);
}

/// @}

} // end namespace Gambit

#undef PDB // Just for safety; this macro is short so could accidentally mess some stuff up
#endif
