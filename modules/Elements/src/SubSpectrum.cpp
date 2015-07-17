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
#include "gambit/Elements/SpecFptrFinder.hpp"

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
      if( safety and not has(partype,name) )
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
      if( safety and not has(partype,name) )
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
 
   /// @{ RunningPars member function definitions

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

   /// @{ CommonDer member function definitions

   /// @{ No indices
   template <class PhysOrRun>
   bool CommonDer<PhysOrRun>::has(const typename PhysOrRun::ParamType partype, const str& name) const
   {
      typedef typename PhysOrRun::DT DT;
      typedef typename PhysOrRun::MTget MTget;
      /// TODO: Could avoid dismantling the MapCollection struct by just letting the
      ///       SetMaps class do it, but one step at a time...
      ///       Could also reduce duplication between getter and checker functions by making the 
      ///       'has' function take an optional argument to return an FptrFinder, which can then
      ///       just be used to call the found function.

      /// Need to access members of the derived class, so cast "this" pointer to the derived type
      PhysOrRun* derivedthis = static_cast<PhysOrRun*>(this); 

      /* Create finder object, tell it what maps to search, and do the search */
      const OverrideMaps         overridecoll = derivedthis->get_override_maps.at(partype);
      const MapCollection<MTget> mapcoll      = derivedthis->getter_maps.at(partype);
      FptrFinder<DT,PhysOrRun,MapTag::Get> finder =                                
                       SetMaps<DT,PhysOrRun,MapTag::Get>(Par::toString.at(partype),derivedthis)
                              .omap(  overridecoll.m0 ) 
                              .omap1( overridecoll.m1 )
                              .map(  mapcoll.map )       
                              .mapM( mapcoll.map_extraM )
                              .mapI( mapcoll.map_extraI )
                              .map1( mapcoll.map1 );     
      return finder.find(name);                                             
   }                                                                        

   template <class PhysOrRun>
   double CommonDer<PhysOrRun>::get(const typename PhysOrRun::ParamType partype, const str& name) const
   {
      typedef typename PhysOrRun::DT DT;
      typedef typename PhysOrRun::MTget MTget;
      PhysOrRun* derivedthis = static_cast<PhysOrRun*>(this); 
      double result;

      /* Create finder object, tell it what maps to search, and do the search */
      const OverrideMaps         overridecoll = derivedthis->get_override_maps.at(partype);
      const MapCollection<MTget> mapcoll      = derivedthis->getter_maps.at(partype);
      FptrFinder<DT,PhysOrRun,MapTag::Get> finder =                                
                       SetMaps<DT,PhysOrRun,MapTag::Get>(Par::toString.at(partype),derivedthis)
                              .omap(  overridecoll.m0 ) 
                              .omap1( overridecoll.m1 )
                              .map(  mapcoll.map )       
                              .mapM( mapcoll.map_extraM )
                              .mapI( mapcoll.map_extraI )
                              .map1( mapcoll.map1 );     
      if( finder.find(name) ){ result = finder.callfcn(); }
      else { finder.raise_error(LOCAL_INFO); }
      return result;
   }                                                                        
 
   template <class PhysOrRun>
   void CommonDer<PhysOrRun>::set(const typename PhysOrRun::ParamType partype, const double set_value, const str& name)
   {
      typedef typename PhysOrRun::DT DT;
      typedef typename PhysOrRun::MTset MTset;
      PhysOrRun* derivedthis = static_cast<PhysOrRun*>(this); 

      /* Create finder object, tell it what maps to search, and do the search */
      const MapCollection<MTset> mapcoll = derivedthis->setter_maps.at(partype);
      FptrFinder<DT,PhysOrRun,MapTag::Set> finder =                                
                       SetMaps<DT,PhysOrRun,MapTag::Set>(Par::toString.at(partype),derivedthis)
                              .map(  mapcoll.map )       
                              .mapM( mapcoll.map_extraM )
                              .mapI( mapcoll.map_extraI )
                              .map1( mapcoll.map1 );     
      if( finder.find(name) ){ finder.callfcn(set_value); }
      else { finder.raise_error(LOCAL_INFO); }
   }                                                                        
   /// @}
   /// @{ One index
   template <class PhysOrRun>
   bool CommonDer<PhysOrRun>::has(const typename PhysOrRun::ParamType partype, const str& name, int i) const
   {
      typedef typename PhysOrRun::DT DT;
      typedef typename PhysOrRun::MTget MTget;
      PhysOrRun* derivedthis = static_cast<PhysOrRun*>(this); 

      /* Create finder object, tell it what maps to search, and do the search */
      const OverrideMaps         overridecoll = derivedthis->get_override_maps.at(partype);
      const MapCollection<MTget> mapcoll      = derivedthis->getter_maps.at(partype);
      FptrFinder<DT,PhysOrRun,MapTag::Get> finder =                                
                       SetMaps<DT,PhysOrRun,MapTag::Get>(Par::toString.at(partype),derivedthis)
                              .omap(  overridecoll.m0 ) 
                              .omap1( overridecoll.m1 )
                              .map(  mapcoll.map )       
                              .mapM( mapcoll.map_extraM )
                              .mapI( mapcoll.map_extraI )
                              .map1( mapcoll.map1 );     
      return finder.find(name,i);                                             
   }                                                                        

   template <class PhysOrRun>
   double CommonDer<PhysOrRun>::get(const typename PhysOrRun::ParamType partype, const str& name, int i) const
   {
      typedef typename PhysOrRun::DT DT;
      typedef typename PhysOrRun::MTget MTget;
      PhysOrRun* derivedthis = static_cast<PhysOrRun*>(this); 
      double result;

      /* Create finder object, tell it what maps to search, and do the search */
      const OverrideMaps         overridecoll = derivedthis->get_override_maps.at(partype);
      const MapCollection<MTget> mapcoll      = derivedthis->getter_maps.at(partype);
      FptrFinder<DT,PhysOrRun,MapTag::Get> finder =                                
                       SetMaps<DT,PhysOrRun,MapTag::Get>(Par::toString.at(partype),derivedthis)
                              .omap(  overridecoll.m0 ) 
                              .omap1( overridecoll.m1 )
                              .map(  mapcoll.map )       
                              .mapM( mapcoll.map_extraM )
                              .mapI( mapcoll.map_extraI )
                              .map1( mapcoll.map1 );     
      if( finder.find(name,i) ){ result = finder.callfcn(); }
      else { finder.raise_error(LOCAL_INFO); }
      return result;
   }                                                                        
 
   template <class PhysOrRun>
   void CommonDer<PhysOrRun>::set(const typename PhysOrRun::ParamType partype, const double set_value, const str& name, int i)
   {
      typedef typename PhysOrRun::DT DT;
      typedef typename PhysOrRun::MTset MTset;
      PhysOrRun* derivedthis = static_cast<PhysOrRun*>(this); 

      /* Create finder object, tell it what maps to search, and do the search */
      const MapCollection<MTset> mapcoll = derivedthis->setter_maps.at(partype);
      FptrFinder<DT,PhysOrRun,MapTag::Set> finder =                                
                       SetMaps<DT,PhysOrRun,MapTag::Set>(Par::toString.at(partype),derivedthis)
                              .map(  mapcoll.map )       
                              .mapM( mapcoll.map_extraM )
                              .mapI( mapcoll.map_extraI )
                              .map1( mapcoll.map1 );     
      if( finder.find(name,i) ){ finder.callfcn(set_value); }
      else { finder.raise_error(LOCAL_INFO); }
   }                                                                        

   /// @}
   /// @{ Two indices

   template <class PhysOrRun>
   bool CommonDer<PhysOrRun>::has(const typename PhysOrRun::ParamType partype, const str& name, int i, int j) const
   {
      typedef typename PhysOrRun::DT DT;
      typedef typename PhysOrRun::MTget MTget;
      PhysOrRun* derivedthis = static_cast<PhysOrRun*>(this); 

      /* Create finder object, tell it what maps to search, and do the search */
      const OverrideMaps         overridecoll = derivedthis->get_override_maps.at(partype);
      const MapCollection<MTget> mapcoll      = derivedthis->getter_maps.at(partype);
      FptrFinder<DT,PhysOrRun,MapTag::Get> finder =                                
                       SetMaps<DT,PhysOrRun,MapTag::Get>(Par::toString.at(partype),derivedthis)
                              .omap2( overridecoll.m2 )
                              .map2( mapcoll.map2 );
      return finder.find(name,i,j);
   }                                                                        

   template <class PhysOrRun>
   double CommonDer<PhysOrRun>::get(const typename PhysOrRun::ParamType partype, const str& name, int i, int j) const
   {
      typedef typename PhysOrRun::DT DT;
      typedef typename PhysOrRun::MTget MTget;
      PhysOrRun* derivedthis = static_cast<PhysOrRun*>(this); 
      double result;

      /* Create finder object, tell it what maps to search, and do the search */
      const OverrideMaps         overridecoll = derivedthis->get_override_maps.at(partype);
      const MapCollection<MTget> mapcoll      = derivedthis->getter_maps.at(partype);
      FptrFinder<DT,PhysOrRun,MapTag::Get> finder =                                
                       SetMaps<DT,PhysOrRun,MapTag::Get>(Par::toString.at(partype),derivedthis)
                              .omap2( overridecoll.m2 )
                              .map2( mapcoll.map2 );
      if( finder.find(name,i,j) ){ result = finder.callfcn(); }
      else { finder.raise_error(LOCAL_INFO); }
      return result;
   }                                                                        
 
   template <class PhysOrRun>
   void CommonDer<PhysOrRun>::set(const typename PhysOrRun::ParamType partype, const double set_value, const str& name, int i, int j)
   {
      typedef typename PhysOrRun::DT DT;
      typedef typename PhysOrRun::MTset MTset;
      PhysOrRun* derivedthis = static_cast<PhysOrRun*>(this); 

      /* Create finder object, tell it what maps to search, and do the search */
      const MapCollection<MTset> mapcoll = derivedthis->setter_maps.at(partype);
      FptrFinder<DT,PhysOrRun,MapTag::Set> finder =                                
                       SetMaps<DT,PhysOrRun,MapTag::Set>(Par::toString.at(partype),derivedthis)
                              .map2( mapcoll.map2 );
      if( finder.find(name,i,j) ){ finder.callfcn(set_value); }
      else { finder.raise_error(LOCAL_INFO); }
   }                                                                        

   /// @}

   /// @}

}



