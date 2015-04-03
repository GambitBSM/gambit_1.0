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
   
   private:
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
      virtual double get_mass4_parameter(const std::string&) const = 0;
      virtual double get_mass4_parameter(const std::string&, int) const = 0;
      virtual double get_mass4_parameter(const std::string&, int, int) const = 0;
      virtual double get_mass3_parameter(const std::string&) const = 0;
      virtual double get_mass3_parameter(const std::string&, int) const = 0;
      virtual double get_mass3_parameter(const std::string&, int, int) const = 0;
      virtual double get_mass2_parameter(const std::string&) const = 0;
      virtual double get_mass2_parameter(const std::string&, int) const = 0;
      virtual double get_mass2_parameter(const std::string&, int, int) const = 0;
      virtual double get_mass_parameter(const std::string&) const = 0;
      virtual double get_mass_parameter(const std::string&, int) const = 0;
      virtual double get_mass_parameter(const std::string&, int, int) const = 0;
      virtual double get_dimensionless_parameter(const std::string&) const = 0;
      virtual double get_dimensionless_parameter(const std::string&, int) const = 0;
      virtual double get_dimensionless_parameter(const std::string&, int, int) const = 0;
      virtual double get_mass_eigenstate(const std::string&) const = 0;
      virtual double get_mass_eigenstate(const std::string&, int) const = 0;
      virtual double get_mass_eigenstate(const std::string&, int, int) const = 0;
};

class Phys 
{
   public: 
      /// Constructors/destructors
      Phys() {}
      virtual ~Phys() {}      

      /// map based getters
      virtual double get_Pole_Mass(const std::string&) const { vfcn_error(LOCAL_INFO); return -1; };
      virtual double get_Pole_Mass(const std::string&, int) const { vfcn_error(LOCAL_INFO); return -1; };
      virtual double get_Pole_Mixing(const std::string&) const { vfcn_error(LOCAL_INFO); return -1; };
      virtual double get_Pole_Mixing(const std::string&, int) const { vfcn_error(LOCAL_INFO); return -1; };
      virtual double get_Pole_Mixing(const std::string&, int, int) const { vfcn_error(LOCAL_INFO); return -1; };

      /// Overloads of these functions to allow access using PDG codes
      /// as defined in Models/src/particle_database.cpp
      /// These don't have to be virtual; they just call the virtual functions in the end.
      double get_Pole_Mass(const int, const int) const;     // Input PDG code plus context integer
      double get_Pole_Mass(const std::pair<int,int>) const; // Input PDG code plus context integer
      double get_Pole_Mass(const std::pair<str,int>) const; // Input short name plus index

};
   

/// =====================================================



/// Pole mass getter overloads for easier interaction with particle database
/// @{

inline double Phys::get_Pole_Mass(const std::pair<str,int> shortpr) const
{
  return get_Pole_Mass(shortpr.first, shortpr.second);
}

inline double Phys::get_Pole_Mass(const int pdg_code, const int context) const
{
   // PDB context integer must be zero for pole mass retrieval
   // (this is the context integer for mass eigenstate) 
   return get_Pole_Mass( std::make_pair(pdg_code,context) );
}

inline double Phys::get_Pole_Mass(const std::pair<int,int> pdgpr) const
{
   // If there is a short name, then retrieve that plus the index
   if( PDB.has_short_name(pdgpr) )
   {
     return get_Pole_Mass( PDB.short_name_pair(pdgpr) );
   }
   else // Use the long name with no index instead
   {
     return get_Pole_Mass( PDB.long_name(pdgpr) );
   }
}
/// @}


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
   typedef typename DerivedSpecTraits::Model Model;
   typedef typename DerivedSpecTraits::Input Input;
   typedef double(Model::*FSptr)(void) const; /* Function pointer signature for Model object member functions with no arguments */
   typedef double(Model::*FSptr1)(int) const; /* Function pointer signature for Model object member functions with one argument */
   typedef double(Model::*FSptr2)(int,int) const; /* Function pointer signature for Model object member functions with two arguments */
   typedef double(*plainfptrM)(const Model&); /* Function pointer for plain functions; used for custom functions */
   typedef double(*plainfptrI)(const Input&); /* Function pointer for plain functions; used for custom functions */
   typedef FcnInfo1<FSptr1> FInfo1;
   typedef FcnInfo2<FSptr2> FInfo2;
   typedef std::map<std::string, FSptr> fmap; /* Typedef for map of strings to function pointers */
   typedef std::map<std::string, FInfo1> fmap1;/*with an index*/
   typedef std::map<std::string, FInfo2> fmap2; /*with 2 indices */
   typedef std::map<std::string, plainfptrM> fmap_extra;  /* map of plain function pointers */
   typedef std::map<std::string, plainfptrI> fmap_extraI; /* map of plain function pointers */
};

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
   /* "real" filler (as opposed to the one this functions calls) i.e. this is
      the function that actually fills the map. The two steps are needed so
      that we can take advantage of the CRTP setup of the parent DerivedSpec 
      class to achieve the static polymorphism we need, which allows default 
      (null) fillers from the base Spec class to be used when no override is 
      defined. */ \
   typename MT::CAT(f,TAG) CAT_4(fill_,NAME,_,TAG)() \
   { \
     return parent.CAT_4(fill_,NAME,_,TAG)(); \
   }

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
      // FILLER
      typename MT::fmap fill_mass0_map()
      {
        return parent.fill_mass0_map();
      }; 
   */ \
   DECLARE_MAP(NAME,map_extra);  /* no indices, custom functions (argument=Model&) */ \
   DECLARE_MAP(NAME,map_extraI); /* no indices, custom functions (argument=Input&) */ \
   DECLARE_MAP(NAME,map1);       /* one index */ \

