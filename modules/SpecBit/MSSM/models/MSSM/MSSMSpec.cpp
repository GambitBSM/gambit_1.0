# include "MSSMSpec.hpp"


using namespace flexiblesusy;

MSSMSpec::MSSMSpec(MSSM<Two_scale> m) : model(m) 
{
}

MSSMSpec::~MSSMSpec()
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
double MSSMSpec::get_lsp_mass(int & particle_type, int & row, int & col) const
{
   row = -1; col = -1;  particle_type =-1;//set default
   double mlsp = fabs(model.get_physical().MChi(0)); //most common lsp
   particle_type = 0;
   row = 0;
  
   /// sneutrinos 1
   double temp = model.get_physical().MSv(0);
   if (temp < mlsp) { 
      mlsp = temp; 
      particle_type = 1; 
      row=0;
   }
   
   /// up squarks 2
   temp = model.get_physical().MSu(0);
   if (temp < mlsp) { 
      mlsp = temp; 
      particle_type = 2;
      row=0;
   }
   
   /// down squarks 3
   temp = model.get_physical().MSd(0);
   if (temp < mlsp) { 
      mlsp = temp; 
      particle_type = 3;
      row=0;      
   }
   
   /// sleptons 4
   temp = model.get_physical().MSe(0);
   if (temp < mlsp) { 
      mlsp = temp; 
      particle_type = 4; 
      row=0;    
   }
   
  /// charginos 5
   temp = fabs(model.get_physical().MCha(0));
   if (temp < mlsp) { 
      mlsp = temp; 
      particle_type = 5; 
      row=0;    
   }
   
   /// gluino 6
   temp = fabs(model.get_physical().MGlu);
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
int MSSMSpec::get_numbers_stable_particles() const {
   return 1;
}

//these are just wrappers.  Need to test this carefully though
//inheritance is complicated
void MSSMSpec::RunToScale(double scale){
   model.run_to(scale);
}
double MSSMSpec::GetScale() const {
   std::cout << "In mssm implementation of GetSacle" << std::endl;
   return  model.get_scale();
}
void MSSMSpec::SetScale(double scale){
    model.set_scale(scale);
}

std::string MSSMSpec::AccessError(std::string state) const {
   std::string errormsg;
   errormsg = "Error accessing "+ state + " element is out of bounds";
   return errormsg;
}


//Takes a string and an index. 
double MSSMSpec::get_tree_MassEigenstate(std::string mass) const {
   if(mass == "MZ") 
      {
         return  model.get_MVZ();
      }
   else if(mass == "MW") 
      {
         return  model.get_MVWm();
      }
   //I really need to know goldstone index here!
   //Dangerous otherwise
   else if(mass == "MA0") 
      {
         return  model.get_MAh()(1);
      }
   //I really need to know goldstone index here!
   //Dangerous otherwise
    else if(mass == "MHpm") 
      {
         return  model.get_MHpm()(1);
      }
   //I really need to know goldstone index here!
   //Dangerous otherwise
   else if(mass == "MGoldstone0") 
      {
         return  model.get_MAh()(0);
      }
   //I really need to know goldstone index here!
   //Dangerous otherwise
    else if(mass == "MGoldstonePM") 
      {
         return  model.get_MHpm()(0);
      }
    else if (mass == "MGluino")
       {
          return  model.get_MGlu();
       }
    else if(mass == "MGluon")
      {
         return  model.get_MVG();
      }
   else if(mass == "MPhoton")
      {
         return  model.get_MVP();
      }
   else if(mass == "Mtop")
      {
         return  model.get_MFu()(2);
      }
    else if(mass == "Mcharm")
      {
         return  model.get_MFu()(1);
      }
    else if(mass == "Mup")
      {
         return  model.get_MFu()(0);
      }
    else if(mass == "Mbottom")
      {
         return  model.get_MFd()(2);
      }
    else if(mass == "Mstrange")
      {
         return  model.get_MFd()(1);
      }
    else if(mass == "Mdown")
      {
         return  model.get_MFd()(0);
      }
    else if(mass == "Mtau")
      {
         return  model.get_MFe()(2);
      }
    else if(mass == "Mmuon")
      {
         return  model.get_MFe()(1);
      }
    else if(mass == "Melectron")
      {
         return  model.get_MFe()(0);
      }
   else{ 
   std::cout << "Error: The pole mass you requested does not exist in the MSSM" << std::endl;
   return -1.0;
   }
}

//Takes a string and an index. 
double MSSMSpec::get_tree_MassEigenstate(std::string mass, int i) const {
   if(mass == "MSd") 
      {
         return model.get_MSd()(i);
      }
   else if(mass == "MSv") 
      {
         return model.get_MSv()(i);
      }
   else if(mass == "MSu")
      {
         return model.get_MSu()(i);
      }
   else if(mass == "MSe")
      {
         return model.get_MSe()(i);
      } 
   else if(mass == "Mh0") 
      {
         return model.get_Mhh()(i);
      }
   //Here we may access the goldstone boson
   //this is probably too dangerous to keep!
   else if(mass == "MA0") 
      {
         return model.get_MAh()(i);
      }
   //Here we may access the goldstone boson
   //this is probably too dangerous to keep!
    else if(mass == "MHpm") 
      {
         return model.get_MHpm()(i);
      }
   else if(mass == "MCha") 
      {
         return model.get_MCha()(i);
      }
   else if(mass == "MChi") 
      {
         return model.get_MChi()(i);
      }
   else{ 
   std::cout << "Error: The pole mass you requested does not exist in the MSSM" << std::endl;
   return -1.0;
   }
}


//Takes a string and an index. 
double MSSMSpec::get_tree_MassEigenstate(std::string mass, int i, int j) const {
   std::cout << "Error: The pole mass you requested does not exist in the MSSM" << std::endl;
   return -1.0;

}


//Takes a string and an index. 
double MSSMSpec::get_Pole_Mass(std::string polemass) const {
   if(polemass == "MZ") 
      {
         return model.get_physical().MVZ;
      }
   else if(polemass == "MW") 
      {
         return model.get_physical().MVWm;
      }
   //I really need to know goldstone index here!
   //Dangerous otherwise
   else if(polemass == "MA0") 
      {
         return model.get_physical().MAh(1);
      }
   //I really need to know goldstone index here!
   //Dangerous otherwise
    else if(polemass == "MHpm") 
      {
         return model.get_physical().MHpm(1);
      }
   //I really need to know goldstone index here!
   //Dangerous otherwise
   else if(polemass == "MGoldstone0") 
      {
         return model.get_physical().MAh(0);
      }
   //I really need to know goldstone index here!
   //Dangerous otherwise
    else if(polemass == "MGoldstonePM") 
      {
         return model.get_physical().MHpm(0);
      }
    else if (polemass == "MGluino")
       {
          return model.get_physical().MGlu;
       }
    else if(polemass == "MGluon")
      {
         return model.get_physical().MVG;
      }
   else if(polemass == "MPhoton")
      {
         return model.get_physical().MVP;
      }
   else if(polemass == "Mtop")
      {
         return model.get_physical().MFu(2);
      }
    else if(polemass == "Mcharm")
      {
         return model.get_physical().MFu(1);
      }
    else if(polemass == "Mup")
      {
         return model.get_physical().MFu(0);
      }
    else if(polemass == "Mbottom")
      {
         return model.get_physical().MFd(2);
      }
    else if(polemass == "Mstrange")
      {
         return model.get_physical().MFd(1);
      }
    else if(polemass == "Mdown")
      {
         return model.get_physical().MFd(0);
      }
    else if(polemass == "Mtau")
      {
         return model.get_physical().MFe(2);
      }
    else if(polemass == "Mmuon")
      {
         return model.get_physical().MFe(1);
      }
    else if(polemass == "Melectron")
      {
         return model.get_physical().MFe(0);
      }
   else{ 
   std::cout << "Error: The pole mass you requested does not exist in the MSSM" << std::endl;
   return -1.0;
   }
}

//Takes a string and an index. 
double MSSMSpec::get_Pole_Mass(std::string polemass, int i) const {
   if(polemass == "MSd") 
      {
         return model.get_physical().MSd(i);
      }
   else if(polemass == "MSv") 
      {
         return model.get_physical().MSv(i);
      }
   else if(polemass == "MSu")
      {
         return model.get_physical().MSu(i);
      }
   else if(polemass == "MSe")
      {
         return model.get_physical().MSe(i);
      } 
   else if(polemass == "Mh0") 
      {
         return model.get_physical().Mhh(i);
      }
   //Here we may access the goldstone boson
   //this is probably too dangerous to keep!
   else if(polemass == "MA0") 
      {
         return model.get_physical().MAh(i);
      }
   //Here we may access the goldstone boson
   //this is probably too dangerous to keep!
    else if(polemass == "MHpm") 
      {
         return model.get_physical().MHpm(i);
      }
   else if(polemass == "MCha") 
      {
         return model.get_physical().MCha(i);
      }
   else if(polemass == "MChi") 
      {
         return model.get_physical().MChi(i);
      }
   else{ 
   std::cout << "Error: The pole mass you requested does not exist in the MSSM" << std::endl;
   return -1.0;
   }
}


double MSSMSpec::get_tree_Mixing_angle(std::string MixMat) const {
 
   std::cout << "Error: Sorry I know nothing" << std::endl;
   return 6666666666666.6666666666666;

}
double MSSMSpec::get_tree_Mixing_element(std::string MixMat, int i, int j) const {

 //Down squark mixing matrix
   if(MixMat == "ZD") {
      return model.get_ZD()(i,j);
   }
   //Up squark mixing matrix
   else if(MixMat == "ZU") {
      return model.get_ZU()(i,j);
   }
   //Charged slepton mixing matrix
   else if(MixMat == "ZE") {
      return model.get_ZE()(i,j);
   }
   //Charged sneutrino mixing matrix
   else if(MixMat == "ZV") {
      return model.get_ZV()(i,j);
   }
   //CP even Higgs mixing matrix
   else if(MixMat == "ZH") {
      return model.get_ZH()(i,j);
   }
    //CP odd Higgs mixing matrix
   else if(MixMat == "ZA") {
      return model.get_ZA()(i,j);
   }
   //Charged Higgs mixing matrix
   else if(MixMat == "ZPM") {
      return model.get_ZP()(i,j);
   }
   // //Neutralino mass matrix
   // else if(MixMat == "ZN") {
   //    return model.get_get_physical().ZN()(i,j);
   // }
   //  //Chargino mass matrices
   // else if(MixMat == "UM") {
   //    return model.get_physical().UM()(i,j);
   // }
   // //Chargino mass matrices
   // else if(MixMat == "UP") {
   //    return model.get_physical().UP()(i,j);
   // }  
    
   // //Down quark left mixing matrix
   // if(MixMat == "ZDL") {
   //    return model.get_physical().ZDL()(i,j);
   // }
   // //Down quark right mixing matrix
   // if(MixMat == "ZDR") {
   //    return model.get_physical().ZDL()(i,j);
   // }
   // //Up quark left mixing matrix
   // else if(MixMat == "ZUL") {
   //    return model.get_physical().ZUL()(i,j);
   // }
   //  //Up quark right mixing matrix
   // else if(MixMat == "ZUR") {
   //    return model.get_physical().ZUR()(i,j);
   // }
   // //Charged lepton left mixing matrix
   // else if(MixMat == "ZEL") {
   //    return model.get_physical().ZEL()(i,j);
   // }
   // //Charged lepton left mixing matrix
   // else if(MixMat == "ZER") {
   //    return model.get_physical().ZER()(i,j);
   // }

std::cout << "Error: Sorry I know nothing" << std::endl;
   return 6666666666666.6666666666666;

}

//Takes a string and an index. 
double MSSMSpec::get_Pole_Mass(std::string polemass, int i, int j) const {
   std::cout << "Error: The pole mass you requested does not exist in the MSSM" << std::endl;
   return -1.0;

}



double MSSMSpec::get_Mixing_angle(std::string) const {
   std::cout << "Error: Sorry I know nothing" << std::endl;
   return 6666666666666.6666666666666;
}

double MSSMSpec::get_Mixing_element(std::string MixMat, int i, int j) const {
   //Down squark mixing matrix
   if(MixMat == "ZD") {
      return model.get_physical().ZD(i,j);
   }
   //Up squark mixing matrix
   else if(MixMat == "ZU") {
      return model.get_physical().ZU(i,j);
   }
   //Charged slepton mixing matrix
   else if(MixMat == "ZE") {
      return model.get_physical().ZE(i,j);
   }
   //Charged sneutrino mixing matrix
   else if(MixMat == "ZV") {
      return model.get_physical().ZV(i,j);
   }
   //CP even Higgs mixing matrix
   else if(MixMat == "ZH") {
      return model.get_physical().ZH(i,j);
   }
    //CP odd Higgs mixing matrix
   else if(MixMat == "ZA") {
      return model.get_physical().ZA(i,j);
   }
   //Charged Higgs mixing matrix
   else if(MixMat == "ZPM") {
      return model.get_physical().ZP(i,j);
   }
   // //Neutralino mass matrix
   // else if(MixMat == "ZN") {
   //    return model.get_physical().ZN(i,j);
   // }
   //  //Chargino mass matrices
   // else if(MixMat == "UM") {
   //    return model.get_physical().UM(i,j);
   // }
   // //Chargino mass matrices
   // else if(MixMat == "UP") {
   //    return model.get_physical().UP(i,j);
   // }  
    
   // //Down quark left mixing matrix
   // if(MixMat == "ZDL") {
   //    return model.get_physical().ZDL(i,j);
   // }
   // //Down quark right mixing matrix
   // if(MixMat == "ZDR") {
   //    return model.get_physical().ZDL(i,j);
   // }
   // //Up quark left mixing matrix
   // else if(MixMat == "ZUL") {
   //    return model.get_physical().ZUL(i,j);
   // }
   //  //Up quark right mixing matrix
   // else if(MixMat == "ZUR") {
   //    return model.get_physical().ZUR(i,j);
   // }
   // //Charged lepton left mixing matrix
   // else if(MixMat == "ZEL") {
   //    return model.get_physical().ZEL(i,j);
   // }
   // //Charged lepton left mixing matrix
   // else if(MixMat == "ZER") {
   //    return model.get_physical().ZER(i,j);
   // }
 
   std::cout << "Error: Sorry I know nothing" << std::endl;
   return 6666666666666.6666666666666;
}

// void MSSM<Two_scale>::mass2_par_mapping() {
//       mass2_par_map["mHd2"] = &MSSM<Two_scale>::model.get_mHd2;
//       mass2_par_map["mHu2"] = &MSSM<Two_scale>::model.get_mHu2;
//       mass2_par_map["BMu"] = &MSSM<Two_scale>::model.get_BMu;

//    }

// double MSSM<Two_scale>::get_mass2_par(std::string masssq) const {
//    std::map<std::string,getmethod>::const_iterator found= mass2_par_map.find(masssq);
//    if(found!=mass2_par_map.end()){
//       getmethod func = found->second;
//       double result = (this->*func)();
//       return result;
//    }
   
// }


// double MSSMSpec::get_mass2_par(std::string masssq) const {
//    std::cout<< "this has no implementation yet." << std::endl;   
// }


double MSSMSpec::get_mass4_parameter(std::string mass) const {
 std::cout << "Error: The dimension 4 parameter you requested does not exist in the MSSM" << std::endl;
   return -1.0;   
}
double MSSMSpec::get_mass4_parameter(std::string, int i) const {
   std::cout << "Error: The dimension 4 parameter you requested does not exist in the MSSM" << std::endl;
   return -1.0;
}
double MSSMSpec::get_mass4_parameter(std::string mass, int i, int j) const {
std::cout << "Error: The dimension 4 parameter you requested does not exist in the MSSM" << std::endl;
   return -1.0;

}

double MSSMSpec::get_mass3_parameter(std::string mass) const {
 std::cout << "Error: The dimension 3 parameter you requested does not exist in the MSSM" << std::endl;
   return -1.0;   
}
double MSSMSpec::get_mass3_parameter(std::string, int i) const {
   std::cout << "Error: The dimension 3 parameter you requested does not exist in the MSSM" << std::endl;
   return -1.0;
}
double MSSMSpec::get_mass3_parameter(std::string mass, int i, int j) const {
std::cout << "Error: The dimension 3 parameter you requested does not exist in the MSSM" << std::endl;
   return -1.0;

}
double MSSMSpec::get_mass2_parameter(std::string mass) const {
   if(mass == "BMu"){
      return model.get_BMu();
   }
   else if (mass == "mHd2"){
      return model.get_mHd2();
   }
    else if (mass == "mHu2"){
      return model.get_mHu2();
   }
   else{
 std::cout << "Error: The dimension 2 parameter you requested does not exist in the MSSM" << std::endl;
   return -1.0;
   }
}
double MSSMSpec::get_mass2_parameter(std::string, int i) const {
   std::cout << "Error: The dimension 2 parameter you requested does not exist in the MSSM" << std::endl;
   return -1.0;
}
double MSSMSpec::get_mass2_parameter(std::string mass, int i, int j) const {
   if(mass == "mq2"){
      return model.get_mq2(i,j);
   }
   else if (mass == "ml2"){
      return model.get_ml2(i,j);
   }
    else if (mass == "md2"){
      return model.get_md2(i,j);
   }
    else if (mass == "mu2"){
      return model.get_mu2(i,j);
   }
    else if (mass == "me2"){
      return model.get_me2(i,j);
   }
 else{
  std::cout << "Error: The dimension 1 parameter you requested does not exist in the MSSM" << std::endl;
   return -1.0;
   }
}

double MSSMSpec::get_mass_parameter(std::string mass) const {
   if(mass == "Mu"){
      return model.get_Mu();
   }
   else if (mass == "vu") {
      return model.get_vu();
   }
   else if (mass == "vd") {
      return model.get_vd();
   }
   else if (mass == "vev") {
      return sqrt(model.get_vu()*model.get_vu() + model.get_vd()*model.get_vd());
   }
   else if (mass == "M1") {
      //This name may change at some point.
      return model.get_MassB();
   } 
    else if (mass == "M2") {
      //This name may change at some point.
      return model.get_MassWB();
   } 
    else if (mass == "M3") {
      //This name may change at some point.
      return model.get_MassG();
   } 
   else{
  std::cout << "Error: The dimension 1 parameter you requested does not exist in the MSSM" << std::endl;
   return -1.0;
   }
}

double MSSMSpec::get_mass_parameter(std::string, int) const {

  std::cout << "Error: The dimension 1 parameter you requested does not exist in the MSSM" << std::endl;
   return -1.0;
}
double MSSMSpec::get_mass_parameter(std::string mass, int i, int j) const {
   if (mass == "TYd" || mass == "ad"){
      return model.get_TYd(i,j);
   }
   else if (mass == "TYe" || mass == "ae"){
      return model.get_TYe(i,j);
   } 
   else if (mass == "TYu" || mass == "au"){
      return model.get_TYu(i,j);
   } 
   else{
  std::cout << "Error: The dimension 1 parameter you requested does not exist in the MSSM" << std::endl;
   return -1.0;
   }
}
   
   double MSSMSpec::get_dimensionless_parameter(std::string coupling) const {
      if(coupling == "g1"){
         return model.get_g1();
      }
      else if (coupling == "g2"){
         return model.get_g2();
      }
      else if (coupling == "g3"){
         return model.get_g3();
      }
      else if (coupling == "tanbeta"){
         return model.get_vu() / model.get_vd();
      }
      else{
  std::cout << "Error: The dimensionless parameter you requested does not exist in the MSSM" << std::endl;
   return -1.0;
      }
}

   double MSSMSpec::get_dimensionless_parameter(std::string coupling, int i) const {   
  std::cout << "Error: The dimensionless parameter you requested does not exist in the MSSM" << std::endl;
   return -1.0;
}



   double MSSMSpec::get_dimensionless_parameter(std::string coupling, int i, int j) const {
      if(coupling == "Yu"){
         return model.get_Yu(i,j);
      }
      else if(coupling == "Yd"){
         return model.get_Yd(i,j);
      }
      else if(coupling == "Ye"){
         return model.get_Ye(i,j);
      }
      else{
  std::cout << "Error: The pole mass you requested does not exist in the MSSM" << std::endl;
   return -1.0;
      }
}

// Function to initialise mass2_map
MSSMSpec::fmap MSSMSpec::fill_mass2_map() 
{
   fmap tmp_map;
  
   tmp_map["BMu"] = &MssmFS::get_BMu;
   tmp_map["mHd2"] = &MssmFS::get_mHd2;
   tmp_map["mHu2"] = &MssmFS::get_mHu2;

   return tmp_map;
}


MSSM<Two_scale> MSSMSpec:: get_modelobject() {
   return model;
}
