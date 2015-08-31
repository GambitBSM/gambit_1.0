// *****JE NOTE*****: Things that NEED to be fixed:
// * I have added a dummy function DSparticle_code. This
//   is just to make the code comple. The real routine DSparticle_code needs
//   to be moved from git/modules/DarkBit/src/DarkBit_utils.cpp to here
// * Typecast for double complex below is just to make it compile, need
//   todo this properly.
//
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Frontend for DarkSUSY 5.1.1 backend
///
///  Note that if you're going to put backend
///  convenience and ini functions in a cpp file,
///  you need to have one cpp file for each renamed
///  version of the backend that you want to employ.
///  You also need to define BACKENDRENAME *before*
///  including the frontend header.
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
///  \date 2015 Aug
///
///  *********************************************

#include "gambit/Backends/frontend_macros.hpp"
#include "gambit/Backends/frontends/DarkSUSY.hpp"

#define square(x) ((x) * (x))  // square a number

// Copied from SUSY-HIT.cpp.
// JE FIX: Make this work here
// PS: don't use these, use the updated (non-macro) versions in the SUSY-HIT.cpp file in the ColliderBit_development branch (also sent by email).
// #define REQUIRED_BLOCK(NAME, BLOCK) if (slha.find(NAME) != slha.end()) BLOCK = slha.at(NAME); else backend_error().raise(LOCAL_INFO, "Missing SLHA block: " NAME); 
// #define OPTIONAL_BLOCK(NAME, BLOCK) if (slha.find(NAME) != slha.end()) BLOCK = slha.at(NAME); else BLOCK.push_back ("BLOCK " NAME);

