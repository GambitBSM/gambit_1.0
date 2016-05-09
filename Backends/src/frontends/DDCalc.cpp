//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Frontend source for the DDCalc backend.
///
///  Actual implementation of DDCalc ini function.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  Authors (add name and date if you modify):
///   
///  \author Lars A. Dal
///          (l.a.dal@fys.uio.no)
///  \date 2014 Jul
/// 
///  \author Christopher Savage
///          (chris@savage.name)
///  \date 2014 Sept
///  \date 2015 Jan,Feb,June
///
///  \author Pat Scott
///          (p.scott@imperial.ac.uk)
///  \date 2016 Apr
///
///  *********************************************

#include "gambit/Backends/frontend_macros.hpp"
#include "gambit/Backends/frontends/DDCalc.hpp"
#include "gambit/Utils/standalone_error_handlers.hpp"

#include <map>
#include <stdexcept>

// File-local globals
BE_NAMESPACE
{
  // Map returning detector index given an analysis name.
  std::map<str,int> ex_map;
  // DM model and halo model singleton indices.
  int WIMP, Halo;
}
END_BE_NAMESPACE


// Initialisation function
BE_INI_FUNCTION
{
  // Halo model parameters and pointers to their entries in the Params map.
  static double rho0,vrot,v0,vesc,rho0_eff;
  static safe_ptr<double> rho0_ptr,vrot_ptr,v0_ptr,vesc_ptr;

  // Fraction of DM
  double fraction = *Dep::RD_fraction;

  // Scan-level initialization -----------------------------
  static bool scan_level = true;
  if (scan_level)
  {
    // Initialize halo and WIMP models
    WIMP = DDCalc_InitWIMP();
    Halo = DDCalc_InitHalo();
    
    // Initialize experiments
    if (*InUse::DDCalc_Experiment)
    {
      ex_map["XENON100_2012"] = XENON100_2012_Init(false);
      ex_map["LUX_2013"] = LUX_2013_Init(false);
      ex_map["SuperCDMS_2014"] = SuperCDMS_2014_Init(false);
      ex_map["SIMPLE_2014"] = SIMPLE_2014_Init(false);
      //ex_map["DARWIN_Ar"] = DARWIN_Ar_Init(false);
      //ex_map["DARWIN_Xe"] = DARWIN_Xe_Init(false);
    }
    
    // Set halo model.  Currently allows only for Standard Halo Model with the following parameters:
    // Local dark matter density [GeV/cm^3]
    rho0 = runOptions->getValueOrDef<double>(0.4, "LocalHalo","rho0");
    rho0_eff = rho0*fraction;
    // Local disk rotation speed [km/s]
    vrot = runOptions->getValueOrDef<double>(235.,"LocalHalo","vrot");
    // Maxwellian most-probably speed [km/s]
    v0   = runOptions->getValueOrDef<double>(vrot,"LocalHalo","v0");
    // Local galactic escape speed [km/s]
    vesc = runOptions->getValueOrDef<double>(550.,"LocalHalo","vesc");
    DDCalc_SetSHM(Halo,rho0_eff,vrot,v0,vesc);

    // Save safe pointers to dynamic halo parameters, if they are being scanned over/set in the Parameters section of the yaml file. 
    if (ModelInUse("LocalHalo"))
    {
      rho0_ptr = Param["rho0"];
      vrot_ptr = Param["vrot"];
      v0_ptr   = Param["v0"];
      vesc_ptr = Param["rho0"];
    }    

    // Log stuff if in debug mode
    #ifdef DDCALC_DEBUG
      logger() << "  Initial Halo parameters for DDCalc:" << EOM;
      logger() << "    rho0 [GeV/cm^3]     = " << rho0 << EOM;
      logger() << "    rho0_eff [GeV/cm^3] = " << rho0_eff << EOM;
      logger() << "    vrot [km/s]         = " << vrot << EOM;
      logger() << "    v0   [km/s]         = " << v0   << EOM;
      logger() << "    vesc [km/s]         = " << vesc << EOM;
    #endif

  }
  scan_level = false;

  // Point-level initialization ----------------------------

  // Change DM parameters
  DDCalc_SetWIMP_mG(WIMP,*Dep::mwimp,Dep::DD_couplings->gps,Dep::DD_couplings->gns,
                    Dep::DD_couplings->gpa,Dep::DD_couplings->gna);

  // Log stuff if in debug mode
  #ifdef DDCALC_DEBUG
    double sigmapSI,sigmanSI,sigmapSD,sigmanSD;
    DDCalc_GetWIMP_msigma(WIMP,*Dep::mwimp,sigmapSI,&sigmanSI,&sigmapSD,&sigmanSD);
    logger() << "DDCalc WIMP-nucleon cross-sections [pb]:" << std::endl;
    logger() << "  sigmapSI = " << sigmapSI << std::endl;
    logger() << "  sigmanSI = " << sigmanSI << std::endl;
    logger() << "  sigmapSD = " << sigmapSD << std::endl;
    logger() << "  sigmanSD = " << sigmanSD << std::endl;
  #endif

  // Change halo parameters, if they are being scanned over/set in the Parameters section of the yaml file. 
  if (ModelInUse("LocalHalo"))
  {
    bool halo_changed = false;
    if (*rho0_ptr * fraction != rho0_eff) {rho0_eff = *rho0_ptr * fraction; halo_changed = true;}
    if (*vrot_ptr != vrot)                {vrot     = *vrot_ptr;            halo_changed = true;}
    if (*v0_ptr   != v0)                  {v0       = *v0_ptr;              halo_changed = true;}
    if (*vesc_ptr != vesc)                {vesc     = *vesc_ptr;            halo_changed = true;}
    if (halo_changed)
    {
      DDCalc_SetSHM(Halo,rho0_eff,vrot,v0,vesc);
      // Log stuff if in debug mode
      #ifdef DDCALC_DEBUG
        logger() << "Updated DDCalc halo parameters:" << EOM;
        logger() << "    rho0 [GeV/cm^3]     = " << rho0 << EOM;
        logger() << "    rho0_eff [GeV/cm^3] = " << rho0_eff << EOM;
        logger() << "    vrot [km/s]         = " << vrot << EOM;
        logger() << "    v0   [km/s]         = " << v0   << EOM;
        logger() << "    vesc [km/s]         = " << vesc << EOM;
      #endif
    }
  }
  
}
END_BE_INI_FUNCTION                                                

// Convenience functions
BE_NAMESPACE
{
  // Convenience function for returning detector index given an analysis name.
  int DDCalc_Experiment(const str& ex)
  {
    int result;
    try { result = ex_map.at(ex); }
    catch(std::out_of_range) { backend_error().raise(LOCAL_INFO, "Unknown experiment requested from DDCalc."); }
    return result;
  }

  // Convenience function for calling CalcRates with internally-initialised WIMP and halo objects.
  void DDCalc_CalcRates_simple(const int& D) { DDCalc_CalcRates(D, WIMP, Halo); }
}
END_BE_NAMESPACE
