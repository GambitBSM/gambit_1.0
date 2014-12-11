//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Test functions for Spectrum object
///
///  These functions test various aspects of the
///  Spectrum class and derived classes. They are
///  not dependent on any other parts of Gambit,
///  so that Spectrum object test code can be
///  compiled and run seperately from Gambit, but
///  but also be run from inside Gambit.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Ben Farmer
///          (ben.farmer@gmail.com)
///    \date 2014 Dec
///  
///  *********************************************

// Flexible SUSY stuff (should not be needed by the rest of gambit)
#include "CMSSM_two_scale_model.hpp"
#include "CMSSM_two_scale_model_slha.hpp"
//#include "CMSSM_physical.hpp"

#include "ew_input.hpp"
#include "MSSMSpec.hpp"
#include "numerics.hpp"
#include "wrappers.hpp"
// Switch test output depending on where this is being compiled
#ifdef IN_SPECBIT
  #define OUTPUT logger()
  #define TAGerr LogTags::err
  #define TAGfatal LogTags::fatal
  #define TAGeom EOM
#else
  #define OUTPUT std::cerr
  #define TAGerr "" 
  #define TAGfatal ""
  #define TAGeom ""
#endif



namespace Gambit
{
   
   namespace SpecBit
   {
    
      bool print_error(bool pass, std::string get_type, std::string data, 
                       double sting_get_out, double data_member,  
                       int i = -1, int j = -1) 
      {    
         OUTPUT << " returning fail on test for: " << std::endl;
         if (i > -1) OUTPUT << "with first index = " << i << std::endl;
         if (j > -1) OUTPUT << "with second index = " << j << std::endl;
         OUTPUT << get_type << " with " << data << " string arg."  <<std::endl; 
         OUTPUT << "string getter gives = " 
                <<sting_get_out  << std::endl;
         OUTPUT << "data member is = "  
                << data_member  << std::endl;
         OUTPUT << TAGerr << TAGfatal << TAGeom;
         return pass;
         
      }
      
      void print_error(std::string get_type, std::string name, 
                       double sting_get_out, double data_member,  
                       int i = -1, int j = -1) 
      {    
         OUTPUT << " returning fail on test for: " << std::endl;
         if (i > -1) OUTPUT << "with first index = " << i << std::endl;
         if (j > -1) OUTPUT << "with second index = " << j << std::endl;
         OUTPUT << get_type << " with " << name << " string arg."  
                <<std::endl; 
         OUTPUT << "string getter gives = " <<sting_get_out  << std::endl;
         OUTPUT << "data member is = "  
                << data_member  << std::endl;
         OUTPUT << TAGerr << TAGfatal << TAGeom;
      }

      bool test_getters(std::string get_type, 
                        std::string name, double getter_output, 
                        double data_member, int i = -1, int j = -1)
      {
         bool pass = flexiblesusy::is_equal(getter_output,data_member);
         // if(pass == false) return pass;
         if(pass == false)
            print_error(get_type, name, getter_output, data_member,i,j); 
         return pass;
      }

      
      /// Module convenience functions
      // These are not known to Gambit
    
