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
      // TODO: This probably doesn't work, and only gets us one copy of the object once.
      // Unfortunately we cannot copy SubSpectrum objects, so this is a little tricky to
      // solve...

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
      QedQcdWrapper qedqcdspec(oneset,sminputs);

      // Initialise an object to carry Higgs sector information
      SMHiggsModel higgsmodel;
      higgsmodel.HiggsPoleMass = *myPipe::Param.at("mH");
      higgsmodel.HiggsVEV      = *myPipe::Param.at("vev");

      // Create a SubSpectrum object to wrap the EW sector information
      SMHiggsContainer higgsspec(higgsmodel);

      // Create full Spectrum object from components above
      // (SubSpectrum objects will be "cloned" into the Spectrum object)
      static Spectrum full_spectrum;
      full_spectrum = Spectrum(qedqcdspec,higgsspec,sminputs);

      result = &full_spectrum;
    }

    /// @} End Gambit module functions

  } // end namespace SpecBit
} // end namespace Gambit

