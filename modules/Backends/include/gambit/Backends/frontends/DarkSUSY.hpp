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
BE_CONV_FUNCTION(initFromSLHA, int, (eaSLHA), "initFromSLHA")
BE_CONV_FUNCTION(registerMassesForIB, 
    void, (std::map<std::string, DarkBit::TH_ParticleProperty>&), "registerMassesForIB")
BE_CONV_FUNCTION(setMassesForIB, void, (bool), "setMassesForIB")

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
        
        // Initialize yield tables for use in cascade decays (initialize more if needed)
        dshainit(151); // Initialize positron tables
        dshainit(152); // Initialize gamma ray tables
        dshainit(154); // Initialize antiproton tables      
        // Call dshayield for first call initialization of variables
        double tmp1 = 100.0;
        double tmp2 = 10.0;
        int tmp3 = 15;
        int tmp4 = 152;
        int tmp5 = 0; 
        dshayield(tmp1,tmp2,tmp3,tmp4,tmp5); 
        
        scan_level = false;

        if (runOptions->hasKey("dddn"))
        {
        	if (runOptions->getValue<int>("dddn")==1) ddcom->dddn = 1;
        	else if (runOptions->getValue<int>("dddn")==0) ddcom->dddn = 0;
        	else BackendIniBit_error().raise(LOCAL_INFO, "Invalid value of dddn "
        				"(only 0 or 1 permitted).");
        }

        if (runOptions->hasKey("ddpole"))
        {
        	if (runOptions->getValue<int>("ddpole")==1) ddcom->ddpole = 1;
        	else if (runOptions->getValue<int>("ddpole")==0)
        	{
        		ddcom->ddpole = 0;
        		if (runOptions->hasKey("dddn") && runOptions->getValue<int>("dddn")==1)
        			BackendIniBit_warning().raise(LOCAL_INFO, "ddpole = 0 ignored "
        					"by DarkSUSY because dddn = 1.");
        	}
        	else BackendIniBit_error().raise(LOCAL_INFO, "Invalid value of ddpole "
        				"(only 0 or 1 permitted).");
        }

    }

}
END_BE_INI_FUNCTION

// Convenience functions (definitions)
BE_NAMESPACE
{

  /// Function dsgenericwimp_nusetup sets DarkSUSY's internal common
  /// blocks with all the properties required to compute neutrino
  /// yields for a generic WIMP.
  void dsgenericwimp_nusetup(const double (&annihilation_bf)[29], const double (&Higgs_decay_BFs_neutral)[29][3],
   const double (&Higgs_decay_BFs_charged)[15], const double (&Higgs_masses_neutral)[3], const double &Higgs_mass_charged,
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
        
    // Transfer Higgs decay branching fractions (not widths) to Higgs decay common blocks.
    // The total width is not relevant, as all Higgs decay in flight eventually, so 
    // only the BFs are needed to calculate the yields into neutrinos from decays in flight.
    for (int i=1; i<=3; i++)    // Loop over the neutral Higgses
    {
      for (int j=1; j<=29; j++) // Loop over the known decay channels
      {
        wabranch->was0br(j,i) = Higgs_decay_BFs_neutral[j-1][i-1];
      }
    }
    for (int i=1; i<=15; i++)   // Loop over the known charged Higgs decay channels
    {
      wabranch->wascbr(i) = Higgs_decay_BFs_charged[i-1];
    }

    // Transfer Higgs masses to common blocks.
    for (int i=1; i<=3; i++)    // Loop over the neutral Higgses
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

  int initFromSLHA(eaSLHA mySLHA)
  {
    // JE's Initialization routine
    using SLHAea::to;
    mssmpar->m2 = to<double>(mySLHA.at("MSOFT").at(36).at(1));
    return 0;  // everything OK
  }

  void registerMassesForIB(
      std::map<std::string, DarkBit::TH_ParticleProperty> & particleProperties)
  {
    // Save masses somewhere in global variables etc.
    // Note: Actually, it is not trivial to define some global variables here
    // in the header.


    //For CW: Those three lists need to be promoted to global variables
    std::vector<std::string> IBfinalstate = 
        Funk::vec<std::string>("e-","mu-","tau-","u","d","c","s","t","b","W+","H+"); 
    std::vector<double> DSparticle_mass;
    std::vector<double> GAMBITparticle_mass;    
    DSparticle_mass.clear();
    GAMBITparticle_mass.clear();
    for (int i = 0; i < IBfinalstate.size(); i++ )
    {
      DSparticle_mass.push_back(
//         mspctm->mass(DarkBit::DarkBit_utils::DSparticle_code(IBfinalstate[i])));

//For CW/PS: The above line sets masses in the desired way, but does not compile. It seems 
//        that I don't have access to the function DSparticle_code, and I have no clue why
//        given that the error is reported as a linking problem, maybe something about
//        in which order the makefile sets up things??

      GAMBITparticle_mass.push_back(particleProperties.at(IBfinalstate[i]).mass);
    }

    
  }

  void setMassesForIB(bool set)
  {
     //For CW: obviously, all this will only work once we have access to global variables
     //        (and the linking problem is solved)
    if (set)
    {
      // Set masses in DS, using above global variables.
//      for (int i = 0; i < IBfinalstate.size(); i++ )
//      {
//        mspctm->mass(DarkBit::DarkBit_utils::DSparticle_code(IBfinalstate[i])))=
//          particleProperties.at(IBfinalstate[i]).mass;
//      }

    }
    else
    {
      // Reset masses.
//      for (int i = 0; i < IBfinalstate.size(); i++ )
//      {
//        particleProperties.at(IBfinalstate[i]).mass=
//            mspctm->mass(DarkBit::DarkBit_utils::DSparticle_code(IBfinalstate[i])));
//      }
    }
  }
}
END_BE_NAMESPACE

// Undefine macros to avoid conflict with other backends
#include "gambit/Backends/backend_undefs.hpp"