      template <class M>
      bool TestMssmParMass2_0(Spectrum * spec, M FSmssm, 
                              bool immediate_exit = true)
      {      
         bool pass = false;
         //do all in loop 
         std::set<std::pair<std::string,double>> name_value = {
            {"BMu", FSmssm.get_BMu()},
            {"mHd2", FSmssm.get_mHd2()},
            {"mHu2", FSmssm.get_mHu2()} 
         };
            
         std::set<std::pair<std::string, double>>::iterator iter;
         for(iter=name_value.begin(); iter != name_value.end(); ++iter)
            {
               pass = test_getters("get_mass2_parameter", iter->first,  
                                   spec->runningpars.
                                   get_mass2_parameter(iter->first), 
                                   iter->second);
               if(immediate_exit == true && pass == false) return pass; 
            }
         
         return pass;
      }

     
      template <class M>
      bool TestMssmParMass2_0(MSSMSpec<M> mssm, M FSmssm, 
                              bool immediate_exit = true)
      {      
         bool pass = false;
         //do all in loop 
         std::set<std::pair<std::string,double>> name_value = {
            {"BMu", FSmssm.get_BMu()},
            {"mHd2", FSmssm.get_mHd2()},
            {"mHu2", FSmssm.get_mHu2()} 
         };
            
         std::set<std::pair<std::string, double>>::iterator iter;
         for(iter=name_value.begin(); iter != name_value.end(); ++iter)
            {
               pass = test_getters("get_mass2_parameter", iter->first,  
                                   mssm.mssm_drbar_pars.
                                   get_mass2_parameter(iter->first), 
                                   iter->second);
               if(immediate_exit == true && pass == false) return pass; 
            }
         
         return pass;
      }



     
    template <class M>  
    bool TestMssmParMass2_2(Spectrum * spec, M FSmssm, 
                            bool immediate_exit=true)
    {
       bool pass = false;
       
       for(int i=1; i<=3; i++){
          for(int j=1; j<=3; j++){
             //Would be smarter to take these out of for loop and
             // use function pointers, but I won't.
             std::set<std::pair<std::string,double>> name_value = {
                {"mq2", FSmssm.get_mq2(i-1,j-1)},
                {"mu2", FSmssm.get_mu2(i-1,j-1)},
                {"md2", FSmssm.get_md2(i-1,j-1)},
                {"ml2", FSmssm.get_ml2(i-1,j-1)},
                {"me2", FSmssm.get_me2(i-1,j-1)}               
             };     
             
             std::set<std::pair<std::string, double>>::iterator iter;
             for(iter=name_value.begin(); iter != name_value.end(); ++iter)
                {
                   pass = test_getters("get_mass2_parameter", iter->first,  
                                       spec->runningpars.
                                       get_mass2_parameter(iter->first,i,j), 
                                       iter->second, i, j);
                   if(immediate_exit == true && pass == false) return pass; 
                }              
          }
       }
       return pass;
    }


      template <class M>  
    bool TestMssmParMass2_2(MSSMSpec<M> mssm, M FSmssm, 
                            bool immediate_exit=true)
    {
       bool pass = false;
       
       for(int i=1; i<=3; i++){
          for(int j=1; j<=3; j++){
             //Would be smarter to take these out of for loop and
             // use function pointers, but I won't.
             std::set<std::pair<std::string,double>> name_value = {
                {"mq2", FSmssm.get_mq2(i-1,j-1)},
                {"mu2", FSmssm.get_mu2(i-1,j-1)},
                {"md2", FSmssm.get_md2(i-1,j-1)},
                {"ml2", FSmssm.get_ml2(i-1,j-1)},
                {"me2", FSmssm.get_me2(i-1,j-1)}               
             };     
             
             std::set<std::pair<std::string, double>>::iterator iter;
             for(iter=name_value.begin(); iter != name_value.end(); ++iter)
                {
                   pass = test_getters("get_mass2_parameter", iter->first,  
                                       mssm.mssm_drbar_pars.
                                       get_mass2_parameter(iter->first,i,j), 
                                       iter->second, i, j);
                   if(immediate_exit == true && pass == false) return pass; 
                }              
          }
       }
       return pass;
    }


      template <class M>  
      bool TestMssmParMass1_0(Spectrum * spec, M FSmssm, 
                              bool immediate_exit=true)
      {
         bool pass = false;
         
         std::set<std::pair<std::string,double>> name_value = {
            {"M1", FSmssm.get_MassB()},
            {"M2", FSmssm.get_MassWB()},
            {"M3", FSmssm.get_MassG()},
            {"vu", FSmssm.get_vu()},
            {"vd", FSmssm.get_vd()}
            
         };
          
         std::set<std::pair<std::string, double>>::iterator iter;
         for(iter=name_value.begin(); iter != name_value.end(); ++iter)
            {
               pass = test_getters("get_mass_parameter", iter->first,  
                                   spec->runningpars.
                                   get_mass_parameter(iter->first), 
                                   iter->second);
               if(immediate_exit == true && pass == false) return pass; 
            }
         
         return pass;
      }
    
