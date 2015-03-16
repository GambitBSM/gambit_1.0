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

#ifndef SPECTRUM_H
#define SPECTRUM_H

#include <map>
#include <set>

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

// Container class for SMINPUTS information (defined as in SLHA2)
struct SMInputs
{
   // Set some defaults?

   // SLHA1
   double alphainv;  // 1: Inverse electromagnetic coupling at the Z pole in the MSbar scheme (with 5 active flavours)
   double GF;        // 2: Fermi constant (in units of GeV^-2)
   double alphaS;    // 3: Strong coupling at the Z pole in the MSbar scheme (with 5 active flavours). 
   double mZ;        // 4: Z pole mass
   double mBmB;      // 5: b quark running mass in the MSbar scheme (at mB)
   double mT;        // 6: Top quark pole mass
   double mTau;      // 7: Tau pole mass

   // SLHA2
   double mNu3;      // 8: Heaviest neutrino pole mass
  
   double mE;        // 11: Electron pole mass
   double mNu1;      // 12: Lightest neutrino pole mass
   double mMu;       // 13: Muon pole mass
   double mNu2;      // 14: Second lightest neutrino pole mass
  
   double mD;        // 21: d quark running mass in the MSbar scheme at 2 GeV        
   double mU;        // 21: u quark running mass in the MSbar scheme at 2 GeV        
   double mS;        // 21: s quark running mass in the MSbar scheme at 2 GeV        
   double mCmC;      // 21: c quark running mass in the MSbar scheme at mC      

   // CKM? PMNS? 
};


/// Standard Model plus UV Model container class
// This class is used to deliver both information defined in the Standard Model
// (or potentially just QED X QCD) as a low-energy effective theory (as opposed
// to correspending information defined in a UV model) as well as a
// corresponding UV theory. Parameters defined in the low-energy model are
// often used as input to a physics calculators. In addition, parameters used
// to define the Standard Model, in SLHA2 format, are provided in the SMINPUTS
// data member.
class SMplusUV
{
   private:
      Spectrum* SM;
      Spectrum* UV;
      SMInputs SMINPUTS;
      bool initialised;
   
      void check_init() const {
        if(not initialised) utils_error().raise(LOCAL_INFO,"Access to empty SMplusUV object attempted!");
      }

   public:
      SMplusUV() : SM(), UV(), SMINPUTS(), initialised(false) {}
      SMplusUV(Spectrum* const sm, Spectrum* const uv, SMInputs const smi)
        : SM(sm)
        , UV(uv)
        , SMINPUTS(smi)
        , initialised(true) 
      {}

      Spectrum* get_SM() const {check_init(); return SM;}
      Spectrum* get_UV() const {check_init(); return UV;}
      SMInputs  get_SMINPUTS() const {check_init(); return SMINPUTS;}
};

/// Virtual base class for interacting with spectrum generator output
// Includes facilities for running RGEs
class Spectrum {
   public:
      /// Dump out spectrum information to slha (if possible, and not including input parameters etc. just at the moment...)
      virtual void dump2slha(const std::string&) { vfcn_error(LOCAL_INFO); }
   
      /// Get spectrum information in SLHAea format (if possible)
      SLHAea::Coll empty_SLHAea;  // never used; just to avoid "no return statement in function returning non-void" warnings
      virtual SLHAea::Coll getSLHAea() { vfcn_error(LOCAL_INFO); return empty_SLHAea; }

      /// Get integer offset convention used by internal model class (needed by getters which take indices) 
      virtual int get_index_offset() const = 0;
   
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
      
};

class RunningPars 
{
   public:
      /// Constructors/destructors
      RunningPars() {}
      virtual ~RunningPars() {}      

      /// run object to a particular scale
      virtual void RunToScale(double) { vfcn_error(LOCAL_INFO); }
      /// returns the renormalisation scale of parameters
      virtual double GetScale() const { vfcn_error(LOCAL_INFO); return -1; }
      /// Sets the renormalisation scale of parameters 
      /// somewhat dangerous to allow this but may be needed
      virtual void SetScale(double) { vfcn_error(LOCAL_INFO); }
      
