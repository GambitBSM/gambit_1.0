//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Manager class for printers.
///  Creates printer object according to inifile
///  instructions, and cleans them up on exit.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Ben Farmer
///          (benjamin.farmer@monash.edu.au)
///  \date 2014 May
///
///  \author Pat Scott
///          (patscott@physics.mcgill.ca)
///  \date 2014 May
///
///  *********************************************

#include "type_macros_inother.hpp"
#include "printermanager.hpp"
#include "yaml_options.hpp"

namespace Gambit
{
  namespace Printers 
  {

    /// Manager class for creating printer objects  
    PrinterManager::PrinterManager(const Options& printerNode):
      printerptr(NULL) 
    {
      std::string tag(printerNode.getValue<std::string>("printer"));
      Options options(printerNode.getNode("options"));
      // Change printer pointer to actually point to the printer object

      if( printer_creators.find(tag)!=printer_creators.end() )
      {
         // If "tag" names a valid printer, create it.
         printerptr = printer_creators.at(tag)(options);
      }
      else
      {
         // Otherwise throw an error
         std::ostringstream os;
         os << "Inifile entry 'printer:\""<<tag<<"\"' does not specify a valid printer! Please choose from one of the following:"<<std::endl;

         for (auto it = printer_creators.begin(); it != printer_creators.end(); ++it)
         {
            os << "  " << it->first << std::endl;
         }

         printer_error().raise(LOCAL_INFO,os.str());
      }
    }

    PrinterManager::~PrinterManager()
    {
      // Delete the printer object
      delete printerptr;
    }
 
  }
}

