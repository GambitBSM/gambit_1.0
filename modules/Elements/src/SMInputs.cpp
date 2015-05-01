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
        errmsg << "Error accessing data at index "<<index<<"of block "<<block<<". Please check that the SLHAea object was properly filled." << std::endl;
        errmsg  << "(Received out_of_range error from SLHAea class with message: " << e.what() << ")";
        utils_error().raise(LOCAL_INFO,errmsg.str());    
      }
      return output;
   }
   
   // Fill SMInputs struct from an SLHAea object
   SMInputs fill_SMInputs_from_SLHAea(SLHAea::Coll& data)
   { 
      /// Construct from SMInputs block of SLHAea object 
      SMInputs sminputs;
   
      sminputs.alphainv = SLHAea_get(data,"SMINPUTS",1);
      sminputs.GF       = SLHAea_get(data,"SMINPUTS",2);
      sminputs.alphaS   = SLHAea_get(data,"SMINPUTS",3);
      sminputs.mZ       = SLHAea_get(data,"SMINPUTS",4);
      sminputs.mBmB     = SLHAea_get(data,"SMINPUTS",5);
      sminputs.mT       = SLHAea_get(data,"SMINPUTS",6);
      sminputs.mTau     = SLHAea_get(data,"SMINPUTS",7);
      
      sminputs.mNu3     = SLHAea_get(data,"SMINPUTS",8);
      
      sminputs.mE       = SLHAea_get(data,"SMINPUTS",11);
      sminputs.mNu1     = SLHAea_get(data,"SMINPUTS",12);
      sminputs.mMu      = SLHAea_get(data,"SMINPUTS",13);
      sminputs.mNu2     = SLHAea_get(data,"SMINPUTS",14);
   
      sminputs.mD       = SLHAea_get(data,"SMINPUTS",21);
      sminputs.mU       = SLHAea_get(data,"SMINPUTS",22);
      sminputs.mS       = SLHAea_get(data,"SMINPUTS",23);
      sminputs.mCmC     = SLHAea_get(data,"SMINPUTS",24);
   
      return sminputs;
   };


} // end namespace Gambit