      /// getters using map
      virtual double get_mass4_parameter(const std::string&) const { vfcn_error(LOCAL_INFO); return -1; }
      virtual double get_mass4_parameter(const std::string&, int) const { vfcn_error(LOCAL_INFO); return -1; }
      virtual double get_mass4_parameter(const std::string&, int, int) const { vfcn_error(LOCAL_INFO); return -1; }
      virtual double get_mass3_parameter(const std::string&) const { vfcn_error(LOCAL_INFO); return -1; }
      virtual double get_mass3_parameter(const std::string&, int) const { vfcn_error(LOCAL_INFO); return -1; }
      virtual double get_mass3_parameter(const std::string&, int, int) const { vfcn_error(LOCAL_INFO); return -1; }
      virtual double get_mass2_parameter(const std::string&) const { vfcn_error(LOCAL_INFO); return -1; }
      virtual double get_mass2_parameter(const std::string&, int) const { vfcn_error(LOCAL_INFO); return -1; }
      virtual double get_mass2_parameter(const std::string&, int, int) const { vfcn_error(LOCAL_INFO); return -1; }
      virtual double get_mass_parameter(const std::string&) const { vfcn_error(LOCAL_INFO); return -1; } 
      virtual double get_mass_parameter(const std::string&, int) const { vfcn_error(LOCAL_INFO); return -1; }
      virtual double get_mass_parameter(const std::string&, int, int) const { vfcn_error(LOCAL_INFO); return -1; }
      virtual double get_dimensionless_parameter(const std::string&) const { vfcn_error(LOCAL_INFO); return -1; }
      virtual double get_dimensionless_parameter(const std::string&, int) const { vfcn_error(LOCAL_INFO); return -1; }
      virtual double get_dimensionless_parameter(const std::string&, int, int) const { vfcn_error(LOCAL_INFO); return -1; }
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

///  If we were allowed to use later C++11 compilers we could use template aliases to save some effort, but as
///  it is we'll just have to redo these typedefs in the derived classes. Can do this with a macro.
#define REDO_TYPEDEFS(Model) \
   typedef double(Model::*FSptr)(void) const; /* Function pointer signature for Model object member functions with no arguments */ \
   typedef double(Model::*FSptr1)(int) const; /* Function pointer signature for Model object member functions with one argument */ \
   typedef double(Model::*FSptr2)(int,int) const; /* Function pointer signature for Model object member functions with two arguments */ \
   typedef double(*plainfptr)(const Model&); /* Function pointer for plain functions; used for custom functions */ \
   \
   typedef FcnInfo1<FSptr1> FInfo1; \
   typedef FcnInfo2<FSptr2> FInfo2; \
   \
   typedef std::map<std::string, FSptr> fmap; /* Typedef for map of strings to function pointers */ \
   typedef std::map<std::string, FInfo1> fmap1;/*with an index*/ \
   typedef std::map<std::string, FInfo2> fmap2; /*with 2 indices */ \
   typedef std::map<std::string, plainfptr> fmap_plain; /* map of plain function pointers */

/// As well as the above, it is handy to have these types accessible via a helper template struct:
/// Get them like: MapTypes<Model>::fmap
template <class Model>
struct MapTypes
{
   REDO_TYPEDEFS(Model)
};
  
 
//forward declaration

template <class Model>
class PhysDer : public Phys {
   friend class Spectrum;
   using Phys::get_Pole_Mass; // Need to expose the base class function overloads with this name
   REDO_TYPEDEFS(Model)
   private:      
      /// Needed for access to "parent" object member functions
      Spectrum& base_parent;
      Model& model;
      // Empty maps, for default return only
      fmap       fmap_empty;
      fmap_plain fmap_plain_empty;
      fmap1      fmap1_empty;
      fmap2      fmap2_empty;
      // Default getters, to be overridden in derived class for non-empty maps.
      virtual const fmap&       get_PoleMass_map()         const { return fmap_empty; }  
      virtual const fmap_plain& get_PoleMass_map_extra()   const { return fmap_plain_empty; }
      virtual const fmap1&      get_PoleMass_map1()        const { return fmap1_empty; }
      virtual const fmap&       get_PoleMixing_map()       const { return fmap_empty; }  
      virtual const fmap_plain& get_PoleMixing_map_extra() const { return fmap_plain_empty; }
      virtual const fmap1&      get_PoleMixing_map1()      const { return fmap1_empty; }
      virtual const fmap2&      get_PoleMixing_map2()      const { return fmap2_empty; }
   public: 
      // During construction, link the object to its "parent", and to the Model object 
      // (which, most sensibly, should be a data member of the some derived class)
      PhysDer(Spectrum& s, Model& m) : base_parent(s), model(m) {}
      virtual ~PhysDer() {}    

