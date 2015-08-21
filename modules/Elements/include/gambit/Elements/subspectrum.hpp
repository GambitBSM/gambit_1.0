//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Some member function definitions from classes
///  in SubSpectrumDecl. Include this file to
///  use SubSpectrum objects.
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

#ifndef __SubSpectrum_hpp__
#define __SubSpectrum_hpp__

#include "gambit/Elements/subspectrum_head.hpp"
#include "gambit/Elements/spec_fptrfinder.hpp"

namespace Gambit {

   /// @{ CommonFuncs member function definitions

   /// @{ PDB getter/checker overloads

   /* Input PDG code plus context integer as separate arguments */
   template <class PT>
   bool CommonFuncs<PT>::has(const PT partype, 
                        const int pdg_code, const int context) const
   {
      return has( partype, std::make_pair(pdg_code,context) );
   }

   /* Input PDG code plus context integer as separate arguments */
   template <class PT>
   double CommonFuncs<PT>::get(const PT partype, 
                        const int pdg_code, const int context) const
   {
      return get( partype, std::make_pair(pdg_code,context) );
   }

   /* Input PDG code plus context integer as pair */
   template <class PT>
   bool CommonFuncs<PT>::has(const PT partype, 
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
   template <class PT>
   double CommonFuncs<PT>::get(const PT partype, 
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
   template <class PT>
   bool CommonFuncs<PT>::has(const PT partype, 
                        const std::pair<str,int> shortpr) const
   {
      return has( partype, shortpr.first, shortpr.second);
   }

   /* Input short name plus index as pair */
   template <class PT>
   double CommonFuncs<PT>::get(const PT partype, 
                        const std::pair<str,int> shortpr) const
   {
      return has( partype, shortpr.first, shortpr.second);
   }

   /// @}

   /// @{ Parameter override functions

   template <class PT>
   void CommonFuncs<PT>::set_override(const PT partype,
                      const double value, const str& name, bool safety)
   {                                         
      if( safety and not has(partype,name) )
      {                                      
        std::ostringstream errmsg;           
        errmsg << "Error setting override value in SubSpectrum object!" << std::endl;
        errmsg << "No "<<Par::toString.at(partype)<<" with string reference '"<<name<<"' exists in the "<<classname<<" component of the wrapped spectrum!" <<std::endl;
        errmsg << "If you intended to add this value to the spectrum without overriding anything, please call this function with the optional 'safety' boolean parameter set to 'false'. It can then be later retrieved using the normal getters with the same name used here." << std::endl;
        utils_error().forced_throw(LOCAL_INFO,errmsg.str());
      }
      get_override_maps.at(partype).m0[name] = value;
   }

   template <class PT>
   void CommonFuncs<PT>::set_override(const PT partype,
                      const double value, const str& name, int i, bool safety)
   {                                         
      if( safety and not has(partype,name,i) )
      {                                      
        std::ostringstream errmsg;           
        errmsg << "Error setting override value in SubSpectrum object!" << std::endl;
        errmsg << "No "<<Par::toString.at(partype)<<" with string reference '"<<name<<"' and index '"<<i<<"' exists in the "<<classname<<" component of the wrapped spectrum!" <<std::endl;
        errmsg << "If you intended to add this value to the spectrum without overriding anything, please call this function with the optional 'safety' boolean parameter set to 'false'. It can then be later retrieved using the normal getters with the same name used here." << std::endl;
        utils_error().forced_throw(LOCAL_INFO,errmsg.str());
      }
      get_override_maps.at(partype).m1[name][i] = value;
   }

   template <class PT>
   void CommonFuncs<PT>::set_override(const PT partype,
                      const double value, const str& name, int i, int j, bool safety)
   {                                         
      if( safety and not has(partype,name,i,j) )
      {                                      
        std::ostringstream errmsg;           
        errmsg << "Error setting override value in SubSpectrum object!" << std::endl;
        errmsg << "No "<<Par::toString.at(partype)<<" with string reference '"<<name<<"' and indices '"<<i<<","<<j<<"' exists in the "<<classname<<" component of the wrapped spectrum!" <<std::endl;
        errmsg << "If you intended to add this value to the spectrum without overriding anything, please call this function with the optional 'safety' boolean parameter set to 'false'. It can then be later retrieved using the normal getters with the same name used here." << std::endl;
        utils_error().forced_throw(LOCAL_INFO,errmsg.str());
      }
      get_override_maps.at(partype).m2[name][i][j] = value;
   }

   /// @}
 
   /// @}

   /// @{ CommonDer member function definitions

   /// @{ No indices
   template <class PhysOrRun, class PT>
   bool CommonDer<PhysOrRun,PT>::has(const PT partype, const str& name) const
   {
      typedef typename PhysOrRun::DT DT;
      typedef typename PhysOrRun::MTget MTget;
      /// TODO: Could avoid dismantling the MapCollection struct by just letting the
      ///       SetMaps class do it, but one step at a time...
      ///       Could also reduce duplication between getter and checker functions by making the 
      ///       'has' function take an optional argument to return an FptrFinder, which can then
      ///       just be used to call the found function.

      /// Need to access members of the derived class, so cast "this" pointer to the derived type
      const PhysOrRun* derivedthis = static_cast<const PhysOrRun*>(this); 

      /* Create finder object, tell it what maps to search, and do the search */
      const OverrideMaps         overridecoll = derivedthis->get_override_maps.at(partype);
      const MapCollection<MTget> mapcoll      = derivedthis->getter_maps.at(partype);
      FptrFinder<DT,PhysOrRun,MapTag::Get> finder =                                
                       SetMaps<DT,PhysOrRun,MapTag::Get>(Par::toString.at(partype),derivedthis)
                              .omap0(  overridecoll.m0 ) 
                              .omap1( overridecoll.m1 )
                              .map0(  mapcoll.map0 )       
                              .map0M( mapcoll.map0_extraM )
                              .map0I( mapcoll.map0_extraI )
                              .map1( mapcoll.map1 )
                              .map1M( mapcoll.map1_extraM )
                              .map1I( mapcoll.map1_extraI );
      return finder.find(name);                                             
   }                                                                        

   template <class PhysOrRun, class PT>
   double CommonDer<PhysOrRun,PT>::get(const PT partype, const str& name) const
   {
      typedef typename PhysOrRun::DT DT;
      typedef typename PhysOrRun::MTget MTget;
      const PhysOrRun* derivedthis = static_cast<const PhysOrRun*>(this); 
      double result;

      /* Create finder object, tell it what maps to search, and do the search */
      const OverrideMaps         overridecoll = derivedthis->get_override_maps.at(partype);
      const MapCollection<MTget> mapcoll      = derivedthis->getter_maps.at(partype);
      FptrFinder<DT,PhysOrRun,MapTag::Get> finder =                                
                       SetMaps<DT,PhysOrRun,MapTag::Get>(Par::toString.at(partype),derivedthis)
                              .omap0(  overridecoll.m0 ) 
                              .omap1( overridecoll.m1 )
                              .map0(  mapcoll.map0 )       
                              .map0M( mapcoll.map0_extraM )
                              .map0I( mapcoll.map0_extraI )
                              .map1( mapcoll.map1 )
                              .map1M( mapcoll.map1_extraM )
                              .map1I( mapcoll.map1_extraI );
      if( finder.find(name) ){ result = finder.callfcn(); }
      else { finder.raise_error(LOCAL_INFO); }
      return result;
   }                                                                        
 
   template <class PhysOrRun, class PT>
   void CommonDer<PhysOrRun,PT>::set(const PT partype, const double set_value, const str& name)
   {
      typedef typename PhysOrRun::DT DT;
      typedef typename PhysOrRun::MTset MTset;
      PhysOrRun* derivedthis = static_cast<PhysOrRun*>(this); 

      /* Create finder object, tell it what maps to search, and do the search */
      const MapCollection<MTset> mapcoll = derivedthis->setter_maps.at(partype);
      FptrFinder<DT,PhysOrRun,MapTag::Set> finder =                                
                       SetMaps<DT,PhysOrRun,MapTag::Set>(Par::toString.at(partype),derivedthis)
                              .map0(  mapcoll.map0 )       
                              .map0M( mapcoll.map0_extraM )
                              .map0I( mapcoll.map0_extraI )
                              .map1( mapcoll.map1 )
                              .map1M( mapcoll.map1_extraM )
                              .map1I( mapcoll.map1_extraI );
     if( finder.find(name) ){ finder.callfcn(set_value); }
      else { finder.raise_error(LOCAL_INFO); }
   }                                                                        
   /// @}
   /// @{ One index
   template <class PhysOrRun, class PT>
   bool CommonDer<PhysOrRun,PT>::has(const PT partype, const str& name, int i) const
   {
      typedef typename PhysOrRun::DT DT;
      typedef typename PhysOrRun::MTget MTget;
      const PhysOrRun* derivedthis = static_cast<const PhysOrRun*>(this); 

      /* Create finder object, tell it what maps to search, and do the search */
      const OverrideMaps         overridecoll = derivedthis->get_override_maps.at(partype);
      const MapCollection<MTget> mapcoll      = derivedthis->getter_maps.at(partype);
      FptrFinder<DT,PhysOrRun,MapTag::Get> finder =                                
                       SetMaps<DT,PhysOrRun,MapTag::Get>(Par::toString.at(partype),derivedthis)
                              .omap0( overridecoll.m0 ) 
                              .omap1( overridecoll.m1 )
                              .map0(  mapcoll.map0 )       
                              .map0M( mapcoll.map0_extraM )
                              .map0I( mapcoll.map0_extraI )
                              .map1( mapcoll.map1 )
                              .map1M( mapcoll.map1_extraM )
                              .map1I( mapcoll.map1_extraI );
      return finder.find(name,i);                                             
   }                                                                        

   template <class PhysOrRun, class PT>
   double CommonDer<PhysOrRun,PT>::get(const PT partype, const str& name, int i) const
   {
      typedef typename PhysOrRun::DT DT;
      typedef typename PhysOrRun::MTget MTget;
      const PhysOrRun* derivedthis = static_cast<const PhysOrRun*>(this); 
      double result;

      /* Create finder object, tell it what maps to search, and do the search */
      const OverrideMaps         overridecoll = derivedthis->get_override_maps.at(partype);
      const MapCollection<MTget> mapcoll      = derivedthis->getter_maps.at(partype);
      FptrFinder<DT,PhysOrRun,MapTag::Get> finder =                                
                       SetMaps<DT,PhysOrRun,MapTag::Get>(Par::toString.at(partype),derivedthis)
                              .omap0( overridecoll.m0 ) 
                              .omap1( overridecoll.m1 )
                              .map0(  mapcoll.map0 )       
                              .map0M( mapcoll.map0_extraM )
                              .map0I( mapcoll.map0_extraI )
                              .map1( mapcoll.map1 );     
      if( finder.find(name,i) ){ result = finder.callfcn(); }
      else { finder.raise_error(LOCAL_INFO); }
      return result;
   }                                                                        
 
   template <class PhysOrRun, class PT>
   void CommonDer<PhysOrRun,PT>::set(const PT partype, const double set_value, const str& name, int i)
   {
      typedef typename PhysOrRun::DT DT;
      typedef typename PhysOrRun::MTset MTset;
      PhysOrRun* derivedthis = static_cast<PhysOrRun*>(this); 

      /* Create finder object, tell it what maps to search, and do the search */
      const MapCollection<MTset> mapcoll = derivedthis->setter_maps.at(partype);
      FptrFinder<DT,PhysOrRun,MapTag::Set> finder =                                
                       SetMaps<DT,PhysOrRun,MapTag::Set>(Par::toString.at(partype),derivedthis)
                              .map0(  mapcoll.map0 )       
                              .map0M( mapcoll.map0_extraM )
                              .map0I( mapcoll.map0_extraI )
                              .map1( mapcoll.map1 );     
      if( finder.find(name,i) ){ finder.callfcn(set_value); }
      else { finder.raise_error(LOCAL_INFO); }
   }                                                                        

   /// @}
   /// @{ Two indices

   template <class PhysOrRun, class PT>
   bool CommonDer<PhysOrRun,PT>::has(const PT partype, const str& name, int i, int j) const
   {
      typedef typename PhysOrRun::DT DT;
      typedef typename PhysOrRun::MTget MTget;
      const PhysOrRun* derivedthis = static_cast<const PhysOrRun*>(this); 

      /* Create finder object, tell it what maps to search, and do the search */
      const OverrideMaps         overridecoll = derivedthis->get_override_maps.at(partype);
      const MapCollection<MTget> mapcoll      = derivedthis->getter_maps.at(partype);
      FptrFinder<DT,PhysOrRun,MapTag::Get> finder =                                
                       SetMaps<DT,PhysOrRun,MapTag::Get>(Par::toString.at(partype),derivedthis)
                              .omap2( overridecoll.m2 )
                              .map2( mapcoll.map2 )
                              .map2M( mapcoll.map2_extraM )
                              .map2I( mapcoll.map2_extraI );
     return finder.find(name,i,j);
   }                                                                        

   template <class PhysOrRun, class PT>
   double CommonDer<PhysOrRun,PT>::get(const PT partype, const str& name, int i, int j) const
   {
      typedef typename PhysOrRun::DT DT;
      typedef typename PhysOrRun::MTget MTget;
      const PhysOrRun* derivedthis = static_cast<const PhysOrRun*>(this); 
      double result;

      /* Create finder object, tell it what maps to search, and do the search */
      const OverrideMaps         overridecoll = derivedthis->get_override_maps.at(partype);
      const MapCollection<MTget> mapcoll      = derivedthis->getter_maps.at(partype);
      FptrFinder<DT,PhysOrRun,MapTag::Get> finder =                                
                       SetMaps<DT,PhysOrRun,MapTag::Get>(Par::toString.at(partype),derivedthis)
                              .omap2( overridecoll.m2 )
                              .map2( mapcoll.map2 )
                              .map2M( mapcoll.map2_extraM )
                              .map2I( mapcoll.map2_extraI );
      if( finder.find(name,i,j) ){ result = finder.callfcn(); }
      else { finder.raise_error(LOCAL_INFO); }
      return result;
   }                                                                        
 
   template <class PhysOrRun, class PT>
   void CommonDer<PhysOrRun,PT>::set(const PT partype, const double set_value, const str& name, int i, int j)
   {
      typedef typename PhysOrRun::DT DT;
      typedef typename PhysOrRun::MTset MTset;
      PhysOrRun* derivedthis = static_cast<PhysOrRun*>(this); 

      /* Create finder object, tell it what maps to search, and do the search */
      const MapCollection<MTset> mapcoll = derivedthis->setter_maps.at(partype);
      FptrFinder<DT,PhysOrRun,MapTag::Set> finder =                                
                       SetMaps<DT,PhysOrRun,MapTag::Set>(Par::toString.at(partype),derivedthis)
                              .map2( mapcoll.map2 )
                              .map2M( mapcoll.map2_extraM )
                              .map2I( mapcoll.map2_extraI );
      if( finder.find(name,i,j) ){ finder.callfcn(set_value); }
      else { finder.raise_error(LOCAL_INFO); }
   }                                                                        

   /// @}

   /// @}

}

#endif
