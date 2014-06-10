//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
//  MSSM model and prior definitions
//
//  *********************************************
//
//  Authors
//  =======
//
//  (add name and date if you modify)
//
//  Ben Farmer
//  2013 May, ???, 2014 Mar
//  Pat Scott
//  2013 Sep
//
//  *********************************************

#ifndef __MSSM_hpp__
#define __MSSM_hpp__

#include <string>
#include "logging.hpp"
//#include "MSSM_types.hpp"

// Standard Model parameters in SLHA conventions
// (i.e. as in block SMINPUTS)
// alpha_em^(-1)(MZ) SM MSbar
// G_Fermi
// alpha_s(MZ)MSbar
// MZ(pole)
// mb(mb)
// Mtop(pole)
// Mtau(pole)
#define SMPARS_slha alpha_emi,G_F,alpha_s,mZ,mb,mt,mtau

#define MODEL Standard_Model
  START_MODEL
  DEFINEPARS(SMPARS_slha)
#undef MODEL

// MSSM
// These are the soft parameters, not the spectrum. Spectrum is to be computed by SpectrumBit.
// Parameters according to SLHA conventions 
// TODO: According to the SLHA conventions, one can provide mA0 or mH+ instead of mA^2.
//  To use this MSSM model you have to provide mA^2.
// All parameters are defined at M_input.
#define MODEL MSSM29
  START_MODEL
  // NOTE! Don't leave a comma after the last argument, or else you'll get weird compiler errors.
  DEFINEPARS(M_input, 
             M1,M2,M3,
             At,Ab,
             Ae,Amu,Atau,
             mH12,mH22,
             mu,mA2,tanb, /* mA0, mH+, */ 
             meL,mmuL,mtauL,
             meR,mmuR,mtauR,
             mq1L,mq2L,mq3L,
             muR,mcR,mtR,
             mdR,msR,mbR)
#undef MODEL

#define MODEL MSSMBen
#define PARENT MSSM29
  START_MODEL
  DEFINEPARS(M_input, 
             M1,M2,M3,
             At,
             mH12,mH22,
             mu,tanb,
             mq3L,
             mtR,
             mbR)
 
  // Add in an INTERPRET_AS_PARENT function (sets the PARENT model's parameter
  // object as a CAPABILITY of this model)
  INTERPRET_AS_PARENT__FUNCTION(MSSMBen_IAPfunc)

  // If you need to access the *DEP pointers via the Pipes then you have to know the right namespace in which to find them. You can use the USING_PIPE macro to make this accessible automatically, so long as PARENT and MODEL are correctly defined. See demo.hpp for examples.
  void MODEL_NAMESPACE::MSSMBen_IAPfunc (const ModelParameters &myP, ModelParameters &parentP)
  {
     logger()<<"Running interpret_as_parent calculations for MSSMBen -> MSSM ..."<<LogTags::info<<EOM;
      
     double MSUSY(myP["M_input"]);
     
     parentP.setValue("M_input", MSUSY   );
     parentP.setValue("M1",      myP["M1"] );
     parentP.setValue("M2",      myP["M2"] );
     parentP.setValue("M3",      myP["M3"] );
     parentP.setValue("At",      myP["At"] );
     parentP.setValue("Ab",      0 );
     parentP.setValue("Ae",      0 );
     parentP.setValue("Amu",     0 );
     parentP.setValue("Atau",    0 );
     parentP.setValue("mH12",    myP["MH12"] );
     parentP.setValue("mH22",    myP["MH22"] );
     parentP.setValue("mu",      myP["mu"]   );
     parentP.setValue("mA2",     1.5*MSUSY );
     parentP.setValue("tanb",    myP["tanb"] );
     parentP.setValue("meL",     1.5*MSUSY );
     parentP.setValue("mmuL",    1.5*MSUSY );
     parentP.setValue("mtauL",   1.5*MSUSY );
     parentP.setValue("meR",     1.5*MSUSY );
     parentP.setValue("mmuR",    1.5*MSUSY );
     parentP.setValue("mtauR",   1.5*MSUSY );
     parentP.setValue("mq1L",    1.5*MSUSY );
     parentP.setValue("mq2L",    1.5*MSUSY );
     parentP.setValue("mq3L",    myP["mq3L"] );
     parentP.setValue("muR",     1.5*MSUSY );
     parentP.setValue("mcR",     1.5*MSUSY );
     parentP.setValue("mtR",     myP["mtR"]  );
     parentP.setValue("mdR",     1.5*MSUSY );
     parentP.setValue("msR",     1.5*MSUSY );
     parentP.setValue("mbR",     myP["mbR"]  );
  }
  
#undef PARENT
#undef MODEL



#endif