#define DECLARE_MAP_COLLECTION2(NAME) \
   DECLARE_MAP_COLLECTION(NAME) \
   DECLARE_MAP(NAME,map2);       /* two indices */

/// @}

/// @{ Map filling macros

/// Has to be seperate, since the static maps cannot be initialised from within
/// the class definition 
#define FILL_MAP(CLASS,NAME,TAG) \
   template <class D, class DT> \
   typename MapTypes<DT>::CAT(f,TAG) CLASS<D,DT>::CAT_3(NAME,_,TAG)(CLASS::CAT_4(fill_,NAME,_,TAG)());

#define FILL_MAP_COLLECTION(CLASS,NAME) \
   FILL_MAP(CLASS,NAME,map) \
   /* Expands to (e.g. CLASS=RunparDer, NAME=mass0)
      template <class D> \
      typename MapTypes<D>::fmap RunparDer<D>::PoleMass_map(RunparDer::fill_mass0_map());
   */ \
   FILL_MAP(CLASS,NAME,map_extra) \
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
   typename MT::CAT(f,TAG) CAT_4(NAME,_,TAG,_empty); \
   virtual typename MT::CAT(f,TAG) CAT_4(fill_,NAME,_,TAG)() \
   { \
     /* Returns empty map by default */ \
     return CAT_4(NAME,_,TAG,_empty); \
   } \

#define DECLARE_MAP_FILLER_COLLECTION(NAME) \
   DECLARE_MAP_FILLER(NAME,map) \
   /* Expands to (e.g. NAME=mass0):
      const typename MT::fmap map_mass0_empty; \
      virtual typename MT::fmap fill_mass0_map()
      {
        return map_mass0_empty;
      }
   */ \
   DECLARE_MAP_FILLER(NAME,map_extra) \
   DECLARE_MAP_FILLER(NAME,map_extraI) \
   DECLARE_MAP_FILLER(NAME,map1)

#define DECLARE_MAP_FILLER_COLLECTION2(NAME) \
   DECLARE_MAP_FILLER_COLLECTION(NAME) \
   DECLARE_MAP_FILLER(NAME,map2)
  
template <class DerivedSpec, class DerivedSpecTraits>
class PhysDer : public Phys 
{
      friend class Spec<DerivedSpec,DerivedSpecTraits>;
      using Phys::get_Pole_Mass; // Need to expose the base class function overloads with this name
      typedef MapTypes<DerivedSpecTraits> MT; 

   protected:
      /// Needed for access to "parent" object member functions
      /// Needs to be protected so that derived classes can access it
      Spec<DerivedSpec,DerivedSpecTraits>& parent;

   private:      
      DECLARE_MAP_COLLECTION(PoleMass)     // Pole masses
      DECLARE_MAP_COLLECTION2(PoleMixing)  // Pole mass mixing parameters

   public:
      // During construction, link the object to its "parent"
      PhysDer(Spec<DerivedSpec,DerivedSpecTraits>& s) : parent(s) {}
      virtual ~PhysDer() {}    

      virtual double get_Pole_Mass(const std::string&) const;
      virtual double get_Pole_Mass(const std::string&, int) const;
      virtual double get_Pole_Mixing(const std::string&) const;
      virtual double get_Pole_Mixing(const std::string&, int) const;
      virtual double get_Pole_Mixing(const std::string&, int, int) const;
};
/// Initialise maps (using filler overrides from DerivedSpec if defined)
FILL_MAP_COLLECTION(PhysDer,PoleMass)
FILL_MAP_COLLECTION2(PhysDer,PoleMixing)

