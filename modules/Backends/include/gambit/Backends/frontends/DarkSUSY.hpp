//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Fronted header for the DarkSUSY backend
///
///  Compile-time registration of available 
///  functions and variables from this backend.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Anders Kvellestad
///          (anders.kvellestad@fys.uio.no)
///  \date 2013 Mar
///
///  \author Pat Scott 
///          (patscott@physics.mcgill.ca)
///  \date 2013 Apr
///        2015 Mar
///
///  \author Christoph Weniger
///          (c.weniger@uva.nl)
///  \date 2013 Jul
///
///  \author Torsten Bringmann
///          (torsten.bringmann@fys.uio.no)
///  \date 2013 Jul, 2014 Mar
///
///  \author Lars A. Dal  
///          (l.a.dal@fys.uio.no)
///  \date 2014 Mar
///  *********************************************

#ifdef BACKENDRENAME
  #define BACKENDNAME BACKENDRENAME
#else
  #define BACKENDNAME DarkSUSY
#endif
#define VERSION 5.1.1
#define SAFE_VERSION 5_1_1

// Load the library
LOAD_LIBRARY

// Functions
BE_FUNCTION(dsinit, void, (), "dsinit_", "dsinit")
BE_FUNCTION(dssusy, void, (int&,int&), "dssusy_", "dssusy")
BE_FUNCTION(dsrdomega, double, (int&,int&,double&,int&,int&,int&), "dsrdomega_", "dsrdomega")
BE_FUNCTION(dsrdinit, void, (), "dsrdinit_", "dsrdinit")
BE_FUNCTION(dsrdset, void, (char*, int&, char*, int&), "dsrdset_", "dsrdset")
BE_FUNCTION(dsrdthlim, void, (), "dsrdthlim_", "dsrdthlim")
BE_FUNCTION(dsrdtab, void, (double(*)(double&), double&), "dsrdtab_", "dsrdtab")
BE_FUNCTION(dsrdeqn, void, (double(*)(double&),double&,double&,double&,double&,int&), "dsrdeqn_", "dsrdeqn")
BE_FUNCTION(dsrdwintp, double, (double&), "dsrdwintp_", "dsrdwintp")
BE_FUNCTION(dsanwx, double, (double&), "dsanwx_", "dsanwx")
BE_FUNCTION(dshayield, double, (double&,double&,int&,int&,int&), "dshayield_", "dshayield")
BE_FUNCTION(dssusy_isasugra, void, (int&,int&), "dssusy_isasugra_", "dssusy_isasugra")
BE_FUNCTION(dsgive_model_isasugra, void, (double&,double&,double&,double&,double&), "dsgive_model_isasugra_", "dsgive_model_isasugra")
BE_FUNCTION(dssigmav, double, (int&), "dssigmav_", "dssigmav")
BE_FUNCTION(dsIBffdxdy, double, (int&, double&, double&), "dsibffdxdy_", "dsIBffdxdy")
BE_FUNCTION(dsIBfsrdxdy, double, (int&, double&, double&), "dsibfsrdxdy_", "dsIBfsrdxdy")
BE_FUNCTION(dsIBhhdxdy, double, (int&, double&, double&), "dsibhhdxdy_", "dsIBhhdxdy")
BE_FUNCTION(dsIBwhdxdy, double, (int&, double&, double&), "dsibwhdxdy_", "dsIBwhdxdy")
BE_FUNCTION(dsIBwwdxdy, double, (int&, double&, double&), "dsibwwdxdy_", "dsIBwwdxdy")
BE_FUNCTION(dsddgpgn, void, (double&, double&, double&, double&), "dsddgpgn_", "dsddgpgn")
BE_FUNCTION(dsSLHAread, void, (char*, int&, int), "dsslharead_", "dsSLHAread")
BE_FUNCTION(dsprep, void, (), "dsprep_", "dsprep")
BE_FUNCTION(dsIByieldone, double, (double&, int&, int&, int&), "dsibyieldone_", "dsibyieldone")
BE_FUNCTION(dswwidth, void, (int&), "dswwidth_", "dswwidth")
BE_FUNCTION(dsntcapsuntab, double, (const double&, const double&, const double&), "dsntcapsuntab_", "capture_rate_Sun")
BE_FUNCTION(dsntmuonyield, double, (const double&, const double&, const char&, const int&, const int&, const int&, const int&), "dsntmuonyield_", "raw_muonyield")

// Variables
// TODO: Replace darksusy types with appropriate commonblock representations and use FORT_COMMONB macros here
BE_VARIABLE(DS_MSSMPAR, mssmpar,   "mssmpar_",   "mssmpar")   // Required to set up e.g. MSSM7
// Only read from
BE_VARIABLE(DS_MSPCTM, mspctm,     "mspctm_",    "mspctm")    // Mass spectrum
BE_VARIABLE(DS_INTDOF, intdof,     "intdof_",    "intdof")    // Particle degrees of freedom
BE_VARIABLE(DS_PACODES, pacodes,   "pacodes_",   "pacodes")   // Particles codes (mapped onto mssmpar etc)
// Used in RD_eff_annrate_SUSY_DSprep_func, RD_oh2_general and RD_thresholds_resonances_SingletDM
BE_VARIABLE(DS_RDMGEV, rdmgev,     "rdmgev_",    "rdmgev")    // more RD Contains information about coannihilation
// Used in RD_oh2_general and RD_spectrum_SUSY
// This is only written to for some narrow-width approximation to the SM higgs
BE_VARIABLE(DS_WIDTHS, widths,     "widths_",    "widths")    // Particle widths
// Appears only in RD_oh2_general
BE_VARIABLE(DS_RDPTH, rdpth,       "rdpth_",     "rdpth")     // gRD thresholds
BE_VARIABLE(DS_RDDOF, rddof,       "rddof_",     "rddof")     // gRD dofs
BE_VARIABLE(DS_RDERRORS, rderrors, "rderrors_", "rderrors")   // gRD errors
BE_VARIABLE(DS_RDPARS, rdpars,     "rdpars_",    "rdpars")    // gRD Parameters 
BE_VARIABLE(DS_RDSWITCH, rdswitch, "rdswitch_",  "rdswitch")  // gRD Switches
BE_VARIABLE(DS_RDLUN, rdlun,       "rdlun_",     "rdlun")     // gRD ???
BE_VARIABLE(DS_RDPADD, rdpadd,     "rdpadd_",    "rdpadd")    // gRD ???
// IB stuff
BE_VARIABLE(DS_IBINTVARS,IBintvars,"ibintvars_", "IBintvars")
// Direct detection common block
BE_VARIABLE(DS_DDCOM, ddcom, "ddcom_",    "ddcom")
// Neutrino detection common block
BE_VARIABLE(DS_NUCOM, wabranch, "wabranch_", "nu_common_block")


