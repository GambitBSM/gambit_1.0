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
#include "gambit/SpecBit/model_files_and_boxes.hpp"

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
      
    void VS_SSDM(double &result) //  try incorporating a simple likelihood function here
    { //                           in a similar style to RD_oh2_general
      using namespace Pipes::VS_SSDM;
      using namespace flexiblesusy;
      using namespace softsusy;
      namespace myPipe = Pipes::get_SingletDM_spectrum;
      using namespace Gambit;


      const SMInputs& sminputs = *myPipe::Dep::SMINPUTS;

      // SoftSUSY object used to set quark and lepton masses and gauge
      // couplings in QEDxQCD effective theory
      QedQcd oneset;
      NSM_input_parameters input;

      // Fill QedQcd object with SMInputs values
      setup_QedQcd(oneset,sminputs);

      // Run everything to Mz
      oneset.toMz();
      double mH,mS,lambda_hs;
      
    //  mH = *myPipe::Param.at("mH");
    //  mS = *myPipe::Param.at("mS");
      lambda_hs   = *myPipe::Param.at("lambda_hS");
      
      input.Lambda1Input = -0.1;
      
    //  input.mS2Input=pow(mS,2)-lambda_hs*15;

      NSM_spectrum_generator<Two_scale> spectrum_generator;

      input.vSInput=100;
      input.Qin=173;
      input.Lambda2Input=-0.1;
      
            
      spectrum_generator.run(oneset, input);
      NSM_slha<Two_scale> model(spectrum_generator.get_model());
      
      NSM<Two_scale> tmp_model(model);
      NSM_parameter_getter parameter_getter;
      //Coupling_monitor<NSM<Two_scale>, NSM_parameter_getter>
      //coupling_monitor(tmp_model, parameter_getter);


      //NSM_physical& pole_masses = model.get_physical_slha();
      tmp_model.run_to(1000);
      //double lam_out;
      //lam_out=parameter_getter.get_parameters(tmp_model)[5]; // 3 for lambda
      
      
      // alternative calling sequence
//      NSM_susy_parameters susy;
//      susy.set_scale(Electroweak_constants::MZ);
//
//      susy.set_g1(Electroweak_constants::g1);
//      susy.set_g2(Electroweak_constants::g2);
//      susy.set_g3(Electroweak_constants::g3);
//
//      susy.run_to(1.0e16);
//
//
//      double Lambda5=0,mS2=-100,mH2=-4000,vH=246,vS=100,Lambda4=0;
//
//      NSM_soft_parameters soft(susy, Lambda5, Lambda4,  mS2,  mH2, vH,  vS);
//
//      soft.run_to(Electroweak_constants::MZ);

// end of alternative calling sequence
      

      
      result=1;
    }


  } // end namespace SpecBit
} // end namespace Gambit

