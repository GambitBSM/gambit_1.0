//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Functions of module SpecBit
///
///  SpecBit module functions related to the
///  scalar singlet DM model.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Ben Farmer
///          (benjamin.farmer@fysik.su.se)
///    \date 2015 May
///  
///  *********************************************

#include <string>
#include <sstream>

#include "gambit/Elements/gambit_module_headers.hpp"
#include "gambit/SpecBit/SpecBit_rollcall.hpp"
#include "gambit/SpecBit/SpecBit_helpers.hpp"
#include "gambit/SpecBit/QedQcdWrapper.hpp"
#include "gambit/SpecBit/SMHiggsContainer.hpp"
#include "gambit/SpecBit/ScalarSingletDMContainer.hpp"

// Switch for debug mode
#define SpecBit_DBUG 

namespace Gambit
{

  namespace SpecBit
  {
    using namespace LogTags;

    /// Get a Spectrum object wrapper for the SingletDM model
    void get_SingletDM_spectrum(const Spectrum* &result)
    {
      namespace myPipe = Pipes::get_SingletDM_spectrum;
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
      QedQcdWrapper qedqcdspec(oneset,sminputs);

      // Initialise an object to carry the Singlet plus Higgs sector information
      SingletDMModel singletmodel;
      singletmodel.HiggsPoleMass   = *myPipe::Param.at("mH");
      singletmodel.HiggsVEV        = *myPipe::Param.at("vev");
      singletmodel.SingletPoleMass = *myPipe::Param.at("mS");
      singletmodel.SingletLambda   = *myPipe::Param.at("lambda_hS");

      // Create a SubSpectrum object to wrap the EW sector information
      SingletDMContainer singletspec(singletmodel);

      // Create full Spectrum object from components above
      // Note: SubSpectrum objects cannot be copied, but Spectrum
      // objects can due to a special copy constructor which does
      // the required cloning of the constituent SubSpectra.
      static Spectrum full_spectrum;

      // Note subtlety! There are TWO constructors for the Spectrum object:
      // If pointers to SubSpectrum objects are passed, it is assumed that
      // these objects are managed EXTERNALLY! So if we were to do this:
      //   full_spectrum = Spectrum(&qedqcdspec,&singletspec,sminputs);
      // then the SubSpectrum objects would end up DELETED at the end of
      // this scope, and we will get a segfault if we try to access them
      // later. INSTEAD, we should just pass the objects themselves, and
      // then they will be CLONED and the Spectrum object will take
      // possession of them:
      full_spectrum = Spectrum(qedqcdspec,singletspec,sminputs);

      result = &full_spectrum;
    }


  } // end namespace SpecBit
} // end namespace Gambit