      virtual double get_Pole_Mass(const std::string&) const;
      virtual double get_Pole_Mass(const std::string&, int) const;
      virtual double get_Pole_Mixing(const std::string&) const;
      virtual double get_Pole_Mixing(const std::string&, int) const;
      virtual double get_Pole_Mixing(const std::string&, int, int) const;
};

template <class Model>
class RunparDer : public RunningPars {
   friend class Spectrum;
   REDO_TYPEDEFS(Model)
   private:
      /// Needed for access to "parent" object member functions
      Spectrum& base_parent;
      Model& model;
      // Empty maps, for default return only
      fmap       fmap_empty;
      fmap_plain fmap_plain_empty;
      fmap1      fmap1_empty;
      fmap2      fmap2_empty;
      // Default getters, to be overridden in derived class for non-empty maps.
      virtual const fmap&       get_mass4_map()          const { return fmap_empty; }  
      virtual const fmap_plain& get_mass4_map_extra()    const { return fmap_plain_empty; }
      virtual const fmap1&      get_mass4_map1()         const { return fmap1_empty; }
      virtual const fmap2&      get_mass4_map2()         const { return fmap2_empty; }  
      virtual const fmap&       get_mass3_map()          const { return fmap_empty; }  
      virtual const fmap_plain& get_mass3_map_extra()    const { return fmap_plain_empty; }
      virtual const fmap1&      get_mass3_map1()         const { return fmap1_empty; }
      virtual const fmap2&      get_mass3_map2()         const { return fmap2_empty; }  
      virtual const fmap&       get_mass2_map()          const { return fmap_empty; }  
      virtual const fmap_plain& get_mass2_map_extra()    const { return fmap_plain_empty; }
      virtual const fmap1&      get_mass2_map1()         const { return fmap1_empty; }
      virtual const fmap2&      get_mass2_map2()         const { return fmap2_empty; }  
      virtual const fmap&       get_mass_map()           const { return fmap_empty; }  
      virtual const fmap_plain& get_mass_map_extra()     const { return fmap_plain_empty; }
      virtual const fmap1&      get_mass_map1()          const { return fmap1_empty; }
      virtual const fmap2&      get_mass_map2()          const { return fmap2_empty; }  
      virtual const fmap&       get_mass0_map()          const { return fmap_empty; }  
      virtual const fmap_plain& get_mass0_map_extra()    const { return fmap_plain_empty; }
      virtual const fmap1&      get_mass0_map1()         const { return fmap1_empty; }
      virtual const fmap2&      get_mass0_map2()         const { return fmap2_empty; }        
   public:
      // During construction, link the object to its "parent", and to the Model object 
      // (which, most sensibly, should be a data member of the some derived class)
      RunparDer(Spectrum& s, Model& m) : base_parent(s), model(m) {}
      virtual ~RunparDer() {}

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
};


/// To define all the getters, it is useful to define first the following helper functions which will
/// be reused a lot (which just extract the named functions from the supplied maps and run them)

/// Getter/runner for functions taking no indices
// (note: currently only the no-index getters are set up to allow an "extra" map of function pointers to be defined. Can be extended
//  if needed.)
template<class Model>
double getter_0indices(const typename MapTypes<Model>::fmap& map, const typename MapTypes<Model>::fmap_plain& map_extra, const std::string& name, const std::string& maplabel, const Model& model)
{
   typename MapTypes<Model>::fmap::const_iterator it = map.find(name); ///  Find desired Model object function
   typename MapTypes<Model>::fmap_plain::const_iterator it2 = map_extra.find(name); ///  Check if it exists in the extra map

   if( it!=map.end() )
   {
      //  Get function out of map and call it on the bound model object
      typename MapTypes<Model>::FSptr f = it->second;
      return (model.*f)();
   }
   else if( it2!=map_extra.end() )
   {
      // Get function out of the extras map and call it
      typename MapTypes<Model>::plainfptr f = it2->second;
      return (*f)(model);
   }
   else
   {
      std::cout << "No "<<maplabel<<" with string reference '"<<name<<"' exists!" <<std::endl;
      return -1;
   }

}


/// Getter/runner for functions taking one index
template<class Model>
double getter_1index(const typename MapTypes<Model>::fmap1& map, const std::string& name, const int i, const std::string& maplabel, const Model& model, const int offset)
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
       return (model.*f)(io);
   }
}

