#include <dlfcn.h>
#include <fstream>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <fstream>

#include "gambit/Utils/gambit_module_headers.hpp"
#include "gambit/Utils/util_macros.hpp"
#include "gambit/Utils/base_functions.hpp"
#include "gambit/DarkBit/DarkBit_types.hpp"
#include "gambit/DarkBit/DarkBit_rollcall.hpp"

using namespace Gambit::BF;

namespace Gambit {

  namespace DarkBit {

//////////////////////////////////////////////////////////////////////////
//
//                       Convenience functions
//
//////////////////////////////////////////////////////////////////////////

    /// Retrieve MSSM spectra directly from a list of SLHA files
    void getMSSMspectrum(eaSLHA &result)
    {
      using namespace Pipes::getMSSMspectrum;
      static unsigned int counter = 0;  // Static counter running in a loop over all filenames
	  eaSLHA spectrum;

      // Read filename from yaml file
      std::vector<std::string> filenames = runOptions->getValue<std::vector<std::string> >("filenames");

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
     * Supported models: CMSSM, CMSSM_demo, MSSM25atQ
     */
    void DarkSUSY_PointInit_MSSM(bool &result)
    {
      using namespace Pipes::DarkSUSY_PointInit_MSSM;
      result = false;
      
      // CMSSM
      if (ModelInUse("CMSSM"))
      {
        // Setup mSUGRA model from CMSSM parameters
        double am0    = *Param["M0"];     // m0
        double amhf   = *Param["M12"];    // m_1/2
        double aa0    = *Param["A0"];     // A0
        double asgnmu = *Param["sgnmu"];  // sign(mu)
        double atanbe = *Param["tanb"];   // tan(beta)
        logger() << "Initializing DarkSUSY via dsgive_model_isasugra:" << std::endl;
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
          //logger() << "ERROR: model point is theoretically inconsistent (DarkSUSY)."
          //         << std::endl;
          DarkBit_warning().raise(LOCAL_INFO,
              "Model point is theoretically inconsistent (DarkSUSY).");
          invalid_point().raise("Model point is theoretically inconsistent (DarkSUSY).");
          result = false;
        } else if (unphys > 0) {
          //logger() << "ERROR: neutralino is not the LSP (DarkSUSY)." << std::endl;
          DarkBit_warning().raise(LOCAL_INFO,
              "Neutralino is not the LSP (DarkSUSY).");
          invalid_point().raise("Neutralino is not the LSP (DarkSUSY).");
          result = false;
        } else if (hwarning != 0) {
          //logger() << "WARNING: radiative corrections in Higgs sector outside "
          //            "range of validity (DarkSUSY)." << std::endl;
          DarkBit_warning().raise(LOCAL_INFO,
            "Radiative corrections in Higgs sector outside range of validity (DarkSUSY).");
          result = true;
        } else {
          result = true;
        }
      }
      
      // use SLHA for initialization initialization
      else if (ModelInUse("CMSSM_demo") or ModelInUse("MSSM25atQ"))
      {
        // Save eaSLHA file to disk
        eaSLHA mySLHA = *Dep::MSSMspectrum;
        std::ofstream ofs("DarkBit_temp.slha");
        ofs << mySLHA;
        ofs.close();

        // Initialize SUSY spectrum from SLHA
        int len = 17;
        int flag = 15;
        char * filename = "DarkBit_temp.slha";
        logger() << "Initializing DarkSUSY via SLHA." << std::endl;
        BEreq::dsSLHAread(byVal(filename),flag,byVal(len));
        BEreq::dsprep();
        result = true;
      }

      // TODO: Better way to log this?
      if (!result) {
        DarkBit_warning().raise(LOCAL_INFO, "DarkSUSY point initialization failed.");
        invalid_point().raise("DarkSUSY point initialization failed.");
      }

      // TODO: Only for testing.  Remove later.
      if ( runOptions->getValueOrDef( false, "show_higgs_widths" ) )
      {
        int unit = 6;
        BEreq::dswwidth(unit);
      }
    }

    // TODO: This function has no purpose.  Remove later.
    /*
    void DarkSUSY_PointInit_NoMSSM(bool &result)
    {
        using namespace Pipes::DarkSUSY_PointInit_NoMSSM;
        result = true;
    }
    */


//////////////////////////////////////////////////////////////////////////
//
//      General catalogue for annihilation/decay process definition
//
//////////////////////////////////////////////////////////////////////////