// Convenience functions (registration)
BE_CONV_FUNCTION(neutrino_yield, double, (const double&, const int&, void*&), "nuyield")
BE_CONV_FUNCTION(dsgenericwimp_nusetup, void, (const double(&)[29], const double(&)[29][3], const double(&)[15], 
                                               const double(&)[3], const double&, const double&, const double&,
                                               const double&, const double&), "nuyield_setup")

// Initialisation function (definition)
BE_INI_FUNCTION
{
    using namespace SLHAea;

    // Initialize DarkSUSY if run for the first time
    bool static scan_level = true;
    if (scan_level)
    {
        std::cout << "DarkSUSY initialization" << std::endl;
        dsinit();
        dsrdinit();
        scan_level = false;

        // Setting nuclear spin/quark content to micromegas values:
        ddcom->deld = -0.427;
        ddcom->delu = 0.842;
        ddcom->dels = -0.085;

        ddcom->ftp(7) = 0.0153;
        ddcom->ftp(8) = 0.0191;
        ddcom->ftp(9) = 0.0682;
        ddcom->ftp(10) = 0.0447;
        ddcom->ftp(11) = 0.0682;
        ddcom->ftp(12) = 0.0682;

        ddcom->ftn(7) = 0.011;
        ddcom->ftn(8) = 0.0273;
        ddcom->ftn(9) = 0.0679;
        ddcom->ftn(10) = 0.0447;
        ddcom->ftn(11) = 0.0679;
        ddcom->ftn(12) = 0.0679;
    }

}
DONE

// Convenience functions (definitions)
BE_NAMESPACE
{

  /// Function dsgenericwimp_nusetup sets DarkSUSY's internal common
  /// blocks with all the prpoerties required to compute neutrino
  /// yields for a generic WIMP.
  void dsgenericwimp_nusetup(const double (&annihilation_bf)[29], const double (&Higgs_partial_widths_neutral)[29][3],
   const double (&Higgs_partial_widths_charged)[15], const double (&Higgs_masses_neutral)[3], const double &Higgs_mass_charged,
   const double &mwimp, const double &sigmav, const double &sigma_sip, const double &sigma_sdp)
  {
       
    // Transfer WIMP mass and sigmav to common blocks.
    wabranch->wamwimp = mwimp;
    wabranch->wasv = sigmav;
    
    // Transfer branching fractions to WIMP annihilation common blocks.
    // For channel indices, see dswayieldone.f
    for (int i=1; i<=29; i++)
    {
      wabranch->wabr(i) = annihilation_bf[i-1];
    }
        
    // Transfer Higgs widths to Higgs width common blocks.
    for (int i=1; i<=29; i++)
    {
      for (int j=1; i<=3; j++)
      {
        wabranch->was0br(i,j) = Higgs_partial_widths_neutral[i-1][j-1]; // Neutral Higgses
      }
    }
    for (int i=1; i<=15; i++)
    {
      wabranch->wascbr(i) = Higgs_partial_widths_charged[i-1];          // Charged Higgses
    }

    // Transfer Higgs masses to common blocks.
    for (int i=1; i<=3; i++)
    {
      wabranch->was0m(i) = Higgs_masses_neutral[i-1];                   // Neutral Higgses
    }
    wabranch->wascm = Higgs_mass_charged;                               // Charged Higgses
    
    // Transfer proton scattering cross-sections to common blocks.
    wabranch->wasigsip = sigma_sip;                   // cm^2 SI scattering cross section
    wabranch->wasigsdp = sigma_sdp;                   // cm^2 SD scattering cross section

    // Tell DarkSUSY we've taken care of business.
    wabranch->dswasetupcalled = true;

  }
 

  /// Function nuyield returns neutrino yields at the top of the
  /// the atmosphere, in m^-2 GeV^-1 annihilation^-1.  Provided
  /// here for interfacing with nulike.
  ///   --> log10Enu log_10(neutrino energy/GeV)
  ///   --> p        p=1 for neutrino yield, p=2 for nubar yield 
  ///   --> context  void pointer (ignored)
  double neutrino_yield(const double& log10E, const int& ptype, void*&)
  {
    int istat;
    const char object[3] = "su";
    return 1e-30 * dsntmuonyield(pow(10.0,log10E),10.0,object[0],3,1,ptype,istat);
    if (istat != 0) invalid_point().raise("Model point failed neutrino flux calculation.");
  }

}
DONE

// Undefine macros to avoid conflict with other backends
#include "gambit/Backends/backend_undefs.hpp"

