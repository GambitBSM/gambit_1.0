//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Functions of module SpecBit
///
///  These functions link ModelParameters to 
///  Spectrum objects in various ways.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Ben Farmer
///          (ben.farmer@gmail.com)
///    \date 2014 Sep
///  
///  *********************************************

#include "gambit_module_headers.hpp"
#include "SpecBit_rollcall.hpp"

// Flexible SUSY stuff (should not be needed by the rest of gambit)
#include "MSSM_two_scale_model.hpp"
#include "ew_input.hpp"
//#include "logger.hpp"
//#include "wrappers.hpp"
#include "MSSMSpec.hpp"
#include "numerics.hpp"


namespace Gambit
{

  namespace SpecBit
  {
    using namespace LogTags;
    namespace FS = flexiblesusy; // flexiblesusy is too long to type all the time so using an alias...

    /// Quick macro to simplify the check of Pipe::Models
    #define QUERYMODELS(MODEL) std::find(Pipe::Models->begin(), Pipe::Models->end(), MODEL) != Pipe::Models->end()

    /// Module convenience functions
    // These are not known to Gambit.

    /// Dump information from spectrum object to logger
    void spec_print(const Spectrum& spec) {
       logger() << "spec->runningpars.GetScale() =" << spec.runningpars->GetScale() << std::endl;
       logger() << "map mHd2 "  << spec.runningpars->get_mass2_parameter("mHd2") <<std::endl;
       logger() << "map mHu2 "  << spec.runningpars->get_mass2_parameter("mHu2") <<std::endl;
       logger() << "map BMu "  << spec.runningpars->get_mass2_parameter("BMu") <<std::endl;
       logger() << "map mHd2 "  << spec.runningpars->get_mass2_par("mHd2") <<std::endl;
       logger() << "map mHu2 "  << spec.runningpars->get_mass2_par("mHu2") <<std::endl;
       logger() << "map BMu "  << spec.runningpars->get_mass2_par("BMu") <<std::endl;
      
       logger()<< "diff mHd2 "  << spec.runningpars->get_mass2_parameter("mHd2") 
                 -  spec.runningpars->get_mass2_par("mHd2") <<std::endl;
       logger() << "diff mHu2 "  << spec.runningpars->get_mass2_parameter("mHu2") 
                 - spec.runningpars->get_mass2_par("mHu2") <<std::endl;
       logger() << "diff BMu "  << spec.runningpars->get_mass2_parameter("BMu") 
                 -  spec.runningpars->get_mass2_par("BMu") <<std::endl;
    
       logger() << "mq2(1,1) =  " <<  spec.runningpars->get_mass2_parameter("mq2",1,1) << std::endl;
       logger() << "fake mq2(1) =  " <<  spec.runningpars->get_mass2_parameter("mq2",1) << std::endl;
    
       double mgluino_drbar =  spec.runningpars->get_tree_MassEigenstate("MGluino");
       logger() << "mgluino_drbar = " <<mgluino_drbar  << std::endl;
       double mgluino = spec.phys->get_Pole_Mass("MGluino");
       logger() << "mgluino = " << mgluino<< std::endl;
    }

    /// Fill test spectrum object with some parameters
    void setup(FS::MSSM<FS::Two_scale>& mssm)
    {
       Eigen::Matrix<double,3,3> Yu;
       Eigen::Matrix<double,3,3> Yd;
       Eigen::Matrix<double,3,3> Ye;
       double Mu;
       double g1;
       double g2;
       double g3;
       double vd;
       double vu;
       Eigen::Matrix<double,3,3> TYu;
       Eigen::Matrix<double,3,3> TYd;
       Eigen::Matrix<double,3,3> TYe;
       double BMu;
       Eigen::Matrix<double,3,3> mq2;
       Eigen::Matrix<double,3,3> ml2;
       double mHd2;
       double mHu2;
       Eigen::Matrix<double,3,3> md2;
       Eigen::Matrix<double,3,3> mu2;
       Eigen::Matrix<double,3,3> me2;
       double MassB;
       double MassWB;
       double MassG;
    
       // susy parameters
       Yu << 1.26136e-05, 0, 0,
                       0, 0.00667469, 0,
                       0, 0, 0.857849;
    
       Yd << 0.000242026, 0, 0,
                       0, 0.00529911, 0,
                       0, 0, 0.193602;
    
       Ye << 2.84161e-05, 0, 0,
                       0, 0.00587557, 0,
                       0, 0, 0.10199;
    
       Mu = 627.164;
       g1 = 0.468171;
       g2 = 0.642353;
       g3 = 1.06459;
       vd = 25.0944;
       vu = 242.968;
    
       // soft parameters
       TYu << -0.0144387, 0, 0,
                       0, -7.64037, 0,
                       0, 0, -759.305;
    
       TYd << -0.336207, 0, 0,
                      0, -7.36109, 0,
                      0, 0, -250.124;
    
       TYe << -0.00825134, 0, 0,
                        0, -1.70609, 0,
                        0, 0, -29.4466;
    
       BMu = 52140.8;
    
       mq2 << 1.03883e+06, 0, 0,
                        0, 1.03881e+06, 0,
                        0, 0, 879135;
    
       ml2 << 124856, 0, 0,
                   0, 124853, 0,
                   0, 0, 124142;
    
       mHd2 = 92436.9;
       mHu2 = -380337;
    
       md2 << 954454, 0, 0,
                   0, 954439, 0,
                   0, 0, 934727;
    
       mu2 << 963422, 0, 0,
                   0, 963400, 0,
                   0, 0, 656621;
    
       me2 << 49215.8, 0, 0,
                    0, 49210.9, 0,
                    0, 0, 47759.2;
    
       MassB = 210.328;
       MassWB = 389.189;
       MassG = 1114.45;
    
       // set parameters
       mssm.set_scale(FS::Electroweak_constants::MZ);
       mssm.set_Yu(Yu);
       mssm.set_Yd(Yd);
       mssm.set_Ye(Ye);
       mssm.set_Mu(Mu);
       mssm.set_g1(g1);
       mssm.set_g2(g2);
       mssm.set_g3(g3);
       mssm.set_vd(vd);
       mssm.set_vu(vu);
       mssm.set_TYu(TYu);
       mssm.set_TYd(TYd);
       mssm.set_TYe(TYe);
       mssm.set_BMu(BMu);
       mssm.set_mq2(mq2);
       mssm.set_ml2(ml2);
       mssm.set_mHd2(mHd2);
       mssm.set_mHu2(mHu2);
       mssm.set_md2(md2);
       mssm.set_mu2(mu2);
       mssm.set_me2(me2);
       mssm.set_MassB(MassB);
       mssm.set_MassWB(MassWB);
       mssm.set_MassG(MassG);
    }

