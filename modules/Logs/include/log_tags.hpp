//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Headeer for logging classes
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Ben Farmer
///          (benjamin.farmer@monash.edu.au)
///  \date 2014 Mar
///
///  \author Pat Scott
///          (patscott@physics.mcgill.ca)
///  \date 2014 Mar
///
///  *********************************************

#ifndef __log_tags_hpp__
#define __log_tags_hpp__

namespace Gambit
{

  // CAREFUL! These logging enum tags might clash with other names in the Gambit namespace! Be careful when adding new ones.
  // If you add a new tag, be sure to also add it to one of the tag category sets defined in logging.cpp as well.
  enum LogTag
  {
    /* Message tags */
    debug=0,
    info,
    warn,
    err,
    /* Flags */
    fatal,
    nonfatal,
    /* Component tags */
    def,
    core,
    logging,
    models,
    depres,
    scan,
    inifile,
    printers,
    utils
    /* etc... */
  };

}

#endif //#ifndef __log_tags_hpp__
 
