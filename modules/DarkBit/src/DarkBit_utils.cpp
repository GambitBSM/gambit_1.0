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
      //TODO: add channel codes!
      int DSparticle_code(const str particleID) 
      {
       int kpart;
       if (particleID=="nu_e" or particleID=="nubar_e"){
         kpart=1;
       }else if (particleID=="e-" or particleID=="e+"){
         kpart=2;
       }else if (particleID=="nu_mu" or particleID=="nubar_mu"){
         kpart=3;
       }else if (particleID=="mu-" or particleID=="mu+"){
         kpart=4;
       }else if (particleID=="nu_tau" or particleID=="nubar_tau"){
         kpart=5;
       }else if (particleID=="tau-" or particleID=="tau+"){
         kpart=6;
       }else if (particleID=="u" or particleID=="ubar"){
         kpart=7;
       }else if (particleID=="d" or particleID=="dbar"){
         kpart=8;
       }else if (particleID=="c" or particleID=="cbar"){
         kpart=9;
       }else if (particleID=="s" or particleID=="sbar"){
         kpart=10;
       }else if (particleID=="t" or particleID=="tbar"){
         kpart=11;
       }else if (particleID=="b" or particleID=="bbar"){
         kpart=12;
       }else if (particleID=="gamma"){
         kpart=13;
       }else if (particleID=="W+" or particleID=="W-"){
         kpart=14;
       }else if (particleID=="Z0"){
         kpart=15;
       }else if (particleID=="g"){
         kpart=16;
       }else if (particleID=="h0_2"){ //FIXME: check w/ Joakim whether this is always true!
         kpart=17;
       }else if (particleID=="h0_1"){ //FIXME: check w/ Joakim whether this is always true!
         kpart=18;
       }else if (particleID=="A0"){
         kpart=19;
       }else if (particleID=="H+" or particleID=="H-"){
         kpart=20;
       }else if (particleID=="~nu_1" or particleID=="~nubar_1"){
         kpart=21;
       }else if (particleID=="~e-_1" or particleID=="~e+_1"){
         kpart=22;
       }else if (particleID=="~e-_4" or particleID=="~e+_4"){ //FIXME: someone should check this...
         kpart=23;
       }else if (particleID=="~nu_2" or particleID=="~nubar_2"){
         kpart=24;
       }else if (particleID=="~e-_2" or particleID=="~e+_2"){
         kpart=25;
       }else if (particleID=="~e-_5" or particleID=="~e+_5"){
         kpart=26;
       }else if (particleID=="~nu_3" or particleID=="~nubar_3"){
         kpart=27;
       }else if (particleID=="~e-_3" or particleID=="~e+_3"){
         kpart=28;
       }else if (particleID=="~e-_6" or particleID=="~e+_6"){
         kpart=29;
       }else if (particleID=="~u_1" or particleID=="~ubar_1"){
         kpart=30;
       }else if (particleID=="~u_4" or particleID=="~ubar_4"){
         kpart=31;
       }else if (particleID=="~d_1" or particleID=="~dbar_1"){
         kpart=32;
       }else if (particleID=="~d_4" or particleID=="~dbar_4"){
         kpart=33;
       }else if (particleID=="~u_2" or particleID=="~ubar_2"){
         kpart=34;
       }else if (particleID=="~u_5" or particleID=="~ubar_5"){
         kpart=35;
       }else if (particleID=="~d_2" or particleID=="~dbar_2"){
         kpart=36;
       }else if (particleID=="~d_5" or particleID=="~dbar_5"){
         kpart=37;
       }else if (particleID=="~u_3" or particleID=="~ubar_3"){
         kpart=38;
       }else if (particleID=="~u_6" or particleID=="~ubar_6"){
         kpart=39;
       }else if (particleID=="~d_3" or particleID=="~dbar_3"){
         kpart=40;
       }else if (particleID=="~d_6" or particleID=="~dbar_6"){
         kpart=41;
       }else if (particleID=="~chi0_1"){
         kpart=42;
       }else if (particleID=="~chi0_2"){
         kpart=43;
       }else if (particleID=="~chi0_3"){
         kpart=44;
       }else if (particleID=="~chi0_4"){
         kpart=45;
       }else if (particleID=="~chi+_1" or particleID=="~chi-_1"){
         kpart=46;
       }else if (particleID=="~chi+_2" or particleID=="~chi-_2"){
         kpart=47;
       }else if (particleID=="~g"){
         kpart=48;
       } else {  
         std::cout << "ERROR: translation into DS particle code not implemented "
                   << "for string identifier " << particleID << std::endl;
         kpart=-100;
       }
       return kpart;
      }

      void ImportDecays(std::string pID, TH_ProcessCatalog &catalog, 
                        std::set<std::string> &importedDecays, 
                        const DecayTable* tbl, double minBranching)
      {
        if(importedDecays.count(pID) == 1) return;
        std::cout << "Importing decay information for: " << pID << std::endl;
        importedDecays.insert(pID);        
        const double m_init = catalog.getParticleProperty(pID).mass;
        const DecayTable::Entry* entry;
        try{entry = &(tbl->at(pID));} 
        catch(const std::out_of_range& oor)
        {
          std::cout << "no decays exist." << std::endl;
          return;
        }     
        double totalWidth = entry->width_in_GeV;
        if(totalWidth>0)
        {
          TH_Process process(pID);
          process.genRateTotal = Funk::cnst(totalWidth);
          for(auto fState_it = entry->channels.begin();
              fState_it!= entry->channels.end(); ++fState_it)
          {
            double bFraction = (fState_it->second).first;
            if(bFraction>minBranching)
            {
              std::vector<std::string> pIDs;
              std::cout << "  ";
              double m_final = 0;
              for(auto pit = fState_it->first.begin();
                  pit != fState_it->first.end(); ++pit)
              {
                std::string name = Models::ParticleDB().long_name(*pit);
                m_final += catalog.getParticleProperty(name).mass;
                pIDs.push_back(name);
                std::cout << name << "\t";
              } 
              double partialWidth = totalWidth * bFraction;        
              if(m_final<=m_init)
              {
                std::cout<< bFraction << std::endl;   
                process.channelList.push_back(
                    TH_Channel(pIDs, Funk::cnst(partialWidth)));
                // Recursively import decays of final states (for cascades)
                for(auto f_it=pIDs.begin(); f_it!=pIDs.end();++f_it)
                {
                  ImportDecays(*f_it, catalog, importedDecays, tbl, minBranching);
                }
              }
              else
                std::cout<< "kin. closed" << std::endl;   
            }
          }
          catalog.processList.push_back(process);          
        }   
      }

    } // namespace DarkBit_utils
  } // namespace DarkBit
} // namespace Gambit
