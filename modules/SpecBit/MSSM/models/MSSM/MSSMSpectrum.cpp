# include "MSSMSpectrum.hpp"

using namespace flexiblesusy;

// MSSMSpectrum::MSSMSpectrum(MSSM<Two_scale> m) {
//    mssmsoft = m.;
// }

MSSMSpectrum::MSSMSpectrum() : mssmsoft(), phys(), DRbar(), problems(MSSM_info::particle_names) {
}

MSSMSpectrum::MSSMSpectrum(MSSM_soft_parameters ms, MSSM_physical mp, MSSM_physical mdr, Problems<MSSM_info::NUMBER_OF_PARTICLES> p) : problems(MSSM_info::particle_names) {
   mssmsoft = ms;
   phys = mp;
   DRbar = mdr;   
   problems = p;
}

MSSMSpectrum::~MSSMSpectrum()
{
}

//inspired by softsusy's lsp method.  
//This MSSM version assumes all states mass ordered. 
//returns lsp mass and gives 3 integers to specify the state 
// for most general case of a particle type with mass matrix 
// row and col set to -1 when not needed 
//(row only is used for vector) 
//particle_type = 0 (neutralino), 1(Sneutrino), 2(up squark), 
//3(down squarks), 4(charged slepton), 5(Chargino), 6(gluino)
double MSSMSpectrum::get_lsp_mass(int & particle_type, int & row, int & col) const
{
   row = -1; col = -1;  particle_type =-1;//set default
   double mlsp = fabs(phys.MChi(0)); //most common lsp
   particle_type = 0;
   row = 0;
  
   /// sneutrinos 1
   double temp = phys.MSv(0);
   if (temp < mlsp) { 
      mlsp = temp; 
      particle_type = 1; 
      row=0;
   }
   
   /// up squarks 2
   temp = phys.MSu(0);
   if (temp < mlsp) { 
      mlsp = temp; 
      particle_type = 2;
      row=0;
   }
   
   /// down squarks 3
   temp = phys.MSd(0);
   if (temp < mlsp) { 
      mlsp = temp; 
      particle_type = 3;
      row=0;      
   }
   
   /// sleptons 4
   temp = phys.MSe(0);
   if (temp < mlsp) { 
      mlsp = temp; 
      particle_type = 4; 
      row=0;    
   }
   
  /// charginos 5
   temp = fabs(phys.MCha(0));
   if (temp < mlsp) { 
      mlsp = temp; 
      particle_type = 5; 
      row=0;    
   }
   
   /// gluino 6
   temp = fabs(phys.MGlu);
   if (temp < mlsp) {
      mlsp = temp; 
      particle_type = 6; 
      row=0;    
   }
   
   //We have no gravitino mass right now.   this should be added.
   // /// gravitino -1 
   // temp = displayGravitino();
   // if (temp < mlsp) {
   //   mlsp = temp; posi = 0; posj = 0; particle_type = -1; }  
   
   return mlsp;
}
//The MSSM has just one LSP - often the lightest neutralino
int MSSMSpectrum::get_numbers_stable_particles() const {
   return 1;
}

//these are just wrappers.  Need to test this carefully though
//inheritance is complicated
void MSSMSpectrum::RunToScale(double scale){
   mssmsoft.run_to(scale);
}
double MSSMSpectrum::GetScale() const {
   std::cout << "In mssm implementation of GetSacle" << std::endl;
   return  mssmsoft.get_scale();
}
void MSSMSpectrum::SetScale(double scale){
    mssmsoft.set_scale(scale);
}

std::string MSSMSpectrum::AccessError(std::string state) const {
   std::string errormsg;
   errormsg = "Error accessing "+ state + " element is out of bounds";
   return errormsg;
}


