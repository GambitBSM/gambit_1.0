//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Helper functions for SMInputs struct
///
///  *********************************************
///
///  Authors: 
///  <!-- add name and date if you modify -->
///   
///  \author Ben Farmer
///          (benjamin.farmer@fysik.su.se)
///  \date 2015 Mar 
///
///  *********************************************

#include "gambit/Utils/standalone_error_handlers.hpp"
#include "gambit/Elements/SMInputs.hpp"

namespace Gambit {

   // Get an entry from an SLHAea object, with some error checking
   double SLHAea_get(const SLHAea::Coll& data, const std::string& block, const int index)
   {
      double output;
      try {
        output = SLHAea::to<double>(data.at(block).at(index).at(1));
      }
      catch (const std::out_of_range& e) {
        std::ostringstream errmsg;
        errmsg << "Error accessing data at index "<<index<<" of block "<<block<<". Please check that the SLHAea object was properly filled." << std::endl;
        errmsg  << "(Received out_of_range error from SLHAea class with message: " << e.what() << ")";
        utils_error().raise(LOCAL_INFO,errmsg.str());    
      }
      return output;
   }

   double SLHAea_get_or_def(const SLHAea::Coll& data, const std::string& block, const int index, const double defvalue)
   {
      double output;
      try {
        output = SLHAea::to<double>(data.at(block).at(index).at(1));
      }
      catch (const std::out_of_range& e) {
        std::ostringstream warn;
        warn << "Warning! No entry found at index "<<index<<" of block "<<block<<". Using default value: "<<defvalue<< std::endl;
        utils_warning().raise(LOCAL_INFO,warn.str());    
      }
      return output;
   }

   // Fill SMInputs struct from an SLHAea object
   SMInputs fill_SMInputs_from_SLHAea(SLHAea::Coll& data)
   { 
      /// Construct from SMInputs block of SLHAea object 
      SMInputs sminputs;
  
      /// TODO: update defaults to latest PDG. Might want to centralise some of these things. 
      sminputs.alphainv = SLHAea_get_or_def(data,"SMINPUTS",1 , 1.27934000E+02);   // alpha^(-1) SM MSbar(MZ)
      sminputs.GF       = SLHAea_get_or_def(data,"SMINPUTS",2 , 1.16637000E-05);   // G_Fermi                
      sminputs.alphaS   = SLHAea_get_or_def(data,"SMINPUTS",3 , 1.17600000E-01);   // alpha_s(MZ) SM MSbar   
      sminputs.mZ       = SLHAea_get_or_def(data,"SMINPUTS",4 , 9.11876000E+01);   // MZ(pole)               
      sminputs.mBmB     = SLHAea_get_or_def(data,"SMINPUTS",5 , 4.20000000E+00);   // mb(mb) SM MSbar        
      sminputs.mT       = SLHAea_get_or_def(data,"SMINPUTS",6 , 1.73300000E+02);   // mtop(pole)             
      sminputs.mTau     = SLHAea_get_or_def(data,"SMINPUTS",7 , 1.77700000E+00);   // mtau(pole)             
      sminputs.mNu3     = SLHAea_get_or_def(data,"SMINPUTS",8 ,              0);   // mnu3(pole)             
                                                             //   8.04040000E+01   // MW(pole)
      sminputs.mE       = SLHAea_get_or_def(data,"SMINPUTS",11, 5.02667588E-04);   // melectron(pole)        
      sminputs.mNu1     = SLHAea_get_or_def(data,"SMINPUTS",12,              0);   // mnu1(pole)             
      sminputs.mMu      = SLHAea_get_or_def(data,"SMINPUTS",13, 1.03935706E-01);   // mmuon(pole)            
      sminputs.mNu2     = SLHAea_get_or_def(data,"SMINPUTS",14,              0);   // mnu2(pole)                
      sminputs.mD       = SLHAea_get_or_def(data,"SMINPUTS",21, 4.76052706E-03);   // md                     
      sminputs.mU       = SLHAea_get_or_def(data,"SMINPUTS",22, 2.40534062E-03);   // mu                     
      sminputs.mS       = SLHAea_get_or_def(data,"SMINPUTS",23, 1.04230487E-01);   // ms                     
      sminputs.mCmC     = SLHAea_get_or_def(data,"SMINPUTS",24, 1.27183378E+00);   // mc                     
   
      return sminputs;
   };


} // end namespace Gambit

