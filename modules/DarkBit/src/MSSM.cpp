//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  MSSM specific module functions for DarkBit.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Torsten Bringmann
///          (torsten.bringmann@desy.de) 
///  \date 2013 Jun
///  \date 2014 Mar - 2015 May
///
///  \author Christoph Weniger
///          (c.weniger@uva.nl)
///  \date 2013 Jul - 2015 May
///
///  \author Christopher Savage
///          (chris@savage.name)
///  \date 2014 Oct
///  \date 2015 Jan, Feb
///
///  *********************************************

#include "gambit/Elements/gambit_module_headers.hpp"
#include "gambit/DarkBit/DarkBit_rollcall.hpp"
#include "gambit/DarkBit/DarkBit_utils.hpp"

namespace Gambit {
  namespace DarkBit {

    //////////////////////////////////////////////////////////////////////////
    //
    //                       Convenience functions
    //
    //////////////////////////////////////////////////////////////////////////

    /// Retrieve MSSM spectra directly from a list of SLHA files
    void get_MSSM_spectrum_from_file(eaSLHA &result)
    {
      using namespace Pipes::get_MSSM_spectrum_from_file;
      // Static counter running in a loop over all filenames
      static unsigned int counter = 0;
      eaSLHA spectrum;

      // Read filename from yaml file
      std::vector<std::string> filenames = 
        runOptions->getValue<std::vector<std::string> >("filenames");

      std::string filename = filenames[counter];

      logger() << "Reading SLHA file: " << filename << std::endl;
      std::ifstream ifs(filename.c_str());
      if(!ifs.good())
      {
        logger() << "ERROR: SLHA file not found." << std::endl;
        exit(1);
      }
      ifs >> spectrum;
      ifs.close();
      result = spectrum;
      counter++;
      if ( counter >= filenames.size() )
        counter = 0;
    }


    //////////////////////////////////////////////////////////////////////////
    //
    //                    Backend point initialization
    //
    //////////////////////////////////////////////////////////////////////////

