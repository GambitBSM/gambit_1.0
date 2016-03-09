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
///  \author Abram Krislock
///          (a.m.b.krislock@fys.uio.no)
///  \date 2016 Feb
///
///  *********************************************

#include <fstream>
#include <string>

#include "gambit/Elements/subspectrum.hpp"
#include "gambit/Elements/spec_fptrfinder.hpp"

namespace Gambit
{
   /// @{ SubSpectrum member function definitions

   /// Dump out spectrum information to an SLHA file (if possible)
   void SubSpectrum::getSLHA(const str& filename) const
   {
     std::ofstream ofs(filename);
     if (ofs)
     {
       ofs << getSLHAea();
     }
     else
     {
       utils_error().raise(LOCAL_INFO,"Could not open file '"+filename+
        "' for writing. Please check that the path exists!");
     }
     ofs.close();
   }

   /// Get spectrum information in SLHAea format (if possible)
   SLHAstruct SubSpectrum::getSLHAea() const
   {
     SLHAstruct slha;
     this->add_to_SLHAea(slha);
     add_MODSEL_disclaimer(slha, "spectrum");
     return slha;
   }

   /// Initialiser function for empty map of override maps
   std::map<Par::Tags,OverrideMaps> SubSpectrum::create_override_maps()
   {
      std::map<Par::Tags,OverrideMaps> tmp;
      std::vector<Par::Tags> all = Par::get_all();
      for(std::vector<Par::Tags>::iterator it = all.begin(); it!=all.end(); ++it)
      { 
        tmp[*it];
      }
      return tmp;
   }

   /// @{ PDB getter/checker overloads

   /* Input PDG code plus context integer as separate arguments */
   bool SubSpectrum::has(const Par::Tags partype, 
                        const int pdg_code, const int context, SafeBool check_antiparticle) const
   {
      return has( partype, std::make_pair(pdg_code,context), check_antiparticle );
   }

   /* Input PDG code plus context integer as separate arguments */
   double SubSpectrum::get(const Par::Tags partype, 
                        const int pdg_code, const int context, SafeBool check_antiparticle) const
   {
      return get( partype, std::make_pair(pdg_code,context), check_antiparticle );
   }

