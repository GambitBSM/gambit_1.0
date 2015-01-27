//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Example retrieval of data from Spectrum 
///  object.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Ben Farmer
///          (ben.farmer@gmail.com)
///    \date 2014 Dec
///  
///  *********************************************

#include <string>
#include <sstream>
#include "gambit_module_headers.hpp"
#include "SpecBit_rollcall.hpp"

// includes that are already done by the above headers, 
// just for clarity
#include "Spectrum.hpp"
#include <slhaea.h> 

// For the demo output
#include "stream_overloads.hpp"

namespace Gambit
{

  namespace SpecBit
  {

    using namespace LogTags;

    // Example showing reading of SLHA information from Spectrum object, using
    // both SLHAea objects and direct Spectrum getter functions.
    void exampleRead (bool &result)
    {

      // Retreive pointer to Spectrum object, delivered by dependency resolver
      // Module function asks for Spectrum* with capability MSSM_spectrum.
      // i.e. has DEPENDENCY(MSSM_spectrum, Spectrum*) 
      namespace Pipe = Pipes::exampleRead;
      Spectrum* spec = *Pipe::Dep::MSSM_spectrum;

      // Extract SLHAea object
      // This copies the data out. Could possible change it to pass out a
      // reference instead, or have another function to do that.
      SLHAea::Coll slhaea = spec->getSLHAea();

      // If this is a valid model point, return true and dump information, else false

      // SLHAea objects behave mostly like maps, but with special kinds of keys. For
      // "at" and "operator[]", it does automatic conversion, but for "find" it does
      // not, so we have to manually do it.   
      SLHAea::Block spinfo = slhaea.at("SPINFO");
      std::vector<std::string> k3(1, "3");
      std::vector<std::string> k4(1, "4");

      // See if error code entries exist
      if(spinfo.find(k3) == spinfo.end() and spinfo.find(k4) == spinfo.end())
      {
         std::cout << "Good spectrum found! Inspecting contents..." << std::endl;
         std::cout << std::endl << slhaea << std::endl;
         
         // Write to file so we can check it
         std::string filename(Pipe::runOptions->getValue<std::string>("output_slha_filename"));
         spec->dump2slha(filename);

         // ---------------------------------------------------------
         // BEGIN DEMO OF SPECTRUM OBJECT AND PARTICLE DATABASE
         // ---------------------------------------------------------

         //#define ECHO(COMMAND) cout << "  " << STRINGIFY(COMMAND) << " = " << COMMAND << endl;
         //Replacing with a version that deals with SLHAea access errors            
         #define ECHO(COMMAND)                                \
         {                                                    \
             std::ostringstream msg;                          \
             try { msg << COMMAND; }                          \
             catch (const std::out_of_range& oor)             \
             { msg << "Out of Range error: " << oor.what(); } \
             cout << "  " << STRINGIFY(COMMAND) << " = " << msg.str() << endl; \
         }
         
         /* ----------Test particle database access ---------------- */
         #define PDB Models::ParticleDB()        

         // First check out what is actually in the database
         PDB.check_contents();

         // Demo a couple of particle name retrievals
         cout<<endl;
         cout<<"Demo retrieval of lightest neutralino info from particle database"<<endl;
         cout<<"-----------------------------------------------------------------"<<endl;
         ECHO( PDB.pdg_pair("~chi0_1")                   ) // Input long name, retrieve PDG code + context integer
         ECHO( PDB.pdg_pair("~chi0",1)                   ) // Input short name + index, retrieve PDG code + context integer
         ECHO( PDB.long_name("~chi0",1)                  ) // Input short name + index, retrieve long name
         ECHO( PDB.long_name(std::make_pair(1000022,0))  ) // Input PDG code + context integer, retrieve long name
         ECHO( PDB.long_name(1000022,0)                  ) // Input PDG code + context integer, retrieve long name

         ECHO( PDB.long_name(1000022)                    ) // Input PDG code only, retrieve long name (with context=0 assumed; Maybe this is bad? Easy to remove if we don't want such behaviour)
         ECHO( PDB.short_name_pair("~chi0_1")            ) // Input long name, retrieve short name + index
         ECHO( PDB.short_name_pair(std::make_pair(1000022,0)) ) // Input PDG code plus context integer, retrieve short name + index 
         ECHO( PDB.short_name_pair(1000022,0)            ) // Input PDG code plus context integer, retrieve short name + index 
         ECHO( PDB.short_name_pair(1000022)              ) // Input PDG code only, retrieve short name + index (with context=0)

         cout<<endl;
         cout<<"Demo retrieval when no short name exists"<<endl;
         cout<<"-----------------------------------------------------------------"<<endl;
         ECHO( PDB.pdg_pair("H+")                        )
         //ECHO( PDB.pdg_pair("H+",1)                      ) // Error!
         //ECHO( PDB.long_name("H+",1)                     ) // Error!
         ECHO( PDB.long_name(std::make_pair(37,0))       )
         ECHO( PDB.long_name(37,0)                       )
         ECHO( PDB.long_name(37)                         )
         //ECHO( PDB.short_name_pair("H+")                 ) // Error!
         //ECHO( PDB.short_name_pair(std::make_pair(37,0)) ) // Error!
         //ECHO( PDB.short_name_pair(37,0)                 ) // Error!
         //ECHO( PDB.short_name_pair(37)                   ) // Error!
         cout<<endl;
         /* ----------------- Pole masses --------------------------- */
     
         cout<<"Begin demo retrievals from Spectrum object"<<endl;
         cout<<"-----------------------------------------------------------------"<<endl;
         cout<<endl;
         cout<<"First, general methods for accessing different sorts of information."<<endl;
         cout<<endl;
         cout<<"Lighest neutral Higgs boson pole mass:"<<endl;
         ECHO(  spec->phys.get_Pole_Mass( PDB.short_name_pair(25,0) )   )
         ECHO(  spec->phys.get_Pole_Mass( PDB.long_name(25,0) )         )
         ECHO(  spec->phys.get_Pole_Mass(25,0)                          )
         ECHO(  spec->phys.get_Pole_Mass(25)                            )
         ECHO(  spec->phys.get_Pole_Mass( PDB.pdg_pair("h0",1) )        )
         ECHO(  spec->phys.get_Pole_Mass("h0",1)                        )
         ECHO(  spec->phys.get_Pole_Mass("h0_1")                        )

         cout<<endl;
         cout<<"Full manual retrieval of Spectrum object contents, with"<<endl;
         cout<<"correspondence to SLHAea object entries"<<endl;
         cout<<"-----------------------------------------------------------------"<<endl;

         // Gauge bosons / gauginos  
    
         // MZ was a bad first example; it is empty unless you switch on the SM pole mass
         // calculator for flexiblesusy. We do not yet pass any input value of MZ though
         // Similar issues with other gauge boson masses. So don't use these yet or
         // you'll get zero for all these masses.
         cout<<endl;
         cout<<"Gauge bosons:"<<endl;
         cout<<endl;
         ECHO(  spec->phys.get_Pole_Mass("Z0")       )
         ECHO(  slhaea.at("SMINPUTS").at(4).at(1)    )
         cout<<endl;
         ECHO(  spec->phys.get_Pole_Mass("gamma")    )
         cout<<"  ***Not in slha***"<<endl;
         cout<<endl;
         ECHO(  spec->phys.get_Pole_Mass("W+")       )
         ECHO(  slhaea.at("SMINPUTS").at(9).at(1)    )
         cout<<endl;
         ECHO(  spec->phys.get_Pole_Mass("g")        )
         cout<<"  ***Not in slha***"<<endl;
         cout<<endl;
         cout<<"Quarks:"<<endl;
         cout<<endl;
         // I'm a little unclear on what the pole masses for the lighter quarks mean, since I thought
         // that non-perturbative effects made definining them difficult... well anyway will have
         // to ask Peter what is being computed here.

         ECHO(  spec->phys.get_Pole_Mass("u",1)      )  // i.e. up (mass eigenstate)
         ECHO(  slhaea.at("SMINPUTS").at(22).at(1)   )  // mu(2 GeV)^MS-bar, not pole mass
         cout<<endl;
         ECHO(  spec->phys.get_Pole_Mass("u",2)      )  // i.e. charm
         ECHO(  slhaea.at("SMINPUTS").at(24).at(1)   )  // mc(mc)^MS-bar, not pole mass
         cout<<endl;
         ECHO(  spec->phys.get_Pole_Mass("u",3)      )  // i.e. top
         ECHO(  slhaea.at("SMINPUTS").at(6).at(1)    )
         cout<<endl;
         ECHO(  spec->phys.get_Pole_Mass("d",1)      )  // i.e. down
         ECHO(  slhaea.at("SMINPUTS").at(21).at(1)   )  // md(2 GeV)^MS-bar, not pole mass
         cout<<endl;
         ECHO(  spec->phys.get_Pole_Mass("d",2)      )  // i.e. strange
         ECHO(  slhaea.at("SMINPUTS").at(23).at(1)   )  // ms(2 GeV)^MS-bar, not pole mass
         cout<<endl;
         ECHO(  spec->phys.get_Pole_Mass("d",3)      )  // i.e. bottom
         ECHO(  slhaea.at("SMINPUTS").at(5).at(1)    )  //  mb(mb)^MS-bar, not pole mass.
         cout<<endl;
         cout<<"Charged fermions:"<<endl;
         cout<<endl;
         ECHO(  spec->phys.get_Pole_Mass("e",1)      )  // i.e. electron
         ECHO(  slhaea.at("SMINPUTS").at(11).at(1)   )
         cout<<endl;
         ECHO(  spec->phys.get_Pole_Mass("e",2)      )  // i.e. muon
         ECHO(  slhaea.at("SMINPUTS").at(13).at(1)   )
         cout<<endl;
         ECHO(  spec->phys.get_Pole_Mass("e",3)      )  // i.e. tau
         ECHO(  slhaea.at("SMINPUTS").at(7).at(1)    )
         cout<<endl;
         cout<<"Neutrinos:"<<endl;
         cout<<endl;
         // These will produce errors because currently no neutrino mass getters are hooked up
         ECHO(  spec->phys.get_Pole_Mass("nu",1)     )  // Just mass ordered (if there is mixing)
         ECHO(  slhaea.at("SMINPUTS").at(12).at(1)   )
         cout<<endl;
         ECHO(  spec->phys.get_Pole_Mass("nu",2)     )
         ECHO(  slhaea.at("SMINPUTS").at(14).at(1)   )
         cout<<endl;
         ECHO(  spec->phys.get_Pole_Mass("nu",3)     )
         ECHO(  slhaea.at("SMINPUTS").at(8).at(1)    )
         cout<<endl;

         // Now for SUSY particles
         cout<<endl;
         cout<<"MSSM Higgs sector:"<<endl;
         cout<<endl;
         ECHO(  spec->phys.get_Pole_Mass("h0",1)     )  // Lightest neutral Higgs boson
         ECHO(  slhaea.at("MASS").at(25).at(1)       )
         cout<<endl;
         ECHO(  spec->phys.get_Pole_Mass("h0",2)     )  // Heavy neutral Higgs boson
         ECHO(  slhaea.at("MASS").at(35).at(1)       )
         cout<<endl;
         ECHO(  spec->phys.get_Pole_Mass("H+")       )  // Charged Higgs
         ECHO(  slhaea.at("MASS").at(37).at(1)       )
         cout<<endl;
         ECHO(  spec->phys.get_Pole_Mass("A0")       )  // Pseudoscalar neutral Higgs
         ECHO(  slhaea.at("MASS").at(36).at(1)       )
         cout<<endl;

         // Scale at which running parameters are currently defined in the Spectrum object
         cout << "Spectrum object running parameters are currently defined at scale Q=" 
              << spec->runningpars.GetScale() << " [GeV]" << endl << endl;

         SpecBit_warning().raise(LOCAL_INFO,"Stopped to examine spectrum contents");  
         result = 0;
      }
      else if(spinfo.find(k3) != spinfo.end())
      {
         std::cout << "Bad spectrum: " << spinfo.at(3) << std::endl;
         result = 1;
      }
      else if(spinfo.find(k4) != spinfo.end())
      {
         std::cout << "Bad spectrum: " << spinfo.at(4) << std::endl;
         result = 1;
      }
      else
      {
         SpecBit_error().raise(LOCAL_INFO,"Bug in exampleRead 'if' logic");  
      }
   }

  }      
}