//Takes a string and an index. 
double MSSMSpectrum::get_tree_MassEigenstate(std::string mass) const {
   if(mass == "MZ") 
      {
         return  DRbar.MVZ;
      }
   else if(mass == "MW") 
      {
         return  DRbar.MVWm;
      }
   //I really need to know goldstone index here!
   //Dangerous otherwise
   else if(mass == "MA0") 
      {
         return  DRbar.MAh(1);
      }
   //I really need to know goldstone index here!
   //Dangerous otherwise
    else if(mass == "MHpm") 
      {
         return  DRbar.MHpm(1);
      }
   //I really need to know goldstone index here!
   //Dangerous otherwise
   else if(mass == "MGoldstone0") 
      {
         return  DRbar.MAh(0);
      }
   //I really need to know goldstone index here!
   //Dangerous otherwise
    else if(mass == "MGoldstonePM") 
      {
         return  DRbar.MHpm(0);
      }
    else if (mass == "MGluino")
       {
          return  DRbar.MGlu;
       }
    else if(mass == "MGluon")
      {
         return  DRbar.MVG;
      }
   else if(mass == "MPhoton")
      {
         return  DRbar.MVP;
      }
   else if(mass == "Mtop")
      {
         return  DRbar.MFu(2);
      }
    else if(mass == "Mcharm")
      {
         return  DRbar.MFu(1);
      }
    else if(mass == "Mup")
      {
         return  DRbar.MFu(0);
      }
    else if(mass == "Mbottom")
      {
         return  DRbar.MFd(2);
      }
    else if(mass == "Mstrange")
      {
         return  DRbar.MFd(1);
      }
    else if(mass == "Mdown")
      {
         return  DRbar.MFd(0);
      }
    else if(mass == "Mtau")
      {
         return  DRbar.MFe(2);
      }
    else if(mass == "Mmuon")
      {
         return  DRbar.MFe(1);
      }
    else if(mass == "Melectron")
      {
         return  DRbar.MFe(0);
      }
   else{ 
   std::cout << "Error: The pole mass you requested does not exist in the MSSM" << std::endl;
   return -1.0;
   }
}

//Takes a string and an index. 
double MSSMSpectrum::get_tree_MassEigenstate(std::string mass, int i) const {
   if(mass == "MSd") 
      {
         return DRbar.MSd(i);
      }
   else if(mass == "MSv") 
      {
         return DRbar.MSv(i);
      }
   else if(mass == "MSu")
      {
         return DRbar.MSu(i);
      }
   else if(mass == "MSe")
      {
         return DRbar.MSe(i);
      } 
   else if(mass == "Mh0") 
      {
         return DRbar.Mhh(i);
      }
   //Here we may access the goldstone boson
   //this is probably too dangerous to keep!
   else if(mass == "MA0") 
      {
         return DRbar.MAh(i);
      }
   //Here we may access the goldstone boson
   //this is probably too dangerous to keep!
    else if(mass == "MHpm") 
      {
         return DRbar.MHpm(i);
      }
   else if(mass == "MCha") 
      {
         return DRbar.MCha(i);
      }
   else if(mass == "MChi") 
      {
         return DRbar.MChi(i);
      }
   else{ 
   std::cout << "Error: The pole mass you requested does not exist in the MSSM" << std::endl;
   return -1.0;
   }
}


//Takes a string and an index. 
double MSSMSpectrum::get_tree_MassEigenstate(std::string mass, int i, int j) const {
   std::cout << "Error: The pole mass you requested does not exist in the MSSM" << std::endl;
   return -1.0;

}


//Takes a string and an index. 
double MSSMSpectrum::get_Pole_Mass(std::string polemass) const {
   if(polemass == "MZ") 
      {
         return phys.MVZ;
      }
   else if(polemass == "MW") 
      {
         return phys.MVWm;
      }
   //I really need to know goldstone index here!
   //Dangerous otherwise
   else if(polemass == "MA0") 
      {
         return phys.MAh(1);
      }
   //I really need to know goldstone index here!
   //Dangerous otherwise
    else if(polemass == "MHpm") 
      {
         return phys.MHpm(1);
      }
   //I really need to know goldstone index here!
   //Dangerous otherwise
   else if(polemass == "MGoldstone0") 
      {
         return phys.MAh(0);
      }
   //I really need to know goldstone index here!
   //Dangerous otherwise
    else if(polemass == "MGoldstonePM") 
      {
         return phys.MHpm(0);
      }
    else if (polemass == "MGluino")
       {
          return phys.MGlu;
       }
    else if(polemass == "MGluon")
      {
         return phys.MVG;
      }
   else if(polemass == "MPhoton")
      {
         return phys.MVP;
      }
   else if(polemass == "Mtop")
      {
         return phys.MFu(2);
      }
    else if(polemass == "Mcharm")
      {
         return phys.MFu(1);
      }
    else if(polemass == "Mup")
      {
         return phys.MFu(0);
      }
    else if(polemass == "Mbottom")
      {
         return phys.MFd(2);
      }
    else if(polemass == "Mstrange")
      {
         return phys.MFd(1);
      }
    else if(polemass == "Mdown")
      {
         return phys.MFd(0);
      }
    else if(polemass == "Mtau")
      {
         return phys.MFe(2);
      }
    else if(polemass == "Mmuon")
      {
         return phys.MFe(1);
      }
    else if(polemass == "Melectron")
      {
         return phys.MFe(0);
      }
   else{ 
   std::cout << "Error: The pole mass you requested does not exist in the MSSM" << std::endl;
   return -1.0;
   }
}

