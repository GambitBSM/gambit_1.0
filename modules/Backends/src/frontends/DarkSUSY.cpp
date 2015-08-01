#include "gambit/Backends/frontend_macros.hpp"
#include "gambit/Backends/frontends/DarkSUSY.hpp"

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

        /* 
         * CW: TODO FIXME Fix BackendIniBit_error problems
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
        */

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

  int initFromSLHA(SLHAstruct mySLHA)
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
//      DSparticle_mass.push_back(
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