template <class DerivedSpec, class DerivedSpecTraits>
class RunparDer : public RunningPars
{
     friend class Spec<DerivedSpec,DerivedSpecTraits>;
     typedef MapTypes<DerivedSpecTraits> MT; 

   protected:
      /// Needed for access to "parent" object member functions
      /// Needs to be protected so that derived classes can access it
      Spec<DerivedSpec,DerivedSpecTraits>& parent;

   private:
      DECLARE_MAP_COLLECTION2(mass0)           // dimensionless quantities
      DECLARE_MAP_COLLECTION2(mass)            // mass dimension 1 quantities
      DECLARE_MAP_COLLECTION2(mass2)           //   "     "      2     "
      DECLARE_MAP_COLLECTION2(mass3)           //   "     "      3     "
      DECLARE_MAP_COLLECTION2(mass4)           //   "     "      4     "
      DECLARE_MAP_COLLECTION2(mass_eigenstate) // tree level mass parameters

   public:
      // During construction, link the object to its "parent"
      RunparDer(Spec<DerivedSpec,DerivedSpecTraits>& s) : parent(s) {}
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
      virtual double get_mass4_parameter(const std::string&) const;
      virtual double get_mass4_parameter(const std::string&, int i) const;
      virtual double get_mass4_parameter(const std::string&, int i, int j) const;
      virtual double get_mass3_parameter(const std::string&) const;
      virtual double get_mass3_parameter(const std::string&, int i) const;
      virtual double get_mass3_parameter(const std::string&, int i, int j) const;
      virtual double get_mass2_parameter(const std::string&) const;
      virtual double get_mass2_parameter(const std::string&, int i) const;
      virtual double get_mass2_parameter(const std::string&, int i, int j) const;
      virtual double get_mass_parameter(const std::string&) const;
      virtual double get_mass_parameter(const std::string&, int i) const;
      virtual double get_mass_parameter(const std::string&, int i, int j) const;
      virtual double get_dimensionless_parameter(const std::string&) const;
      virtual double get_dimensionless_parameter(const std::string&, int i) const;
      virtual double get_dimensionless_parameter(const std::string&, int i, int j) const;
      virtual double get_mass_eigenstate(const std::string&) const;
      virtual double get_mass_eigenstate(const std::string&, int i) const;
      virtual double get_mass_eigenstate(const std::string&, int i, int j) const;
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
      friend class RunparDer<DerivedSpec,DerivedSpecTraits>;
      friend class PhysDer<DerivedSpec,DerivedSpecTraits>;
      typedef MapTypes<DerivedSpecTraits> MT; 

      /// Note: DerivedSpecTraits will need to typedef Model and Input
      /// Also make sure to initialise the members "model" and "input" in the 
      /// derived class via this class's full constructor.
      /// "Grab" these typedefs here to simplify notation
      typedef typename DerivedSpecTraits::Model Model;
      typedef typename DerivedSpecTraits::Input Input;

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
      /// (virtual) typename MT::fmap_extra  fill_mass0_map_extra();  /* no indices, custom functions (argument=Model&) */
      /// (virtual) typename MT::fmap_extraI fill_mass0_map_extraI(); /* no indices, custom functions (argument=Input&) */
      /// (virtual) typename MT::fmap1       fill_mass0_map1();       /* one index */
      /// (virtual) typename MT::fmap2       fill_mass0_map2(); **    /* two indices */
      ///          
      /// Note: virtual keyword optional                                                                      
      /// ** Note: 2-index getters not available for PoleMass, since these are assumed
      /// to be mass-ordered (i.e. a mass matrix wouldn't make sense)
   
   private:   
      /// Internal instances of specialised running and physical parameter classes   
      RunparDer<DerivedSpec,DerivedSpecTraits> rp;
      PhysDer<DerivedSpec,DerivedSpecTraits> pp;
   
      /// Model object on which to call function pointers
      Model* model;
    