      template <class M>  
      bool TestMssmParMass1_0(MSSMSpec<M> mssm, M FSmssm, 
                              bool immediate_exit=true)
      {
         bool pass = false;
         
         std::set<std::pair<std::string,double>> name_value = {
            {"M1", FSmssm.get_MassB()},
            {"M2", FSmssm.get_MassWB()},
            {"M3", FSmssm.get_MassG()},
            {"vu", FSmssm.get_vu()},
            {"vd", FSmssm.get_vd()}
            
         };
          
         std::set<std::pair<std::string, double>>::iterator iter;
         for(iter=name_value.begin(); iter != name_value.end(); ++iter)
            {
               pass = test_getters("get_mass_parameter", iter->first,  
                                   mssm.mssm_drbar_pars.
                                   get_mass_parameter(iter->first), 
                                   iter->second);
               if(immediate_exit == true && pass == false) return pass; 
            }
         
         return pass;
      }


      
      template <class M>  
      bool TestMssmParMass1_2(Spectrum * spec, M FSmssm, 
                              bool immediate_exit =true)
      {
         bool pass = false;
         for(int i=1; i<=3; i++){
            for(int j=1; j<=3; j++){
                std::set<std::pair<std::string,double>> name_value = {
                   {"TYd", FSmssm.get_TYd(i-1,j-1)},
                   {"TYu", FSmssm.get_TYu(i-1,j-1)},
                   {"TYe", FSmssm.get_TYe(i-1,j-1)}
                };     
            
                std::set<std::pair<std::string, double>>::iterator iter;
            for(iter=name_value.begin(); iter != name_value.end(); ++iter)
               {
                  pass = test_getters("get_mass_parameter", iter->first,  
                                      spec->runningpars.
                                      get_mass_parameter(iter->first,i,j), 
                                      iter->second, i, j);
                  if(immediate_exit == true && pass == false) return pass; 
               }              
         }
      }
       return pass;
    }


      template <class M>  
      bool TestMssmParMass1_2(MSSMSpec<M> mssm, M FSmssm, 
                              bool immediate_exit =true)
      {
         bool pass = false;
         for(int i=1; i<=3; i++){
            for(int j=1; j<=3; j++){
                std::set<std::pair<std::string,double>> name_value = {
                   {"TYd", FSmssm.get_TYd(i-1,j-1)},
                   {"TYu", FSmssm.get_TYu(i-1,j-1)},
                   {"TYe", FSmssm.get_TYe(i-1,j-1)}
                };     
            
                std::set<std::pair<std::string, double>>::iterator iter;
            for(iter=name_value.begin(); iter != name_value.end(); ++iter)
               {
                  pass = test_getters("get_mass_parameter", iter->first,  
                                      mssm.mssm_drbar_pars.
                                      get_mass_parameter(iter->first,i,j), 
                                      iter->second, i, j);
                  if(immediate_exit == true && pass == false) return pass; 
               }              
         }
      }
       return pass;
    }
    
    template <class M>
       bool TestMssmParMass0_0(Spectrum * spec, M FSmssm, 
                               bool immediate_exit =true )
    {
       bool pass = false;
       std::set<std::pair<std::string,double>> name_value = {
            {"g1", FSmssm.get_g1()},
            {"g2", FSmssm.get_g2()},
            {"g3", FSmssm.get_g3()} 
         };
          
         std::set<std::pair<std::string, double>>::iterator iter;
         for(iter=name_value.begin(); iter != name_value.end(); ++iter)
            {
               pass = test_getters("get_dimensionless_parameter", iter->first,  
                                   spec->runningpars.
                                   get_dimensionless_parameter(iter->first), 
                                   iter->second);
               if(immediate_exit == true && pass == false) return pass; 
            }

       return pass;
    }


      template <class M>
      bool TestMssmParMass0_0(MSSMSpec<M> mssm, M FSmssm, 
                               bool immediate_exit =true )
    {
       bool pass = false;
       std::set<std::pair<std::string,double>> name_value = {
            {"g1", FSmssm.get_g1()},
            {"g2", FSmssm.get_g2()},
            {"g3", FSmssm.get_g3()} 
         };
          
         std::set<std::pair<std::string, double>>::iterator iter;
         for(iter=name_value.begin(); iter != name_value.end(); ++iter)
            {
               pass = test_getters("get_dimensionless_parameter", iter->first,  
                                   mssm.mssm_drbar_pars.
                                   get_dimensionless_parameter(iter->first), 
                                   iter->second);
               if(immediate_exit == true && pass == false) return pass; 
            }

       return pass;
    }
    