/// Getter/runner for functions taking two indices
template<class Model>
double getter_2indices(const typename MapTypes<Model>::fmap2& map, const std::string& name, const int i, const int j, const std::string& maplabel, const Model& model, const int offset)
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
       return (model.*f)(io,jo);
   }
}

/// mass4
template<class Model>
double RunparDer<Model>::get_mass4_parameter(const std::string& mass) const
{
   return getter_0indices(get_mass4_map(), get_mass4_map_extra(), mass, "mass4", model);
}

template <class Model>
double RunparDer<Model>::get_mass4_parameter(const std::string& mass, int i) const
{
   return getter_1index(get_mass4_map1(), mass, i, "mass4", model, base_parent.get_index_offset());
}

template <class Model>
double  RunparDer<Model>::get_mass4_parameter(const std::string& mass, int i, int j) const
{
   return getter_2indices(get_mass4_map2(), mass, i, j, "mass4", model, base_parent.get_index_offset());
}

/// mass^3
template <class Model>
double RunparDer<Model>::get_mass3_parameter(const std::string& mass) const
{
   return getter_0indices(get_mass3_map(), get_mass3_map_extra(), mass, "mass3", model);
}

template <class Model>
double RunparDer<Model>::get_mass3_parameter(const std::string& mass, int i) const
{
   return getter_1index(get_mass3_map1(), mass, i, "mass3", model, base_parent.get_index_offset());
}

template <class Model>
double  RunparDer<Model>::get_mass3_parameter(const std::string& mass, int i, int j) const
{
   return getter_2indices(get_mass3_map2(), mass, i, j, "mass3", model, base_parent.get_index_offset());
}

/// mass^2
template <class Model>
double  RunparDer<Model>::get_mass2_parameter(const std::string& mass) const
{
   return getter_0indices(get_mass2_map(), get_mass2_map_extra(), mass, "mass2", model);
}

template <class Model>
double  RunparDer<Model>::get_mass2_parameter(const std::string& mass, int i) const
{
   return getter_1index(get_mass2_map1(), mass, i, "mass2", model, base_parent.get_index_offset());
}

template <class Model>
double  RunparDer<Model>::get_mass2_parameter(const std::string& mass, int i, int j) const
{
   return getter_2indices(get_mass2_map2(), mass, i, j, "mass2", model, base_parent.get_index_offset());
}

/// mass^1
template <class Model>
double  RunparDer<Model>::get_mass_parameter(const std::string& mass) const
{
   return getter_0indices(get_mass_map(), get_mass_map_extra(), mass, "mass", model);
}

template <class Model>
double  RunparDer<Model>::get_mass_parameter(const std::string& mass, int i) const
{
   return getter_1index(get_mass_map1(), mass, i, "mass", model, base_parent.get_index_offset());
}

template <class Model>
double  RunparDer<Model>::get_mass_parameter(const std::string& mass, int i, int j) const
{
   return getter_2indices(get_mass_map2(), mass, i, j, "mass", model, base_parent.get_index_offset());
}

/// mass^0
template <class Model>
double  RunparDer<Model>::get_dimensionless_parameter(const std::string& par) const
{
   return getter_0indices(get_mass0_map(), get_mass0_map_extra(), par, "dimensionless parameter", model);
}

template <class Model>
double  RunparDer<Model>::get_dimensionless_parameter(const std::string& par, int i) const
{
   return getter_1index(get_mass0_map1(), par, i, "dimensionless parameter", model, base_parent.get_index_offset());
}

template <class Model>
double  RunparDer<Model>::get_dimensionless_parameter(const std::string& par, int i, int j) const
{
   return getter_2indices(get_mass0_map2(), par, i, j, "dimensionless parameter", model, base_parent.get_index_offset());
}

