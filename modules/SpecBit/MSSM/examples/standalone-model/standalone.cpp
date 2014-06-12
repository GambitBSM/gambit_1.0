
#include "MSSM_two_scale_model.hpp"
#include "ew_input.hpp"
#include "logger.hpp"
#include "wrappers.hpp"
#include "../../../Spectrum.hpp"
#include "MSSMSpec.hpp"

using namespace flexiblesusy;

void setup(MSSM<Two_scale>& mssm)
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
   mssm.set_scale(Electroweak_constants::MZ);
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

void setup2(MSSM<Two_scale> *& mssm)
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
   mssm->set_scale(Electroweak_constants::MZ);
   mssm->set_Yu(Yu);
   mssm->set_Yd(Yd);
   mssm->set_Ye(Ye);
   mssm->set_Mu(Mu);
   mssm->set_g1(g1);
   mssm->set_g2(g2);
   mssm->set_g3(g3);
   mssm->set_vd(vd);
   mssm->set_vu(vu);
   mssm->set_TYu(TYu);
   mssm->set_TYd(TYd);
   mssm->set_TYe(TYe);
   mssm->set_BMu(BMu);
   mssm->set_mq2(mq2);
   mssm->set_ml2(ml2);
   mssm->set_mHd2(mHd2);
   mssm->set_mHu2(mHu2);
   mssm->set_md2(md2);
   mssm->set_mu2(mu2);
   mssm->set_me2(me2);
   mssm->set_MassB(MassB);
   mssm->set_MassWB(MassWB);
   mssm->set_MassG(MassG);
}



void spec_manipulate(Spectrum * spec) {
   std::cout << "inside spectrum_manipulate" <<std::endl;
   double mgluino_drbar =  spec->get_DRbar_MassEigenstate("MGluino");
   std::cout << "mgluino_drbar = " <<mgluino_drbar  << std::endl;
   double mgluino = spec->get_Pole_Mass("MGluino");
   std::cout << "mgluino = " << mgluino<< std::endl;
   double lowscale = spec->GetScale();
   double highscale = 1e+15;
   std::cout << "lowscale = " << lowscale << std::endl;
   // std::cout << "map says mHd2 "  << spec->get_mass2_par("mHd2") <<std::endl;
   // std::cout << "map says mHu2 "  << spec->get_mass2_par("mHu2") <<std::endl;
   // std::cout << "map says BMu "  << spec->get_mass2_par("BMu") <<std::endl;
  
   spec->RunToScale(highscale);
   std::cout << "after run scale says" << spec->GetScale() << std::endl;
   // std::cout << " map says mHd2 "  << spec->get_mass2_par("mHd2") <<std::endl;
   // std::cout << " map says mHu2 "  << spec->get_mass2_par("mHu2") <<std::endl;
   // std::cout << " map says BMu "  << spec->get_mass2_par("BMu") <<std::endl;
  
   spec->RunToScale(lowscale);
   std::cout << "after run scale says" << spec->GetScale() << std::endl;
   // std::cout << " map says mHd2 "  << spec->get_mass2_par("mHd2") <<std::endl;
   // std::cout << " map says mHu2 "  << spec->get_mass2_par("mHu2") <<std::endl;
   // std::cout << " map says BMu "  << spec->get_mass2_par("BMu") <<std::endl;

}

void mssm_manipulate(MSSMSpec & mssm) {
   std::cout << "inside mssm_manipulate" <<std::endl;
   double mgluino_drbar =  mssm.get_DRbar_MassEigenstate("MGluino");
   std::cout << "mgluino_drbar = " <<mgluino_drbar  << std::endl;
   double mgluino = mssm.get_Pole_Mass("MGluino");
   std::cout << "mgluino = " << mgluino<< std::endl;
   double lowscale = mssm.GetScale();
   double highscale = 1e+15;
   std::cout << "lowscale = " << lowscale << std::endl;
   // std::cout << "map says mHd2 "  << mssm.get_mass2_par("mHd2") <<std::endl;
   // std::cout << "map says mHu2 "  << mssm.get_mass2_par("mHu2") <<std::endl;
   // std::cout << "map says BMu "  << mssm.get_mass2_par("BMu") <<std::endl;
  
   mssm.RunToScale(highscale);
   std::cout << "after run scale says" << mssm.GetScale() << std::endl;
   // std::cout << " map says mHd2 "  << mssm.get_mass2_par("mHd2") <<std::endl;
   // std::cout << " map says mHu2 "  << mssm.get_mass2_par("mHu2") <<std::endl;
   // std::cout << " map says BMu "  << mssm.get_mass2_par("BMu") <<std::endl;
  
   mssm.RunToScale(lowscale);
   std::cout << "after run scale says" << mssm.GetScale() << std::endl;
   // std::cout << " map says mHd2 "  << mssm.get_mass2_par("mHd2") <<std::endl;
   // std::cout << " map says mHu2 "  << mssm.get_mass2_par("mHu2") <<std::endl;
   // std::cout << " map says BMu "  << mssm.get_mass2_par("BMu") <<std::endl;

}



void spectrum_example() {
   MSSM<Two_scale> mssm1; //start with empty object
   setup(mssm1); //fill with some parameters
   mssm1.calculate_DRbar_parameters(); //calculated DRbar masses 
   mssm1.calculate_pole_masses();//now calculate pole masses
   MSSMSpec mssm(mssm1);
 
   //So now we have a mssm1 model object filled, as it will be
   //stored in Gambit after the spectrum generator has run

   // mssm.mass2_par_mapping(); //call mapping - this needs to be changed.


   mssm_manipulate(mssm);  //function can manipulate knowing the model
   spec_manipulate(&mssm); //function can manipulate without knowing model.
}



int main()
{
   INFO("=============================");
   INFO("running spectrum object example()");
   INFO("=============================");
   
   spectrum_example();
 
   return 0;
}
