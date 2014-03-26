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
  ATTACH_INTERPRET_AS_PARENT_FUNCTION(MSSMBen_IAPfunc)

  // The following function can now be defined anywhere if there are no dependencies
  // If you need to access the *DEP namespace then it is a little harder because you have to know the right namespace in which to find it. See demo.hpp for examples. 
  void MSSMBen_IAPfunc (ModelParameters &myparams, ModelParameters &parentparams)
  {
     logger()<<"Running interpret_as_parent calculations for MSSMBen -> MSSM ..."<<LogTags::info<<EOM;
  
     const ModelParameters &p = myparams;
     
     double MSUSY(p["M_input"]);
     parentparams.setValue("M_input", MSUSY   );
     parentparams.setValue("M1",      p["M1"] );
     parentparams.setValue("M2",      p["M2"] );
     parentparams.setValue("M3",      p["M3"] );
     parentparams.setValue("At",      p["At"] );
     parentparams.setValue("Ab",      0 );
     parentparams.setValue("Ae",      0 );
     parentparams.setValue("Amu",     0 );
     parentparams.setValue("Atau",    0 );
     parentparams.setValue("mH12",    p["MH12"] );
     parentparams.setValue("mH22",    p["MH22"] );
     parentparams.setValue("mu",      p["mu"]   );
     parentparams.setValue("mA2",     1.5*MSUSY );
     parentparams.setValue("tanb",    p["tanb"] );
     parentparams.setValue("meL",     1.5*MSUSY );
     parentparams.setValue("mmuL",    1.5*MSUSY );
     parentparams.setValue("mtauL",   1.5*MSUSY );
     parentparams.setValue("meR",     1.5*MSUSY );
     parentparams.setValue("mmuR",    1.5*MSUSY );
     parentparams.setValue("mtauR",   1.5*MSUSY );
     parentparams.setValue("mq1L",    1.5*MSUSY );
     parentparams.setValue("mq2L",    1.5*MSUSY );
     parentparams.setValue("mq3L",    p["mq3L"] );
     parentparams.setValue("muR",     1.5*MSUSY );
     parentparams.setValue("mcR",     1.5*MSUSY );
     parentparams.setValue("mtR",     p["mtR"]  );
     parentparams.setValue("mdR",     1.5*MSUSY );
     parentparams.setValue("msR",     1.5*MSUSY );
     parentparams.setValue("mbR",     p["mbR"]  );
   }

#undef PARENT
#undef MODEL



#endif
