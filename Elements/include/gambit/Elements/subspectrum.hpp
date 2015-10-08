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

#include "gambit/Utils/safebool.hpp"
#include "gambit/Elements/subspectrum_head.hpp"
#include "gambit/Elements/spec_fptrfinder.hpp"

namespace Gambit {

   /// @{ CommonFuncs member function definitions

   /// @{ PDB getter/checker overloads

   /* Input PDG code plus context integer as separate arguments */
   template <class PT>
   bool CommonFuncs<PT>::has(const PT partype, 
                        const int pdg_code, const int context, SafeBool check_antiparticle) const
   {
      return has( partype, std::make_pair(pdg_code,context), check_antiparticle );
   }

   /* Input PDG code plus context integer as separate arguments */
   template <class PT>
   double CommonFuncs<PT>::get(const PT partype, 
                        const int pdg_code, const int context, SafeBool check_antiparticle) const
   {
      return get( partype, std::make_pair(pdg_code,context), check_antiparticle );
   }

   /* Input PDG code plus context integer as pair */
   template <class PT>
   bool CommonFuncs<PT>::has(const PT partype, 
                        const std::pair<int,int> pdgpr, SafeBool check_antiparticle) const
   {
      /* If there is a short name, then retrieve that plus the index */      
      if( Models::ParticleDB().has_short_name(pdgpr) )                       
      {                                                                      
        return has( partype, Models::ParticleDB().short_name_pair(pdgpr), check_antiparticle );
      }                                                                      
      else /* Use the long name with no index instead */                     
      {                                                                      
        return has( partype, Models::ParticleDB().long_name(pdgpr), check_antiparticle );      
      }                                                                      
   }

   /* Input PDG code plus context integer as pair */
   template <class PT>
   double CommonFuncs<PT>::get(const PT partype, 
                        const std::pair<int,int> pdgpr, SafeBool check_antiparticle) const
   {
      /* If there is a short name, then retrieve that plus the index */      
      if( Models::ParticleDB().has_short_name(pdgpr) )                       
      {                                                                      
        return get( partype, Models::ParticleDB().short_name_pair(pdgpr), check_antiparticle );
      }                                                                      
      else /* Use the long name with no index instead */                     
      {                                                                      
        return get( partype, Models::ParticleDB().long_name(pdgpr), check_antiparticle );      
      }                                                                      
   }

   /* Input short name plus index as pair */
   template <class PT>
   bool CommonFuncs<PT>::has(const PT partype, 
                        const std::pair<str,int> shortpr, SafeBool check_antiparticle) const
   {
      return has( partype, shortpr.first, shortpr.second, check_antiparticle);
   }

   /* Input short name plus index as pair */
   template <class PT>
   double CommonFuncs<PT>::get(const PT partype, 
                        const std::pair<str,int> shortpr, SafeBool check_antiparticle) const
   {
      return get( partype, shortpr.first, shortpr.second, check_antiparticle);
   }

   /// @}

   /// @{ Parameter override functions

