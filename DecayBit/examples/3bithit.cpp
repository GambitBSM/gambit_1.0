//   BIT-HIT: Calculate MSSM spectra, decays and EWPO.
//   *************************************************
///  \file
///
///  A simple program that uses SpecBit, DecayBit and
///  PrecisionBit in standalone mode.  Basically
///  does the same thing SUSY-HIT, but
///  - uses FlexibleSUSY for spectrum generation
///    instead of SuSpect
///  - uses FeynHiggs for MSSM Higgs decays instead
///    of SDECAY
///  - also computes electroweak precision
///    observables, using FeynHiggs and gm2Calc.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Pat Scott
///  \date 2016 June
///
///  *********************************************

#include <stdexcept>

#include "gambit/Utils/standalone_module.hpp"
#include "gambit/SpecBit/SpecBit_rollcall.hpp"
#include "gambit/DecayBit/DecayBit_rollcall.hpp"
#include "gambit/PrecisionBit/PrecisionBit_rollcall.hpp"

using namespace BackendIniBit::Functown;    
using namespace SpecBit::Functown;     
using namespace DecayBit::Functown;     
using namespace PrecisionBit::Functown;     

using std::cout;
using std::endl;

const std::string filename_in = "3bithit.in";
const std::string filename_out = "3bithit.out";

