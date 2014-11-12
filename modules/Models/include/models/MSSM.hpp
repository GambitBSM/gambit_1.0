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

#define MODEL MSSM25
  START_MODEL
  DEFINEPARS(M_input, 
             M1,M2,M3,
             At,Ab,Atau,
             mH12,mH22,
             mu,tanb,
             meL,mmuL,mtauL,
             meR,mmuR,mtauR,
             mq1L,mq2L,mq3L,
             muR,mcR,mtR,
             mdR,msR,mbR)
#undef MODEL


// EDIT: Maybe don't want this...
// This is a kind of "abstract" model, with no parameters. Used only
// so that module functions can say the are enabled for the "MSSM" and
// therefore are allowed to be used with any of its children.
//#define MODEL MSSM
//   START_MODEL
//   DEFINEPARS(null) // Need to have at least one parameter I think. Stick in a "null" parameter.
//#undef MODEL

// Currently, Gambit will insist that a module function has MSSM_parameters
// as a dependency if ALLOW_MODELS(MSSM) is set for that function. Since MSSM is an abstraction
// in this current hierarchy I am advocating, no function which uses ALLOW_MODELS(MSSM) can
// actually require the model parameters; presumably they really just want the spectrum.
// They could just ask for an MSSMSpec object via the dependency system, and not use 
// ALLOW_MODEL(MSSM), however for now I will make it so that they can, by providing a "fake"
// interpret as parent function which doesn't do anything. This is used by all models which
// have MSSM as a parent.
// This "blank" interpret_as_parent function can be created via the macro
// USE_NULL_INTERPRET_AS_PARENT


// General GUT boundary condition parameterisation of the MSSM
// There are several of these, compatible with different spectrum generators
// To use a constrained GUT model like the CMSSM, there needs to be an 
// "interpret_as_X" function which translates the CMSSM parameters into
// the appropriate general GUT parameterisation for the spectrum generator
// being used.
// TODO: Currently just examples, need to look up what each spectrum generator
// can actually do.
#define MODEL GUTMSSMA
  START_MODEL
  DEFINEPARS(M1,M2,M3,
             At,Ab,Atau,
             mHu2,mHd2,
             signmu,tanb,
             meL,mmuL,mtauL,
             meR,mmuR,mtauR,
             mq1L,mq2L,mq3L,
             muR,mcR,mtR,
             mdR,msR,mbR)
  //USE_NULL_INTERPRET_AS_PARENT
#undef MODEL

// Alternate general GUT parameterisation
#define MODEL GUTMSSMB
  START_MODEL
  DEFINEPARS(M1,M2,M3,
             At,Ab,Atau,
             mH12,mH22,
             mu,tanb,
             meL,mmuL,mtauL,
             meR,mmuR,mtauR,
             mq1L,mq2L,mq3L,
             muR,mcR,mtR,
             mdR,msR,mbR)
  //USE_NULL_INTERPRET_AS_PARENT
#undef MODEL

#define MODEL CMSSM
  START_MODEL
  DEFINEPARS(M0,M12,A0,tanb,signmu)

  // Now, CMSSM cannot actually be translated into MSSM, because MSSM is 
  // "abstract" and has no parameters. Instead, we translate it into
  // GUTMSSMA and GUTMSSMB, which are children of MSSM. and which work
  // with specific spectrum generators. Most module functions just need
  // to say they work with MSSM, and then CMSSM should be permitted;
  // meanwhile SpecBit will translate CMSSM into GUTMSSMX in order to
  // generate a spectrum.
  //          
  //         ...__FUNCTION(Model name, translation function name)
  INTERPRET_AS_X__FUNCTION(GUTMSSMA, CMSSM_to_GUTMSSMA)
  INTERPRET_AS_X__FUNCTION(GUTMSSMB, CMSSM_to_GUTMSSMB)
  //USE_NULL_INTERPRET_AS_PARENT

  // Now the actual translation function definitions
  void MODEL_NAMESPACE::CMSSM_to_GUTMSSMA (const ModelParameters &myP, ModelParameters &targetP)
  {
     logger()<<"Running interpret_as_X calculations for CMSSM --> GUTMSSMA..."<<LogTags::info<<EOM;
     
     targetP.setValue("M1",      myP["M12"] );
     targetP.setValue("M2",      myP["M12"] );
     targetP.setValue("M3",      myP["M12"] );

     targetP.setValue("mq1L",    myP["M0"] );
     targetP.setValue("mq2L",    myP["M0"] );
     targetP.setValue("mq3L",    myP["M0"] );
     targetP.setValue("muR",     myP["M0"] );
     targetP.setValue("mdR",     myP["M0"] );
     targetP.setValue("mcR",     myP["M0"] );
     targetP.setValue("msR",     myP["M0"] );
     targetP.setValue("mtR",     myP["M0"] );
     targetP.setValue("mbR",     myP["M0"] );
     targetP.setValue("meL",     myP["M0"] );
     targetP.setValue("mmuL",    myP["M0"] );
     targetP.setValue("mtauL",   myP["M0"] );
     targetP.setValue("meR",     myP["M0"] );
     targetP.setValue("mmuR",    myP["M0"] );
     targetP.setValue("mtauR",   myP["M0"] );
     targetP.setValue("mHu2",    myP["M0"]*myP["M0"] );
     targetP.setValue("mHd2",    myP["M0"]*myP["M0"] );

     targetP.setValue("At",      myP["A0"] );
     targetP.setValue("Ab",      myP["A0"] );
     targetP.setValue("Atau",    myP["A0"] );

     targetP.setValue("tanb",    myP["tanb"] );
     targetP.setValue("signmu",  myP["signmu"] );
  } 

  void MODEL_NAMESPACE::CMSSM_to_GUTMSSMB (const ModelParameters &myP, ModelParameters &targetP)
  {
     logger()<<"Running interpret_as_X calculations for CMSSM --> GUTMSSMB..."<<LogTags::info<<EOM;

     /// Filler....     
  } 
#undef MODEL

// Extra-constrained CMSSM, to demo interpret_as_parent
// If we can translate to a model which already has translation functions to 
// the spectrum-generator compatible parameters, then we only need the one
// function to translate to that parent model.
#define MODEL extraCMSSM
  #define PARENT CMSSM
  START_MODEL
  DEFINEPARS(M0,M12,tanb,signmu)

  // Add in an INTERPRET_AS_PARENT function (sets the PARENT model's parameter
  // object as a CAPABILITY of this model)
  INTERPRET_AS_PARENT__FUNCTION(extraCMSSM_to_CMSSM)

  // If you need to access the *DEP pointers via the Pipes then you have to know the right namespace in which to find them. You can use the USING_PIPE macro to make this accessible automatically, so long as PARENT and MODEL are correctly defined. See demo.hpp for examples.
  void MODEL_NAMESPACE::extraCMSSM_to_CMSSM (const ModelParameters &myP, ModelParameters &parentP)
  {
     logger()<<"Running interpret_as_parent calculations for extraCMSSM -> CMSSM ..."<<LogTags::info<<EOM;
      
     parentP.setValue("M0",     myP["M0"] );
     parentP.setValue("A0",     myP["M0"] );
     parentP.setValue("M12",    myP["M12"] );
     parentP.setValue("tanb",   myP["tanb"] );
     parentP.setValue("signmu", myP["signmu"] );
  } 
  #undef PARENT
#undef MODEL



#endif