//Takes a string and an index. 
double MSSMSpectrum::get_Pole_Mass(std::string polemass, int i) const {
   if(polemass == "MSd") 
      {
         return phys.MSd(i);
      }
   else if(polemass == "MSv") 
      {
         return phys.MSv(i);
      }
   else if(polemass == "MSu")
      {
         return phys.MSu(i);
      }
   else if(polemass == "MSe")
      {
         return phys.MSe(i);
      } 
   else if(polemass == "Mh0") 
      {
         return phys.Mhh(i);
      }
   //Here we may access the goldstone boson
   //this is probably too dangerous to keep!
   else if(polemass == "MA0") 
      {
         return phys.MAh(i);
      }
   //Here we may access the goldstone boson
   //this is probably too dangerous to keep!
    else if(polemass == "MHpm") 
      {
         return phys.MHpm(i);
      }
   else if(polemass == "MCha") 
      {
         return phys.MCha(i);
      }
   else if(polemass == "MChi") 
      {
         return phys.MChi(i);
      }
   else{ 
   std::cout << "Error: The pole mass you requested does not exist in the MSSM" << std::endl;
   return -1.0;
   }
}


double MSSMSpectrum::get_tree_Mixing_angle(std::string MixMat) const {
 
   std::cout << "Error: Sorry I know nothing" << std::endl;
   return 6666666666666.6666666666666;

}
double MSSMSpectrum::get_tree_Mixing_element(std::string MixMat, int i, int j) const {

 //Down squark mixing matrix
   if(MixMat == "ZD") {
      return DRbar.ZD(i,j);
   }
   //Up squark mixing matrix
   else if(MixMat == "ZU") {
      return DRbar.ZU(i,j);
   }
   //Charged slepton mixing matrix
   else if(MixMat == "ZE") {
      return DRbar.ZE(i,j);
   }
   //Charged sneutrino mixing matrix
   else if(MixMat == "ZV") {
      return DRbar.ZV(i,j);
   }
   //CP even Higgs mixing matrix
   else if(MixMat == "ZH") {
      return DRbar.ZH(i,j);
   }
    //CP odd Higgs mixing matrix
   else if(MixMat == "ZA") {
      return DRbar.ZA(i,j);
   }
   //Charged Higgs mixing matrix
   else if(MixMat == "ZPM") {
      return DRbar.ZP(i,j);
   }
   // //Neutralino mass matrix
   // else if(MixMat == "ZN") {
   //    return DRbar.ZN(i,j);
   // }
   //  //Chargino mass matrices
   // else if(MixMat == "UM") {
   //    return DRbarUM(i,j);
   // }
   // //Chargino mass matrices
   // else if(MixMat == "UP") {
   //    return DRbar.UP(i,j);
   // }  
    
   // //Down quark left mixing matrix
   // if(MixMat == "ZDL") {
   //    return DRbar.ZDL(i,j);
   // }
   // //Down quark right mixing matrix
   // if(MixMat == "ZDR") {
   //    return DRbar.ZDL(i,j);
   // }
   // //Up quark left mixing matrix
   // else if(MixMat == "ZUL") {
   //    return DRbar.ZUL(i,j);
   // }
   //  //Up quark right mixing matrix
   // else if(MixMat == "ZUR") {
   //    return DRbar.ZUR(i,j);
   // }
   // //Charged lepton left mixing matrix
   // else if(MixMat == "ZEL") {
   //    return DRbar.ZEL(i,j);
   // }
   // //Charged lepton left mixing matrix
   // else if(MixMat == "ZER") {
   //    return DRbar.ZER(i,j);
   // }

std::cout << "Error: Sorry I know nothing" << std::endl;
   return 6666666666666.6666666666666;

}

//Takes a string and an index. 
double MSSMSpectrum::get_Pole_Mass(std::string polemass, int i, int j) const {
   std::cout << "Error: The pole mass you requested does not exist in the MSSM" << std::endl;
   return -1.0;

}



double MSSMSpectrum::get_Mixing_angle(std::string) const {
   std::cout << "Error: Sorry I know nothing" << std::endl;
   return 6666666666666.6666666666666;
}