    template <class M>
    bool TestMssmParMass0_2(Spectrum * spec, M FSmssm, 
                               bool immediate_exit = true)
    {
       bool pass = false;
       for(int i=1; i<=3; i++){
          for(int j=1; j<=3; j++){
             
             std::set<std::pair<std::string,double>> name_value = {
                   {"Yd", FSmssm.get_Yd(i-1,j-1)},
                   {"Yu", FSmssm.get_Yu(i-1,j-1)},
                   {"Ye", FSmssm.get_Ye(i-1,j-1)}
                };     
            
                std::set<std::pair<std::string, double>>::iterator iter;
            for(iter=name_value.begin(); iter != name_value.end(); ++iter)
               {
                  pass = test_getters("get_dimensionless_parameter", 
                                      iter->first,  
                                      spec->runningpars.
                                      get_dimensionless_parameter(iter->first,
                                                                  i,j), 
                                      iter->second, i, j);
                  if(immediate_exit == true && pass == false) return pass; 
               }              
          }
       }
       return pass;
    }

      
      template <class M>
      bool TestMssmParMass0_2(MSSMSpec<M> mssm, M FSmssm, 
                               bool immediate_exit = true)
      {
       bool pass = false;
       for(int i=1; i<=3; i++){
          for(int j=1; j<=3; j++){
             
             std::set<std::pair<std::string,double>> name_value = {
                   {"Yd", FSmssm.get_Yd(i-1,j-1)},
                   {"Yu", FSmssm.get_Yu(i-1,j-1)},
                   {"Ye", FSmssm.get_Ye(i-1,j-1)}
                };     
            
                std::set<std::pair<std::string, double>>::iterator iter;
            for(iter=name_value.begin(); iter != name_value.end(); ++iter)
               {
                  pass = test_getters("get_dimensionless_parameter", 
                                      iter->first,  
                                      mssm.mssm_drbar_pars.
                                      get_dimensionless_parameter(iter->first,
                                                                  i,j), 
                                      iter->second, i, j);
                  if(immediate_exit == true && pass == false) return pass; 
               }              
          }
       }
       return pass;
    }
    
    template <class M>
    bool TestMssmPoleGets0(Spectrum * spec, M FSmssm, 
                           bool immediate_exit = true)
    {
       bool pass = false;
       //do all in loop 
         std::set<std::pair<std::string,double>> name_value = {
            {"MZ", FSmssm.get_physical().MVZ},
            {"MW", FSmssm.get_physical().MVWm},
            {"MGluino", FSmssm.get_physical().MGlu},
            {"MGluon", FSmssm.get_physical().MVG},
            {"MPhoton", FSmssm.get_physical().MVP}
         };
            
         std::set<std::pair<std::string, double>>::iterator iter;
         for(iter=name_value.begin(); iter != name_value.end(); ++iter)
            {
               pass = test_getters("get_Pole_Mass", iter->first,  
                                   spec->phys.get_Pole_Mass(iter->first), 
                                   iter->second);
               if(immediate_exit == true && pass == false) return pass; 
            }
       return pass;
    }


    template <class M>
    bool TestMssmPoleGets0(MSSMSpec<M> mssm, M FSmssm, 
                           bool immediate_exit = true)
    {
       bool pass = false;
       //do all in loop 
         std::set<std::pair<std::string,double>> name_value = {
            {"MZ", FSmssm.get_physical().MVZ},
            {"MW", FSmssm.get_physical().MVWm},
            {"MGluino", FSmssm.get_physical().MGlu},
            {"MGluon", FSmssm.get_physical().MVG},
            {"MPhoton", FSmssm.get_physical().MVP}
         };
            
         std::set<std::pair<std::string, double>>::iterator iter;
         for(iter=name_value.begin(); iter != name_value.end(); ++iter)
            {
               pass = test_getters("get_Pole_Mass", iter->first,  
                                   mssm.mssm_ph.get_Pole_Mass(iter->first), 
                                   iter->second);
               if(immediate_exit == true && pass == false) return pass; 
            }
       return pass;
    }  
       

