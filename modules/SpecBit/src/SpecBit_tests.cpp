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
#include "CMSSM_two_scale_model.hpp"
//#include "CMSSM_physical.hpp"

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
    using namespace flexiblesusy;

    /// Quick macro to simplify the check of Pipe::Models
    #define QUERYMODELS(MODEL) std::find(Pipe::Models->begin(), Pipe::Models->end(), MODEL) != Pipe::Models->end()

    /// Module convenience functions
    // These are not known to Gambit.
  
    template <class M>
    bool TestMssmParMass2_0(MSSMSpec<M> mssm, M FSmssm){
       //we test both 
       bool pass = is_equal(mssm.mssm_drbar_pars.get_mass2_parameter("BMu"),FSmssm.get_BMu());
       if(pass == false) return pass;
       pass = is_equal(mssm.mssm_drbar_pars.get_mass2_parameter("mHd2"),FSmssm.get_mHd2());
       if(pass == false) return pass;
       pass = is_equal(mssm.mssm_drbar_pars.get_mass2_parameter("mHu2"),FSmssm.get_mHu2());
       if(pass == false) return pass;
    
       //repeat for older type of getters
       pass =  is_equal(mssm.mssm_drbar_pars.get_mass2_par("BMu"),FSmssm.get_BMu());
       if(pass == false) return pass;
       pass = is_equal(mssm.mssm_drbar_pars.get_mass2_par("mHd2"),FSmssm.get_mHd2());
       if(pass == false) return pass;
       pass = is_equal(mssm.mssm_drbar_pars.get_mass2_par("mHu2"),FSmssm.get_mHu2());
     
       return pass;
    }
 
    template <class M>   
    bool TestMssmParMass2_2(MSSMSpec<M> mssm, M FSmssm){
       bool pass = false;
       for(int i = 0; i<=2; i++){
          for(int j = 0; j<=2; j++){
             pass = is_equal(mssm.mssm_drbar_pars.get_mass2_parameter("mq2",i,j),
                             FSmssm.get_mq2(i,j)); 
             if(pass == false) return pass;
             pass = is_equal(mssm.mssm_drbar_pars.get_mass2_parameter("ml2",i,j),
                             FSmssm.get_ml2(i,j)); 
             if(pass == false) return pass;
             pass = is_equal(mssm.mssm_drbar_pars.get_mass2_parameter("md2",i,j),
                             FSmssm.get_md2(i,j)); 
             if(pass == false) return pass;
             pass = is_equal(mssm.mssm_drbar_pars.get_mass2_parameter("mu2",i,j),
                             FSmssm.get_mu2(i,j)); 
             if(pass == false) return pass;
             pass = is_equal(mssm.mssm_drbar_pars.get_mass2_parameter("me2",i,j),
                             FSmssm.get_me2(i,j)); 
             if(pass == false) return pass;
    
             
             //repeat for older type of getters
             pass = is_equal(mssm.mssm_drbar_pars.get_mass2_par("mq2",i,j),
                             FSmssm.get_mq2(i,j)); 
             if(pass == false) return pass;
             pass = is_equal(mssm.mssm_drbar_pars.get_mass2_par("ml2",i,j),
                             FSmssm.get_ml2(i,j)); 
             if(pass == false) return pass;
             pass = is_equal(mssm.mssm_drbar_pars.get_mass2_par("md2",i,j),
                             FSmssm.get_md2(i,j)); 
             if(pass == false) return pass;
              pass = is_equal(mssm.mssm_drbar_pars.get_mass2_par("mu2",i,j),
                             FSmssm.get_mu2(i,j)); 
             if(pass == false) return pass;
             pass = is_equal(mssm.mssm_drbar_pars.get_mass2_par("me2",i,j),
                             FSmssm.get_me2(i,j)); 
             if(pass == false) return pass;
          }
       }
       return pass;
    }
    
    template <class M>  
    bool TestMssmParMass1_0(MSSMSpec<M> mssm, M FSmssm){
       //we test both 
       bool pass = is_equal(mssm.mssm_drbar_pars.get_mass_parameter("M1"),FSmssm.get_MassB());
       if(pass == false) return pass;
       pass = is_equal(mssm.mssm_drbar_pars.get_mass_parameter("M2"),FSmssm.get_MassWB());
       if(pass == false) return pass;
       pass = is_equal(mssm.mssm_drbar_pars.get_mass_parameter("M3"),FSmssm.get_MassG());
       if(pass == false) return pass;
       pass = is_equal(mssm.mssm_drbar_pars.get_mass_parameter("Mu"),FSmssm.get_Mu());
       if(pass == false) return pass;
       pass = is_equal(mssm.mssm_drbar_pars.get_mass_parameter("vu"),FSmssm.get_vu());
       if(pass == false) return pass;
       pass = is_equal(mssm.mssm_drbar_pars.get_mass_parameter("vd"),FSmssm.get_vd());
       if(pass == false) return pass;
       // Now versions using old getters
       pass =  is_equal(mssm.mssm_drbar_pars.get_mass_par("M1"),FSmssm.get_MassB());
       if(pass == false) return pass;
       pass = is_equal(mssm.mssm_drbar_pars.get_mass_par("M2"),FSmssm.get_MassWB());
       if(pass == false) return pass;
       pass = is_equal(mssm.mssm_drbar_pars.get_mass_par("M3"),FSmssm.get_MassG());
       if(pass == false) return pass;
       pass = is_equal(mssm.mssm_drbar_pars.get_mass_par("Mu"),FSmssm.get_Mu());
       if(pass == false) return pass;
       pass = is_equal(mssm.mssm_drbar_pars.get_mass_par("vu"),FSmssm.get_vu());
       if(pass == false) return pass;
       pass = is_equal(mssm.mssm_drbar_pars.get_mass_par("vd"),FSmssm.get_vd());
       if(pass == false) return pass;
       return pass;
    }
    
    template <class M>  
    bool TestMssmParMass1_2(MSSMSpec<M> mssm, M FSmssm){
       bool pass = false;
       for(int i = 0; i<=2; i++){
          for(int j = 0; j<=2; j++){
             pass = is_equal(mssm.mssm_drbar_pars.get_mass_parameter("TYd",i,j),
                             FSmssm.get_TYd(i,j)); 
             if(pass == false) return pass;
             pass = is_equal(mssm.mssm_drbar_pars.get_mass_parameter("TYe",i,j),
                             FSmssm.get_TYe(i,j)); 
             if(pass == false) return pass;
             pass = is_equal(mssm.mssm_drbar_pars.get_mass_parameter("TYu",i,j),
                             FSmssm.get_TYu(i,j)); 
             if(pass == false) return pass;
            
             
             //repeat for older type of getters
             pass = is_equal(mssm.mssm_drbar_pars.get_mass_par("TYd",i,j),
                             FSmssm.get_TYd(i,j)); 
             if(pass == false) return pass;
             pass = is_equal(mssm.mssm_drbar_pars.get_mass_par("TYe",i,j),
                             FSmssm.get_TYe(i,j)); 
             if(pass == false) return pass;
             pass = is_equal(mssm.mssm_drbar_pars.get_mass_par("TYu",i,j),
                             FSmssm.get_TYu(i,j)); 
             if(pass == false) return pass;
          }
       }
       return pass;
    }
    
    template <class M>
    bool TestMssmParMass0_0(MSSMSpec<M> mssm, M FSmssm){
       //we test both 
       bool pass = is_equal(mssm.mssm_drbar_pars.get_dimensionless_parameter("g1"),FSmssm.get_g1());
       if(pass == false) return pass;
       pass = is_equal(mssm.mssm_drbar_pars.get_dimensionless_parameter("g2"),FSmssm.get_g2());
       if(pass == false) return pass;
       pass = is_equal(mssm.mssm_drbar_pars.get_dimensionless_parameter("g3"),FSmssm.get_g3());
       if(pass == false) return pass;
       
       // Now versions using old getters
       pass = is_equal(mssm.mssm_drbar_pars.get_dimensionless_par("g1"),FSmssm.get_g1());
       if(pass == false) return pass;
       pass = is_equal(mssm.mssm_drbar_pars.get_dimensionless_par("g2"),FSmssm.get_g2());
       if(pass == false) return pass;
       pass = is_equal(mssm.mssm_drbar_pars.get_dimensionless_par("g3"),FSmssm.get_g3());
       if(pass == false) return pass;
       return pass;
    }
    
    template <class M>
    bool TestMssmParMass0_2(MSSMSpec<M> mssm, M FSmssm){
       bool pass = false;
       for(int i = 0; i<=2; i++){
          for(int j = 0; j<=2; j++){
             pass = is_equal(mssm.mssm_drbar_pars.get_dimensionless_parameter("Yd",i,j),
                             FSmssm.get_Yd(i,j)); 
             if(pass == false) {
                return pass;
             }
                pass = is_equal(mssm.mssm_drbar_pars.get_dimensionless_parameter("Ye",i,j),
                             FSmssm.get_Ye(i,j)); 
             if(pass == false) return pass;
             pass = is_equal(mssm.mssm_drbar_pars.get_dimensionless_parameter("Yu",i,j),
                             FSmssm.get_Yu(i,j)); 
             if(pass == false) return pass;
            
             
             //repeat for older type of getters
             pass = is_equal(mssm.mssm_drbar_pars.get_dimensionless_par("Yd",i,j),
                             FSmssm.get_Yd(i,j)); 
             if(pass == false) return pass;
             pass = is_equal(mssm.mssm_drbar_pars.get_dimensionless_par("Ye",i,j),
                             FSmssm.get_Ye(i,j)); 
             if(pass == false) return pass;
             pass = is_equal(mssm.mssm_drbar_pars.get_dimensionless_par("Yu",i,j),
                             FSmssm.get_Yu(i,j)); 
             if(pass == false) return pass;
          }
       }
       return pass;
    }
    
    template <class M>
    bool TestMssmPoleGets0(MSSMSpec<M> mssm, M FSmssm){
       bool pass = false;
       pass = is_equal(mssm.mssm_ph.get_Pole_Mass("MZ"),FSmssm.get_physical().MVZ);
       if(pass == false) return pass;
       pass = is_equal(mssm.mssm_ph.get_Pole_Mass("MW"),FSmssm.get_physical().MVWm);
       if(pass == false) return pass;
       pass = is_equal(mssm.mssm_ph.get_Pole_Mass("MGoldstone0"),FSmssm.get_physical().MAh(0));
       if(pass == false) return pass;
        pass = is_equal(mssm.mssm_ph.get_Pole_Mass("MA0"),FSmssm.get_physical().MAh(1));
       if(pass == false) return pass;
       pass = is_equal(mssm.mssm_ph.get_Pole_Mass("MGoldstonePM"),FSmssm.get_physical().MHpm(0));
       if(pass == false) return pass;
       pass = is_equal(mssm.mssm_ph.get_Pole_Mass("MHpm"),FSmssm.get_physical().MHpm(1));
       if(pass == false) return pass;
       pass = is_equal(mssm.mssm_ph.get_Pole_Mass("MGluino"),FSmssm.get_physical().MGlu);
       if(pass == false) return pass;
       pass = is_equal(mssm.mssm_ph.get_Pole_Mass("MGluon"),FSmssm.get_physical().MVG);
       if(pass == false) return pass;
       pass = is_equal(mssm.mssm_ph.get_Pole_Mass("MPhoton"),FSmssm.get_physical().MVP);
       if(pass == false) return pass;
       pass = is_equal(mssm.mssm_ph.get_Pole_Mass("Mtop"),FSmssm.get_physical().MFu(2));
       if(pass == false) return pass;
       pass = is_equal(mssm.mssm_ph.get_Pole_Mass("Mcharm"),FSmssm.get_physical().MFu(1));
       if(pass == false) return pass;
       pass = is_equal(mssm.mssm_ph.get_Pole_Mass("Mup"),FSmssm.get_physical().MFu(0));
       if(pass == false) return pass;
       pass = is_equal(mssm.mssm_ph.get_Pole_Mass("Mbottom"),FSmssm.get_physical().MFd(2));
       if(pass == false) return pass;
       pass = is_equal(mssm.mssm_ph.get_Pole_Mass("Mstrange"),FSmssm.get_physical().MFd(1));
       if(pass == false) return pass;
       pass = is_equal(mssm.mssm_ph.get_Pole_Mass("Mdown"),FSmssm.get_physical().MFd(0));
       if(pass == false) return pass;
        pass = is_equal(mssm.mssm_ph.get_Pole_Mass("Mtau"),FSmssm.get_physical().MFe(2));
       if(pass == false) return pass;
       pass = is_equal(mssm.mssm_ph.get_Pole_Mass("Mmuon"),FSmssm.get_physical().MFe(1));
       if(pass == false) return pass;
       pass = is_equal(mssm.mssm_ph.get_Pole_Mass("Melectron"),FSmssm.get_physical().MFe(0));
       if(pass == false) return pass;
          
       logger() << "pass = " << pass << std::endl;
       return pass;
    }
    
    template <class M>
    bool TestMssmPoleGets1(MSSMSpec<M> mssm, M FSmssm){
       bool pass = false;
       logger() << "inside TestMssmPoleGets1 " << std::endl; 
       for(int i=0; i<=5; i++){
          //logger() << "pass = "  << pass << std::endl;
          pass = is_equal(mssm.mssm_ph.get_Pole_Mass("MSd",i),
                          FSmssm.get_physical().MSd(i)); 
          logger() << "pass = "  << pass << std::endl;
          if(pass == false) return pass;
          pass = is_equal(mssm.mssm_ph.get_Pole_Mass("MSu",i),
                          FSmssm.get_physical().MSu(i));
          if(pass == false) return pass;
          pass = is_equal(mssm.mssm_ph.get_Pole_Mass("MSe",i),
                          FSmssm.get_physical().MSe(i));
          if(pass == false) return pass;
          logger() << "pass = "  << pass << std::endl;
       }
       for(int i=0; i<=2; i++){
        pass = is_equal(mssm.mssm_ph.get_Pole_Mass("MSv",i),
                          FSmssm.get_physical().MSv(i));
          if(pass == false) return pass;
       }
       for(int i = 0; i<=1; i++){
          pass = is_equal(mssm.mssm_ph.get_Pole_Mass("Mhh",i),
                          FSmssm.get_physical().Mhh(i)); 
          if(pass == false) return pass;
       }
       for(int i = 0; i<=3; i++){
          pass = is_equal(mssm.mssm_ph.get_Pole_Mass("MChi",i),
                          FSmssm.get_physical().MChi(i)); 
          if(pass == false) return pass;
       }
        for(int i = 0; i<=1; i++){
          pass = is_equal(mssm.mssm_ph.get_Pole_Mass("MCha",i),
                          FSmssm.get_physical().MCha(i)); 
          if(pass == false) return pass;  
       }
        for(int i = 0; i<=2; i++){
          pass = is_equal(mssm.mssm_ph.get_Pole_Mass("MFu",i),
                          FSmssm.get_physical().MFu(i)); 
          if(pass == false) return pass;
           pass = is_equal(mssm.mssm_ph.get_Pole_Mass("MFe",i),
                          FSmssm.get_physical().MFe(i)); 
          if(pass == false) return pass;
           pass = is_equal(mssm.mssm_ph.get_Pole_Mass("MFd",i),
                          FSmssm.get_physical().MFd(i)); 
          if(pass == false) return pass;   
        }
       
       return pass;
    }
    
    template <class M> 
    bool TestMssmPoleGets(MSSMSpec<M> mssm, M FSmssm){
       bool pass = false;
       pass = TestMssmPoleGets0(mssm,FSmssm);
       if(pass == false) return pass;
        pass = TestMssmPoleGets1(mssm,FSmssm);
       if(pass == false) return pass;
       return pass;
    }

    template <class M>
    bool TestMssmParGets(MSSMSpec<M> mssm, M FSmssm){
       bool pass = false; 
       pass = TestMssmParMass2_0(mssm,FSmssm);
       if(pass == false) return pass;
       pass = TestMssmParMass2_2(mssm,FSmssm);
       if(pass == false) return pass;
       pass = TestMssmParMass1_0(mssm,FSmssm);
       if(pass == false) return pass;
       pass = TestMssmParMass1_2(mssm,FSmssm);
       if(pass == false) return pass;
       pass = TestMssmParMass0_0(mssm,FSmssm);
       if(pass == false) return pass;
       pass = TestMssmParMass0_2(mssm,FSmssm);
       if(pass == false) return pass;
    
       return pass;
    
    }

    template <class Model> 
    void setup(Model& mssm)
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
    
    void spec_print(Spectrum * spec){
    
       logger() << "spec->runningpars.GetScale() =" << spec->runningpars.GetScale() << std::endl;
       logger() << "map mHd2 "  << spec->runningpars.get_mass2_parameter("mHd2") <<std::endl;
       logger() << "map mHu2 "  << spec->runningpars.get_mass2_parameter("mHu2") <<std::endl;
       logger() << "map BMu "  << spec->runningpars.get_mass2_parameter("BMu") <<std::endl;
       logger() << "map mHd2 "  << spec->runningpars.get_mass2_par("mHd2") <<std::endl;
       logger() << "map mHu2 "  << spec->runningpars.get_mass2_par("mHu2") <<std::endl;
       logger() << "map BMu "  << spec->runningpars.get_mass2_par("BMu") <<std::endl;
      
       logger() << "diff mHd2 "  << spec->runningpars.get_mass2_parameter("mHd2") 
                 -  spec->runningpars.get_mass2_par("mHd2") <<std::endl;
       logger() << "diff mHu2 "  << spec->runningpars.get_mass2_parameter("mHu2") 
                 - spec->runningpars.get_mass2_par("mHu2") <<std::endl;
       logger() << "diff BMu "  << spec->runningpars.get_mass2_parameter("BMu") 
                 -  spec->runningpars.get_mass2_par("BMu") <<std::endl;
    
       logger() << "mq2(1,1) =  " <<  spec->runningpars.get_mass2_parameter("mq2",1,1) << std::endl;
       logger() << "fake mq2(1) =  " <<  spec->runningpars.get_mass2_parameter("mq2",1) << std::endl;
    
       double mgluino_drbar =  spec->runningpars.get_tree_MassEigenstate("MGluino");
       logger() << "mgluino_drbar = " <<mgluino_drbar  << std::endl;
       double mgluino = spec->phys.get_Pole_Mass("MGluino");
       logger() << "mgluino = " << mgluino<< std::endl;
    }

    template <class M>
    void mssm_print(MSSMSpec<M> & mssm){
       
       logger() << "mssm.mssm_drbar_pars.GetScale() =" << mssm.mssm_drbar_pars.GetScale() << std::endl;
       logger() << "map mHd2 "  << mssm.mssm_drbar_pars.get_mass2_parameter("mHd2") <<std::endl;
       logger() << "map mHu2 "  << mssm.mssm_drbar_pars.get_mass2_parameter("mHu2") <<std::endl;
       logger() << "map BMu "  << mssm.mssm_drbar_pars.get_mass2_parameter("BMu") <<std::endl;
       logger() << "map mHd2 "  << mssm.mssm_drbar_pars.get_mass2_par("mHd2") <<std::endl;
       logger() << "map mHu2 "  << mssm.mssm_drbar_pars.get_mass2_par("mHu2") <<std::endl;
       logger() << "map BMu "  << mssm.mssm_drbar_pars.get_mass2_par("BMu") <<std::endl;
      
       logger() << "diff mHd2 "  << mssm.mssm_drbar_pars.get_mass2_parameter("mHd2") 
                 -  mssm.mssm_drbar_pars.get_mass2_par("mHd2") <<std::endl;
       logger() << "diff mHu2 "  << mssm.mssm_drbar_pars.get_mass2_parameter("mHu2") 
                 - mssm.mssm_drbar_pars.get_mass2_par("mHu2") <<std::endl;
       logger() << "diff BMu "  << mssm.mssm_drbar_pars.get_mass2_parameter("BMu") 
                 -  mssm.mssm_drbar_pars.get_mass2_par("BMu") <<std::endl;
    
       logger() << "mq2(1,1) =  " <<  mssm.mssm_drbar_pars.get_mass2_parameter("mq2",1,1) << std::endl;
       logger() << "fake mq2(1) =  " <<  mssm.mssm_drbar_pars.get_mass2_parameter("mq2",1) << std::endl;
    
       double mgluino_drbar =  mssm.mssm_drbar_pars.get_tree_MassEigenstate("MGluino");
       logger() << "mgluino_drbar = " <<mgluino_drbar  << std::endl;
       double mgluino = mssm.mssm_ph.get_Pole_Mass("MGluino");
       logger() << "mgluino = " << mgluino<< std::endl;
    
    }
    
     
    void spec_manipulate(Spectrum * spec) {
       logger() << "inside spectrum_manipulate" <<std::endl;
       double lowscale = spec->runningpars.GetScale();
       double highscale = 1e+15;
       logger() << "lowscale  = " << lowscale << std::endl;
       logger() << "highscale = " << highscale << std::endl;
       spec_print(spec);
       logger() << "Testing stability after running..." << std::endl;
       spec->runningpars.RunToScale(highscale);
       logger() << "after run scale to high scale" << std::endl;
       spec_print(spec);
       spec->runningpars.RunToScale(lowscale);
       logger() << "After run scale back to low scale" << spec->runningpars.GetScale() << std::endl;
       spec_print(spec);
      
    }
    
    template <class M>
    void mssm_manipulate(MSSMSpec<M> & mssm) {
       logger() << "inside mssm_manipulate" <<std::endl;
       double lowscale = mssm.mssm_drbar_pars.GetScale();
       //setting to same scale to test
       mssm.mssm_drbar_pars.SetScale(lowscale);
       double highscale = 1e+15;
       logger() << "Mssm start at lowscale = " << lowscale << std::endl;
       mssm_print(mssm);
       mssm.mssm_drbar_pars.RunToScale(highscale);
       logger() << "after run to highscale" << std::endl;
       mssm_print(mssm);
       mssm.mssm_drbar_pars.RunToScale(lowscale);
       logger() << "after run scale back top low scale" <<  std::endl;
       mssm_print(mssm);
    
    }
    
    /// Create a spectrum object for testing purposes
    void make_test_spectrum(Spectrum* &result)
    {
      static CMSSM<Two_scale> FS_model; //start with empty flexiblesusy object
   
      // Create Spectrum object to wrap flexiblesusy object
      
      //std::unique_ptr<FS::MSSMSpec> mssm(new FS::MSSMSpec(mssm1));      
      static MSSMSpec<CMSSM<Two_scale>> mssm(FS_model);

      // I think these objects should only get created once since they are static...      
      // ...and they should be destructed automatically when the program ends.

      setup(mssm.model); //fill with some parameters
      mssm.model.calculate_DRbar_parameters(); //calculated DRbar masses 
      mssm.model.calculate_pole_masses();//now calculate pole masses

      // Check contents
      logger() << "This is specbit_tests. Checking Spectrum object contents..." << std::endl;
      if(TestMssmParGets(mssm, mssm.model)==false){
          logger() << "TestMssmParGets fail." << std::endl;
          return;
       }
       if(TestMssmPoleGets(mssm, mssm.model)==false){
          logger() << "TestMssmPoleGets fail." << std::endl;
          return;
       }
       //So now we have a mssm1 model object filled, as it will be
       //stored in Gambit after the spectrum generator has run
       // mssm.mass2_par_mapping(); //call mapping - this needs to be changed.
    
       mssm_manipulate(mssm);  //function can manipulate knowing the model
 
      // Store result for gambit to use
      result = &mssm;
    }

    /// Function to test out SpecBit features
    void specbit_test_func1 (double &result)
    {

      // Access the pipes for this function to get model and parameter information
      using namespace Pipes::specbit_test_func1;

      Spectrum* spec = *Dep::MSSM_spectrum; //Test retrieve pointer to Spectrum object 

      //const Spectrum& spec(*(Dep::particle_spectrum->get())); // Get Spectrum object ptr out of dependency pipe and make a nice reference out of it.

      spec_manipulate(spec); //function can manipulate without knowing model.

      logger() << EOM;  
    }

    /// Function to test out SpecBit features
    void specbit_test_func2 (double &result)
    {
    }

    /// Function to test out SpecBit features
    void specbit_test_func3 (double &result)
    {
      // Requests a Spectrum object of capability SM_spectrum; test what we can retrieve from this
      using namespace Pipes::specbit_test_func3;
      Spectrum* spec = *Dep::SM_spectrum; //Test retrieve pointer to Spectrum object 
 
      logger() << "In specbit_test_func3: testing retrieval from Spectrum* with capability SM_spectrum..." << endl;
      logger() << "  Scale: " << spec->runningpars.GetScale() << endl;
      logger() << "  Gauge couplings:" << endl;
      logger() << "  g1: " << spec->runningpars.get_dimensionless_parameter("g1") << endl;
      logger() << "  g2: " << spec->runningpars.get_dimensionless_parameter("g2") << endl;
      logger() << "  g3: " << spec->runningpars.get_dimensionless_parameter("g3") << endl;
      logger() << "  Yukawa couplings:" << endl;
      for (int i=0; i<3; i++) { for (int j=0; j<3; j++) {
        logger() << "  Yu("<<i<<","<<j<<"): " << spec->runningpars.get_dimensionless_parameter("Yu", i, j) << endl;
      }}
      for (int i=0; i<3; i++) { for (int j=0; j<3; j++) {
        logger() << "  Yd("<<i<<","<<j<<"): " << spec->runningpars.get_dimensionless_parameter("Yd", i, j) << endl;
      }}
      for (int i=0; i<3; i++) { for (int j=0; j<3; j++) {
        logger() << "  Ye("<<i<<","<<j<<"): " << spec->runningpars.get_dimensionless_parameter("Ye", i, j) << endl;
      }}
      logger() << EOM;
    }


  } // end namespace SpecBit
} // end namespace Gambit

