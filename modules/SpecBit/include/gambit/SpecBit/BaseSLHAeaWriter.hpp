//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Base class for creating an SLHAea object
///  from a Gambit SubSpectrum object.
///
///  Derived versions will deal with model-specific
///  details.
///
///  *********************************************
///
///  Authors: 
///  <!-- add name and date if you modify -->
///   
///  \author Ben Farmer
///          (benjamin.farmer@fysik.su.se)
///  \date 2015 Jul 
///
///
///  *********************************************

#ifndef __BaseSLHAeaWriter_hpp__
#define __BaseSLHAeaWriter_hpp__

#include "gambit/Elements/subspectrum.hpp"

namespace Gambit {
   namespace SpecBit {

      class BaseSLHAeaWriter
      {
         public:
            // Probably useful to have access to this for custom adjustments
            SLHAea::Coll output;

            BaseSLHAeaWriter() {}

            void add_block(const std::string& name, const double scale = -1)
            {
               if(scale==-1) {
                  output[name][""] << "BLOCK" << name;
               } else {
                  output[name][""] << "BLOCK" << name << "Q=" << scale;
               }
            }

            // Zero indices in SubSpectrum getter, 1 SLHA index 
            template<class PhysOrRun, class PT>
            void add_entry(const std::string local_info, const PhysOrRun& phys_or_run, const PT partype, const std::string& name, const std::string& block, const int slha_index, const  std::string& comment, const bool error_if_missing = true)
            {
               if(phys_or_run.has(partype,name))
               {
                  output[block][""] << slha_index << phys_or_run.get(partype,name) << comment;
               }
               else if(error_if_missing)
               {
                  std::ostringstream errmsg;
                  errmsg << "Error creating SLHAea output from SubSpectrum object! Required entry not found (paramtype="<<Par::toString.at(partype)<<", name="<<name;
                  SpecBit_error().raise(local_info,errmsg.str());  
               } 
               // else skip this entry
               return;
            }

            // Two SubSpectrum getter indices, two SLHA indices (various combinations possible in principle, need a function for each, or some clever variadic function?)
            template<class PhysOrRun, class PT>
            void add_entry(const std::string local_info, const PhysOrRun& phys_or_run, const PT partype, const std::string& name, const int index1, const int index2, const std::string& block, const int slha_index1, const int slha_index2, const std::string& comment, const bool error_if_missing = true)
            {
               if(phys_or_run.has(partype,name,index1,index2))
               {
                  output[block][""] << slha_index1 << slha_index2 << phys_or_run.get(partype,name,index1,index2) << comment;
               }
               else if(error_if_missing)
               {
                  std::ostringstream errmsg;
                  errmsg << "Error creating SLHAea output from SubSpectrum object! Required entry not found (paramtype="<<Par::toString.at(partype)<<", name="<<name<<", index1="<<index1<<", index2="<<index2;
                  SpecBit_error().raise(local_info,errmsg.str());  
               } 
               // else skip this entry
               return;
            }

      };      
     
   }
}

#endif