   template <class PT>
   void CommonFuncs<PT>::set_override(const PT partype,
                      const double value, const str& name, bool safety)
   {   
      bool done = false;                  
      // No index input; check if direct string exists in map
      // If not, try to use particle database to convert to short
      // name plus index and try that. 
      // Otherwise, add new entry only if safety=false
      if( has(partype,name,SafeBool(false)) ) // Don't match on antiparticle; want to override particle if no antiparticle match is found
      {
         get_override_maps.at(partype).m0[name] = value;
         done = true;
      }
      else if( Models::ParticleDB().has_short_name(name) )
      {
         std::pair<str, int> p = Models::ParticleDB().short_name_pair(name);
         if( has(partype,p.first,p.second,SafeBool(false)) )
         {
            get_override_maps.at(partype).m1[p.first][p.second] = value;
            done = true;
         }
      }

      // If no match, try antiparticle
      // Note, if safety is off, missing "name" will be added instead of checking for antiparticle match
      if(safety and not done)
      {
        if(Models::ParticleDB().has_particle(name) and 
           Models::ParticleDB().has_antiparticle(name)) 
        {  
           std::string antiname = Models::ParticleDB().get_antiparticle(name);
           // Repeat the logic above
           if( has(partype,antiname,SafeBool(false)) )
           {
              get_override_maps.at(partype).m0[antiname] = value;
              done = true;
           }
           else if( Models::ParticleDB().has_short_name(antiname) )
           {
              std::pair<str, int> p = Models::ParticleDB().short_name_pair(antiname);
              if( has(partype,p.first,p.second,SafeBool(false)) )
              {
                 get_override_maps.at(partype).m1[p.first][p.second] = value;
                 done = true;
              }
           }
        }
      }

      // If none of that worked, either throw an error or add the new key
      if(safety and not done)
      {                                      
        std::ostringstream errmsg;           
        errmsg << "Error setting override value in SubSpectrum object!" << std::endl;
        errmsg << "No "<<Par::toString.at(partype)<<" with string reference '"<<name<<"' exists in the "<<classname<<" component of the wrapped spectrum!" <<std::endl;
        errmsg << "If you intended to add this value to the spectrum without overriding anything, please call this function with the optional 'safety' boolean parameter set to 'false'. It can then be later retrieved using the normal getters with the same name used here." << std::endl;
        utils_error().forced_throw(LOCAL_INFO,errmsg.str());
      }
      else
      {  
        get_override_maps.at(partype).m0[name] = value;
      }
   }