double MSSMSpectrum::get_Mixing_element(std::string MixMat, int i, int j) const {
   //Down squark mixing matrix
   if(MixMat == "ZD") {
      return phys.ZD(i,j);
   }
   //Up squark mixing matrix
   else if(MixMat == "ZU") {
      return phys.ZU(i,j);
   }
   //Charged slepton mixing matrix
   else if(MixMat == "ZE") {
      return phys.ZE(i,j);
   }
   //Charged sneutrino mixing matrix
   else if(MixMat == "ZV") {
      return phys.ZV(i,j);
   }
   //CP even Higgs mixing matrix
   else if(MixMat == "ZH") {
      return phys.ZH(i,j);
   }
    //CP odd Higgs mixing matrix
   else if(MixMat == "ZA") {
      return phys.ZA(i,j);
   }
   //Charged Higgs mixing matrix
   else if(MixMat == "ZPM") {
      return phys.ZP(i,j);
   }
   // //Neutralino mass matrix
   // else if(MixMat == "ZN") {
   //    return phys.ZN(i,j);
   // }
   //  //Chargino mass matrices
   // else if(MixMat == "UM") {
   //    return phys.UM(i,j);
   // }
   // //Chargino mass matrices
   // else if(MixMat == "UP") {
   //    return phys.UP(i,j);
   // }  
    
   // //Down quark left mixing matrix
   // if(MixMat == "ZDL") {
   //    return phys.ZDL(i,j);
   // }
   // //Down quark right mixing matrix
   // if(MixMat == "ZDR") {
   //    return phys.ZDL(i,j);
   // }
   // //Up quark left mixing matrix
   // else if(MixMat == "ZUL") {
   //    return phys.ZUL(i,j);
   // }
   //  //Up quark right mixing matrix
   // else if(MixMat == "ZUR") {
   //    return phys.ZUR(i,j);
   // }
   // //Charged lepton left mixing matrix
   // else if(MixMat == "ZEL") {
   //    return phys.ZEL(i,j);
   // }
   // //Charged lepton left mixing matrix
   // else if(MixMat == "ZER") {
   //    return phys.ZER(i,j);
   // }
 
   std::cout << "Error: Sorry I know nothing" << std::endl;
   return 6666666666666.6666666666666;
}

// void MSSM<Two_scale>::mass2_par_mapping() {
//       mass2_par_map["mHd2"] = &MSSM<Two_scale>::DRbar.get_mHd2;
//       mass2_par_map["mHu2"] = &MSSM<Two_scale>::DRbar.get_mHu2;
//       mass2_par_map["BMu"] = &MSSM<Two_scale>::DRbar.get_BMu;

//    }

// double MSSM<Two_scale>::get_mass2_par(std::string masssq) const {
//    std::map<std::string,getmethod>::const_iterator found= mass2_par_map.find(masssq);
//    if(found!=mass2_par_map.end()){
//       getmethod func = found->second;
//       double result = (this->*func)();
//       return result;
//    }
   
// }


double MSSMSpectrum::get_mass2_par(std::string masssq) const {
   std::cout<< "this has no implementation yet." << std::endl;   
}


double MSSMSpectrum::get_mass4_parameter(std::string mass) const {
 std::cout << "Error: The dimension 4 parameter you requested does not exist in the MSSM" << std::endl;
   return -1.0;   
}
double MSSMSpectrum::get_mass4_parameter(std::string, int i) const {
   std::cout << "Error: The dimension 4 parameter you requested does not exist in the MSSM" << std::endl;
   return -1.0;
}
double MSSMSpectrum::get_mass4_parameter(std::string mass, int i, int j) const {
std::cout << "Error: The dimension 4 parameter you requested does not exist in the MSSM" << std::endl;
   return -1.0;

}