    /*! \brief Fully initialize DarkSUSY to the current model point.  
     *
     * Only selected MSSM parameter spaces are implemented.  Returns bool
     * indicating if point initialization was successful, which is essentially
     * always true for models that satisfy the dependency resolver.
     *
     * Supported models: CMSSM, MSSM25atQ
     */
    void DarkSUSY_PointInit_MSSM(bool &result)
    {
      using namespace Pipes::DarkSUSY_PointInit_MSSM;
      result = false;

      // If the user provides a file list, just read in SLHA files for debugging
      // and ignore the MSSM_spectrum dependency.
      if (runOptions->hasKey("debug_SLHA_filenames"))
      {
        static int counter = 0;
        logger() << 
          "Initializing DarkSUSY via debug_SLHA_filenames option." << std::endl;

        std::vector<str> filenames = 
          runOptions->getValue<std::vector<str> >("debug_SLHA_filenames");
        const char * filename = filenames[counter].c_str();
        int len = filenames[counter].length();
        int flag = 15;
        BEreq::dsSLHAread(byVal(filename),flag,byVal(len));
        BEreq::dsprep();

        counter++;
        if (counter >= filenames.size()) counter = 0;
        result = true;
      }

      // CMSSM with DS-internal ISASUGRA (should be avoided, only for
      // debugging)
      else if (ModelInUse("CMSSM") and 
          runOptions->getValueOrDef<bool>(false, "use_DS_isasugra")
          )
      {
        // Setup mSUGRA model from CMSSM parameters
        double am0    = *Param["M0"];     // m0
        double amhf   = *Param["M12"];    // m_1/2
        double aa0    = *Param["A0"];     // A0
        double asgnmu = *Param["signmu"];  // sign(mu)
        double atanbe = *Param["tanb"];   // tan(beta)
        logger() << "Initializing DarkSUSY via dsgive_model_isasugra:"
          << std::endl;
        logger() << "  m0        =" << am0    << std::endl;
        logger() << "  m_1/2     =" << amhf   << std::endl;
        logger() << "  A0        =" << aa0    << std::endl;
        logger() << "  sign(mu)  =" << asgnmu << std::endl;
        logger() << "  tan(beta) =" << atanbe << std::endl;
        BEreq::dsgive_model_isasugra(am0, amhf, aa0, asgnmu, atanbe);
        int unphys, hwarning;
        BEreq::dssusy_isasugra(unphys, hwarning);
        //result = (unphys == 0) && (hwarning == 0);
        if (unphys < 0) {
          DarkBit_warning().raise(LOCAL_INFO,
              "Model point is theoretically inconsistent (DarkSUSY).");
          invalid_point().raise(
              "Model point is theoretically inconsistent (DarkSUSY).");
          result = false;
        } else if (unphys > 0) {
          DarkBit_warning().raise(LOCAL_INFO,
              "Neutralino is not the LSP (DarkSUSY).");
          invalid_point().raise("Neutralino is not the LSP (DarkSUSY).");
          result = false;
        } else if (hwarning != 0) {
          DarkBit_warning().raise(LOCAL_INFO,
              "Radiative corrections in Higgs sector "
              "outside range of validity (DarkSUSY).");
          result = true;
        } else {
          result = true;
        }
      }

      // use SLHA for initialization initialization of MSSM25atQ or CMSSM
      else if (ModelInUse("MSSM25atQ") or ModelInUse("CMSSM"))
      {
        // Save eaSLHA file to disk
        //eaSLHA mySLHA = *Dep::MSSM_spectrum;
        const Spectrum* mySpec = *Dep::MSSM_spectrum;
        eaSLHA mySLHA = mySpec->getSLHAea();

        // Add model select block to inform DS about 6x6 mixing
        // FIXME: Should be done somewhere upstream
        SLHAea::Block modsel_block("MODSEL");
        modsel_block.push_back("BLOCK MODSEL");
        modsel_block.push_back("6 3 # FV");
        mySLHA.push_back(modsel_block);

        if ( runOptions->getValueOrDef<bool>(false, "use_dsSLHAread") )
        {
          std::ofstream ofs("DarkBit_temp.slha");
          ofs << mySLHA;
          ofs.close();

          // Initialize SUSY spectrum from SLHA
          int len = 17;
          int flag = 15;
          const char * filename = "DarkBit_temp.slha";
          logger() << "Initializing DarkSUSY via SLHA." << std::endl;
          BEreq::dsSLHAread(byVal(filename),flag,byVal(len));
          BEreq::dsprep();
          result = true;  // FIXME: Need some error checks
        }
        else
        {
          // JE's BE initialization happens here
          if ( BEreq::initFromSLHA(byVal(mySLHA)) == 0 )
          {
            BEreq::dsprep();
            result = true;
          }
        }
      }

      if (!result) {
        DarkBit_warning().raise(LOCAL_INFO,
            "DarkSUSY point initialization failed.");
        invalid_point().raise("DarkSUSY point initialization failed.");
      }
    }


    //////////////////////////////////////////////////////////////////////////
    //
    //      General catalogue for annihilation/decay process definition
    //
    //////////////////////////////////////////////////////////////////////////

    /// Wrapper around DarkSUSY kinematic functions
    double DSgamma3bdy(double(*IBfunc)(int&,double&,double&),
        void(*setMassesForIB)(bool), int IBch, double Eg, double
        E1, double M_DM, double m_1, double m_2)
    {
      double E2 = 2*M_DM - Eg - E1;  
      double p12 = E1*E1-m_1*m_1;
      double p22 = E2*E2-m_2*m_2;
      double p22min = Eg*Eg+p12-2*Eg*sqrt(p12);
      double p22max = Eg*Eg+p12+2*Eg*sqrt(p12);
      // Check if the process is kinematically allowed
      if((E1 < m_1) || (E2 < m_2) || (p22<p22min) || (p22>p22max))
      {
        return 0;
      }
      double x = Eg/M_DM;  // x = E_gamma/mx
      double y = (m_2*m_2 + 4*M_DM * (M_DM - E2) ) / (4*M_DM*M_DM);
      // Here, y = (p+k)^2/(4 mx^2), where p denotes the W+ momentum and k the
      // photon momentum.  (note that the expressions above and below only
      // apply to the v->0 limit)

      setMassesForIB(true);
      double result = IBfunc(IBch,x,y);          
      setMassesForIB(false);

      /*
         logger() << "  x, y = " << x << ", " << y << std::endl;
         logger() << "  E, E1, E2 = " << Eg << ", " << E1 << ", " 
           << E2 << std::endl;
         logger() << "  mDM, m1, m2 = " << M_DM << ", " << m_1 << ", " 
           << m_2 << std::endl;
         logger() << "  IBfunc = " << result << std::endl;
      */
      // M_DM^-2 is from the Jacobi determinant
      return std::max(0., result) / (M_DM*M_DM);
    }


