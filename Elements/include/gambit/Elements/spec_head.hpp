//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Implementation class "behind the scenes" of
///  abstract SubSpectrum interface class. Sits
///  between SubSpectrum and model-specific 
///  wrapper classes.
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

#ifndef __spec_hpp__
#define __spec_hpp__

#include "gambit/Elements/subspectrum.hpp"

// Particle database access
#define PDB Models::ParticleDB()        

namespace Gambit
{

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
   
     
   /// Need to forward declare Spec class
   template <class, class>
   class Spec;

   /// Forward declarations related to FptrFinder class
   template<class,class> class SetMaps;
   template<class,class> class FptrFinder;  
   template<class,class> class CallFcn;  
  
         
   // CRTP used to allow access to some special data members of the derived class.
   // Various inherited classes are just used to factor out code, some of which
   // doesn't need to be templated.
   template <class DerivedSpec>
   class Spec : public SubSpectrum,
                public CommonTemplateFuncs<Spec<DerivedSpec>>
   { 
      public:
         typedef DerivedSpec D;
         typedef Spec<D> Self;

         /// Note: DerivedSpec will need to typedef Model and Input
         /// "Grab" these typedefs here to simplify notation
         typedef typename D::Model Model;
         typedef typename D::Input Input;

         typedef MapTypes<D,MapTag::Get> MTget; 
         typedef MapTypes<D,MapTag::Set> MTset; 

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
         /// @}

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
         /// Return it as const if we are a const object
         const Model& model() const { return static_cast<const DerivedSpec*>(this)->get_Model(); }

         /// Get struct containing any extra data input on SubSpectrum object creation
         Input& input() { return static_cast<DerivedSpec*>(this)->get_Input(); }
         /// Return it as const if we are a const object
         const Input& input() const { return static_cast<const DerivedSpec*>(this)->get_Input(); }

         /// @}

         /// Will need a map of map collections for both the getters and setters,
         /// containing the map collections for the permitted parameter types
         
         typedef std::map<Par::Tags,MapCollection<MTget>> GetterMaps; 
         typedef std::map<Par::Tags,MapCollection<MTset>> SetterMaps; 
         static const GetterMaps getter_maps;
         static const SetterMaps setter_maps;

   };

   /// Initialise maps (uses filler overrides from DerivedSpec if defined)
   template <class D>
   const typename Spec<D>::GetterMaps Spec<D>::getter_maps(Spec<D>::final_fill_getter_maps());

   template <class D>
   const typename Spec<D>::SetterMaps Spec<D>::setter_maps(Spec<D>::final_fill_setter_maps());


   /// Dummy classes to satisfy template parameters for Spec class in cases when those objects
   /// are not needed by the getters.
   /// @{
   class DummyModel {};
   class DummyInput {};
   /// @}
  
} // end namespace Gambit

// Undef the various helper macros to avoid contaminating other files
#undef PDB

#endif