// Initialisation function (definition)
BE_INI_FUNCTION
{
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

  /// Translates GAMBIT string identifiers to the SUSY
  /// particle codes used internally in DS (as stored in common block /pacodes/)          
  //TODO: add channel codes!
  int DSparticle_code(const str& particleID) 
  {
    int kpart;
    if (particleID=="nu_e" or particleID=="nubar_e"){
     kpart=1;
    }else if (particleID=="e-" or particleID=="e+"){
     kpart=2;
    }else if (particleID=="nu_mu" or particleID=="nubar_mu"){
     kpart=3;
    }else if (particleID=="mu-" or particleID=="mu+"){
     kpart=4;
    }else if (particleID=="nu_tau" or particleID=="nubar_tau"){
     kpart=5;
    }else if (particleID=="tau-" or particleID=="tau+"){
     kpart=6;
    }else if (particleID=="u" or particleID=="ubar"){
     kpart=7;
    }else if (particleID=="d" or particleID=="dbar"){
     kpart=8;
    }else if (particleID=="c" or particleID=="cbar"){
     kpart=9;
    }else if (particleID=="s" or particleID=="sbar"){
     kpart=10;
    }else if (particleID=="t" or particleID=="tbar"){
     kpart=11;
    }else if (particleID=="b" or particleID=="bbar"){
     kpart=12;
    }else if (particleID=="gamma"){
     kpart=13;
    }else if (particleID=="W+" or particleID=="W-"){
     kpart=14;
    }else if (particleID=="Z0"){
     kpart=15;
    }else if (particleID=="g"){
     kpart=16;
    }else if (particleID=="h0_2"){ //FIXME: check w/ Joakim whether this is always true!
     kpart=17;
    }else if (particleID=="h0_1"){ //FIXME: check w/ Joakim whether this is always true!
     kpart=18;
    }else if (particleID=="A0"){
     kpart=19;
    }else if (particleID=="H+" or particleID=="H-"){
     kpart=20;
    }else if (particleID=="~nu_1" or particleID=="~nubar_1"){
     kpart=21;
    }else if (particleID=="~e-_1" or particleID=="~e+_1"){
     kpart=22;
    }else if (particleID=="~e-_4" or particleID=="~e+_4"){ //FIXME: someone should check this...
     kpart=23;
    }else if (particleID=="~nu_2" or particleID=="~nubar_2"){
     kpart=24;
    }else if (particleID=="~e-_2" or particleID=="~e+_2"){
     kpart=25;
    }else if (particleID=="~e-_5" or particleID=="~e+_5"){
     kpart=26;
    }else if (particleID=="~nu_3" or particleID=="~nubar_3"){
     kpart=27;
    }else if (particleID=="~e-_3" or particleID=="~e+_3"){
     kpart=28;
    }else if (particleID=="~e-_6" or particleID=="~e+_6"){
     kpart=29;
    }else if (particleID=="~u_1" or particleID=="~ubar_1"){
     kpart=30;
    }else if (particleID=="~u_4" or particleID=="~ubar_4"){
     kpart=31;
    }else if (particleID=="~d_1" or particleID=="~dbar_1"){
     kpart=32;
    }else if (particleID=="~d_4" or particleID=="~dbar_4"){
     kpart=33;
    }else if (particleID=="~u_2" or particleID=="~ubar_2"){
     kpart=34;
    }else if (particleID=="~u_5" or particleID=="~ubar_5"){
     kpart=35;
    }else if (particleID=="~d_2" or particleID=="~dbar_2"){
     kpart=36;
    }else if (particleID=="~d_5" or particleID=="~dbar_5"){
     kpart=37;
    }else if (particleID=="~u_3" or particleID=="~ubar_3"){
     kpart=38;
    }else if (particleID=="~u_6" or particleID=="~ubar_6"){
     kpart=39;
    }else if (particleID=="~d_3" or particleID=="~dbar_3"){
     kpart=40;
    }else if (particleID=="~d_6" or particleID=="~dbar_6"){
     kpart=41;
    }else if (particleID=="~chi0_1"){
     kpart=42;
    }else if (particleID=="~chi0_2"){
     kpart=43;
    }else if (particleID=="~chi0_3"){
     kpart=44;
    }else if (particleID=="~chi0_4"){
     kpart=45;
    }else if (particleID=="~chi+_1" or particleID=="~chi-_1"){
     kpart=46;
    }else if (particleID=="~chi+_2" or particleID=="~chi-_2"){
     kpart=47;
    }else if (particleID=="~g"){
     kpart=48;
    } else {  
     std::cout << "ERROR: translation into DS particle code not implemented "
               << "for string identifier " << particleID << std::endl;
     kpart=-100;
    }
    return kpart;
  }

  /// Initialise an MSSM model in DarkSUSY from an SLHAea object.
  int initFromSLHA(SLHAstruct mySLHA)
  {
    // JE's Initialization routine JEHERE
    using SLHAea::to;
    const std::complex<double> imagi(0.0, 1.0);
    // // retrive SMInputs dependency 
    // const SMInputs& sminputs = *Dep::SMINPUTS; 
    // DS_PACODES *DSpart = &(*BEreq::pacodes);
    // DS_PACODES *DSpart = pacodes;
    DS_PACODES *DSpart = &(*pacodes);
    // JE FIX: Make the REQUIRED_BLOCK structures work here
    // Add more required blocks below
    // REQUIRED_BLOCK("SMINPUTS",sminputs)

    // Block SMINPUTS
    couplingconstants->alphem   = 1./to<double>(mySLHA.at("SMINPUTS").at(1).at(1)); // 1/alpha_{QED}
    smruseful->alph3mz          = to<double>(mySLHA.at("SMINPUTS").at(3).at(1));   // alpha_s @ MZ
    smruseful->gfermi           = to<double>(mySLHA.at("SMINPUTS").at(2).at(1));   // Fermi constant
    mspctm->mass(DSpart->kl(1)) = to<double>(mySLHA.at("SMINPUTS").at(11).at(1)); // electron mass
    mspctm->mass(DSpart->kl(2)) = to<double>(mySLHA.at("SMINPUTS").at(13).at(1)); // muon mass
    mspctm->mass(DSpart->kl(3)) = to<double>(mySLHA.at("SMINPUTS").at(7).at(1));  // tau mass
    mspctm->mu2gev              = to<double>(mySLHA.at("SMINPUTS").at(22).at(1)); // up quark mass @ 2 GeV
    mspctm->mass(DSpart->kqu(1))   = mspctm->mu2gev;
    mspctm->md2gev              = to<double>(mySLHA.at("SMINPUTS").at(21).at(1)); // down quark mass @ 2 GeV
    mspctm->mass(DSpart->kqd(1))= mspctm->md2gev;
    mspctm->mcmc                = to<double>(mySLHA.at("SMINPTUS").at(24).at(1)); // charm mass at m_c
    mspctm->mass(DSpart->kqu(1))= mspctm->mcmc;
    mspctm->ms2gev              = to<double>(mySLHA.at("SMINPUTS").at(23).at(1)); // stange mass @ 2 GeV
    mspctm->mass(DSpart->kqd(2))= mspctm->ms2gev;
    mspctm->mbmb                = to<double>(mySLHA.at("SMINPUTS").at(5).at(1));  // bottom mass at m_b
    mspctm->mass(DSpart->kqd(3))= mspctm->mbmb;
    mspctm->mass(DSpart->kqu(3))= to<double>(mySLHA.at("SMINPUTS").at(6).at(1));  // top mass
    

    // Weinberg angle will be dealt with later (need to respect tree level relation)
    // Which W mass do we want. JE CHECK
    // mspctm->mass(DarkBit_utils::DSparticle_code("W+"))  = fullspectrum->get_Pole_Mass("W+");  // W boson mass
    mspctm->mass(DSparticle_code("W+"))  = to<double>(mySLHA.at("MASS").at(24).at(1));  // W boson mass
    mspctm->mass(DSparticle_code("Z0"))  = to<double>(mySLHA.at("SMINPUTS").at(4).at(1)); // Z boson mass

    // CKM. We here read Wolfenstein. In principle, we might want to change
    // to VCKM is that block is present
    // sckm->ckms12 = to<double>(mySLHA.at("CKM").at(1).at(1));
    // sckm->ckms23 = to<double>(mySLHA.at("CKM").at(2).at(1))*sckm.ckms12**2;
    // sckm->ckmdelta = 0;
    // CKM matrix. Read from VCKMIN - Wolfenstein paramters.
    // It would be simpler to ready from VCKM, but we cannot count on that block being present
    double lambda = to<double>(mySLHA.at("VCKMIN").at(1).at(1));   // Wolfenstein lambda 
    double A = to<double>(mySLHA.at("VCKMIN").at(2).at(1));        // Wolfenstein A 
    double rhobar = to<double>(mySLHA.at("VCKMIN").at(3).at(1));   // Wolfenstein rhobar 
    double etabar = to<double>(mySLHA.at("VCKMIN").at(4).at(1));   // Wolfenstein etabar
    // Use Wolfenstein converter to get the VCKM matrix
    mixing->ckm(1,1) = Spectrum::Wolf2V_ud(lambda,A,rhobar,etabar);
    mixing->ckm(1,2) = Spectrum::Wolf2V_us(lambda,A,rhobar,etabar);
    mixing->ckm(1,3) = Spectrum::Wolf2V_ub(lambda,A,rhobar,etabar);
    mixing->ckm(2,1) = Spectrum::Wolf2V_cd(lambda,A,rhobar,etabar);
    mixing->ckm(2,2) = Spectrum::Wolf2V_cs(lambda,A,rhobar,etabar);
    mixing->ckm(2,3) = Spectrum::Wolf2V_cb(lambda,A,rhobar,etabar);
    mixing->ckm(3,1) = Spectrum::Wolf2V_td(lambda,A,rhobar,etabar);
    mixing->ckm(3,2) = Spectrum::Wolf2V_ts(lambda,A,rhobar,etabar);
    mixing->ckm(3,3) = Spectrum::Wolf2V_tb(lambda,A,rhobar,etabar);
    

    // If VCKM block is available, this would be the best way of doing this instead
    /* for (int i=1; i<=3; i++)
      {
      for (int j=1; j<=3; j++)
    {     
            mixing->ckm(i,j) = to<double_complex>(mySLHA.at("VCKM").at(i,j).at(2));
    }
       } 
    */

    // Block MINPAR we skip, it is not needed
    // Block EXTPAR. Get Ma (shouldn't really be needed though)
    mssmpar->ma = to<double>(mySLHA.at("EXTPAR").at(26).at(1));

    // Block MSOFT
    mssmpar->m1 = to<double>(mySLHA.at("MSOFT").at(1).at(1));
    mssmpar->m2 = to<double>(mySLHA.at("MSOFT").at(2).at(1));
    mssmpar->m3 = to<double>(mySLHA.at("MSOFT").at(3).at(1));
    mssmpar->mass2l(1) = square(to<double>(mySLHA.at("MSOFT").at(31).at(1)));
    mssmpar->mass2l(2) = square(to<double>(mySLHA.at("MSOFT").at(32).at(1)));
    mssmpar->mass2l(3) = square(to<double>(mySLHA.at("MSOFT").at(33).at(1)));
    mssmpar->mass2e(1) = square(to<double>(mySLHA.at("MSOFT").at(34).at(1)));
    mssmpar->mass2e(2) = square(to<double>(mySLHA.at("MSOFT").at(35).at(1)));
    mssmpar->mass2e(3) = square(to<double>(mySLHA.at("MSOFT").at(36).at(1)));
    mssmpar->mass2q(1) = square(to<double>(mySLHA.at("MSOFT").at(41).at(1)));
    mssmpar->mass2q(2) = square(to<double>(mySLHA.at("MSOFT").at(42).at(1)));
    mssmpar->mass2q(3) = square(to<double>(mySLHA.at("MSOFT").at(43).at(1)));
    mssmpar->mass2u(1) = square(to<double>(mySLHA.at("MSOFT").at(44).at(1)));
    mssmpar->mass2u(2) = square(to<double>(mySLHA.at("MSOFT").at(45).at(1)));
    mssmpar->mass2u(3) = square(to<double>(mySLHA.at("MSOFT").at(46).at(1)));
    mssmpar->mass2d(1) = square(to<double>(mySLHA.at("MSOFT").at(47).at(1)));
    mssmpar->mass2d(2) = square(to<double>(mySLHA.at("MSOFT").at(48).at(1)));
    mssmpar->mass2d(3) = square(to<double>(mySLHA.at("MSOFT").at(49).at(1)));

    // Block HMIX
    mssmpar->mu = to<double>(mySLHA.at("HMIX").at(1).at(1));
    mssmpar->tanbe = to<double>(mySLHA.at("HMIX").at(2).at(1));

    // Block ALPHA // JE CHECK: Do I call mySLHA correctly here as there is no index in this block?
    mssmmixing->alpha = to<double>(mySLHA.at("ALPHA").at(0));

    // Block MASS
    // SM particles
    mspctm->mass(DSpart->knu(1)) =  to<double>(mySLHA.at("MASS").at(12).at(1));
    mspctm->mass(DSpart->knu(2)) =  to<double>(mySLHA.at("MASS").at(14).at(1));
    mspctm->mass(DSpart->knu(3)) =  to<double>(mySLHA.at("MASS").at(16).at(1));
    mspctm->mass(DSpart->kl(1))  =  to<double>(mySLHA.at("MASS").at(11).at(1));
    mspctm->mass(DSpart->kl(2))  =  to<double>(mySLHA.at("MASS").at(13).at(1));
    mspctm->mass(DSpart->kl(3))  =  to<double>(mySLHA.at("MASS").at(15).at(1));
    mspctm->mass(DSpart->kqu(1)) =  to<double>(mySLHA.at("MASS").at(2).at(1));
    mspctm->mass(DSpart->kqu(2)) =  to<double>(mySLHA.at("MASS").at(4).at(1));
    mspctm->mass(DSpart->kqu(3)) =  to<double>(mySLHA.at("MASS").at(6).at(1));
    mspctm->mass(DSpart->kqd(1)) =  to<double>(mySLHA.at("MASS").at(1).at(1));
    mspctm->mass(DSpart->kqd(2)) =  to<double>(mySLHA.at("MASS").at(3).at(1));
    mspctm->mass(DSpart->kqd(3)) =  to<double>(mySLHA.at("MASS").at(5).at(1));
    mspctm->mass(DSparticle_code("Z0"))     =  to<double>(mySLHA.at("MASS").at(23).at(1));
    // OK, we now have to enforce the tree-level condidtion for unitarity
    // We then have a choice of calculating both sin^2 theta_W and MW
    // from alpha,MZ and GF as we normally do in DarkSUSY. The line below
    // would enforce that.
    //   mspctm->mass(DSpart->kw)=mass(DSpart->kz)*sqrt(1.0-smruseful->s2thw)
    // however, it is more prudent to take the value of MW from the SLHA file
    // if given, and instead enforce the tree-level condition by redefining
    // sin^2 theta_W. That we do here:
    mspctm->mass(DSparticle_code("W+"))     =  to<double>(mySLHA.at("MASS").at(24).at(1));
    smruseful->s2thw=1.0-square(mspctm->mass(DSparticle_code("W+")))/square(mspctm->mass(DSparticle_code("Z0")));

    // Higgs bosons. Note h1_0 is the lightest, and h2_0 the heavier CP even
    mspctm->mass(DSparticle_code("h2_0"))   =  to<double>(mySLHA.at("MASS").at(35).at(1));
    mspctm->mass(DSparticle_code("h1_0"))   =  to<double>(mySLHA.at("MASS").at(25).at(1));
    mspctm->mass(DSparticle_code("A0"))   =  to<double>(mySLHA.at("MASS").at(36).at(1));
    mspctm->mass(DSparticle_code("H+"))   =  to<double>(mySLHA.at("MASS").at(37).at(1));
    
    // SUSY particles
    // JE CHECK: Do I get the six sfermion masses in the correct order?
    mspctm->mass(DSpart->ksnu(1)) =  to<double>(mySLHA.at("MASS").at(1000012).at(1));
    mspctm->mass(DSpart->ksnu(2)) =  to<double>(mySLHA.at("MASS").at(1000014).at(1));
    mspctm->mass(DSpart->ksnu(3)) =  to<double>(mySLHA.at("MASS").at(1000016).at(1));
    mspctm->mass(DSpart->ksl(1))  =  to<double>(mySLHA.at("MASS").at(1000011).at(1));
    mspctm->mass(DSpart->ksl(2))  =  to<double>(mySLHA.at("MASS").at(1000013).at(1));
    mspctm->mass(DSpart->ksl(3))  =  to<double>(mySLHA.at("MASS").at(1000015).at(1));
    mspctm->mass(DSpart->ksl(4))  =  to<double>(mySLHA.at("MASS").at(2000011).at(1));
    mspctm->mass(DSpart->ksl(5))  =  to<double>(mySLHA.at("MASS").at(2000013).at(1));
    mspctm->mass(DSpart->ksl(6))  =  to<double>(mySLHA.at("MASS").at(2000015).at(1));
    mspctm->mass(DSpart->ksqu(1)) =  to<double>(mySLHA.at("MASS").at(1000002).at(1));
    mspctm->mass(DSpart->ksqu(2)) =  to<double>(mySLHA.at("MASS").at(1000004).at(1));
    mspctm->mass(DSpart->ksqu(3)) =  to<double>(mySLHA.at("MASS").at(1000006).at(1));
    mspctm->mass(DSpart->ksqu(4)) =  to<double>(mySLHA.at("MASS").at(2000002).at(1));
    mspctm->mass(DSpart->ksqu(5)) =  to<double>(mySLHA.at("MASS").at(2000004).at(1));
    mspctm->mass(DSpart->ksqu(6)) =  to<double>(mySLHA.at("MASS").at(2000006).at(1));
    mspctm->mass(DSpart->ksqd(1)) =  to<double>(mySLHA.at("MASS").at(1000001).at(1));
    mspctm->mass(DSpart->ksqd(2)) =  to<double>(mySLHA.at("MASS").at(1000003).at(1));
    mspctm->mass(DSpart->ksqd(3)) =  to<double>(mySLHA.at("MASS").at(1000005).at(1));
    mspctm->mass(DSpart->ksqd(4)) =  to<double>(mySLHA.at("MASS").at(2000001).at(1));
    mspctm->mass(DSpart->ksqd(5)) =  to<double>(mySLHA.at("MASS").at(2000003).at(1));
    mspctm->mass(DSpart->ksqd(6)) =  to<double>(mySLHA.at("MASS").at(2000005).at(1));

    // Neutralinos carry sign of eigenvalue, we need it for NMIX later
    mspctm->mass(DSpart->kn(1)) =  to<double>(mySLHA.at("MASS").at(1000022).at(1));
    mspctm->mass(DSpart->kn(2)) =  to<double>(mySLHA.at("MASS").at(1000023).at(1));
    mspctm->mass(DSpart->kn(3)) =  to<double>(mySLHA.at("MASS").at(1000025).at(1));
    mspctm->mass(DSpart->kn(4)) =  to<double>(mySLHA.at("MASS").at(1000035).at(1));
    
    mspctm->mass(DSpart->kcha(1)) =  to<double>(mySLHA.at("MASS").at(1000024).at(1));
    mspctm->mass(DSpart->kcha(2)) =  to<double>(mySLHA.at("MASS").at(1000037).at(1));

    mspctm->mass(DSparticle_code("~g")) =  to<double>(mySLHA.at("MASS").at(1000021).at(1));
    // Gravitino not implemented in DS
    // mspctm->mass(DSpart->k...) =  to<double>(mySLHA.at("MASS").at(1000039).at(1));


    // Block NMIX
    for (int i=1; i<=4; i++)
      {
  for (int j=1; j<=4; j++)
    {
      mssmmixing->neunmx(i,j)=to<double>(mySLHA.at("NMIX").at(i,j).at(2));
    }
      }
    // Make NMIX imaginary if mass eigenvalue is negative
    for (int i=1; i<=4; i++)
      {
  for (int j=1; j<=4; j++)
    {
      if (mspctm->mass(DSpart->kn(i)) < 0)
      {
        mssmmixing->neunmx(i,j).im = mssmmixing->neunmx(i,j).re;
        mssmmixing->neunmx(i,j).re = 0.0;
      }  
    }
  mspctm->mass(DSpart->kn(i)) = abs(mspctm->mass(DSpart->kn(i)));
      }
    
    // Block UMIX
    for (int i=1; i<=2; i++)
      {
  for (int j=1; j<=2; j++)
    {
      mssmmixing->chaumx(i,j)=to<double>(mySLHA.at("UMIX").at(i,j).at(2));
    }
      }

    // Block VMIX
    for (int i=1; i<=2; i++)
      {
  for (int j=1; j<=2; j++)
    {
      mssmmixing->chavmx(i,j)=to<double>(mySLHA.at("VMIX").at(i,j).at(2));
    }
      }

    // Block YE, YU, YD - Yukawas
    // JE FIX, can I trust that all Yukawas are set? PS: yes, but safest to make sure with required_block()
    for (int i=1; i<=3; i++)
      {
  couplingconstants->yukawa(DSpart->kl(i))=to<double>(mySLHA.at("YE").at(i,i).at(2));
  couplingconstants->yukawa(DSpart->kqu(i))=to<double>(mySLHA.at("YU").at(i,i).at(2));
  couplingconstants->yukawa(DSpart->kqd(i))=to<double>(mySLHA.at("YD").at(i,i).at(2));
      }

    // Block MSL2, MSE2, MSQ2, MSU2, MSD2
    // JE FIX. We here replace whatever was read from MSOFT. Can we trust
    // that the blocks are always there PS: yes, but safest to make sure with required_block()
    for (int i=1; i<=3; i++)
      {
        mssmpar->mass2l(i) = to<double>(mySLHA.at("MSL2").at(i,i).at(2)); 
        mssmpar->mass2e(i) = to<double>(mySLHA.at("MSE2").at(i,i).at(2)); 
        mssmpar->mass2q(i) = to<double>(mySLHA.at("MSQ2").at(i,i).at(2)); 
        mssmpar->mass2u(i) = to<double>(mySLHA.at("MSU2").at(i,i).at(2)); 
        mssmpar->mass2d(i) = to<double>(mySLHA.at("MSD2").at(i,i).at(2)); 
      }

    // Block SNUMIX
    for (int i=1; i<=3; i++)
      {
  for (int j=1; j<=3; j++)
    {
      mssmmixing->slulmx(i,j) = to<double>(mySLHA.at("SNUMIX").at(i,j).at(2));
    }
      }

    // Block SELMIX
    for (int i=1; i<=6; i++)
      {
  for (int j=1; j<=3; j++)
    {
      mssmmixing->sldlmx(i,j) = to<double>(mySLHA.at("SELMIX").at(i,j).at(2));
      mssmmixing->sldrmx(i,j) = to<double>(mySLHA.at("SELMIX").at(i,j+3).at(2));
    }
      }

    // Block USQMIX
    for (int i=1; i<=6; i++)
      {
  for (int j=1; j<=3; j++)
    {
      mssmmixing->squlmx(i,j) = to<double>(mySLHA.at("USQMIX").at(i,j).at(2));
      mssmmixing->squrmx(i,j) = to<double>(mySLHA.at("USQMIX").at(i,j+3).at(2));
    }
      }
    
    // Block DSQMIX
    for (int i=1; i<=6; i++)
      {
  for (int j=1; j<=3; j++)
    {
      mssmmixing->sqdlmx(i,j) = to<double>(mySLHA.at("DSQMIX").at(i,j).at(2));
      mssmmixing->sqdrmx(i,j) = to<double>(mySLHA.at("DSQMIX").at(i,j+3).at(2));
    }
      }

    // BLOCK TE, TU and TD. JE CHECK: I am assuming TE, TU, TD are here instead
    // of AE, AU, AD. OK?
    for (int i=1; i<=3; i++)
      {
  mssmpar->asofte(i)=to<double>(mySLHA.at("TE").at(i,i).at(2))/couplingconstants->yukawa(DSpart->kl(i));
  mssmpar->asoftu(i)=to<double>(mySLHA.at("TU").at(i,i).at(2))/couplingconstants->yukawa(DSpart->kqu(i));
  mssmpar->asoftd(i)=to<double>(mySLHA.at("TD").at(i,i).at(2))/couplingconstants->yukawa(DSpart->kqd(i));
      } 
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
    for (unsigned int i = 0; i < IBfinalstate.size(); i++ )
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