    template <class M>
    bool TestMssmPoleGets1(Spectrum * spec, M FSmssm, 
                           bool immediate_exit = true)
    {
       bool pass = false;
     
       for(int i=1; i<=6; i++){
         std::set<std::pair<std::string,double>> name_value = {
                   {"MSd", FSmssm.get_physical().MSd(i-1)},
                   {"MSu", FSmssm.get_physical().MSu(i-1)},
                   {"MSe", FSmssm.get_physical().MSe(i-1)}
                   
                };     
            
            std::set<std::pair<std::string, double>>::iterator iter;
            for(iter=name_value.begin(); iter != name_value.end(); ++iter)
               {
                  pass = test_getters("get_Pole_Mass", iter->first,  
                                      spec->phys.get_Pole_Mass(iter->first,i),
                                      iter->second, i);
                  if(immediate_exit == true && pass == false) return pass; 
               } 
          
       }
       for(int i=1; i<=3; i++){
          
          std::set<std::pair<std::string,double>> name_value = {
                   {"MSv", FSmssm.get_physical().MSv(i-1)},
                   {"MFd", FSmssm.get_physical().MFd(i-1)},
                   {"MFu", FSmssm.get_physical().MFu(i-1)},
                   {"MFe", FSmssm.get_physical().MFe(i-1)}
                   
                };     
            
            std::set<std::pair<std::string, double>>::iterator iter;
            for(iter=name_value.begin(); iter != name_value.end(); ++iter)
               {
                  pass = test_getters("get_Pole_Mass", iter->first,  
                                      spec->phys.get_Pole_Mass(iter->first,i),
                                      iter->second, i);
                  if(immediate_exit == true && pass == false) return pass; 
               } 
        
       }
       for(int i=1; i<=2; i++){ 
          std::string name = "Mh0";
          pass = test_getters("get_Pole_Mass", name,  
                                      spec->phys.get_Pole_Mass(name,i),
                                      FSmssm.get_physical().Mhh(i-1), i);
          if(immediate_exit == true && pass == false) return pass; 
          name = "MCha";
          pass = test_getters("get_Pole_Mass", name,  
                              spec->phys.get_Pole_Mass(name,i),
                              FSmssm.get_physical_slha().MCha(i-1), i);
          if(immediate_exit == true && pass == false) return pass; 
       }
       //In the the neutralino and chargino tests I compare against 
       // value in physical_slha struct since the value in
       // physical may differ by a sign since it stores positive masses
       // and a complex mixing matrix.
       for(int i=1; i<=4; i++){
          std::string name = "MChi";
          pass = test_getters("get_Pole_Mass", name,  
                              spec->phys.get_Pole_Mass(name,i),
                              FSmssm.get_physical_slha().MChi(i-1), i);
          if(immediate_exit == true && pass == false) return pass;
       }
       return pass;
    }
     

