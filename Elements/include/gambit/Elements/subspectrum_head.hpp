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
       
         CommonFuncs(const str& cname, const std::map<Par::Tags,OverrideMaps>& override_maps) 
           : classname(cname)
           , get_override_maps(override_maps) 
         {}
         virtual ~CommonFuncs() {}

         str classname;
         std::map<Par::Tags,OverrideMaps> get_override_maps;

 
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

         /// Run object to a particular scale
         virtual void RunToScale(double) { vfcn_error(LOCAL_INFO); }
         /// Returns the renormalisation scale of parameters
         virtual double GetScale() const { vfcn_error(LOCAL_INFO); return -1;}
         /// Manually set the renormalisation scale of parameters 
         /// somewhat dangerous to allow this but may be needed
         virtual void SetScale(double) { vfcn_error(LOCAL_INFO); }
         
   };




   /// Implementations (overrides) of the virtual getters/setters found in CommonAbstract.
   /// These now need to be templated so that they know details of the derived spectrum object.
   template <class Host>
   class CommonTemplateFuncs: public virtual CommonFuncs
   {
      public:

        /* Getters and checker declarations for parameter retrieval with zero, one, and two indices */
        bool   has(const Par::Tags, const str&, SafeBool check_antiparticle = SafeBool(true)) const;
        double get(const Par::Tags, const str&, SafeBool check_antiparticle = SafeBool(true)) const;
        bool   has(const Par::Tags, const str&, int, SafeBool check_antiparticle = SafeBool(true)) const;
        double get(const Par::Tags, const str&, int, SafeBool check_antiparticle = SafeBool(true)) const;
        bool   has(const Par::Tags, const str&, int, int) const;
        double get(const Par::Tags, const str&, int, int) const;

        /* Setter declarations, for setting parameters in a derived model object,
           and for overriding model object values with values stored outside
           the model object (for when values cannot be inserted back into the
           model object)
           Note; these are NON-CONST */
        void set(const Par::Tags, const double, const str&, SafeBool check_antiparticle = SafeBool(true));
        void set(const Par::Tags, const double, const str&, int, SafeBool check_antiparticle = SafeBool(true));
        void set(const Par::Tags, const double, const str&, int, int);
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
      typedef std::map<str, FSptr> fmap0; /* Typedef for map of strings to function pointers */
      typedef std::map<str, FInfo1> fmap1;/*with an index*/
      typedef std::map<str, FInfo2> fmap2; /*with 2 indices */
      typedef std::map<str, plainfptrM> fmap0_extraM;  /* map of plain function pointers */
      typedef std::map<str, FInfo1M> fmap1_extraM;  /* map of plain function pointers */
      typedef std::map<str, FInfo2M> fmap2_extraM;  /* map of plain function pointers */
      typedef std::map<str, plainfptrI> fmap0_extraI; /* map of plain function pointers */
      typedef std::map<str, FInfo1I> fmap1_extraI; /* map of plain function pointers */
      typedef std::map<str, FInfo2I> fmap2_extraI; /* map of plain function pointers */
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
      typedef std::map<str, FSptr> fmap0; /* Typedef for map of strings to function pointers */
      typedef std::map<str, FInfo1> fmap1;/*with an index*/
      typedef std::map<str, FInfo2> fmap2; /*with 2 indices */
      typedef std::map<str, plainfptrM> fmap0_extraM;  /* map of plain function pointers */
      typedef std::map<str, FInfo1M> fmap1_extraM;  /* map of plain function pointers */
      typedef std::map<str, FInfo2M> fmap2_extraM;  /* map of plain function pointers */
      typedef std::map<str, plainfptrI> fmap0_extraI; /* map of plain function pointers */
      typedef std::map<str, FInfo1I> fmap1_extraI; /* map of plain function pointers */
      typedef std::map<str, FInfo2I> fmap2_extraI; /* map of plain function pointers */
   };

   /// @}
   
   /// Need to forward declare Spec class
   template <class, class>
   class Spec;

   /// Forward declarations related to FptrFinder class
   template<class,class,class> class SetMaps;
   template<class,class,class> class FptrFinder;  
   template<class,class,class> class CallFcn;  
  
         
   // CRTP used to allow access to some special data members of the derived class.
   // Various inherited classes are just used to factor out code, some of which
   // doesn't need to be templated.
   template <class DerivedSpec, class DerivedSpecTraits>
   class Spec : public SubSpectrum,
                public CommonTemplateFuncs<Spec<DerivedSpec, DerivedSpecTraits>>
   { 
      private:
         typedef DerivedSpec D;
         typedef DerivedSpecTraits DT;
         typedef Spec<D,DT> Self;

         /// Note: DerivedSpecTraits will need to typedef Model and Input
         /// Also make sure to initialise the members "model" and "input" in the 
         /// derived class via this class's full constructor.
         /// "Grab" these typedefs here to simplify notation
         typedef typename DT::Model Model;
         typedef typename DT::Input Input;
   
      public:
         typedef MapTypes<DT,MapTag::Get> MTget; 
         typedef MapTypes<DT,MapTag::Set> MTset; 

         /// @{ Default (empty) map filler functions
         /// Override as needed in derived classes
         static const std::map<Par::Tags,MapCollection<MTget>> fill_getter_maps()
         {     
            std::map<Par::Tags,MapCollection<MTget>> tmp;
            return tmp;
         }
         static const std::map<Par::Tags,MapCollection<MTset>> fill_setter_maps()
         {     
            std::map<Par::Tags,MapCollection<MTset>> tmp;
            return tmp;
         }

      private:
         /// @{ Functions to ensure that all the possible tags exist in the final map, 
         ///    even if no getters/setters are stored under those tags.
       
         static void getter_maps_fill_tags(std::map<Par::Tags,MapCollection<MTget>>& in)
         {     
            std::vector<Par::Tags> all = Par::get_all();
            for(std::vector<Par::Tags>::iterator it = all.begin(); it!=all.end(); ++it)
            {
              in[*it]; // insert tag key if missing
            }
         }
         static void setter_maps_fill_tags(std::map<Par::Tags,MapCollection<MTset>>& in)
         {     
            std::vector<Par::Tags> all = Par::get_all();
            for(std::vector<Par::Tags>::iterator it = all.begin(); it!=all.end(); ++it)
            {
              in[*it]; // insert tag key if missing
            }
         }

         /// @}

         /// @{ Filler functions that are *actually* directly used to fill the maps
         ///    Combines the (possibly overriden) map filler, plus the fill_tags
         ///    functions to fill in any unused tag keys.
         ///    DO NOT override these!
         ///
         static const std::map<Par::Tags,MapCollection<MTget>> final_fill_getter_maps()
         {  
            // Fill from (possibly overriden) derived class filler function
            std::map<Par::Tags,MapCollection<MTget>> tmp = D::fill_getter_maps();
            // Add in any missing tags
            getter_maps_fill_tags(tmp);    
            return tmp;
         }
         static const std::map<Par::Tags,MapCollection<MTset>> final_fill_setter_maps()
         {     
            // Fill from (possibly overriden) derived class filler function
            std::map<Par::Tags,MapCollection<MTset>> tmp = D::fill_setter_maps();
            // Add in any missing tags
            setter_maps_fill_tags(tmp);    
            return tmp;
         }


         /// @}
         
      public: 

         /// Using default constructors
       
         /// Virtual destructor
         virtual ~Spec() {};
    
         /// CRTP-style polymorphic clone function
         /// Now derived classes will not need to re-implement the clone function.
         virtual std::unique_ptr<SubSpectrum> clone() const       
         {
           return std::unique_ptr<SubSpectrum>(
              new DerivedSpec(static_cast<DerivedSpec const &>(*this))
              );
         }
 
         /// @{ Getters for wrapped data; be sure to define the 'get_Model' and
         ///    'get_Input' functions in the wrappers (with public access)
         ///    Might as well use static polymorphism rather than virtual functions,
         ///    since we are using the CRTP already anyway.

         /// Get model object on which to call function pointers
         Model& model() { return static_cast<DerivedSpec*>(this)->get_Model(); }

         /// Get struct containing any extra data input on SubSpectrum object creation
         Input& input() { return static_cast<DerivedSpec*>(this)->get_Input(); }

         /// @}

         /// Will need a map of map collections for both the getters and setters,
         /// containing the map collections for the permitted parameter types
         static const std::map<Par::Tags,MapCollection<MTget>> getter_maps;
         static const std::map<Par::Tags,MapCollection<MTset>> setter_maps;

         //friend class CommonTemplateFuncs<RunparDer<DerivedSpec,DerivedSpecTraits>, Par::Tags>; // base class
         //friend class Spec<D,DT>;
         friend class FptrFinder<DT,Self,MapTag::Get>;
         friend class FptrFinder<DT,Self,MapTag::Set>;
         friend class CallFcn<DT,Self,MapTag::Get>;
         friend class CallFcn<DT,Self,MapTag::Set>;

      public:

         /* Getters and checker declarations for parameter retrieval with zero, one, and two indices */
         bool   has(const Par::Tags, const str&, SafeBool check_antiparticle = SafeBool(true)) const;
         double get(const Par::Tags, const str&, SafeBool check_antiparticle = SafeBool(true)) const;
         bool   has(const Par::Tags, const str&, int, SafeBool check_antiparticle = SafeBool(true)) const;
         double get(const Par::Tags, const str&, int, SafeBool check_antiparticle = SafeBool(true)) const;
         bool   has(const Par::Tags, const str&, int, int) const;
         double get(const Par::Tags, const str&, int, int) const;

         /* Setter declarations, for setting parameters in a derived model object,
            and for overriding model object values with values stored outside
            the model object (for when values cannot be inserted back into the
            model object)
            Note; these are NON-CONST */
         void set(const Par::Tags, const double, const str&, SafeBool check_antiparticle = SafeBool(true));
         void set(const Par::Tags, const double, const str&, int, SafeBool check_antiparticle = SafeBool(true));
         void set(const Par::Tags, const double, const str&, int, int);

         /// Run object to a particular scale
         // Override this function in derived class to perform running
         virtual void RunToScaleOverride(double) = 0;

         /// Wrapper for RunToScaleOverride which automatically checks limits and
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
         static std::map<Par::Tags,OverrideMaps> create_override_maps()
         {
            std::map<Par::Tags,OverrideMaps> tmp;
            std::vector<Par::Tags> all = Par::get_all();
            for(std::vector<Par::Tags>::iterator it = all.begin(); it!=all.end(); ++it)
            { 
              tmp[*it];
            }
            return tmp;
         }


         /// @}      
   };

   /// Initialise maps (uses filler overrides from DerivedSpec if defined)
   template <class D, class DT>
   const std::map<Par::Tags,MapCollection<typename Spec<D,DT>::MTget>> 
      Spec<D,DT>::getter_maps(Spec<D,DT>::final_fill_getter_maps());

   template <class D, class DT>
   const std::map<Par::Tags,MapCollection<typename Spec<D,DT>::MTset>> 
      Spec<D,DT>::setter_maps(Spec<D,DT>::final_fill_setter_maps());



   /// Dummy classes to satisfy template parameters for Spec class in cases when those objects
   /// are not needed by the getters.
   /// @{
   class DummyModel {};
   class DummyInput {};
   struct DummyTraits
   {
     typedef DummyModel Model;
     typedef DummyInput Input;
   };
   /// @}
  
} // end namespace Gambit

// Undef the various helper macros to avoid contaminating other files
#undef PDB

#endif
