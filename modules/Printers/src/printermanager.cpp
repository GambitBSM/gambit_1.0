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

#include "gambit/Printers/baseprinter.hpp"
#include "gambit/Printers/basebaseprinter.hpp"
#include "gambit/Printers/printermanager.hpp"
#include "gambit/Printers/printer_rollcall.hpp" // Also registers all the available printers
#include "gambit/Utils/yaml_options.hpp"

// Switch for debugging output (manual at the moment)
//#define DEBUG_MODE

#ifdef DEBUG_MODE 
  #define DBUG(x) x
#else 
  #define DBUG(x)
#endif

namespace Gambit
{
  namespace Printers 
  {

    /// Manager class for creating printer objects  
    PrinterManager::PrinterManager(const Options& printerNode, bool resume_mode)
      : tag(printerNode.getValue<std::string>("printer"))
      , options(printerNode.getNode("options"))
      , resume(resume_mode)
      , printerptr(NULL)
    {
      // Change printer pointer to actually point to the printer object
      if( printer_creators.find(tag)!=printer_creators.end() )
      {
         // If "tag" names a valid printer, create it.
         DBUG( std::cout << "PrinterManager: Creating Primary printer \"" << tag << "\"" << std::endl; )

         // pass on the "resume" flag to the printer
         Options mod_options = options;
         mod_options.setValue("resume",resume);

         BasePrinter* null(NULL);
         printerptr = printer_creators.at(tag)(mod_options,null);
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
      // Delete all the printer objects
      DBUG( std::cout << "PrinterManager: Destructing printers..." << std::endl; )
      typedef std::map<std::string, BasePrinter*>::iterator it_type;
      for(it_type it = auxprinters.begin(); it != auxprinters.end(); it++) {
         delete it->second; // Delete the printer to which this pointer points.
      } 
      delete printerptr;
    }

    // Create new printer object (of the same type as the primary printer)
    // and attach it to the provided name.
    void PrinterManager::new_stream(const std::string& streamname, const Options& options)
    {
       //TODO need some way for the scanners to change the options
       //for the auxiliary printers, e.g. so we can print to a different file
       DBUG( std::cout << "PrinterManager: Creating Auxilliary printer \"" << tag << "\" with name \"" << streamname << "\"" << std::endl; )
       Options mod_options = options;
       mod_options.setValue("resume",resume);
       mod_options.setValue("auxilliary",true);
       mod_options.setValue("name",streamname);
       // To construct printer as an auxilliary printer, a pointer to the primary printer is supplied as well as the options.
       auxprinters[streamname] = printer_creators.at(tag)(mod_options,printerptr);
       // Some printers may requires two-step initiations so this virtual function is provided to allow that.
       auxprinters.at(streamname)->auxilliary_init();
    }

    // Retrieve pointer to named printer object
    BaseBasePrinter* PrinterManager::get_stream(const std::string& streamname)
    {
      DBUG( std::cout << "PrinterManager: Retrieving printer stream \"" << streamname << "\"" << std::endl; )
      if(streamname=="")
      {
        if(printerptr==NULL)
        {
           printer_error().raise(LOCAL_INFO,"Error retrieving primary printer from PrinterManager! printerptr==NULL! Must be a bug in the PrinterManager initialisation.");
        }
        return printerptr;
      }
      else
      {
        ///TODO: add check to make sure that the requested stream exists
        // Note that this automatically converts the BasePrinter pointer into a BaseBasePrinter pointer
        // (for a more minimal interface for use in ScannerBit)
        return auxprinters.at(streamname);
      }
    }

    /// Getter for "resume" mode flag
    bool PrinterManager::resume_mode() { return resume; }

    /// Instruct all printers that scan has finished and to perform cleanup
    void PrinterManager::finalise()
    {
      typedef std::map<std::string, BasePrinter*>::iterator it_type;
      for(it_type it = auxprinters.begin(); it != auxprinters.end(); it++) {
         it->second->finalise();
      } 
      printerptr->finalise();
    }
 
  }
}

#undef DBUG
#undef DEBUG_MODE