     template <class M>
    bool TestMssmPoleGets1(MSSMSpec<M> mssm, M FSmssm, 
                           bool immediate_exit = true)
    {
       bool pass = false;
     
       for(int i=1; i<=6; i++){
         std::set<std::pair<std::string,double>> name_value = {
                   {"MSd", FSmssm.get_physical().MSd(i-1)},
                   {"MSu", FSmssm.get_physical().MSu(i-1)},
                   {"MSe", FSmssm.get_physical().MSe(i-1)}
                   
                };     
            
            std::set<std::pair<std::string, double>>::iterator iter;
            for(iter=name_value.begin(); iter != name_value.end(); ++iter)
               {
                  pass = test_getters("get_Pole_Mass", iter->first,  
                                      mssm.mssm_ph.get_Pole_Mass(iter->first,i),
                                      iter->second, i);
                  if(immediate_exit == true && pass == false) return pass; 
               } 
          
       }
       for(int i=1; i<=3; i++){
          
          std::set<std::pair<std::string,double>> name_value = {
                   {"MSv", FSmssm.get_physical().MSv(i-1)},
                   {"MFd", FSmssm.get_physical().MFd(i-1)},
                   {"MFu", FSmssm.get_physical().MFu(i-1)},
                   {"MFe", FSmssm.get_physical().MFe(i-1)}
                   
                };     
            
            std::set<std::pair<std::string, double>>::iterator iter;
            for(iter=name_value.begin(); iter != name_value.end(); ++iter)
               {
                  pass = test_getters("get_Pole_Mass", iter->first,  
                                      mssm.mssm_ph.get_Pole_Mass(iter->first,i),
                                      iter->second, i);
                  if(immediate_exit == true && pass == false) return pass; 
               } 
        
       }
       for(int i=1; i<=2; i++){ 
          std::string name = "Mh0";
          pass = test_getters("get_Pole_Mass", name,  
                                      mssm.mssm_ph.get_Pole_Mass(name,i),
                                      FSmssm.get_physical().Mhh(i-1), i);
          if(immediate_exit == true && pass == false) return pass; 
          name = "MCha";
          pass = test_getters("get_Pole_Mass", name,  
                              mssm.mssm_ph.get_Pole_Mass(name,i),
                              FSmssm.get_physical_slha().MCha(i-1), i);
          if(immediate_exit == true && pass == false) return pass; 
       }
       //In the the neutralino and chargino tests I compare against 
       // value in physical_slha struct since the value in
       // physical may differ by a sign since it stores positive masses
       // and a complex mixing matrix.
       for(int i=1; i<=4; i++){
          std::string name = "MChi";
          pass = test_getters("get_Pole_Mass", name,  
                              mssm.mssm_ph.get_Pole_Mass(name,i),
                              FSmssm.get_physical_slha().MChi(i-1), i);
          if(immediate_exit == true && pass == false) return pass;
       }
       return pass;
    }

     
     template <class M>
     bool TestMssmPoleMixingGets2(Spectrum * spec, M FSmssm, 
                                  bool immediate_exit = true)
     {
        bool pass = false;
        for(int i=1; i<=6; i++){
           for(int j=1; j<=6; j++){
              std::set<std::pair<std::string,double>> name_value = {
                 {"ZD", FSmssm.get_physical_slha().ZD(i-1,j-1)},
                 {"ZU", FSmssm.get_physical_slha().ZU(i-1,j-1)},
                 {"ZE", FSmssm.get_physical_slha().ZE(i-1,j-1)}
                };     
                 
                std::set<std::pair<std::string, double>>::iterator iter;
            for(iter=name_value.begin(); iter != name_value.end(); ++iter)
               {
                  pass = test_getters("get_Pole_Mixing", iter->first,  
                                      spec->phys.
                                      get_Pole_Mixing(iter->first,i,j), 
                                      iter->second, i, j);
                  if(immediate_exit == true && pass == false) return pass; 
               }              
           }
        }
                             
          
        for(int i=1; i<=3; i++){
           for(int j=1; j<=3; j++){
              string name = "ZV";
              pass = test_getters("get_Pole_Mixing", name,  
                                  spec->phys.get_Pole_Mixing(name,i,j),
                                  FSmssm.get_physical_slha().ZV(i-1, j-1), i,j);
              if(immediate_exit == true && pass == false) return pass; 
             
              }
           }
        
     
        for(int i=1; i<=2; i++){
           for(int j=1; j<=2; j++){
            std::set<std::pair<std::string,double>> name_value = {
                 {"ZH", FSmssm.get_physical_slha().ZH(i-1,j-1)},
                 {"ZA", FSmssm.get_physical_slha().ZA(i-1,j-1)},
                 {"ZHPM", FSmssm.get_physical_slha().ZP(i-1,j-1)},
                 {"UM", flexiblesusy::Re(FSmssm.get_physical_slha()
                                         .UM(i-1,j-1))}, 
                 {"UP", flexiblesusy::Re(FSmssm.get_physical_slha()
                                         .UP(i-1,j-1))}
                };     
                  
               std::set<std::pair<std::string, double>>::iterator iter;
            for(iter=name_value.begin(); iter != name_value.end(); ++iter)
               {
                  pass = test_getters("get_Pole_Mixing", iter->first,  
                                      spec->phys.
                                      get_Pole_Mixing(iter->first,i,j), 
                                      iter->second, i, j);
                  if(immediate_exit == true && pass == false) return pass; 
               }
           }
       }
        
        return pass;
    }


