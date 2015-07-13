//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Functions of module SpecBit
///
///  SpecBit module functions related to the
///  Standard Model.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Ben Farmer
///          (benjamin.farmer@fysik.su.se)
///    \date 2014 Sep - Dec, 2015 Jan - Mar
///  
///  *********************************************

#include <string>
#include <sstream>

#include "gambit/Elements/gambit_module_headers.hpp"
#include "gambit/Elements/spectrum.hpp"
#include "gambit/Utils/stream_overloads.hpp" // Just for more convenient output to logger
#include "gambit/Utils/util_macros.hpp"
#include "gambit/SpecBit/SpecBit_rollcall.hpp"
#include "gambit/SpecBit/SpecBit_helpers.hpp"
#include "gambit/SpecBit/QedQcdWrapper.hpp"
#include "gambit/SpecBit/SMHiggsContainer.hpp"

// QedQcd header from SoftSUSY (via FlexibleSUSY)
#include "flexiblesusy/src/lowe.h"

// Switch for debug mode
#define SpecBit_DBUG 

namespace Gambit
{

  namespace SpecBit
  {
    using namespace LogTags;

    // To check if a model is currently being scanned:
    // bool Pipes::<fname>::ModelInUse(str model_name)


    /// @{ Non-Gambit helper functions
    //  =======================================================================
    //  These are not known to Gambit, but they do basically all the real work.
    //  The Gambit module functions merely wrap the functions here and hook 
    //  them up to their dependencies, and input parameters.

    /// Initialise QedQcd object from SMInputs data
    void setup_QedQcd(QedQcd& oneset /*output*/, const SMInputs& sminputs /*input*/)
    {
      // Set pole masses (to be treated specially)
      oneset.setPoleMt(sminputs.mT);
      //oneset.setPoleMb(...);
      oneset.setPoleMtau(sminputs.mTau);
      oneset.setMbMb(sminputs.mBmB);
      /// set running quark masses
      oneset.setMass(mDown,    sminputs.mD);
      oneset.setMass(mUp,      sminputs.mU);
      oneset.setMass(mStrange, sminputs.mS);
      oneset.setMass(mCharm,   sminputs.mCmC);
      /// set QED and QCD structure constants
      oneset.setAlpha(ALPHA, 1./sminputs.alphainv);
      oneset.setAlpha(ALPHAS, sminputs.alphaS);
      /// NOTE! These assume the input electron and muon pole masses are "close
      /// enough" to MSbar masses at MZ. The object does the same with its 
      /// default values so I guess it is ok.
      oneset.setMass(mElectron, sminputs.mE);
      oneset.setMass(mMuon,     sminputs.mMu);
    }

    /// @} End module convenience functions

  
    /// @{ Gambit module functions 
    //  =======================================================================
    //  These are wrapped up in Gambit functor objects according to the
    //  instructions in the rollcall header

