/// contains examples of how to use Spectrum objects.  
/// This is not really part of gambit and exists
/// only for illustration.

#include "gambit/SpecBit/MSSMSpec.hpp"

// FlexibleSUSY headers
#include "flexiblesusy/src/ew_input.hpp"
#include "flexiblesusy/src/numerics.hpp"
#include "flexiblesusy/src/wrappers.hpp"
#include "flexiblesusy/models/CMSSM/CMSSM_two_scale_model.hpp"
#include "flexiblesusy/models/CMSSM/CMSSM_two_scale_model_slha.hpp"

#define PRINTOUT std::cout

template <class Model> 
void setpars(Model& mssm)
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
   mssm.set_scale(flexiblesusy::Electroweak_constants::MZ);
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
    
      
void spec_print(Gambit::Spectrum& spec){

   PRINTOUT << "spec.runningpars.GetScale() =" 
          << spec.runningpars.GetScale() << std::endl;
   PRINTOUT << "mHd2 = "  
          << spec.runningpars.get_mass2_parameter("mHd2") 
          <<std::endl;
   PRINTOUT << " mHu2 = "  << spec.runningpars.get_mass2_parameter("mHu2") 
          <<std::endl;
   PRINTOUT << "BMu ="  << spec.runningpars.get_mass2_parameter("BMu") 
                <<std::endl; 
   
   PRINTOUT << "mq2(1,1) = " 
          << spec.runningpars.get_mass2_parameter("mq2",1,1) << std::endl;

   PRINTOUT << "mu2(1,2) = " 
          << spec.runningpars.get_mass2_parameter("mq2",1,2) << std::endl;
   
   PRINTOUT << "me2(3,3) = " 
          << spec.runningpars.get_mass2_parameter("mq2",3,3) << std::endl;

   /// TODO: Ben: Used to be this, but "Mu" is in a no-index map so it's an error
   /// Peter, was this this way for a reason?
   //PRINTOUT << "Mu = " 
   //       << spec.runningpars.get_mass_parameter("Mu",3,3) << std::endl;
   PRINTOUT << "Mu = " 
          << spec.runningpars.get_mass_parameter("Mu") << std::endl;

   //what not to do here...
   // Ben: these now throw errors, so cannot continue test if we do them.
   //PRINTOUT << "mistake mq2(1) =  " 
   //       <<  spec.runningpars.get_mass2_parameter("mq2",1) << std::endl;
   //PRINTOUT << "mistake 2 mq2(1) =  " 
   //       <<  spec.runningpars.get_mass2_parameter("mqL2",1,1) << std::endl;
   //PRINTOUT << "mistake 3 mq2(1) =  " 
   //       <<  spec.runningpars.get_mass_parameter("mq2",1) << std::endl;

   double mgluino = spec.phys.get_Pole_Mass("~g");
   PRINTOUT << "mgluino = " << mgluino<< std::endl;
}

template <class M>
void mssm_print(Gambit::MSSMSpec<M> & mssm)
{
   
   PRINTOUT << "mssm.runningpars.GetScale() =" 
          << mssm.runningpars.GetScale() << std::endl;
   PRINTOUT << "map mHd2 "  
          << mssm.runningpars.get_mass2_parameter("mHd2") <<std::endl;
   PRINTOUT << "map mHu2 "  
          << mssm.runningpars.get_mass2_parameter("mHu2") <<std::endl;
   PRINTOUT << "map BMu "  
          << mssm.runningpars.get_mass2_parameter("BMu") <<std::endl; 
   
   PRINTOUT << "mq2(1,1) = " 
          << mssm.runningpars.get_mass2_parameter("mq2",1,1) 
          << std::endl;
     PRINTOUT << "mu2(1,2) = " 
          <<  mssm.runningpars.get_mass2_parameter("mq2",1,2) << std::endl;
   
   PRINTOUT << "me2(3,3) = " 
          <<   mssm.runningpars.get_mass2_parameter("mq2",3,3) << std::endl;

   PRINTOUT << "Mu = " 
          << mssm.runningpars.get_mass_parameter("Mu",3,3) << std::endl;

   //what not to do
   PRINTOUT << "mistake  mq2(1) = " 
          << mssm.runningpars.get_mass2_parameter("mq2",1) 
          << std::endl;
   PRINTOUT << "mistake 2 mq2(1) =  " 
          <<  mssm.runningpars.get_mass2_parameter("mqL2",1,1) << std::endl;
    PRINTOUT << "mistake 3 mq2(1) =  " 
          <<  mssm.runningpars.get_mass_parameter("mq2",1) << std::endl;
   
    double mgluino = mssm.phys.get_Pole_Mass("MGluino");
   PRINTOUT << "mgluino = " << mgluino<< std::endl;
   
}