       template <class M>
     bool TestMssmPoleMixingGets2(MSSMSpec<M> mssm, M FSmssm, 
                                  bool immediate_exit = true)
     {
        bool pass = false;
        for(int i=1; i<=6; i++){
           for(int j=1; j<=6; j++){
              std::set<std::pair<std::string,double>> name_value = {
                 {"ZD", FSmssm.get_physical_slha().ZD(i-1,j-1)},
                 {"ZU", FSmssm.get_physical_slha().ZU(i-1,j-1)},
                 {"ZE", FSmssm.get_physical_slha().ZE(i-1,j-1)}
                };     
                 
                std::set<std::pair<std::string, double>>::iterator iter;
            for(iter=name_value.begin(); iter != name_value.end(); ++iter)
               {
                  pass = test_getters("get_Pole_Mixing", iter->first,  
                                      mssm.mssm_ph.
                                      get_Pole_Mixing(iter->first,i,j), 
                                      iter->second, i, j);
                  if(immediate_exit == true && pass == false) return pass; 
               }              
           }
        }
                             
          
        for(int i=1; i<=3; i++){
           for(int j=1; j<=3; j++){
              string name = "ZV";
              pass = test_getters("get_Pole_Mixing", name,  
                                  mssm.mssm_ph.get_Pole_Mixing(name,i,j),
                                  FSmssm.get_physical_slha().ZV(i-1, j-1), i,j);
              if(immediate_exit == true && pass == false) return pass; 
             
              }
           }
        
     
        for(int i=1; i<=2; i++){
           for(int j=1; j<=2; j++){
            std::set<std::pair<std::string,double>> name_value = {
                 {"ZH", FSmssm.get_physical_slha().ZH(i-1,j-1)},
                 {"ZA", FSmssm.get_physical_slha().ZA(i-1,j-1)},
                 {"ZHPM", FSmssm.get_physical_slha().ZP(i-1,j-1)},
                 {"UM", flexiblesusy::Re(FSmssm.get_physical_slha()
                                         .UM(i-1,j-1))}, 
                 {"UP", flexiblesusy::Re(FSmssm.get_physical_slha()
                                         .UP(i-1,j-1))}
                };     
                  
               std::set<std::pair<std::string, double>>::iterator iter;
            for(iter=name_value.begin(); iter != name_value.end(); ++iter)
               {
                  pass = test_getters("get_Pole_Mixing", iter->first,  
                                      mssm.mssm_ph.
                                      get_Pole_Mixing(iter->first,i,j), 
                                      iter->second, i, j);
                  if(immediate_exit == true && pass == false) return pass; 
               }
           }
       }
        
        return pass;
    }

     
    template <class M> 
    bool TestMssmPoleGets(Spectrum * spec, M FSmssm)
    {
       bool pass = false;
       pass = TestMssmPoleGets0(spec,FSmssm);
       if(pass == false) return pass;
        pass = TestMssmPoleGets1(spec,FSmssm);
       if(pass == false) return pass;
       pass = TestMssmPoleMixingGets2(spec,FSmssm);
       if(pass == false) return pass;
       return pass;
    }
                                                             
    template <class M> 
    bool TestMssmPoleGets(MSSMSpec<M> mssm, M FSmssm)
    {
       bool pass = false;
       pass = TestMssmPoleGets0(mssm,FSmssm);
       if(pass == false) return pass;
        pass = TestMssmPoleGets1(mssm,FSmssm);
       if(pass == false) return pass;
       pass = TestMssmPoleMixingGets2(mssm,FSmssm);
       if(pass == false) return pass;
       return pass;
    }

