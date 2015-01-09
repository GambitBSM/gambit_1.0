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
         
         // Comparison of Spectrum getters vs slhaea readout
         // Pole masses:
         // (Standard Model)

         #define ECHO(COMMAND) "  " << STRINGIFY(COMMAND) << " = " << COMMAND

         std::cout << "Spectrum object running parameters are defined at scale Q=" 
                   << spec->runningpars.GetScale() << " [GeV]" << endl;
         std::cout << std::endl;
         std::cout << ECHO(  spec->phys.get_Pole_Mass("MZ")       ) << std::endl;
         std::cout << ECHO(  slhaea.at("SMINPUTS").at(4).at(1)    ) << std::endl;
         std::cout << std::endl;
         std::cout << ECHO(  spec->phys.get_Pole_Mass("MGluino")  ) << std::endl;
         std::cout << ECHO(  slhaea.at("MASS").at(1000021).at(1)  ) << std::endl;
         std::cout << std::endl;

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