/// Pole masses
template <class Model>
double PhysDer<Model>::get_Pole_Mass(const std::string& mass) const
{
   // Check whether string can be converted to a short name plus index by PDB
   // If so, we need to use those instead to retrieve the correct pole mass
   if( PDB.has_short_name(mass) )
   {
      return get_Pole_Mass( PDB.short_name_pair(mass) );  
   }

   return getter_0indices(get_PoleMass_map(), get_PoleMass_map_extra(), mass, "pole mass", model);
}

template <class Model>
double PhysDer<Model>::get_Pole_Mass(const std::string& mass, int i) const
{
   return getter_1index(get_PoleMass_map1(), mass, i, "pole mass", model, base_parent.get_index_offset());
}


/// Pole mixings
template <class Model>
double PhysDer<Model>::get_Pole_Mixing(const std::string& mixing) const
{
   return getter_0indices(get_PoleMixing_map(), get_PoleMixing_map_extra(), mixing, "pole mixing", model);
}

template <class Model>
double PhysDer<Model>::get_Pole_Mixing(const std::string& mixing, int i) const
{
   return getter_1index(get_PoleMixing_map1(), mixing, i, "pole mixing", model, base_parent.get_index_offset());
}

template <class Model>
double PhysDer<Model>::get_Pole_Mixing(const std::string& mixing, int i, int j) const
{
   return getter_2indices(get_PoleMixing_map2(), mixing, i, j, "pole mixing", model, base_parent.get_index_offset());
}


///  Need the templating so that the calls to the FlexiSUSY functions 
/// know which FlexiSUSY classes to use

//Ben: I don't think we need the below layer... I am flagging it for deletion

//template <class S>
//class Spec : public Spectrum
//{
//private: 
//   /// Internal instances of the derived inner classes
//   RunparDer<S>& myrunpar;
//   PhysDer<S>& myphys;
//public: 
//   Spec(RunparDer<S> &rp, PhysDer<S> &pp) : 
//      myrunpar(rp), 
//      myphys(pp),
//      Spectrum(rp,pp)
//   {}
//   virtual S& model const = 0; 
//   //virtual P get_bound_phys() const = 0; 
//};


///  Have to re-write these two functions for each derived class, so that reference to the correct member variables is retrieved.
///  Need these functions though so that the original definition of get_mass2_par can be re-used.
///  Maybe do this with another macro...

#define MODEL_RUNNING_MEMBER_FUNCTIONS_SINGLE(ClassName,NAME) \
  ClassName::fmap       ClassName::CAT(NAME,_map)      (ClassName::CAT_3(fill_,NAME,_map)()); \
  ClassName::fmap_plain ClassName::CAT(NAME,_map_extra)(ClassName::CAT_3(fill_,NAME,_map_extra)()); \
  ClassName::fmap1      ClassName::CAT(NAME,_map1)     (ClassName::CAT_3(fill_,NAME,_map1)()); \
  ClassName::fmap2      ClassName::CAT(NAME,_map2)     (ClassName::CAT_3(fill_,NAME,_map2)()); \
\
  ClassName::fmap&       ClassName::CAT_3(get_,NAME,_map)()       const {return CAT(NAME,_map);} \
  ClassName::fmap_plain& ClassName::CAT_3(get_,NAME,_map_extra)() const {return CAT(NAME,_map_extra);} \
  ClassName::fmap1&      ClassName::CAT_3(get_,NAME,_map1)()      const {return CAT(NAME,_map1);} \
  ClassName::fmap2&      ClassName::CAT_3(get_,NAME,_map2)()      const {return CAT(NAME,_map2);}
/* The above expands to, e.g. (NAME=mass4)
  ClassName::fmap       ClassName::mass4_map      (ClassName::fill_mass4_map()); \
  ClassName::fmap_plain ClassName::mass4_map_extra(ClassName::fill_mass4_map_extra()); \
  ClassName::fmap1      ClassName::mass4_map1     (ClassName::fill_mass4_map1()); \
  ClassName::fmap2      ClassName::mass4_map2     (ClassName::fill_mass4_map2()); \
\
  ClassName::fmap&       ClassName::get_mass4_map()       const {return mass4_map;} \
  ClassName::fmap_plain& ClassName::get_mass4_map_extra() const {return mass4_map_extra;} \
  ClassName::fmap1&      ClassName::get_mass4_map1()      const {return mass4_map1;} \
  ClassName::fmap2&      ClassName::get_mass4_map2()      const {return mass4_map2;}
*/