      /// Contains extra data input on Spectrum object creation
      Input* input;
   
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
template<class Model, class Input>
double getter_0indices(const typename MapTypes<Model>::fmap& map, const typename MapTypes<Model>::fmap_plain& map_extra, const std::string& name, const std::string& maplabel, const Model* model, const Input* input)
{
   typename MapTypes<Model>::fmap::const_iterator it = map.find(name); ///  Find desired Model object function
   typename MapTypes<Model>::fmap_plain::const_iterator it2 = map_extra.find(name); ///  Check if it exists in the extra map

   /// TODO: Currently there will be a segfault if, say fmap is filled, but "model" not initialised to point to something.
   /// Can probably wrap the pointers in a safer structure so that this obvious error can be identified easily.
   if( it!=map.end() )
   {
      //  Get function out of map and call it on the bound model object
      typename MapTypes<Model>::FSptr f = it->second;
      return (model->*f)();
   }
   else if( it2!=map_extra.end() )
   {
      // Get function out of the extras map and call it
      typename MapTypes<Model>::plainfptr f = it2->second;
      return (*f)(*model);
   }
   else
   {
      std::cout << "No "<<maplabel<<" with string reference '"<<name<<"' exists!" <<std::endl;
      return -1;
   }

}


/// Getter/runner for functions taking one index
template<class Model>
double getter_1index(const typename MapTypes<Model>::fmap1& map, const std::string& name, const int i, const std::string& maplabel, const Model* model, const int offset)
{
   typename MapTypes<Model>::fmap1::const_iterator it = map.find(name); ///  Find desired Model object function
   if( it==map.end() )
   {
      std::cout << "No "<<maplabel<<" with string reference '"<<name<<"' exists!" <<std::endl;
      return -1;
   }
   else
   {
       /// Switch index convention
       int io = i + offset;
       /// Check that index is in the permitted set
       if( not within_bounds(io, it->second.iset1) )
       {
          std::cout << "Index "<<i<<" out of bounds for "<<maplabel<<" with string reference '"<<name<<"'!" <<std::endl;
          return -1;
       }

       ///  Get function out of map and call it on the bound flexiSUSY object
       typename MapTypes<Model>::FSptr1 f = it->second.fptr;
       return (model->*f)(io);
   }
}

/// Getter/runner for functions taking two indices
template<class Model>
double getter_2indices(const typename MapTypes<Model>::fmap2& map, const std::string& name, const int i, const int j, const std::string& maplabel, const Model* model, const int offset)
{
   typename MapTypes<Model>::fmap2::const_iterator it = map.find(name); ///  Find desired FlexiSUSY function
   if( it==map.end() )
   {
      std::cout << "No "<<maplabel<<" with string reference '"<<name<<"' exists!" <<std::endl;
      return -1;
   }
   else
   {
       /// Switch index convention
       int io = i + offset;
       int jo = j + offset;
       /// Check that index is in the permitted set
       if( not within_bounds(io, it->second.iset1) )
       {
          std::cout << "First index ("<<i<<") out of bounds for "<<maplabel<<" with string reference '"<<name<<"'!" <<std::endl;
          return -1;
       }
       /// Check that index is in the permitted set
       if( not within_bounds(jo, it->second.iset2) )
       {
          std::cout << "Second index ("<<j<<") out of bounds for "<<maplabel<<" with string reference '"<<name<<"'!" <<std::endl;
          return -1;
       }

       ///  Get function out of map and call it on the bound flexiSUSY object
       typename MapTypes<Model>::FSptr2 f = it->second.fptr;
       return (model->*f)(io,jo);
   }
}

/// mass4
template<class D, class DT>
double RunparDer<D,DT>::get_mass4_parameter(const std::string& mass) const
{
   return getter_0indices(get_mass4_map(), get_mass4_map_extra(), mass, "mass4", parent.model, parent.input);
}

template <class D, class DT>
double RunparDer<D,DT>::get_mass4_parameter(const std::string& mass, int i) const
{
   return getter_1index(get_mass4_map1(), mass, i, "mass4", parent.model, parent.get_index_offset());
}

template <class D, class DT>
double  RunparDer<D,DT>::get_mass4_parameter(const std::string& mass, int i, int j) const
{
   return getter_2indices(get_mass4_map2(), mass, i, j, "mass4", parent.model, parent.get_index_offset());
}

/// mass^3
template <class D, class DT>
double RunparDer<D,DT>::get_mass3_parameter(const std::string& mass) const
{
   return getter_0indices(get_mass3_map(), get_mass3_map_extra(), mass, "mass3", parent.model, parent.input);
}

template <class D, class DT>
double RunparDer<D,DT>::get_mass3_parameter(const std::string& mass, int i) const
{
   return getter_1index(get_mass3_map1(), mass, i, "mass3", parent.model, parent.get_index_offset());
}

template <class D, class DT>
double  RunparDer<D,DT>::get_mass3_parameter(const std::string& mass, int i, int j) const
{
   return getter_2indices(get_mass3_map2(), mass, i, j, "mass3", parent.model, parent.get_index_offset());
}

/// mass^2
template <class D, class DT>
double  RunparDer<D,DT>::get_mass2_parameter(const std::string& mass) const
{
   return getter_0indices(get_mass2_map(), get_mass2_map_extra(), mass, "mass2", parent.model, parent.input);
}

template <class D, class DT>
double  RunparDer<D,DT>::get_mass2_parameter(const std::string& mass, int i) const
{
   return getter_1index(get_mass2_map1(), mass, i, "mass2", parent.model, parent.get_index_offset());
}

template <class D, class DT>
double  RunparDer<D,DT>::get_mass2_parameter(const std::string& mass, int i, int j) const
{
   return getter_2indices(get_mass2_map2(), mass, i, j, "mass2", parent.model, parent.get_index_offset());
}

/// mass^1
template <class D, class DT>
double  RunparDer<D,DT>::get_mass_parameter(const std::string& mass) const
{
   return getter_0indices(get_mass_map(), get_mass_map_extra(), mass, "mass", parent.model, parent.input);
}

template <class D, class DT>
double  RunparDer<D,DT>::get_mass_parameter(const std::string& mass, int i) const
{
   return getter_1index(get_mass_map1(), mass, i, "mass", parent.model, parent.get_index_offset());
}

template <class D, class DT>
double  RunparDer<D,DT>::get_mass_parameter(const std::string& mass, int i, int j) const
{
   return getter_2indices(get_mass_map2(), mass, i, j, "mass", parent.model, parent.get_index_offset());
}

/// mass^0
template <class D, class DT>
double  RunparDer<D,DT>::get_dimensionless_parameter(const std::string& par) const
{
   return getter_0indices(get_mass0_map(), get_mass0_map_extra(), par, "dimensionless parameter", parent.model, parent.input);
}

template <class D, class DT>
double  RunparDer<D,DT>::get_dimensionless_parameter(const std::string& par, int i) const
{
   return getter_1index(get_mass0_map1(), par, i, "dimensionless parameter", parent.model, parent.get_index_offset());
}

template <class D, class DT>
double  RunparDer<D,DT>::get_dimensionless_parameter(const std::string& par, int i, int j) const
{
   return getter_2indices(get_mass0_map2(), par, i, j, "dimensionless parameter", parent.model, parent.get_index_offset());
}

/// mass_eigenstate
template <class D, class DT>
double  RunparDer<D,DT>::get_mass_eigenstate(const std::string& mass) const
{
   return getter_0indices(get_mass_eigenstate_map(), get_mass_eigenstate_map_extra(), mass, "mass_eigenstate", parent.model, parent.input);
}

template <class D, class DT>
double  RunparDer<D,DT>::get_mass_eigenstate(const std::string& mass, int i) const
{
   return getter_1index(get_mass_eigenstate_map1(), mass, i, "mass eigenstate", parent.model, parent.get_index_offset());
}

template <class D, class DT>
double  RunparDer<D,DT>::get_mass_eigenstate(const std::string& mass, int i, int j) const
{
   return getter_2indices(get_mass_eigenstate_map2(), mass, i, j, "mass_eigenstate", parent.model, parent.get_index_offset());
}


/// Pole masses
template <class D, class DT>
double PhysDer<D,DT>::get_Pole_Mass(const std::string& mass) const
{
   // Check whether string can be converted to a short name plus index by PDB
   // If so, we need to use those instead to retrieve the correct pole mass
   if( PDB.has_short_name(mass) )
   {
      return get_Pole_Mass( PDB.short_name_pair(mass) );  
   }

   return getter_0indices(get_PoleMass_map(), get_PoleMass_map_extra(), mass, "pole mass", parent.model);
}

template <class D, class DT>
double PhysDer<D,DT>::get_Pole_Mass(const std::string& mass, int i) const
{
   return getter_1index(get_PoleMass_map1(), mass, i, "pole mass", parent.model, parent.get_index_offset());
}


/// Pole mixings
template <class D, class DT>
double PhysDer<D,DT>::get_Pole_Mixing(const std::string& mixing) const
{
   return getter_0indices(get_PoleMixing_map(), get_PoleMixing_map_extra(), mixing, "pole mixing", parent.model);
}

template <class D, class DT>
double PhysDer<D,DT>::get_Pole_Mixing(const std::string& mixing, int i) const
{
   return getter_1index(get_PoleMixing_map1(), mixing, i, "pole mixing", parent.model, parent.get_index_offset());
}

template <class D, class DT>
double PhysDer<D,DT>::get_Pole_Mixing(const std::string& mixing, int i, int j) const
{
   return getter_2indices(get_PoleMixing_map2(), mixing, i, j, "pole mixing", parent.model, parent.get_index_offset());
}

/// @}

} // end namespace Gambit

#undef PDB // Just for safety; this macro is short so could accidentally mess some stuff up
#endif