    /// Wrapper around DarkSUSY kinematic functions
    double DSgamma3bdy(double(*IBfunc)(int&,double&,double&), int IBch, double Eg, double E1, double M_DM, double m_1, double m_2)
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
        double y = (m_2*m_2 + 4*M_DM * (M_DM - E2) ) / (4*M_DM*M_DM);  // y = (p+k)^2/(4 mx^2),
            // where p denotes the W+ momentum and k the photon momentum.
            // (note that the expressions above and below only apply to the v->0 limit)
        double result = IBfunc(IBch,x,y);          
        /*
        logger() << "  x, y = " << x << ", " << y << std::endl;
        logger() << "  E, E1, E2 = " << Eg << ", " << E1 << ", " << E2 << std::endl;
        logger() << "  mDM, m1, m2 = " << M_DM << ", " << m_1 << ", " << m_2 << std::endl;
        logger() << "  IBfunc = " << result << std::endl;
        */
        return std::max(0., result) / (M_DM*M_DM); // M_DM^-2 is from the Jacobi determinant
    }

    /*! \brief Initialization of Process Catalogue based on DarkSUSY
     *         calculations.
     */
    void TH_ProcessCatalog_CMSSM(Gambit::DarkBit::TH_ProcessCatalog &result)
    {
        using namespace Pipes::TH_ProcessCatalog_CMSSM;

        std::string DMid = Dep::DarkMatter_ID->singleID();  // FIXME: Add test that this is really chi0_1
        
        // Instantiate new ProcessCatalog
        TH_ProcessCatalog catalog;      
        // and DM annihilation process                   
        TH_Process process(DMid, DMid);
        
        // Get DarkSUSY mass spectrum
        DS_MSPCTM mymspctm= *BEreq::mspctm;
        
        // Store properties of relevant particles. Constructor for TH_ParticleProperty takes particle mass and 2*spin.
        // Make sure to add any particles used as final states in 2 or 3-body decays.
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("nu_e"   , TH_ParticleProperty(mymspctm.mass(1),     1)));
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("nubar_e"  , TH_ParticleProperty(mymspctm.mass(1),     1)));
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("e-"     , TH_ParticleProperty(mymspctm.mass(2),     1)));
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("e+"     , TH_ParticleProperty(mymspctm.mass(2),     1)));
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("nu_mu"  , TH_ParticleProperty(mymspctm.mass(3),     1)));
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("nubar_mu" , TH_ParticleProperty(mymspctm.mass(3),     1)));
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("mu-"    , TH_ParticleProperty(mymspctm.mass(4),     1)));
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("mu+"    , TH_ParticleProperty(mymspctm.mass(4),     1)));
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("nu_tau" , TH_ParticleProperty(mymspctm.mass(5),     1)));
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("nubar_tau", TH_ParticleProperty(mymspctm.mass(5),     1)));
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("tau-"   , TH_ParticleProperty(mymspctm.mass(6),     1)));
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("tau+"   , TH_ParticleProperty(mymspctm.mass(6),     1)));
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("u"      , TH_ParticleProperty(mymspctm.mass(7),     1)));
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("ubar"   , TH_ParticleProperty(mymspctm.mass(7),     1)));
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("d"      , TH_ParticleProperty(mymspctm.mass(8),     1)));
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("dbar"   , TH_ParticleProperty(mymspctm.mass(8),     1)));
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("c"      , TH_ParticleProperty(mymspctm.mass(9),     1)));
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("cbar"   , TH_ParticleProperty(mymspctm.mass(9),     1)));
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("s"      , TH_ParticleProperty(mymspctm.mass(10),    1)));
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("sbar"   , TH_ParticleProperty(mymspctm.mass(10),    1)));
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("t"      , TH_ParticleProperty(mymspctm.mass(11),    1)));
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("tbar"   , TH_ParticleProperty(mymspctm.mass(11),    1)));
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("b"      , TH_ParticleProperty(mymspctm.mass(12),    1)));
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("bbar"   , TH_ParticleProperty(mymspctm.mass(12),    1)));
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("gamma"  , TH_ParticleProperty(mymspctm.mass(13),    2)));
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("W-"     , TH_ParticleProperty(mymspctm.mass(14),    2)));
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("W+"     , TH_ParticleProperty(mymspctm.mass(14),    2)));   
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("Z0"     , TH_ParticleProperty(mymspctm.mass(15),    2)));   
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("g"      , TH_ParticleProperty(mymspctm.mass(16),    2)));  
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("h0_2"   , TH_ParticleProperty(mymspctm.mass(17),    0)));  
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("h0_1"   , TH_ParticleProperty(mymspctm.mass(18),    0)));  
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("A0"     , TH_ParticleProperty(mymspctm.mass(19),    0)));  
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("H-"     , TH_ParticleProperty(mymspctm.mass(20),    0)));     
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("H+"     , TH_ParticleProperty(mymspctm.mass(20),    0)));          
        // DM mass   
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> (DMid, TH_ParticleProperty(mymspctm.mass(42),    1)));
        
        // Set DarkSUSY DM mass parameter used in 3-body decays
        BEreq::IBintvars->ibcom_mx = catalog.getParticleProperty(DMid).mass;
                
        // Helper variables
        int index; 
        double m_1, m_2, sv;

        // Macro for setting up 2-body decays
        // TODO: Move dshayield from GA_AnnYield into this (?)
        #define SETUP_DS_PROCESS(NAME, PARTCH, P1, P2, PREFACTOR)                                   \
            /* Check if process is kinematically allowed */                                         \
            m_1 = catalog.getParticleProperty(STRINGIFY(P1)).mass;                                  \
            m_2 = catalog.getParticleProperty(STRINGIFY(P1)).mass;                                  \
            if(m_1 + m_2 < 2*catalog.getParticleProperty(DMid).mass)                                \
            {                                                                                       \
                /* Set cross-section */                                                             \
                index = PARTCH;                                                                     \
                double CAT(sigma_,NAME) = BEreq::dssigmav(index);                                   \
                /* Create associated kinematical functions (just dependent on vrel)                 \
                *  here: s-wave, vrel independent 1-dim constant function */                        \
                Funk::Funk CAT(kinematicFunction_,NAME) = Funk::cnst(CAT(sigma_,NAME)*PREFACTOR, "v");\
                /* Create channel identifier string */                                              \
                std::vector<std::string> CAT(finalStates_,NAME);                                    \
                CAT(finalStates_,NAME).push_back(STRINGIFY(P1));                                    \
                CAT(finalStates_,NAME).push_back(STRINGIFY(P2));                                    \
                /* Create channel and push it into channel list of process */                       \
                TH_Channel CAT(channel_,NAME)(CAT(finalStates_,NAME), CAT(kinematicFunction_,NAME));\
                process.channelList.push_back(CAT(channel_,NAME));                                  \
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
        SETUP_DS_PROCESS(WpHm,      11, W+,     H-,     0.5 )  // Prefactor 0.5 since W+H- and W-H+ are summed in DS
        SETUP_DS_PROCESS(WmHp,      11, W-,     H+,     0.5 )  // Prefactor 0.5 since W+H- and W-H+ are summed in DS
        SETUP_DS_PROCESS(Z0Z0,      12, Z0,     Z0,     1   )
        SETUP_DS_PROCESS(WW,        13, W+,     W-,     1   )
        SETUP_DS_PROCESS(nuenue,    14, nu_e,   nubar_e,  1   )
        SETUP_DS_PROCESS(ee,        15, e+,     e-,     1   )
        SETUP_DS_PROCESS(numnum,    16, nu_mu,  nubar_mu, 1   )
        SETUP_DS_PROCESS(mumu,      17, mu+,    mu-,    1   )
        SETUP_DS_PROCESS(nutnut,    18, nu_tau, nubar_tau,1   )
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
        
        double M_DM = catalog.getParticleProperty(DMid).mass;

        // Macro for setting up 3-body decays with gammas
        #define SETUP_DS_PROCESS_GAMMA3BODY(NAME, IBCH, P1, P2, IBFUNC, SV_IDX, PREFACTOR)                                  \
            /* Check if process is kinematically allowed */                                                                 \
            m_1 = catalog.getParticleProperty(STRINGIFY(P1)).mass;                                                          \
            m_2 = catalog.getParticleProperty(STRINGIFY(P2)).mass;                                                          \
            if(m_1 + m_2 < 2*M_DM)                                                                                          \
            {                                                                                                               \
                index = SV_IDX;                                                                                             \
                sv = PREFACTOR*BEreq::dssigmav(index);  /* TODO: Check whether this works */                                \
                Funk::Funk CAT(kinematicFunction_,NAME) = sv*Funk::func(DSgamma3bdy, STRIP_PARENS(IBFUNC), IBCH, Funk::var("E"), Funk::var("E1"), M_DM, m_1, m_2);\
                /* Create channel identifier string */                                                                      \
                std::vector<std::string> CAT(finalStates_,NAME);                                                            \
                CAT(finalStates_,NAME).push_back("gamma");                                                                  \
                CAT(finalStates_,NAME).push_back(STRINGIFY(P1));                                                            \
                CAT(finalStates_,NAME).push_back(STRINGIFY(P2));                                                            \
                /* Create channel and push it into channel list of process */                                               \
                TH_Channel CAT(channel_,NAME)(CAT(finalStates_,NAME), CAT(kinematicFunction_,NAME));                        \
                process.channelList.push_back(CAT(channel_,NAME));                                                          \
            }                                        
        
        if ( not runOptions->getValueOrDef<bool>(false, "ignore_three_body") )
        {
            SETUP_DS_PROCESS_GAMMA3BODY(gammaWW,        1, W+,      W-,     (BEreq::dsIBwwdxdy.pointer()),  13, 1   )     
            SETUP_DS_PROCESS_GAMMA3BODY(gammaWpHm,      2, W+,      H-,     (BEreq::dsIBwhdxdy.pointer()),  11, 0.5 )   // Prefactor 0.5 since W+H- and W-H+ are summed in DS        
            SETUP_DS_PROCESS_GAMMA3BODY(gammaWmHp,      2, W-,      H+,     (BEreq::dsIBwhdxdy.pointer()),  11, 0.5 )   // Prefactor 0.5 since W+H- and W-H+ are summed in DS
            SETUP_DS_PROCESS_GAMMA3BODY(gammaHpHm,      3, H+,      H-,     (BEreq::dsIBhhdxdy.pointer()),  0,  1   )                    
            SETUP_DS_PROCESS_GAMMA3BODY(gammaee,        4, e+,      e-,     (BEreq::dsIBffdxdy.pointer()) , 15, 1   )
            SETUP_DS_PROCESS_GAMMA3BODY(gammamumu,      5, mu+,     mu-,    (BEreq::dsIBffdxdy.pointer()) , 17, 1   )
            SETUP_DS_PROCESS_GAMMA3BODY(gammatautau,    6, tau+,    tau-,   (BEreq::dsIBffdxdy.pointer()) , 19, 1   )
            SETUP_DS_PROCESS_GAMMA3BODY(gammauubar,     7, u,       ubar,   (BEreq::dsIBffdxdy.pointer()) , 20, 1   )
            SETUP_DS_PROCESS_GAMMA3BODY(gammaddbar,     8, d,       dbar,   (BEreq::dsIBffdxdy.pointer()) , 21, 1   )            
            SETUP_DS_PROCESS_GAMMA3BODY(gammaccbar,     9, c,       cbar,   (BEreq::dsIBffdxdy.pointer()) , 22, 1   )
            SETUP_DS_PROCESS_GAMMA3BODY(gammassbar,     10,s,       sbar,   (BEreq::dsIBffdxdy.pointer()) , 23, 1   )
            SETUP_DS_PROCESS_GAMMA3BODY(gammattbar,     11,t,       tbar,   (BEreq::dsIBffdxdy.pointer()) , 24, 1   )
            SETUP_DS_PROCESS_GAMMA3BODY(gammabbbar,     12,b,       bbar,   (BEreq::dsIBffdxdy.pointer()) , 25, 1   )
        }
        // Undef the macro so it doesn't propagate through GAMBIT
        #undef SETUP_DS_PROCESS_GAMMA3BODY
        
        // Add process to provess list
        catalog.processList.push_back(process);                
   
        // Return the finished process catalog
        result = catalog;
    }

    void DarkMatter_ID_MSSM25atQ(DarkMatter_ID_type & result)
    {
      using namespace Pipes::DarkMatter_ID_MSSM25atQ;
      result = DarkMatter_ID_type(initVector<std::string>("~chi0_1"));
    }

  }
}