    /*! \brief Initialization of Process Catalogue based on DarkSUSY
     *         calculations.
     */
    void TH_ProcessCatalog_MSSM(DarkBit::TH_ProcessCatalog &result)
    {
      using namespace Pipes::TH_ProcessCatalog_MSSM;
      using std::vector;
      using std::string;
      
      std::string DMid = *Dep::DarkMatter_ID;
      if ( DMid != "~chi0_1" )
      {
        invalid_point().raise(
            "TH_ProcessCatalog_MSSM requires DMid to be ~chi0_1.");
      }

      // Instantiate new empty ProcessCatalog
      TH_ProcessCatalog catalog;      


      ///////////////////////////
      // Import particle masses
      ///////////////////////////
      
      // Import based on Spectrum objects
      const Spectrum* matched_spectra = *Dep::MSSM_spectrum;
      const SubSpectrum* spec = matched_spectra->get_UV();
      const SubSpectrum* SM   = matched_spectra->get_LE();
      const SMInputs& SMI  = matched_spectra->get_SMInputs();  
      
      // Get SM masses
#define getSMmass(Name, spinX2)                                               \
        catalog.particleProperties.insert(                                    \
        std::pair<std::string, TH_ParticleProperty>(                          \
        Name , TH_ParticleProperty(SM->phys.get_Pole_Mass(Name), spinX2)));   
      getSMmass("e-",     1)
      getSMmass("e+",     1)
      getSMmass("mu-",    1)
      getSMmass("mu+",    1)
      getSMmass("tau-",   1)
      getSMmass("tau+",   1)
// FIXME: Should be deprecated
//      getSMmass("nu_1",   1)
//      getSMmass("nubar_1",1) 
//      getSMmass("nu_2",   1)
//      getSMmass("nubar_2",1) 
//      getSMmass("nu_3",   1)
//      getSMmass("nubar_3",1)      
      getSMmass("Z0",     2)
      getSMmass("W+",     2)
      getSMmass("W-",     2)      
      getSMmass("g",      2)   
      getSMmass("gamma",  2)   
      getSMmass("b",      1)
      getSMmass("bbar",   1)
      getSMmass("t",      1)
      getSMmass("tbar",   1)          
#undef getSMmass

      // Pole masses not available for the light quarks.
#define addParticle(Name, Mass, spinX2)                                       \
        catalog.particleProperties.insert(                                    \
        std::pair<std::string, TH_ParticleProperty>(                          \
        Name , TH_ParticleProperty(Mass, spinX2)));                           
      addParticle("d"   , SMI.mD,  1) // md(2 GeV)^MS-bar, not pole mass
      addParticle("dbar", SMI.mD,  1) // md(2 GeV)^MS-bar, not pole mass
      addParticle("u"   , SMI.mU,  1) // mu(2 GeV)^MS-bar, not pole mass
      addParticle("ubar", SMI.mU,  1) // mu(2 GeV)^MS-bar, not pole mass
      addParticle("s"   , SMI.mS,  1) // ms(2 GeV)^MS-bar, not pole mass
      addParticle("sbar", SMI.mS,  1) // ms(2 GeV)^MS-bar, not pole mass
      addParticle("c"   , SMI.mCmC,1) // mc(mc)^MS-bar, not pole mass
      addParticle("cbar", SMI.mCmC,1) // mc(mc)^MS-bar, not pole mass
      // Masses for neutrino flavour eigenstates. Set to zero.
      addParticle("nu_e",     0.0,     1)
      addParticle("nubar_e",  0.0,     1)
      addParticle("nu_mu",    0.0,     1)
      addParticle("nubar_mu", 0.0,     1)
      addParticle("nu_tau",   0.0,     1)
      addParticle("nubar_tau",0.0,     1)   
      // FIXME: Get meson masses from somewhere
      addParticle("pi0",      0.135,   0)
      addParticle("pi+",      0.1396,  0)
      addParticle("pi-",      0.1396,  0)
      addParticle("eta",      0.547,   0)
      addParticle("rho0",     0.775,   1)        
      addParticle("rho+",     0.775,   1)       
      addParticle("rho-",     0.775,   1)             
      addParticle("omega",    0.7827,  1)         
#undef addParticle

      // Get MSSM masses
      // FIXME: Remove absolute value once SpecBit guarantees positive masses
#define getMSSMmass(Name, spinX2)                                                   \
        catalog.particleProperties.insert(                                          \
        std::pair<std::string, TH_ParticleProperty> (                               \
        Name , TH_ParticleProperty(abs(spec->phys.get_Pole_Mass(Name)), spinX2)));  
      getMSSMmass("H+"     , 0)
      getMSSMmass("H-"     , 0)
      getMSSMmass("h0_1"   , 0)
      getMSSMmass("h0_2"   , 0)
      getMSSMmass("A0"     , 0)      
      getMSSMmass("~chi0_1", 1) 
      
#undef getMSSMmass


      /////////////////////////////////////////
      // Import two-body annihilation process
      /////////////////////////////////////////

      // Set of possible final state particles. Used to determine which decays to import.
      std::set<string> annFinalStates;

      // Declare DM annihilation process                   
      TH_Process process(DMid, DMid);      
      double M_DM = catalog.getParticleProperty(DMid).mass;
      // Helper variables
      int index; 
      double m_1, m_2, sv;

      // Macro for setting up 2-body decays from results in DS
#define SETUP_DS_PROCESS(NAME, PARTCH, P1, P2, PREFACTOR)                      \
      /* Check if process is kinematically allowed */                          \
      m_1 = catalog.getParticleProperty(STRINGIFY(P1)).mass;                   \
      m_2 = catalog.getParticleProperty(STRINGIFY(P2)).mass;                   \
      if(m_1 + m_2 < 2*M_DM)                                                   \
      {                                                                        \
        /* Set cross-section */                                                \
        index = PARTCH;                                                        \
        double CAT(sigma_,NAME) = BEreq::dssigmav(index);                      \
        /* Create associated kinematical functions (just dependent on vrel)    \
         *  here: s-wave, vrel independent 1-dim constant function */          \
        Funk::Funk CAT(kinematicFunction_,NAME) =                              \
              Funk::cnst(CAT(sigma_,NAME)*PREFACTOR, "v");                     \
        /* Create channel identifier string */                                 \
        std::vector<std::string> CAT(finalStates_,NAME);                       \
        CAT(finalStates_,NAME).push_back(STRINGIFY(P1));                       \
        CAT(finalStates_,NAME).push_back(STRINGIFY(P2));                       \
        /* Create channel and push it into channel list of process */          \
        TH_Channel CAT(channel_,NAME)(CAT(finalStates_,NAME),                  \
            CAT(kinematicFunction_,NAME));                                     \
        process.channelList.push_back(CAT(channel_,NAME));                     \
        annFinalStates.insert(STRINGIFY(P1));                                  \
        annFinalStates.insert(STRINGIFY(P2));                                  \
      }

      SETUP_DS_PROCESS(H1H1,      1 , h0_2,   h0_2,   1   )
      SETUP_DS_PROCESS(H1H2,      2 , h0_2,   h0_1,   1   )
      SETUP_DS_PROCESS(H2H2,      3 , h0_1,   h0_1,   1   )
      SETUP_DS_PROCESS(H3H3,      4 , A0,     A0,     1   )
      SETUP_DS_PROCESS(H1H3,      5 , h0_2,   A0,     1   )
      SETUP_DS_PROCESS(H2H3,      6 , h0_1,   A0,     1   )
      SETUP_DS_PROCESS(HpHm,      7 , H+,     H-,     1   )
      SETUP_DS_PROCESS(H1Z0,      8 , h0_2,   Z0,     1   )
      SETUP_DS_PROCESS(H2Z0,      9 , h0_1,   Z0,     1   )
      SETUP_DS_PROCESS(H3Z0,      10, A0,     Z0,     1   )
      // Prefactor 0.5 since W+H- and W-H+ are summed in DS
      SETUP_DS_PROCESS(WpHm,      11, W+,     H-,     0.5 )  
      SETUP_DS_PROCESS(WmHp,      11, W-,     H+,     0.5 )
      SETUP_DS_PROCESS(Z0Z0,      12, Z0,     Z0,     1   )
      SETUP_DS_PROCESS(WW,        13, W+,     W-,     1   )
      SETUP_DS_PROCESS(nuenue,    14, nu_e,   nubar_e,1   )
      SETUP_DS_PROCESS(ee,        15, e+,     e-,     1   )
      SETUP_DS_PROCESS(numnum,    16, nu_mu,  nubar_mu,1  )
      SETUP_DS_PROCESS(mumu,      17, mu+,    mu-,    1   )
      SETUP_DS_PROCESS(nutnut,    18, nu_tau, nubar_tau,1 )
      SETUP_DS_PROCESS(tautau,    19, tau+,   tau-,   1   )
      SETUP_DS_PROCESS(uubar,     20, u,      ubar,   1   )
      SETUP_DS_PROCESS(ddbar,     21, d,      dbar,   1   )
      SETUP_DS_PROCESS(ccbar,     22, c,      cbar,   1   )
      SETUP_DS_PROCESS(ssbar,     23, s,      sbar,   1   )
      SETUP_DS_PROCESS(ttbar,     24, t,      tbar,   1   )
      SETUP_DS_PROCESS(bbbar,     25, b,      bbar,   1   )
      SETUP_DS_PROCESS(gluglu,    26, g,      g,      1   )
      SETUP_DS_PROCESS(gammagamma,28, gamma,  gamma,  1   )
      //        SETUP_DS_PROCESS(Z0gamma,   29, Z0,     gamma,  1   )
      // Undef the macro so it doesn't propagate through GAMBIT
#undef SETUP_DS_PROCESS


      ///////////////////////////////////////////
      // Import three-body annihilation process
      ///////////////////////////////////////////

      BEreq::registerMassesForIB(catalog.particleProperties);

      // Macro for setting up 3-body decays with gammas
#define SETUP_DS_PROCESS_GAMMA3BODY(NAME,IBCH,P1,P2,IBFUNC,SV_IDX,PREFACTOR) \
      /* Check if process is kinematically allowed */                        \
      m_1 = catalog.getParticleProperty(STRINGIFY(P1)).mass;                 \
      m_2 = catalog.getParticleProperty(STRINGIFY(P2)).mass;                 \
      if(m_1 + m_2 < 2*M_DM)                                                 \
      {                                                                      \
        index = SV_IDX;                                                      \
        /* TODO: Check whether this works */                                 \
        sv = PREFACTOR*BEreq::dssigmav(index);                               \
        Funk::Funk CAT(kinematicFunction_,NAME) = sv*Funk::func(DSgamma3bdy, \
            STRIP_PARENS(IBFUNC), BEreq::setMassesForIB.pointer(), IBCH, Funk::var("E"), Funk::var("E1"),     \
            M_DM, m_1, m_2);                                                 \
        /* Create channel identifier string */                               \
        std::vector<std::string> CAT(finalStates_,NAME);                     \
        CAT(finalStates_,NAME).push_back("gamma");                           \
        CAT(finalStates_,NAME).push_back(STRINGIFY(P1));                     \
        CAT(finalStates_,NAME).push_back(STRINGIFY(P2));                     \
        /* Create channel and push it into channel list of process */        \
        TH_Channel CAT(channel_,NAME)(CAT(finalStates_,NAME),                \
            CAT(kinematicFunction_,NAME));                                   \
        process.channelList.push_back(CAT(channel_,NAME));                   \
        annFinalStates.insert(STRINGIFY(P1));                                \
        annFinalStates.insert(STRINGIFY(P2));                                \
      }                                        

      if ( not runOptions->getValueOrDef<bool>(false, "ignore_three_body") )
      {
        // Set DarkSUSY DM mass parameter used in 3-body decays
        BEreq::IBintvars->ibcom_mx = catalog.getParticleProperty(DMid).mass;

        SETUP_DS_PROCESS_GAMMA3BODY(gammaWW,        1, W+,      W-,     
            (BEreq::dsIBwwdxdy.pointer()),  13, 1   )     
        // Prefactor 0.5 since W+H- and W-H+ are summed in DS        
        SETUP_DS_PROCESS_GAMMA3BODY(gammaWpHm,      2, W+,      H-,     
            (BEreq::dsIBwhdxdy.pointer()),  11, 0.5 )   
        // Prefactor 0.5 since W+H- and W-H+ are summed in DS
        SETUP_DS_PROCESS_GAMMA3BODY(gammaWmHp,      2, W-,      H+,     
            (BEreq::dsIBwhdxdy.pointer()),  11, 0.5 )   
        SETUP_DS_PROCESS_GAMMA3BODY(gammaHpHm,      3, H+,      H-,     
            (BEreq::dsIBhhdxdy.pointer()),  0,  1   )                    
        SETUP_DS_PROCESS_GAMMA3BODY(gammaee,        4, e+,      e-,     
            (BEreq::dsIBffdxdy.pointer()) , 15, 1   )
        SETUP_DS_PROCESS_GAMMA3BODY(gammamumu,      5, mu+,     mu-,    
            (BEreq::dsIBffdxdy.pointer()) , 17, 1   )
        SETUP_DS_PROCESS_GAMMA3BODY(gammatautau,    6, tau+,    tau-,   
            (BEreq::dsIBffdxdy.pointer()) , 19, 1   )
        SETUP_DS_PROCESS_GAMMA3BODY(gammauubar,     7, u,       ubar,   
            (BEreq::dsIBffdxdy.pointer()) , 20, 1   )
        SETUP_DS_PROCESS_GAMMA3BODY(gammaddbar,     8, d,       dbar,   
            (BEreq::dsIBffdxdy.pointer()) , 21, 1   )            
        SETUP_DS_PROCESS_GAMMA3BODY(gammaccbar,     9, c,       cbar,   
            (BEreq::dsIBffdxdy.pointer()) , 22, 1   )
        SETUP_DS_PROCESS_GAMMA3BODY(gammassbar,     10,s,       sbar,   
            (BEreq::dsIBffdxdy.pointer()) , 23, 1   )
        SETUP_DS_PROCESS_GAMMA3BODY(gammattbar,     11,t,       tbar,   
            (BEreq::dsIBffdxdy.pointer()) , 24, 1   )
        SETUP_DS_PROCESS_GAMMA3BODY(gammabbbar,     12,b,       bbar,   
            (BEreq::dsIBffdxdy.pointer()) , 25, 1   )
      }
#undef SETUP_DS_PROCESS_GAMMA3BODY

      
      /////////////////////////////
      // Import Decay information
      /////////////////////////////

      // Import based on decay table from DecayBit
      const DecayTable* tbl = &(*Dep::decay_rates);

      // Set of imported decays
      std::set<string> importedDecays;

      double minBranching = runOptions->getValueOrDef<double>(0.0,
          "ProcessCatalog_MinBranching");

      //std::cout << "Importing decays..." << std::endl;
      // Import relevant decays
      using DarkBit_utils::ImportDecays;
      if(annFinalStates.count("H+") == 1) 
        ImportDecays("H+", catalog, importedDecays, tbl, minBranching);
      if(annFinalStates.count("H-") == 1) 
        ImportDecays("H-", catalog, importedDecays, tbl, minBranching);
      if(annFinalStates.count("h0_1") == 1) 
        ImportDecays("h0_1", catalog, importedDecays, tbl, minBranching);
      if(annFinalStates.count("h0_2") == 1) 
        ImportDecays("h0_2", catalog, importedDecays, tbl, minBranching);
      if(annFinalStates.count("A0") == 1) 
        ImportDecays("A0", catalog, importedDecays, tbl, minBranching);

      // Add process to provess list
      catalog.processList.push_back(process);                

      // Return the finished process catalog
      result = catalog;
    }

    void DarkMatter_ID_MSSM25atQ(std::string & result)
    {
      using namespace Pipes::DarkMatter_ID_MSSM25atQ;
      // FIXME: This should return the lightest neutralino identifier
      result = "~chi0_1";
    }
  }
}