#define MODEL_RUNNING_MEMBER_FUNCTIONS(ClassName) \
   MODEL_RUNNING_MEMBER_FUNCTIONS_SINGLE(ClassName,mass4) \
   MODEL_RUNNING_MEMBER_FUNCTIONS_SINGLE(ClassName,mass3) \
   MODEL_RUNNING_MEMBER_FUNCTIONS_SINGLE(ClassName,mass2) \
   MODEL_RUNNING_MEMBER_FUNCTIONS_SINGLE(ClassName,mass) \
   MODEL_RUNNING_MEMBER_FUNCTIONS_SINGLE(ClassName,mass0)

// Only two here so I didn't bother with another macro 
#define MODEL_PHYS_MEMBER_FUNCTIONS(ClassName) \
  ClassName::fmap        ClassName::PoleMass_map      (ClassName::fill_PoleMass_map()); \
  ClassName::fmap_plain  ClassName::PoleMass_map_extra(ClassName::fill_PoleMass_map_extra()); \
  ClassName::fmap1       ClassName::PoleMass_map1     (ClassName::fill_PoleMass_map1()); \
  \
  ClassName::fmap&       ClassName::get_PoleMass_map()       const {return PoleMass_map;} \
  ClassName::fmap_plain& ClassName::get_PoleMass_map_extra() const {return PoleMass_map_extra;} \
  ClassName::fmap1&      ClassName::get_PoleMass_map1()      const {return PoleMass_map1;} \
  \
  ClassName::fmap        ClassName::PoleMixing_map      (ClassName::fill_PoleMixing_map()); \
  ClassName::fmap_plain& ClassName::PoleMixing_map_extra(ClassName::fill_PoleMixing_map_extra()); \
  ClassName::fmap1       ClassName::PoleMixing_map1     (ClassName::fill_PoleMixing_map1()); \
  ClassName::fmap2       ClassName::PoleMixing_map2     (ClassName::fill_PoleMixing_map2()); \
  \
  ClassName::fmap&       ClassName::get_PoleMixing_map()       const {return PoleMixing_map;} \
  ClassName::fmap_plain& ClassName::get_PoleMixing_map_extra() const {return PoleMixing_map_extra;} \
  ClassName::fmap1&      ClassName::get_PoleMixing_map1()      const {return PoleMixing_map1;} \
  ClassName::fmap2&      ClassName::get_PoleMixing_map2()      const {return PoleMixing_map2;} \


// Versions of the above for template classes
#define MODEL_RUNNING_TEMPLATE_MEMBER_FUNCTIONS_SINGLE(ClassName,NAME) \
  template <class M> typename ClassName<M>::fmap       ClassName<M>::CAT(NAME,_map)      (ClassName<M>::CAT_3(fill_,NAME,_map)()); \
  template <class M> typename ClassName<M>::fmap_plain ClassName<M>::CAT(NAME,_map_extra)(ClassName<M>::CAT_3(fill_,NAME,_map_extra)()); \
  template <class M> typename ClassName<M>::fmap1      ClassName<M>::CAT(NAME,_map1)     (ClassName<M>::CAT_3(fill_,NAME,_map1)()); \
  template <class M> typename ClassName<M>::fmap2      ClassName<M>::CAT(NAME,_map2)     (ClassName<M>::CAT_3(fill_,NAME,_map2)()); \
\
  template <class M> const typename ClassName<M>::fmap&       ClassName<M>::CAT_3(get_,NAME,_map)() const {return CAT(NAME,_map);} \
  template <class M> const typename ClassName<M>::fmap_plain& ClassName<M>::CAT_3(get_,NAME,_map_extra)() const {return CAT(NAME,_map_extra);} \
  template <class M> const typename ClassName<M>::fmap1&      ClassName<M>::CAT_3(get_,NAME,_map1)() const {return CAT(NAME,_map1);} \
  template <class M> const typename ClassName<M>::fmap2&      ClassName<M>::CAT_3(get_,NAME,_map2)() const {return CAT(NAME,_map2);} \
