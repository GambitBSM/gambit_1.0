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
///  \date 2013 Jul, 2014 Mar, 2015 May
///
///  \author Lars A. Dal  
///          (l.a.dal@fys.uio.no)
///  \date 2014 Mar
///
///  \author Joakim Edsjo
///          (edsjo@fysik.su.se)
///  \date 2015 May
///  *********************************************

#ifdef BACKENDRENAME
  #define BACKENDNAME BACKENDRENAME
#else
  #define BACKENDNAME DarkSUSY
#endif
#define VERSION 5.1.1
#define SAFE_VERSION 5_1_1

#include "gambit/DarkBit/ProcessCatalogue.hpp"
#include "gambit/Elements/funktions.hpp"
#include "gambit/DarkBit/DarkBit_utils.hpp"
#include <string>

// Load the library
LOAD_LIBRARY

// Functions
BE_FUNCTION(dsinit, void, (), "dsinit_", "dsinit")
BE_FUNCTION(dshainit, void, (const int&), "dshainit_", "dshainit")
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
BE_FUNCTION(dsSLHAread, void, (const char*, int&, int), "dsslharead_", "dsSLHAread")
BE_FUNCTION(dsprep, void, (), "dsprep_", "dsprep")
BE_FUNCTION(dsIByieldone, double, (double&, int&, int&, int&), "dsibyieldone_", "dsibyieldone")
BE_FUNCTION(dswwidth, void, (int&), "dswwidth_", "dswwidth")
BE_FUNCTION(dsntcapsuntab, double, (const double&, const double&, const double&), "dsntcapsuntab_", "capture_rate_Sun")
BE_FUNCTION(dsntmuonyield, double, (const double&, const double&, const char&, const int&, const int&, const int&, const int&), "dsntmuonyield_", "raw_muonyield")

// Variables
// Below are output (slightly modified) from cbgb.py, the ones already specified are commented out further below
BE_VARIABLE(DS_PACODES, pacodes, "pacodes_", "pacodes")
BE_VARIABLE(DS_MSPCTM, mspctm, "mspctm_", "mspctm")
BE_VARIABLE(DS_WIDTHS, widths, "widths_", "widths")
BE_VARIABLE(DS_INTDOF, intdof, "intdof_", "intdof")
BE_VARIABLE(DS_VRTXS, vrtxs, "vrtxs_", "vrtxs")
BE_VARIABLE(DS_SMRUSEFUL, smruseful, "smruseful_", "smruseful")
BE_VARIABLE(DS_SMCUSEFUL, smcuseful, "smcuseful_", "smcuseful")
BE_VARIABLE(DS_COUPLINGCONSTANTS, couplingconstants, "couplingconstants_", "couplingconstants")
BE_VARIABLE(DS_SCKM, sckm, "sckm_", "sckm")
BE_VARIABLE(DS_MIXING, mixing, "mixing_", "mixing")
BE_VARIABLE(DS_MSSMTYPE, mssmtype, "mssmtype_", "mssmtype")
BE_VARIABLE(DS_MSSMPAR, mssmpar, "mssmpar_", "mssmpar")
BE_VARIABLE(DS_MSSMSWITCH, mssmswitch, "mssmswitch_", "mssmswitch")
BE_VARIABLE(DS_SFERMIONMASS, sfermionmass, "sfermionmass_", "sfermionmass")
BE_VARIABLE(DS_MSSMWIDTHS, mssmwidths, "mssmwidths_", "mssmwidths")
BE_VARIABLE(DS_MSSMMIXING, mssmmixing, "mssmmixing_", "mssmmixing")

// TODO: Replace darksusy types with appropriate commonblock representations and use FORT_COMMONB macros here
//BE_VARIABLE(DS_MSSMPAR, mssmpar,   "mssmpar_",   "mssmpar")   // Required to set up e.g. MSSM7
// Only read from
//BE_VARIABLE(DS_MSPCTM, mspctm,     "mspctm_",    "mspctm")    // Mass spectrum
//BE_VARIABLE(DS_INTDOF, intdof,     "intdof_",    "intdof")    // Particle degrees of freedom
//BE_VARIABLE(DS_PACODES, pacodes,   "pacodes_",   "pacodes")   // Particles codes (mapped onto mssmpar etc)
// Used in RD_eff_annrate_SUSY_DSprep_func, RD_oh2_general and RD_thresholds_resonances_SingletDM
BE_VARIABLE(DS_RDMGEV, rdmgev,     "rdmgev_",    "rdmgev")    // more RD Contains information about coannihilation
// Used in RD_oh2_general and RD_spectrum_SUSY
// This is only written to for some narrow-width approximation to the SM higgs
//BE_VARIABLE(DS_WIDTHS, widths,     "widths_",    "widths")    // Particle widths
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
BE_CONV_FUNCTION(DSparticle_code, int, (const str&), "particle_code")
BE_CONV_FUNCTION(initFromSLHA, int, (SLHAstruct), "initFromSLHA")
BE_CONV_FUNCTION(registerMassesForIB, 
    void, (std::map<std::string, DarkBit::TH_ParticleProperty>&), "registerMassesForIB")
BE_CONV_FUNCTION(setMassesForIB, void, (bool), "setMassesForIB")

// Undefine macros to avoid conflict with other backends
#include "gambit/Backends/backend_undefs.hpp"