    template <class M>
    bool TestMssmParGets(Spectrum * spec, M FSmssm)
    {
       bool pass = false; 
       pass = TestMssmParMass2_0(spec,FSmssm);
       if(pass == false) return pass;
       pass = TestMssmParMass2_2(spec,FSmssm);
       if(pass == false) return pass;
       pass = TestMssmParMass1_0(spec,FSmssm);
       if(pass == false) return pass;
       pass = TestMssmParMass1_2(spec,FSmssm);
       if(pass == false) return pass;
       pass = TestMssmParMass0_0(spec,FSmssm);
       if(pass == false) return pass;
       pass = TestMssmParMass0_2(spec,FSmssm);
       if(pass == false) return pass;
    
       return pass;
    
    }

     template <class M>
    bool TestMssmParGets(MSSMSpec<M> mssm, M FSmssm)
    {
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
    
    
      template <class M>
      bool test_exact(MSSMSpec<M> mssm, M FS_model_slha)
      {
         bool pass = TestMssmParGets(mssm,FS_model_slha);
         if(pass == false)
            {
               OUTPUT << "TestMssmParGets failing."  <<std::endl;
               return pass;
            }
         pass = TestMssmPoleGets(mssm,FS_model_slha);
         if(pass == false)
            {
               OUTPUT << "TestMssmParGets failing."  <<std::endl;
               return pass;
            }
         
         
         return pass;
      }

      template <class M>
      double test_exact(Spectrum * spec, M FS_model_slha)
      {
         bool pass = TestMssmParGets(spec,FS_model_slha);
         if(pass == false)
            {
               OUTPUT << "TestMssmParGets failing."  <<std::endl;
               return pass;
            }
         pass = TestMssmPoleGets(spec,FS_model_slha);
         if(pass == false)
            {
               OUTPUT << "TestMssmParGets failing."  <<std::endl;
               return pass;
            }
         
         return pass;

      }
      //This gives identical results after running up, so don't need messy
      // Test_close
      template <class M>
       bool running_test(MSSMSpec<M> & mssm, M & FS_model_slha, double tol)
      {
         double highscale = 1e+16;
         double lowscale = mssm.mssm_drbar_pars.GetScale();
         double lowscale2 = FS_model_slha.get_scale();
         bool pass = flexiblesusy::is_equal(lowscale,lowscale2);
         if(!pass) {
            OUTPUT << "test fail: " 
                   << "objects not at same scale at start of runtest."
                   << std::endl;
            return pass;              
         }
         
         mssm.mssm_drbar_pars.RunToScale(highscale);
         FS_model_slha.run_to(highscale);
         pass = test_exact(mssm, FS_model_slha);
          if(!pass) {
            OUTPUT << "test fail: " 
                   << "objects not the same after running to MGUT."
                   << std::endl;
            return pass;              
         }
          mssm.mssm_drbar_pars.RunToScale(lowscale);
         FS_model_slha.run_to(lowscale);
         pass = test_exact(mssm, FS_model_slha);
          if(!pass) {
            OUTPUT << "test fail: " 
                   << "objects not the same after running to lowscale."
                   << std::endl;
            return pass;              
         }
                  

         return pass;
      }

      template <class M>
      bool running_test(Spectrum * spec, M & FS_model_slha, 
                   double tol)
      {
         double highscale = 1e+16;
         double lowscale = spec->runningpars.GetScale();
         double lowscale2 = FS_model_slha.get_scale();
         bool pass = flexiblesusy::is_equal(lowscale,lowscale2);
         if(!pass) {
            OUTPUT << "test fail: " 
                   << "objects not at same scale at start of runtest."
                   << std::endl;
            return pass;              
         }
         
         spec->runningpars.RunToScale(highscale);
         FS_model_slha.run_to(highscale);
         pass = test_exact(spec, FS_model_slha);
          if(!pass) {
            OUTPUT << "test fail: " 
                   << "objects not the same after running to MGUT."
                   << std::endl;
            return pass;              
         }
         spec->runningpars.RunToScale(lowscale);
         FS_model_slha.run_to(lowscale);
         pass = test_exact(spec, FS_model_slha);
          if(!pass) {
            OUTPUT << "test fail: " 
                   << "objects not the same after running to lowscale."
                   << std::endl;
            return pass;              
         }
         
         return pass;
      }


   
      
   }
}
