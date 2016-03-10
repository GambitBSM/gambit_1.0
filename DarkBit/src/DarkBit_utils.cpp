//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Utility functions for DarkBit
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Torsten Bringmann 
///          (torsten.bringmann@fys.uio.no)
///  \date 2015 May
///  
///  \author Lars A. Dal
///          (l.a.dal@fys.uio.no)
///  \date 2015 May
///  *********************************************

#include "gambit/Elements/gambit_module_headers.hpp"
#include "gambit/DarkBit/DarkBit_rollcall.hpp"
#include "gambit/DarkBit/DarkBit_utils.hpp"

namespace Gambit 
{
  namespace DarkBit 
  {
    namespace DarkBit_utils
    {

      // Convert between mass and flavour eigenstate identifiers
      std::string str_flav_to_mass(std::string flav)
      {
        if (flav=="e+") return "e+_1";
        if (flav=="mu+") return "e+_2";
        if (flav=="tau+") return "e+_3";
        if (flav=="u") return "u_1";
        if (flav=="d") return "d_1";
        if (flav=="c") return "u_2";
        if (flav=="s") return "d_2";
        if (flav=="t") return "u_3";
        if (flav=="b") return "d_3";
        if (flav=="e-") return "e-_1";
        if (flav=="mu-") return "e-_2";
        if (flav=="tau-") return "e-_3";
        if (flav=="ubar") return "ubar_1";
        if (flav=="dbar") return "dbar_1";
        if (flav=="cbar") return "ubar_2";
        if (flav=="sbar") return "dbar_2";
        if (flav=="tbar") return "ubar_3";
        if (flav=="bbar") return "dbar_3";
        return flav;
      }

      std::string str_mass_to_flav(std::string mass)
      {
        if (mass=="e+_1"   ) return "e+";
        if (mass=="e+_2"   ) return "mu+";
        if (mass=="e+_3"   ) return "tau+";
        if (mass=="u_1"    ) return "u";
        if (mass=="d_1"    ) return "d";
        if (mass=="u_2"    ) return "c";
        if (mass=="d_2"    ) return "s";
        if (mass=="u_3"    ) return "t";
        if (mass=="d_3"    ) return "b";
        if (mass=="e-_1"   ) return "e-";
        if (mass=="e-_2"   ) return "mu-";
        if (mass=="e-_3"   ) return "tau-";
        if (mass=="ubar_1" ) return "ubar";
        if (mass=="dbar_1" ) return "dbar";
        if (mass=="ubar_2" ) return "cbar";
        if (mass=="dbar_2" ) return "sbar";
        if (mass=="ubar_3" ) return "tbar";
        if (mass=="dbar_3" ) return "bbar";
        return mass;
      }


      void ImportDecays(std::string pID, TH_ProcessCatalog &catalog, 
                        std::set<std::string> &importedDecays, 
                        const DecayTable* tbl, double minBranching,
                        std::vector<std::string> excludeDecays)
      {
        if(importedDecays.count(pID) == 1) return;
#ifdef DARKBIT_DEBUG
        std::cout << "Importing decay information for: " << pID << std::endl;
#endif
        importedDecays.insert(pID);        
        const double m_init = catalog.getParticleProperty(pID).mass;
        const DecayTable::Entry* entry;
        try{entry = &(tbl->at(pID));} 
        catch(const std::out_of_range& oor)
        {
          return;
        }     
        double totalWidth = entry->width_in_GeV;
        if(totalWidth>0)
        {
          TH_Process process(pID);
          process.genRateMisc = Funk::cnst(0.);
          for(auto fState_it = entry->channels.begin();
              fState_it!= entry->channels.end(); ++fState_it)
          {
            double bFraction = (fState_it->second).first;
            if(bFraction>minBranching)
            {
              std::vector<std::string> pIDs;
              double m_final = 0;
              for(auto pit = fState_it->first.begin();
                  pit != fState_it->first.end(); ++pit)
              {
                std::string name = Models::ParticleDB().long_name(*pit);
                name = DarkBit_utils::str_flav_to_mass(name);
                m_final += catalog.getParticleProperty(name).mass;
                pIDs.push_back(name);
              } 
              double partialWidth = totalWidth * bFraction;        
              if(m_final<=m_init)
              {
                process.channelList.push_back(
                    TH_Channel(pIDs, Funk::cnst(partialWidth)));
                // Recursively import decays of final states (for cascades)
                for(auto f_it=pIDs.begin(); f_it!=pIDs.end();++f_it)
                {
                  if (std::find(excludeDecays.begin(), excludeDecays.end(), *f_it) == excludeDecays.end())
                    ImportDecays(*f_it, catalog, importedDecays, tbl, minBranching, excludeDecays);
                }
              }
            }
          }
          catalog.processList.push_back(process);          
        }   
      }

    } // namespace DarkBit_utils
  } // namespace DarkBit
} // namespace Gambit