double MSSMSpectrum::get_mass3_parameter(std::string mass) const {
 std::cout << "Error: The dimension 3 parameter you requested does not exist in the MSSM" << std::endl;
   return -1.0;   
}
double MSSMSpectrum::get_mass3_parameter(std::string, int i) const {
   std::cout << "Error: The dimension 3 parameter you requested does not exist in the MSSM" << std::endl;
   return -1.0;
}
double MSSMSpectrum::get_mass3_parameter(std::string mass, int i, int j) const {
std::cout << "Error: The dimension 3 parameter you requested does not exist in the MSSM" << std::endl;
   return -1.0;

}
double MSSMSpectrum::get_mass2_parameter(std::string mass) const {
   if(mass == "BMu"){
      return mssmsoft.get_BMu();
   }
   else if (mass == "mHd2"){
      return mssmsoft.get_mHd2();
   }
    else if (mass == "mHu2"){
      return mssmsoft.get_mHu2();
   }
   else{
 std::cout << "Error: The dimension 2 parameter you requested does not exist in the MSSM" << std::endl;
   return -1.0;
   }
}
double MSSMSpectrum::get_mass2_parameter(std::string, int i) const {
   std::cout << "Error: The dimension 2 parameter you requested does not exist in the MSSM" << std::endl;
   return -1.0;
}
double MSSMSpectrum::get_mass2_parameter(std::string mass, int i, int j) const {
   if(mass == "mq2"){
      return mssmsoft.get_mq2(i,j);
   }
   else if (mass == "ml2"){
      return mssmsoft.get_ml2(i,j);
   }
    else if (mass == "md2"){
      return mssmsoft.get_md2(i,j);
   }
    else if (mass == "mu2"){
      return mssmsoft.get_mu2(i,j);
   }
    else if (mass == "me2"){
      return mssmsoft.get_me2(i,j);
   }
 else{
  std::cout << "Error: The dimension 1 parameter you requested does not exist in the MSSM" << std::endl;
   return -1.0;
   }
}

double MSSMSpectrum::get_mass_parameter(std::string mass) const {
   if(mass == "Mu"){
      return mssmsoft.get_Mu();
   }
   else if (mass == "vu") {
      return mssmsoft.get_vu();
   }
   else if (mass == "vd") {
      return mssmsoft.get_vd();
   }
   else if (mass == "vev") {
      return sqrt(mssmsoft.get_vu()*mssmsoft.get_vu() + mssmsoft.get_vd()*mssmsoft.get_vd());
   }
   else if (mass == "M1") {
      //This name may change at some point.
      return mssmsoft.get_MassB();
   } 
    else if (mass == "M2") {
      //This name may change at some point.
      return mssmsoft.get_MassWB();
   } 
    else if (mass == "M3") {
      //This name may change at some point.
      return mssmsoft.get_MassG();
   } 
   else{
  std::cout << "Error: The dimension 1 parameter you requested does not exist in the MSSM" << std::endl;
   return -1.0;
   }
}

double MSSMSpectrum::get_mass_parameter(std::string, int) const {

  std::cout << "Error: The dimension 1 parameter you requested does not exist in the MSSM" << std::endl;
   return -1.0;
}
double MSSMSpectrum::get_mass_parameter(std::string mass, int i, int j) const {
   if (mass == "TYd" || mass == "ad"){
      return mssmsoft.get_TYd(i,j);
   }
   else if (mass == "TYe" || mass == "ae"){
      return mssmsoft.get_TYe(i,j);
   } 
   else if (mass == "TYu" || mass == "au"){
      return mssmsoft.get_TYu(i,j);
   } 
   else{
  std::cout << "Error: The dimension 1 parameter you requested does not exist in the MSSM" << std::endl;
   return -1.0;
   }
}
   
   double MSSMSpectrum::get_dimensionless_parameter(std::string coupling) const {
      if(coupling == "g1"){
         return mssmsoft.get_g1();
      }
      else if (coupling == "g2"){
         return mssmsoft.get_g2();
      }
      else if (coupling == "g3"){
         return mssmsoft.get_g3();
      }
      else if (coupling == "tanbeta"){
         return mssmsoft.get_vu() / mssmsoft.get_vd();
      }
      else{
  std::cout << "Error: The dimensionless parameter you requested does not exist in the MSSM" << std::endl;
   return -1.0;
      }
}

   double MSSMSpectrum::get_dimensionless_parameter(std::string coupling, int i) const {   
  std::cout << "Error: The dimensionless parameter you requested does not exist in the MSSM" << std::endl;
   return -1.0;
}



   double MSSMSpectrum::get_dimensionless_parameter(std::string coupling, int i, int j) const {
      if(coupling == "Yu"){
         return mssmsoft.get_Yu(i,j);
      }
      else if(coupling == "Yd"){
         return mssmsoft.get_Yd(i,j);
      }
      else if(coupling == "Ye"){
         return mssmsoft.get_Ye(i,j);
      }
      else{
  std::cout << "Error: The pole mass you requested does not exist in the MSSM" << std::endl;
   return -1.0;
      }
}