    /// Gambit module functions
    //  These are wrapped up in Gambit functor objects according to the
    //  instructions in the rollcall header

    // Removed for testing...
    //void get_lowE_MSSM_spectrum (double &result)
    //{
    //  Spectrum generic_spectrum; // This is what we want to produce

    //  // Access the pipes for this function to get model and parameter information
    //  //using namespace Pipes::get_lowE_MSSM_spectrum;
    //  namespace Pipe = Pipes::get_lowE_MSSM_spectrum; // I think I like this alias method better

    //  // If MSSM24 is being scanned...
    //  if( QUERYMODELS("MSSM24") )
    //  { 
    //    // do stuff
    //    *Pipe::Param["M1"]; // Do something with parameters

    //    // Call some spectrum generator function from a backend?
    //    // I suppose this needs BOSS; but I guess the spectrum generator
    //    // backend will deal with translating into a Spectrum object?
    //    //
    //    // BEreq::spectrum_generator;

    //    generic_spectrum = call_spectrum_generator( <params> );
    //  }

    //  // If CMSSM is being scanned...
    //  else if( QUERYMODELS("CMSSM") )
    //  { 
    //    // do stuff
    //    *Pipe::Param["M0"]; // Do something with parameters

    //    generic_spectrum = call_spectrum_generator_method2( <params> );
    //  }

    //  // Uh oh no matching model found. Should never reach here if there are no bugs.
    //  else
    //  {
    //    std::ostringstream errmsg;
    //    errmsg << "Uh oh, the SpecBit rollcall header claims that this function can deal with one of the models " << *Pipe::Models << ", however this is a lie. Please change the entries in the ALLOW_MODELS macro or update this function to handle the new model.";
    //    SpecBit_error().raise(LOCAL_INFO,errmsg.str());
    //  }

    //  result = generic_spectrum;
    //}

    /// Create a spectrum object for testing purposes
    void make_test_spectrum(Spectrum& result)
    {
      FS::MSSM<FS::Two_scale> mssm1; //start with empty object
      setup(mssm1); //fill with some parameters
      mssm1.calculate_DRbar_parameters(); //calculated DRbar masses 
      mssm1.calculate_pole_masses();//now calculate pole masses
      FS::MSSMSpec mssm(mssm1);
     
      // Store result for gambit to use 
      result = mssm;
    }

    /// Function to test out SpecBit features
    void specbit_tests (bool &result)
    {
      // Access the pipes for this function to get model and parameter information
      //using namespace Pipes::get_lowE_MSSM_spectrum;
      namespace Pipe = Pipes::specbit_tests; // I think I like this alias method better

      const Spectrum& spec(*Pipe::Dep::particle_spectrum); // Get Spectrum object out of dependency pipe.      

      // Check contents

      logger() << "This is specbit_tests. Checking Spectrum object contents..." << std::endl;

      double lowscale = spec.runningpars->GetScale();
      double highscale = 1e+15;

      logger() << "lowscale = " << lowscale << std::endl;
      spec_print(spec);
      spec.runningpars->RunToScale(highscale);
      std::cout << "after run scale to high scale" << std::endl;
      spec_print(spec);
      spec.runningpars->RunToScale(lowscale);
      std::cout << "After run scale back to low scale" << spec.runningpars->GetScale() << std::endl;
      spec_print(spec);

      logger() << EOM; 
     
    }

  } // end namespace SpecBit
} // end namespace SpecBit