void spec_manipulate(Gambit::Spectrum& spec) 
{
   PRINTOUT << "inside spectrum_manipulate" <<std::endl;
   double lowscale = spec.runningpars.GetScale();
   double highscale = 1e+15;
   PRINTOUT << "lowscale  = " << lowscale << std::endl;
   PRINTOUT << "highscale = " << highscale << std::endl;
   spec_print(spec);
   PRINTOUT << "Testing stability after running..." << std::endl;
   spec.runningpars.RunToScale(highscale);
   PRINTOUT << "after run scale to high scale" << std::endl;
   spec_print(spec);
   spec.runningpars.RunToScale(lowscale);
   PRINTOUT << "After run scale back to low scale" 
          << spec.runningpars.GetScale() << std::endl;
   spec_print(spec);
   
}

template <class M>
void mssm_manipulate(Gambit::MSSMSpec<M> & mssm) 
{
   PRINTOUT << "inside mssm_manipulate" <<std::endl;
   double lowscale = mssm.runningpars.GetScale();
   //setting to same scale to test
   mssm.runningpars.SetScale(lowscale);
   double highscale = 1e+15;
   PRINTOUT << "Mssm start at lowscale = " << lowscale << std::endl;
   mssm_print(mssm);
   mssm.runningpars.RunToScale(highscale);
   PRINTOUT << "after run to highscale" << std::endl;
   mssm_print(mssm);
   mssm.runningpars.RunToScale(lowscale);
   PRINTOUT << "after run scale back top low scale" <<  std::endl;
   mssm_print(mssm);
   
}