    /// Set SMINPUTS (SLHA2) struct to match StandardModel_SLHA2 parameters.
    //  Effectively just changes these model parameters into a more convenient form.
    //  But also opens up the possibility of rebuilding this struct from some other
    //  parameterisation.
    void get_SMINPUTS(SMInputs &result)
    {
      namespace myPipe = Pipes::get_SMINPUTS;
      SMInputs sminputs; 
      
      // Get values from Params pipe
      // (as defined in SLHA2)
      if(myPipe::ModelInUse("StandardModel_SLHA2"))
      {
         sminputs.alphainv = *myPipe::Param["alphainv"];
         sminputs.GF       = *myPipe::Param["GF"      ];
         sminputs.alphaS   = *myPipe::Param["alphaS"  ];

         sminputs.mZ       = *myPipe::Param["mZ"      ]; 

         sminputs.mE       = *myPipe::Param["mE"      ];
         sminputs.mMu      = *myPipe::Param["mMu"     ];
         sminputs.mTau     = *myPipe::Param["mTau"    ];

         sminputs.mNu1     = *myPipe::Param["mNu1"    ];
         sminputs.mNu2     = *myPipe::Param["mNu2"    ];
         sminputs.mNu3     = *myPipe::Param["mNu3"    ];

         sminputs.mD       = *myPipe::Param["mD"      ];
         sminputs.mU       = *myPipe::Param["mU"      ];
         sminputs.mS       = *myPipe::Param["mS"      ];
         sminputs.mCmC     = *myPipe::Param["mCmC"    ];
         sminputs.mBmB     = *myPipe::Param["mBmB"    ]; 
         sminputs.mT       = *myPipe::Param["mT"      ];

         // CKM
         sminputs.CKM.lambda   = *myPipe::Param["lambda" ];
         sminputs.CKM.A        = *myPipe::Param["A" ];
         sminputs.CKM.rhobar   = *myPipe::Param["rhobar" ];
         sminputs.CKM.etabar   = *myPipe::Param["etabar" ];
               
         // PMNS 
         sminputs.PMNS.theta12 = *myPipe::Param["theta12"];
         sminputs.PMNS.theta23 = *myPipe::Param["theta23"];
         sminputs.PMNS.theta13 = *myPipe::Param["theta13"];
         sminputs.PMNS.delta13 = *myPipe::Param["delta13"];
         sminputs.PMNS.alpha1  = *myPipe::Param["alpha1"];
         sminputs.PMNS.alpha2  = *myPipe::Param["alpha2"];

      }
      else
      {
         std::ostringstream errmsg;
         errmsg << "Error mapping Standard Model parameters to SMINPUTS capabilities!";
         errmsg << "Perhaps you have added a new model to the ALLOWED_MODELS of this ";
         errmsg << "module function but have not added a corresponding case in the ";
         errmsg << "function source (here)." << std::endl;
         SpecBit_error().raise(LOCAL_INFO,errmsg.str());  
      }
      // Return filled struct
      result = sminputs;
    }

    /// Construct a SubSpectrum object from SMInputs using QedQcdWrapper
    void get_QedQcd_spectrum(const SubSpectrum* &result)
    {
      // Access the pipes for this function to get model and parameter information, and dependencies
      namespace myPipe = Pipes::get_QedQcd_spectrum;

      // Get SLHA2 SMINPUTS values
      const SMInputs& sminputs = *myPipe::Dep::SMINPUTS;

      // SoftSUSY object used to set quark and lepton masses and gauge
      // couplings in QEDxQCD effective theory
      // Will be initialised by default using values in lowe.h, which we will
      // override next. 
      QedQcd oneset;

      // Fill QedQcd object with SMInputs values
      setup_QedQcd(oneset,sminputs);

      // Run everything to Mz
      oneset.toMz();
 
      // Create a Spectrum object to wrap the qedqcd object
      static QedQcdWrapper qedqcdspec(oneset,sminputs);

      result = &qedqcdspec;
    }

    /// Get a Spectrum object wrapper for Standard-Model-only information
    void get_SM_spectrum(const Spectrum* &result)
    {
      namespace myPipe = Pipes::get_SM_spectrum;
      const SMInputs& sminputs = *myPipe::Dep::SMINPUTS;

      // SoftSUSY object used to set quark and lepton masses and gauge
      // couplings in QEDxQCD effective theory
      QedQcd oneset;

      // Fill QedQcd object with SMInputs values
      setup_QedQcd(oneset,sminputs);

      // Run everything to Mz
      oneset.toMz();
 
      // Create a SubSpectrum object to wrap the qedqcd object
      // Attach the sminputs object as well, so that SM pole masses can be passed on (these aren't easily
      // extracted from the QedQcd object, so use the values that we put into it.)
      static QedQcdWrapper qedqcdspec(oneset,sminputs);

      // Initialise an object to carry Higgs sector information
      SMHiggsModel higgsmodel;
      higgsmodel.HiggsPoleMass = *myPipe::Param.at("mH");
      higgsmodel.HiggsVEV      = *myPipe::Param.at("vev");

      // Create a SubSpectrum object to wrap the EW sector information
      static SMHiggsContainer higgsspec(higgsmodel);

      // Create full Spectrum object from components above
      static Spectrum full_spectrum(&qedqcdspec,&higgsspec,sminputs);
 
      result = &full_spectrum;
    }

    /// @} End Gambit module functions

  } // end namespace SpecBit
} // end namespace Gambit