int main()
{

  try
  {

    cout <<                                                                endl;
    cout << "---------------------------------------------------------" << endl;
    cout << "  ____        ____ _____ _______   _    _ _____ _______  " << endl;
    cout << " |___ \\      |  _ \\_   _|__   __| | |  | |_   _|__   __|"<< endl;
    cout << "   __) |_____| |_) || |    | |    | |__| | | |    | |    " << endl;
    cout << "  |__ <______|  _ < | |    | |    |  __  | | |    | |    " << endl;
    cout << "  ___) |     | |_) || |_   | |    | |  | |_| |_   | |    " << endl;
    cout << " |____/      |____/_____|  |_|    |_|  |_|_____|  |_|    " << endl;
    cout << "---------------------------------------------------------" << endl;
    cout <<                                                                endl;
    cout << "  MSSM spectrum generation, decay and EWPO calculator    " << endl;
    cout << "  based on GAMBIT modules SpecBit, DecayBit and          " << endl;
    cout << "  PrecisionBit, and external codes GM2Calc, FeynHiggs    " << endl;
    cout << "  and SDECAY.                                            " << endl;    
    cout <<                                                                endl;
    cout << "  GAMBIT Models Workgroup                                " << endl;
    cout << "  EPJC 2016 xx:xxxx                                      " << endl;
    cout << "  (arXiv:1609.xxxxx)                                     " << endl;
    cout <<                                                                endl;
    cout << "---------------------------------------------------------" << endl;
    cout <<                                                                endl;

    // Setup logging
    std::map<std::string, std::string> loggerinfo;
    loggerinfo["Default"] = "3bithit.log";
    logger().initialise(loggerinfo);

    // Initialise the random number generator.
    Random::create_rng_engine("default");

    // Print some basic diagnostics.
    cout << endl << SpecBit::Accessors::name() << " found." << endl;
    cout << DecayBit::Accessors::name() << " found." << endl;
    cout << PrecisionBit::Accessors::name() << " found." << endl << endl;

    // Read in the model
    YAML::Node infile, SM_parameters, SUSY_parameters;
    bool model_is_GUT_scale;
    std::map<bool,std::string> model;
    model[true] = "NUHM2";
    model[false] = "MSSM20atQ";
    try
    { 
      infile = YAML::LoadFile(filename_in);
      if (infile["StandardModel_SLHA2"]) SM_parameters = infile["StandardModel_SLHA2"];
      else throw std::runtime_error("Block StandardModel_SLHA2 not found in "+filename_in+".  Quitting...");
      model_is_GUT_scale = infile[model[true]];
      if (model_is_GUT_scale) SUSY_parameters = infile[model[true]];
      if (infile[model[false]])
      {
        if (model_is_GUT_scale) throw std::runtime_error("Error: two different models given in "+filename_in+"!");
        SUSY_parameters = infile[model[false]];
      }
      else if (not model_is_GUT_scale) throw std::runtime_error("You must give an " + model[false] + " or " +
                                                             model[true] + " model in "+filename_in+".");    
    } 
    catch (YAML::Exception &e)
    {
      throw std::runtime_error("YAML error in "+filename_in+".\n(yaml-cpp error: "+std::string(e.what())+" )");
    }
    std::string SUSY_model = model[model_is_GUT_scale];

    // Retrieve a raw pointer to the parameter set of each primary model to be scanned, for manually setting parameter values
    ModelParameters* SM_primpar = Models::StandardModel_SLHA2::Functown::primary_parameters.getcontentsPtr();
    ModelParameters* SUSY_primpar = model_is_GUT_scale ? Models::NUHM2::Functown::primary_parameters.getcontentsPtr()
                                                       : Models::MSSM20atQ::Functown::primary_parameters.getcontentsPtr();

    // Resolve backend requirements 'by hand'.  Must be done before dependencies are resolved.
    FH_MSSMMasses.resolveBackendReq(&Backends::FeynHiggs_2_11_3::Functown::FHGetPara);
    FH_HiggsMasses.resolveBackendReq(&Backends::FeynHiggs_2_11_3::Functown::FHHiggsCorr);
    FH_HiggsMasses.resolveBackendReq(&Backends::FeynHiggs_2_11_3::Functown::FHUncertainties);
    FH_Couplings.resolveBackendReq(&Backends::FeynHiggs_2_11_3::Functown::FHCouplings);
    FH_Couplings.resolveBackendReq(&Backends::FeynHiggs_2_11_3::Functown::FHSelectUZ);
    FH_PrecisionObs.resolveBackendReq(&Backends::FeynHiggs_2_11_3::Functown::FHConstraints);
    
    //function_pointer_retriever.resolveBackendReq(&Backends::LibFortran_1_0::Functown::externalFunction);

    // Notify any module functions that care of the models being scanned.
    get_SMINPUTS.notifyOfModel("StandardModel_SLHA2");
    if (model_is_GUT_scale)
    {
      Models::NUHM2::Functown::MSSM30atMGUT_parameters.notifyOfModel(SUSY_model);
      Models::MSSM30atMGUT::Functown::MSSM63atMGUT_parameters.notifyOfModel(SUSY_model);
      get_MSSMatMGUT_spectrum.notifyOfModel(SUSY_model);
    }
    else
    {
      Models::MSSM20atQ::Functown::MSSM25atQ_parameters.notifyOfModel(SUSY_model);
      Models::MSSM25atQ::Functown::MSSM30atQ_parameters.notifyOfModel(SUSY_model);
      Models::MSSM30atQ::Functown::MSSM63atQ_parameters.notifyOfModel(SUSY_model);
      get_MSSMatQ_spectrum.notifyOfModel(SUSY_model);
    }
    FH_MSSMMasses.notifyOfModel(SUSY_model);
    FH_HiggsMasses.notifyOfModel(SUSY_model);
    FH_Couplings.notifyOfModel(SUSY_model);
    SUSY_HIT_1_5_init.notifyOfModel(SUSY_model);
    FeynHiggs_2_11_3_init.notifyOfModel(SUSY_model);

    // Resolve dependencies 'by hand'.  Ordering is unimportant, but something must be filled by primary parameters.
    if (model_is_GUT_scale)
    {
      Models::NUHM2::Functown::MSSM30atMGUT_parameters.resolveDependency(&Models::NUHM2::Functown::primary_parameters);
      Models::MSSM30atMGUT::Functown::MSSM63atMGUT_parameters.resolveDependency(&Models::NUHM2::Functown::MSSM30atMGUT_parameters);
      get_MSSMatMGUT_spectrum.resolveDependency(&Models::MSSM30atMGUT::Functown::MSSM63atMGUT_parameters);
      get_MSSMatMGUT_spectrum.resolveDependency(&get_SMINPUTS);
      FeynHiggs_2_11_3_init.resolveDependency(&get_MSSMatMGUT_spectrum);
      make_MSSM_precision_spectrum.resolveDependency(&get_MSSMatMGUT_spectrum);
    }
    else
    {
      Models::MSSM20atQ::Functown::MSSM25atQ_parameters.resolveDependency(&Models::MSSM20atQ::Functown::primary_parameters);
      Models::MSSM25atQ::Functown::MSSM30atQ_parameters.resolveDependency(&Models::MSSM20atQ::Functown::MSSM25atQ_parameters);
      Models::MSSM30atQ::Functown::MSSM63atQ_parameters.resolveDependency(&Models::MSSM25atQ::Functown::MSSM30atQ_parameters);
      get_MSSMatQ_spectrum.resolveDependency(&Models::MSSM30atQ::Functown::MSSM63atQ_parameters);
      get_MSSMatQ_spectrum.resolveDependency(&get_SMINPUTS);
      FeynHiggs_2_11_3_init.resolveDependency(&get_MSSMatQ_spectrum);
      make_MSSM_precision_spectrum.resolveDependency(&get_MSSMatQ_spectrum);
    }
    get_SMINPUTS.resolveDependency(&Models::StandardModel_SLHA2::Functown::primary_parameters);
    FeynHiggs_2_11_3_init.resolveDependency(&get_SMINPUTS);
    FH_HiggsMasses.resolveDependency(&FH_MSSMMasses);
    FH_Couplings.resolveDependency(&FH_HiggsMasses);
    FH_PrecisionObs.resolveDependency(&FH_Couplings);
    FH_precision_mw.resolveDependency(&FH_PrecisionObs);
    FH_precision_sinW2.resolveDependency(&FH_PrecisionObs);
    FH_precision_deltarho.resolveDependency(&FH_PrecisionObs);
    make_MSSM_precision_spectrum.resolveDependency(&FH_precision_mw);
    make_MSSM_precision_spectrum.resolveDependency(&FH_HiggsMasses);
    W_minus_decays.resolveDependency(&W_plus_decays);
    SUSY_HIT_1_5_init.resolveDependency(&make_MSSM_precision_spectrum);
    SUSY_HIT_1_5_init.resolveDependency(&W_plus_decays);
    SUSY_HIT_1_5_init.resolveDependency(&W_minus_decays);
    SUSY_HIT_1_5_init.resolveDependency(&Z_decays);

    // Set some module function options
    //nevents_pred_rounded.setOption<double>("probability_of_validity", 0.1);

    try
    {
      // Hand over the parameter values
      auto names = SM_primpar->getKeys();
      for (auto it = names.begin(); it != names.end(); ++it) SM_primpar->setValue(*it, SM_parameters[*it].as<double>());
      names = SUSY_primpar->getKeys();
      for (auto it = names.begin(); it != names.end(); ++it) SUSY_primpar->setValue(*it, SUSY_parameters[*it].as<double>());      
    }
    catch (YAML::Exception &e)
    {
      // Balk if a required parameter is missing
      throw std::runtime_error("YAML error attempting to read parameter values.\n (yaml-cpp error: "+std::string(e.what())+" )");
    }

    // Call the module functions, taking care to calculate in the order implied by how the dependencies have been filled;
    try
    {

      // Start with the spectrum.
      get_SMINPUTS.reset_and_calculate();
      if (model_is_GUT_scale)
      {
        Models::NUHM2::Functown::MSSM30atMGUT_parameters.reset_and_calculate();
        Models::MSSM30atMGUT::Functown::MSSM63atMGUT_parameters.reset_and_calculate();
        get_MSSMatMGUT_spectrum.reset_and_calculate();
      }
      else
      {
        Models::MSSM20atQ::Functown::MSSM25atQ_parameters.reset_and_calculate();
        Models::MSSM25atQ::Functown::MSSM30atQ_parameters.reset_and_calculate();
        Models::MSSM30atQ::Functown::MSSM63atQ_parameters.reset_and_calculate();
        get_MSSMatQ_spectrum.reset_and_calculate();
      }
      FeynHiggs_2_11_3_init.reset_and_calculate();
      FH_HiggsMasses.reset_and_calculate();
      FH_Couplings.reset_and_calculate();
      FH_PrecisionObs.reset_and_calculate();
      FH_precision_mw.reset_and_calculate();
      make_MSSM_precision_spectrum.reset_and_calculate();

      // Now the decays.
      W_plus_decays.reset_and_calculate();
      W_minus_decays.reset_and_calculate();
      Z_decays.reset_and_calculate();
      // do the other SM decays
      // do the h decays with FH      

      SUSY_HIT_1_5_init.reset_and_calculate();
      // do the susy decays with susyhit

      // Now the other EWPO.
      FH_precision_sinW2.reset_and_calculate();
      FH_precision_deltarho.reset_and_calculate();
      // call gm2calc here for gm2
      
      // Dump the final results to an SLHA file.

    }
    
    // Be sure to do something sensible in cases where the point was invalidated by one of the functions.
    catch (Gambit::invalid_point_exception& e)
    {
      cout << endl << "Model is invalid according to " << e.thrower()->origin() << "::" << e.thrower()->name() << "." << endl;
      cout << "Reason: " << e.message() << endl;
    }

    cout << endl << "3-BIT HIT has finished." << endl << endl;
    return 0;

  }

  catch (std::exception& e)
  {
    cout << endl << "3-BIT HIT has exited with fatal exception: " << e.what() << endl << endl;
  }

  return(1);

}