   /* Input PDG code plus context integer as pair */
   bool SubSpectrum::has(const Par::Tags partype, 
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
   double SubSpectrum::get(const Par::Tags partype, 
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
   bool SubSpectrum::has(const Par::Tags partype, 
                        const std::pair<str,int> shortpr, SafeBool check_antiparticle) const
   {
      return has( partype, shortpr.first, shortpr.second, check_antiparticle);
   }

   /* Input short name plus index as pair */
   double SubSpectrum::get(const Par::Tags partype, 
                        const std::pair<str,int> shortpr, SafeBool check_antiparticle) const
   {
      return get( partype, shortpr.first, shortpr.second, check_antiparticle);
   }

   /// @}

   /// @{ safeget functions, by Abram

   double SubSpectrum::safeget(const Par::Tags partype, 
                        const str& mass, SafeBool check_antiparticle) const
   {
      double result = get( partype, mass, check_antiparticle);
      if (Utils::isnan(result))
         utils_error().raise(LOCAL_INFO,"SubSpectrum parameter is nan!!");
      return result;
   }

   double SubSpectrum::safeget(const Par::Tags partype, 
                        const str& mass, int index, SafeBool check_antiparticle) const
   {
      double result = get( partype, mass, index, check_antiparticle);
      if (Utils::isnan(result))
         utils_error().raise(LOCAL_INFO,"SubSpectrum parameter is nan!!");
      return result;
   }

   /// @TODO: correct variable names? --Abram
   double SubSpectrum::safeget(const Par::Tags partype,
                        const str& mass, int pdg_code, int context) const
   {
      double result = get( partype, mass, pdg_code, context);
      if (Utils::isnan(result))
         utils_error().raise(LOCAL_INFO,"SubSpectrum parameter is nan!!");
      return result;
   }

   double SubSpectrum::safeget(const Par::Tags partype, 
                        const int pdg_code, const int context, SafeBool check_antiparticle) const
   {
      double result = get( partype, pdg_code, context, check_antiparticle);
      if (Utils::isnan(result))
         utils_error().raise(LOCAL_INFO,"SubSpectrum parameter is nan!!");
      return result;
   }

   double SubSpectrum::safeget(const Par::Tags partype, 
                        const std::pair<int,int> pdgpr, SafeBool check_antiparticle) const
   {
      double result = get( partype, pdgpr, check_antiparticle);
      if (Utils::isnan(result))
         utils_error().raise(LOCAL_INFO,"SubSpectrum parameter is nan!!");
      return result;
   }

   double SubSpectrum::safeget(const Par::Tags partype, 
                        const std::pair<str,int> shortpr, SafeBool check_antiparticle) const
   {
      double result = get( partype, shortpr, check_antiparticle);
      if (Utils::isnan(result))
         utils_error().raise(LOCAL_INFO,"SubSpectrum parameter is nan!!");
      return result;
   }

   /// @}

   /// @{ Parameter override functions

   void SubSpectrum::set_override(const Par::Tags partype,
                      const double value, const str& name, bool safety)
   {   
      bool done = false;                  
      // No index input; check if direct string exists in map
      // If not, try to use particle database to convert to short
      // name plus index and try that. 
      // Otherwise, add new entry only if safety=false
      if( has(partype,name,SafeBool(false)) ) // Don't match on antiparticle; want to override particle if no antiparticle match is found
      {
         override_maps.at(partype).m0[name] = value;
         done = true;
      }
      else if( Models::ParticleDB().has_short_name(name) )
      {
         std::pair<str, int> p = Models::ParticleDB().short_name_pair(name);
         if( has(partype,p.first,p.second,SafeBool(false)) )
         {
            override_maps.at(partype).m1[p.first][p.second] = value;
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
              override_maps.at(partype).m0[antiname] = value;
              done = true;
           }
           else if( Models::ParticleDB().has_short_name(antiname) )
           {
              std::pair<str, int> p = Models::ParticleDB().short_name_pair(antiname);
              if( has(partype,p.first,p.second,SafeBool(false)) )
              {
                 override_maps.at(partype).m1[p.first][p.second] = value;
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
        errmsg << "No "<<Par::toString.at(partype)<<" with string reference '"<<name<<"' exists in the wrapped spectrum!" <<std::endl;
        errmsg << "If you intended to add this value to the spectrum without overriding anything, please call this function with the optional 'safety' boolean parameter set to 'false'. It can then be later retrieved using the normal getters with the same name used here." << std::endl;
        utils_error().forced_throw(LOCAL_INFO,errmsg.str());
      }
      else
      {  
        override_maps.at(partype).m0[name] = value;
      }
   }

   void SubSpectrum::set_override(const Par::Tags partype,
                      const double value, const str& name, int i, bool safety)
   {                                         
      bool done = false;                  
      // One index input; check if direct string plus index exists in map
      // If not, try to use particle database to convert to long name
      // and try that. 
      // Otherwise, add new entry only if safety=false
      if( has(partype,name,i,SafeBool(false)) ) // Don't match anti-particle; will check that if other matching fails
      {
         override_maps.at(partype).m1[name][i] = value;
         done = true;
      }
      else if( Models::ParticleDB().has_particle(std::make_pair(name, i)) )
      {
         str longname = Models::ParticleDB().long_name(name,i);
         if( has(partype,longname,SafeBool(false)) )
         {
            override_maps.at(partype).m0[longname] = value;
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
              override_maps.at(partype).m1[antiname][i] = value;
              done = true;
           }
           else if( Models::ParticleDB().has_particle(std::make_pair(antiname, i)) )
           {
              str longname = Models::ParticleDB().long_name(antiname,i);
              if( has(partype,longname,SafeBool(false)) )
              {
                 override_maps.at(partype).m0[longname] = value;
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
        errmsg << "No "<<Par::toString.at(partype)<<" with string reference '"<<name<<"' and index '"<<i<<"' exists in the wrapped spectrum!" <<std::endl;
        errmsg << "If you intended to add this value to the spectrum without overriding anything, please call this function with the optional 'safety' boolean parameter set to 'false'. It can then be later retrieved using the normal getters with the same name used here." << std::endl;
        utils_error().forced_throw(LOCAL_INFO,errmsg.str());
      }
      else
      {
        override_maps.at(partype).m1[name][i] = value;
      }
   }

   void SubSpectrum::set_override(const Par::Tags partype,
                      const double value, const str& name, int i, int j, bool safety)
   {                                         
      if( safety and not has(partype,name,i,j) )
      {                                      
        std::ostringstream errmsg;           
        errmsg << "Error setting override value in SubSpectrum object!" << std::endl;
        errmsg << "No "<<Par::toString.at(partype)<<" with string reference '"<<name<<"' and indices '"<<i<<","<<j<<"' exists in the wrapped spectrum!" <<std::endl;
        errmsg << "If you intended to add this value to the spectrum without overriding anything, please call this function with the optional 'safety' boolean parameter set to 'false'. It can then be later retrieved using the normal getters with the same name used here." << std::endl;
        utils_error().forced_throw(LOCAL_INFO,errmsg.str());
      }
      override_maps.at(partype).m2[name][i][j] = value;
   }

   /// PDB overloads of set_override functions

   /* Input short name plus index pair */
   void SubSpectrum::set_override(const Par::Tags partype, const double value, const std::pair<str,int> shortpr, const bool safety)
   {
      set_override(partype, value, shortpr.first, shortpr.second, safety);
   }

   /* Input PDG code plus context integer */
   void SubSpectrum::set_override(const Par::Tags partype, const double value, const int PDGcode, const int context, const bool safety)
   {
      set_override(partype, value, std::make_pair(PDGcode,context), safety);
   }

   void SubSpectrum::set_override(const Par::Tags partype, const double value, const std::pair<int,int> pdgpr, const bool safety)
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
   void SubSpectrum::set_override_vector(const Par::Tags tag, const double value, const std::vector<str>& params, bool safety)
   {
      for(std::vector<str>::const_iterator it = params.begin();
    it != params.end(); ++it)
  {
          this->set_override(tag, value, *it, safety);
  }
   }

   void SubSpectrum::set_override_vector(const Par::Tags tag, const double value, const std::vector<str>& params, const std::vector<int> indices, bool safety)
   {
      for(std::vector<str>::const_iterator it = params.begin(); it != params.end(); ++it)
      {
         for(std::vector<int>::const_iterator i = indices.begin(); i != indices.end() ; ++i)
         {
            this->set_override(tag, value, *it, *i, safety);
         }
      }
   }

   void SubSpectrum::set_override_vector(const Par::Tags tag, const double value, const std::vector<str>& params, const int i, bool safety)
   {
      std::vector<int> indices;
      indices.push_back(i);
      this->set_override_vector(tag,value,params,indices,safety);    
   }

   void SubSpectrum::set_override_vector(const Par::Tags tag, const double value, const str& par, const std::vector<int> indices, bool safety)
   {
      std::vector<str> params;
      params.push_back(par);
      this->set_override_vector(tag,value,params,indices,safety);    
   }

   void SubSpectrum::RunToScale(double scale, int behave)
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


   /// @}
 
   /// @}




}