void SM_checks(Gambit::Spectrum& SM) {
   PRINTOUT << "In specbit_test_func3: " 
          << " testing retrieval from Spectrum object"
          << " with capability SM_spectrum..." << endl;
   PRINTOUT << "  Scale: " << SM.runningpars.GetScale() << endl;
   // *** This is stuff from an MSSMSpec object. Now testing QedQcdWrapper instead.
   // PRINTOUT << "  Gauge couplings:" << endl;
   // PRINTOUT << "  g1: " 
   //        << spec.runningpars.get_dimensionless_parameter("g1") << endl;
   // PRINTOUT << "  g2: " 
   //        << spec.runningpars.get_dimensionless_parameter("g2") << endl;
   // PRINTOUT << "  g3: " 
   //        << spec.runningpars.get_dimensionless_parameter("g3") << endl;
   // PRINTOUT << "  Yukawa couplings:" << endl;
   // 
   // for (int i=1; i<=3; i++) { for (int j=1; j<=3; j++) {
   //       PRINTOUT << "  Yu("<<i<<","<<j<<"): " << spec.runningpars.get_dimensionless_parameter("Yu", i, j) << endl;
   //    }
   // }
   // for (int i=1; i<=3; i++) { for (int j=1; j<=3; j++) {
   //       PRINTOUT << "  Yd("<<i<<","<<j<<"): " << spec.runningpars.get_dimensionless_parameter("Yd", i, j) << endl;
   //    }
   // }
   // for (int i=1; i<=3; i++) { for (int j=1; j<=3; j++) {
   //       PRINTOUT << "  Ye("<<i<<","<<j<<"): " << spec.runningpars.get_dimensionless_parameter("Ye", i, j) << endl;
   //    }
   // }
   // ***

   // Pole masses
   PRINTOUT << "SM pole masses:" << endl;
   PRINTOUT << "Z:     " << SM.phys.get_Pole_Mass("Z0")    << endl;     
   PRINTOUT << "gamma: " << SM.phys.get_Pole_Mass("gamma") << endl;  
   PRINTOUT << "W:     " << SM.phys.get_Pole_Mass("W+")    << endl;       
   PRINTOUT << "g:     " << SM.phys.get_Pole_Mass("g")     << endl;       
   PRINTOUT << "t:     " << SM.phys.get_Pole_Mass("t")     << endl; // i.e. top
   PRINTOUT << "u(3):  " << SM.phys.get_Pole_Mass("u",3)   << endl; // i.e. top
   PRINTOUT << "b:     " << SM.phys.get_Pole_Mass("b")     << endl; // i.e. bottom
   PRINTOUT << "d(3):  " << SM.phys.get_Pole_Mass("d",3)   << endl; // i.e. bottom
   PRINTOUT << "e-(1): " << SM.phys.get_Pole_Mass("e-",1)  << endl; // i.e. electron
   PRINTOUT << "e-:    " << SM.phys.get_Pole_Mass("e-")    << endl; // i.e. electron
   PRINTOUT << "e-(2): " << SM.phys.get_Pole_Mass("e-",2)  << endl; // i.e. muon
   PRINTOUT << "mu-:   " << SM.phys.get_Pole_Mass("mu-")   << endl; // i.e. muon
   PRINTOUT << "e-(3): " << SM.phys.get_Pole_Mass("e-",3)  << endl; // i.e. tau
   PRINTOUT << "tau-:  " << SM.phys.get_Pole_Mass("tau-")  << endl; // i.e. tau
   PRINTOUT << "nu(1): " << SM.phys.get_Pole_Mass("nu",1)  << endl; // Just mass ordered (if there is mixing)
   PRINTOUT << "nu(2): " << SM.phys.get_Pole_Mass("nu",2)  << endl;       
   PRINTOUT << "nu(3): " << SM.phys.get_Pole_Mass("nu",3)  << endl;      
   // MSbar parameters                                  
   PRINTOUT << "SM running parameters:" << endl;
   PRINTOUT << "Current scale: " << SM.runningpars.GetScale() << endl; 
   PRINTOUT << "alpha: " << SM.runningpars.get_dimensionless_parameter("alpha")  << endl;
   PRINTOUT << "alphaS:" << SM.runningpars.get_dimensionless_parameter("alphaS") << endl;
   PRINTOUT << "d:     " << SM.runningpars.get_mass_parameter("d")       << endl;
   PRINTOUT << "u:     " << SM.runningpars.get_mass_parameter("u")       << endl;
   PRINTOUT << "s:     " << SM.runningpars.get_mass_parameter("s")       << endl;
   PRINTOUT << "c:     " << SM.runningpars.get_mass_parameter("c")       << endl;
   PRINTOUT << "b:     " << SM.runningpars.get_mass_parameter("b")       << endl;
   PRINTOUT << "t:     " << SM.runningpars.get_mass_parameter("t")       << endl;
   PRINTOUT << "e:     " << SM.runningpars.get_mass_parameter("e")       << endl;
   PRINTOUT << "mu:    " << SM.runningpars.get_mass_parameter("mu")      << endl;
   PRINTOUT << "tau:   " << SM.runningpars.get_mass_parameter("tau")     << endl;
   PRINTOUT << "gamma: " << SM.runningpars.get_mass_parameter("gamma")   << endl;
   PRINTOUT << "g:     " << SM.runningpars.get_mass_parameter("g")       << endl;
}