   template <class PT>
   void CommonFuncs<PT>::set_override(const PT partype,
                      const double value, const str& name, int i, bool safety)
   {                                         
      bool done = false;                  
      // One index input; check if direct string plus index exists in map
      // If not, try to use particle database to convert to long name
      // and try that. 
      // Otherwise, add new entry only if safety=false
      if( has(partype,name,i,SafeBool(false)) ) // Don't match anti-particle; will check that if other matching fails
      {
         get_override_maps.at(partype).m1[name][i] = value;
         done = true;
      }
      else if( Models::ParticleDB().has_particle(std::make_pair(name, i)) )
      {
         str longname = Models::ParticleDB().long_name(name,i);
         if( has(partype,longname,SafeBool(false)) )
         {
            get_override_maps.at(partype).m0[longname] = value;
            done = true;
         }
      }

      // If no match, try antiparticle
      // Note, if safety is off, missing "name" will be added instead of checking for antiparticle match
      if(safety and not done)
      {
        if(Models::ParticleDB().has_particle(name) and 
           Models::ParticleDB().has_antiparticle(name)) 
        {  
           std::string antiname = Models::ParticleDB().get_antiparticle(name);
           // Repeat the logic above
           if( has(partype,antiname,i,false) ) // Don't match anti-particle; will check that if other matching fails
           {
              get_override_maps.at(partype).m1[antiname][i] = value;
              done = true;
           }
           else if( Models::ParticleDB().has_particle(std::make_pair(antiname, i)) )
           {
              str longname = Models::ParticleDB().long_name(antiname,i);
              if( has(partype,longname,SafeBool(false)) )
              {
                 get_override_maps.at(partype).m0[longname] = value;
                 done = true;
              }
           }
         }
      }

      // If none of that worked, either throw an error or add the new key
      if( safety and not done )
      {                                      
        std::ostringstream errmsg;           
        errmsg << "Error setting override value in SubSpectrum object!" << std::endl;
        errmsg << "No "<<Par::toString.at(partype)<<" with string reference '"<<name<<"' and index '"<<i<<"' exists in the "<<classname<<" component of the wrapped spectrum!" <<std::endl;
        errmsg << "If you intended to add this value to the spectrum without overriding anything, please call this function with the optional 'safety' boolean parameter set to 'false'. It can then be later retrieved using the normal getters with the same name used here." << std::endl;
        utils_error().forced_throw(LOCAL_INFO,errmsg.str());
      }
      else
      {
        get_override_maps.at(partype).m1[name][i] = value;
      }
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

   /// PDB overloads of set_override functions

   /* Input short name plus index pair */
   template <class PT>
   void CommonFuncs<PT>::set_override(const PT partype, const double value, const std::pair<str,int> shortpr, const bool safety)
   {
      set_override(partype, value, shortpr.first, shortpr.second, safety);
   }

   /* Input PDG code plus context integer */
   template <class PT>
   void CommonFuncs<PT>::set_override(const PT partype, const double value, const int PDGcode, const int context, const bool safety)
   {
      set_override(partype, value, std::make_pair(PDGcode,context), safety);
   }

   template <class PT>
   void CommonFuncs<PT>::set_override(const PT partype, const double value, const std::pair<int,int> pdgpr, const bool safety)
   {
      /* If there is a short name, then retrieve that plus the index */      
      if( Models::ParticleDB().has_short_name(pdgpr) )                       
      {                                                                      
        return set_override(partype, value, Models::ParticleDB().short_name_pair(pdgpr), safety);
      }                                                                      
      else /* Use the long name with no index instead (will throw error if name not in PDB) */                     
      {                                                                      
        return set_override(partype, value, Models::ParticleDB().long_name(pdgpr), safety);      
      }                                                                      
   }

   /// @{ Vector override functions

   /* Helpers for override functions which take parameter names and indices as vectors, and
      loop over them, to make it easy to set many parameters to the same value.
      No two-index versions at the moment, but could be added if needed. */
   template <class PT>
   void CommonFuncs<PT>::set_override_vector(const PT tag, const double value, const std::vector<str>& params, bool safety)
   {
      for(std::vector<str>::const_iterator it = params.begin();
	  it != params.end(); ++it)
	{
          this->set_override(tag, value, *it, safety);
	}
   }

   template <class PT>
   void CommonFuncs<PT>::set_override_vector(const PT tag, const double value, const std::vector<str>& params, const std::vector<int> indices, bool safety)
   {
      for(std::vector<str>::const_iterator it = params.begin(); it != params.end(); ++it)
      {
         for(std::vector<int>::const_iterator i = indices.begin(); i != indices.end() ; ++i)
         {
            this->set_override(tag, value, *it, *i, safety);
         }
      }
   }

   template <class PT>
   void CommonFuncs<PT>::set_override_vector(const PT tag, const double value, const std::vector<str>& params, const int i, bool safety)
   {
      std::vector<int> indices;
      indices.push_back(i);
      this->set_override_vector(tag,value,params,indices,safety);    
   }

   template <class PT>
   void CommonFuncs<PT>::set_override_vector(const PT tag, const double value, const str& par, const std::vector<int> indices, bool safety)
   {
      std::vector<str> params;
      params.push_back(par);
      this->set_override_vector(tag,value,params,indices,safety);    
   }



   /// @}


   /// @}
 
   /// @}

   /// @{ CommonDer member function definitions

   /// @{ No indices
   template <class PhysOrRun, class PT>
   bool CommonDer<PhysOrRun,PT>::has(const PT partype, const str& name, SafeBool check_antiparticle) const
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
      return finder.find(name,true,check_antiparticle);                                             
   }                                                                        