/* The above expands to, e.g. (NAME=mass4)
  template <class M> typename ClassName<M>::fmap        ClassName<M>::mass4_map      (ClassName<M>::fill_mass4_map()); \
  template <class M> typename ClassName<M>::fmap_plain  ClassName<M>::mass4_map_extra(ClassName<M>::fill_mass4_map_extra()); \
  template <class M> typename ClassName<M>::fmap1       ClassName<M>::mass4_map1     (ClassName<M>::fill_mass4_map1()); \
  template <class M> typename ClassName<M>::fmap2       ClassName<M>::mass4_map2     (ClassName<M>::fill_mass4_map2()); \
\
  template <class M> typename const ClassName<M>::fmap&       ClassName<M>::get_mass4_map()       const {return mass4_map;} \
  template <class M> typename const ClassName<M>::fmap_plain& ClassName<M>::get_mass4_map_extra() const {return mass4_map_extra;} \
  template <class M> typename const ClassName<M>::fmap1&      ClassName<M>::get_mass4_map1()      const {return mass4_map1;} \
  template <class M> typename const ClassName<M>::fmap2&      ClassName<M>::get_mass4_map2()      const {return mass4_map2;} \
*/

#define MODEL_RUNNING_TEMPLATE_MEMBER_FUNCTIONS(ClassName) \
   MODEL_RUNNING_TEMPLATE_MEMBER_FUNCTIONS_SINGLE(ClassName,mass4) \
   MODEL_RUNNING_TEMPLATE_MEMBER_FUNCTIONS_SINGLE(ClassName,mass3) \
   MODEL_RUNNING_TEMPLATE_MEMBER_FUNCTIONS_SINGLE(ClassName,mass2) \
   MODEL_RUNNING_TEMPLATE_MEMBER_FUNCTIONS_SINGLE(ClassName,mass) \
   MODEL_RUNNING_TEMPLATE_MEMBER_FUNCTIONS_SINGLE(ClassName,mass0)

#define MODEL_PHYS_TEMPLATE_MEMBER_FUNCTIONS(ClassName) \
  template <class M> typename ClassName<M>::fmap       ClassName<M>::PoleMass_map(      ClassName<M>::fill_PoleMass_map()      ); \
  template <class M> typename ClassName<M>::fmap_plain ClassName<M>::PoleMass_map_extra(ClassName<M>::fill_PoleMass_map_extra()); \
  template <class M> typename ClassName<M>::fmap1      ClassName<M>::PoleMass_map1(     ClassName<M>::fill_PoleMass_map1()     ); \
  \
  template <class M> const typename ClassName<M>::fmap&       ClassName<M>::get_PoleMass_map()       const {return PoleMass_map;      } \
  template <class M> const typename ClassName<M>::fmap_plain& ClassName<M>::get_PoleMass_map_extra() const {return PoleMass_map_extra;} \
  template <class M> const typename ClassName<M>::fmap1&      ClassName<M>::get_PoleMass_map1()      const {return PoleMass_map1;     } \
  \
  template <class M> typename ClassName<M>::fmap        ClassName<M>::PoleMixing_map(      ClassName<M>::fill_PoleMixing_map()      ); \
  template <class M> typename ClassName<M>::fmap_plain  ClassName<M>::PoleMixing_map_extra(ClassName<M>::fill_PoleMixing_map_extra()); \
  template <class M> typename ClassName<M>::fmap1       ClassName<M>::PoleMixing_map1(     ClassName<M>::fill_PoleMixing_map1()     ); \
  template <class M> typename ClassName<M>::fmap2       ClassName<M>::PoleMixing_map2(     ClassName<M>::fill_PoleMixing_map2()     ); \
  \
  template <class M> const typename ClassName<M>::fmap&       ClassName<M>::get_PoleMixing_map()       const {return PoleMixing_map;      } \
  template <class M> const typename ClassName<M>::fmap_plain& ClassName<M>::get_PoleMixing_map_extra() const {return PoleMixing_map_extra;} \
  template <class M> const typename ClassName<M>::fmap1&      ClassName<M>::get_PoleMixing_map1()      const {return PoleMixing_map1;     } \
  template <class M> const typename ClassName<M>::fmap2&      ClassName<M>::get_PoleMixing_map2()      const {return PoleMixing_map2;     } \

} // end namespace Gambit

#undef PDB // Just for safety; this macro is short so could accidentally mess some stuff up
#endif