   template <class PhysOrRun, class PT>
   double CommonDer<PhysOrRun,PT>::get(const PT partype, const str& name, SafeBool check_antiparticle) const
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
      if( finder.find(name,true,check_antiparticle) ){ result = finder.callfcn(); }
      else { finder.raise_error(LOCAL_INFO); }
      return result;
   }                                                                        
 
   template <class PhysOrRun, class PT>
   void CommonDer<PhysOrRun,PT>::set(const PT partype, const double set_value, const str& name, SafeBool check_antiparticle)
   {
      typedef typename PhysOrRun::DT DT;
      typedef typename PhysOrRun::MTset MTset;
      PhysOrRun* derivedthis = static_cast<PhysOrRun*>(this); 

      /* Before trying to set parameter, check if there is an override defined
         for it, so that we can warn people that the value they are trying to
         set will be masked by the override */
      const OverrideMaps overridecoll = derivedthis->get_override_maps.at(partype);
      FptrFinder<DT,PhysOrRun,MapTag::Set> override_finder =                                
                       SetMaps<DT,PhysOrRun,MapTag::Set>(Par::toString.at(partype),derivedthis)
                              .omap0( overridecoll.m0 ) 
                              .omap1( overridecoll.m1 )
                              .override_only(true); // switch to permit search of only override maps
      if( override_finder.find(name,true,check_antiparticle) )
      { 
        std::ostringstream errmsg;           
        errmsg << "Warning from SubSpectrum object while trying to manually set a parameter!" << std::endl;
        errmsg << "An override entry was detected for "<<Par::toString.at(partype)<<" with string reference '"<<name<<"'. The override value will hide the value I have been instructed to set." <<std::endl;
        utils_warning().raise(LOCAL_INFO,errmsg.str());
      }
      // else no problem

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
      if( finder.find(name,true,check_antiparticle) ){ finder.callfcn(set_value); }
      else { finder.raise_error(LOCAL_INFO); }
   }                                                                        
   /// @}
   /// @{ One index
   template <class PhysOrRun, class PT>
   bool CommonDer<PhysOrRun,PT>::has(const PT partype, const str& name, int i, SafeBool check_antiparticle) const
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
      return finder.find(name,i,true,check_antiparticle);                                             
   }                                                                        

   template <class PhysOrRun, class PT>
   double CommonDer<PhysOrRun,PT>::get(const PT partype, const str& name, int i, SafeBool check_antiparticle) const
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
                              .map1(  mapcoll.map1 )
                              .map1M( mapcoll.map1_extraM )
                              .map1I( mapcoll.map1_extraI );
      if( finder.find(name,i,true,check_antiparticle) ){ result = finder.callfcn(); }
      else { finder.raise_error(LOCAL_INFO); }
      return result;
   }                                                                        
 
   template <class PhysOrRun, class PT>
   void CommonDer<PhysOrRun,PT>::set(const PT partype, const double set_value, const str& name, int i, SafeBool check_antiparticle)
   {
      typedef typename PhysOrRun::DT DT;
      typedef typename PhysOrRun::MTset MTset;
      PhysOrRun* derivedthis = static_cast<PhysOrRun*>(this); 

      /* Before trying to set parameter, check if there is an override defined
         for it, so that we can warn people that the value they are trying to
         set will be masked by the override */
      const OverrideMaps overridecoll = derivedthis->get_override_maps.at(partype);
      FptrFinder<DT,PhysOrRun,MapTag::Set> override_finder =                                
                       SetMaps<DT,PhysOrRun,MapTag::Set>(Par::toString.at(partype),derivedthis)
                              .omap0( overridecoll.m0 ) 
                              .omap1( overridecoll.m1 )
                              .override_only(true); // switch to permit search of only override maps
      if( override_finder.find(name,i,true,check_antiparticle) )
      { 
        std::ostringstream errmsg;           
        errmsg << "Warning from SubSpectrum object while trying to manually set a parameter!" << std::endl;
        errmsg << "An override entry was detected for "<<Par::toString.at(partype)<<" with string reference '"<<name<<"', index '"<<i<<"'. The override value will hide the value I have been instructed to set." <<std::endl;
        utils_warning().raise(LOCAL_INFO,errmsg.str());
      }
      // else no problem

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
     if( finder.find(name,i,true,check_antiparticle) ){ finder.callfcn(set_value); }
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
