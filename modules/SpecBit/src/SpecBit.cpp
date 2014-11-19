//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Functions of module SpecBit
///
///  These functions link ModelParameters to 
///  Spectrum objects in various ways.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Ben Farmer
///          (ben.farmer@gmail.com)
///    \date 2014 Sep
///  
///  *********************************************

#include <string>
#include "gambit_module_headers.hpp"
#include "SpecBit_rollcall.hpp"
#include "stream_overloads.hpp" // Just for more convenient output to logger

// Flexible SUSY stuff (should not be needed by the rest of gambit)
#include "ew_input.hpp"
#include "lowe.h" // From softsusy; used by fleiblesusy

// CMSSM "Modelbox" classes
#include "CMSSM_input_parameters.hpp"
#include "CMSSM_slha_io.hpp"
#include "CMSSM_spectrum_generator.hpp"
#include "CMSSM_two_scale_model.hpp"
#include "CMSSM_physical.hpp"
#include "CMSSM_info.hpp"


//#include "logger.hpp"
//#include "wrappers.hpp"
#include "MSSMSpec.hpp"
#include "numerics.hpp"

namespace Gambit
{

  namespace SpecBit
  {
    using namespace LogTags;
    using namespace flexiblesusy;

    /// Quick macro to simplify the check of Pipe::Models
    #define QUERYMODELS(MODEL) (std::find(Pipe::Models->begin(), \
                                          Pipe::Models->end(), \
                                          MODEL) != Pipe::Models->end())

    /// Module convenience functions
    // These are not known to Gambit.

    // Boxes of typedefs to group FlexibleSUSY types together in a convenient abstract 
    // way
    template <class algorithm_type>
    struct CMSSMbox
    {
       typedef CMSSM_input_parameters                   InputParameters;
       typedef CMSSM_spectrum_generator<algorithm_type> SpectrumGenerator;
       typedef CMSSM<algorithm_type>                    Model;
       typedef CMSSM_physical                           Physical;
       typedef CMSSM_slha_io                            SlhaIo;
       static const unsigned number_of_particles = CMSSM_info::NUMBER_OF_PARTICLES;
    };


    /// Compute an MSSM spectrum using flexiblesusy
    // In GAMBIT there are THREE flexiblesusy MSSM spectrum generators currently in
    // use, for each of three possible boundary condition types:
    //   - GUT scale input
    //   - Electroweak symmetry breaking scale input
    //   - Intermediate scale Q input
    // These each require slightly different setup, but once that is done the rest
    // of the code required to run them is the same; this is what is contained in
    // the below template function.
    template <class Modelbox>
    Spectrum* run_FS_spectrum_generator(const typename Modelbox::InputParameters &input, const Options &runOptions)
    {
      // SoftSUSY object used to set quark and lepton masses and gauge
      // couplings in QEDxQCD effective theory
      // Will be initialised by default using values in lowe.h. Should add code here to
      // input any Standard Model values which we want to vary with the scan. Also need
      // to implement a strategy for carrying SM parameters around gambit consistently.
      QedQcd oneset; 
      oneset.toMz();
   
      // Create spectrum generator object
      typename Modelbox::SpectrumGenerator spectrum_generator;

      // Spectrum generator settings
      // Leave most with whatever the defaults are for now, but change one thing to 
      // demonstrate options retrieval
      // if (*Pipe::runOptions->hasKey("ewsb_loop_order")) Manual error checking atm?

      // spectrum_generator.set_precision_goal( X );
      // spectrum_generator.set_max_iterations( X );
      // spectrum_generator.set_calculate_sm_masses( X );
      // spectrum_generator.set_input_scale( X );
      // spectrum_generator.set_parameter_output_scale( X );
      // spectrum_generator.set_pole_mass_loop_order( X );
      spectrum_generator.set_ewsb_loop_order(
           runOptions.getValue<int>("ewsb_loop_order") );
      // spectrum_generator.set_beta_loop_order( X );
      // spectrum_generator.set_threshold_corrections( X );
     
      // Generate spectrum
      spectrum_generator.run(oneset, input);
     
      // Extract references to flexiblesusy model object, and problems report
      const typename Modelbox::Model& model = spectrum_generator.get_model();

      // Extract report on problems...
      const Problems<Modelbox::number_of_particles>& problems
        = spectrum_generator.get_problems();
     
      // Create Spectrum object to wrap flexiblesusy object 
      // THIS IS STATIC so that it lives on once we leave this module function. We 
      // therefore cannot run the same spectrum generator twice in the same loop and 
      // maintain the spectrum resulting from both. But we should never want to do 
      // this.
      static MSSMSpec<typename Modelbox::Model,typename Modelbox::Physical> generic_mssm;

      if( problems.have_problem() )
      {
         ///TODO: Need to tell gambit that the spectrum is not viable somehow. For now
         // just die.
         std::ostringstream errmsg;
         errmsg << "A serious problem was encountered during spectrum generation! \
Message from flexibleSUSY below:" << std::endl;
         problems.print_problems(errmsg); 
         problems.print_warnings(errmsg); 
         SpecBit_error().raise(LOCAL_INFO,errmsg.str());  
      }  
 
      // Write SLHA file (for debugging purposes...)
      typename Modelbox::SlhaIo slha_io;
      slha_io.set_spinfo(problems);
      slha_io.set_sminputs(oneset);
      slha_io.set_minpar(input);
      slha_io.set_extpar(input);
      slha_io.set_spectrum(model);
      slha_io.write_to_file("SpecBit/initial_CMSSM_spectrum.slha");

      // We want to store things in a "generic" flexiblesusy MSSM object. But in 
      // flexiblesusy, there are different classes for each different MSSM-variant,
      // even for simple changes like altering boundary conditions. So we need to take
      // the low-scale spectrum data that results from the spectrum computation, and 
      // copy it into the generic container. Need to write some routines to do this 
      // (below is a placeholder). 
      generic_mssm.get_lowe_data_from(model);

      // Get a point of type Spectrum* to the static MSSMSpec object; this is what we
      // give to GAMBIT
      Spectrum* spec = &generic_mssm;
      return spec;
    }






    /// Gambit module functions
    //  These are wrapped up in Gambit functor objects according to the
    //  instructions in the rollcall header

    // Functions to changes the capability associated with a Spectrum object to 
    // "SM_spectrum"
    void convert_MSSM_to_SM   (Spectrum* &result) {result = *Pipes::convert_MSSM_to_SM::Dep::MSSM_spectrum;}
    //void convert_NMSSM_to_SM  (Spectrum* &result) {result = *Pipes::convert_NMSSM_to_SM::Dep::NMSSM_spectrum;}
    //void convert_E6MSSM_to_SM (Spectrum* &result) {result = *Pipes::convert_E6MSSM_to_SM::Dep::E6MSSM_spectrum;}

    
    void get_CMSSM_spectrum (Spectrum* &result)
    {

      // Access the pipes for this function to get model and parameter information
      using namespace softsusy;
      namespace Pipe = Pipes::get_CMSSM_spectrum;

      // Double-check that a CMSSM-descendant model is being scanned
      //if( not QUERYMODELS("CMSSM") )
      //{
      //  SpecBit_error().raise(LOCAL_INFO, "Uh oh, a CMSSM-descendant model is not being scanned! This function should not have been permitted to run! Please check the ALLOWED_MODEL list in SpecBit_rollcall.hpp for this function");  
      //}

      // Get input parameters
      CMSSM_input_parameters input;
   
      input.m0      = *Pipe::Param["M0"];
      input.m12     = *Pipe::Param["M12"];
      input.TanBeta = *Pipe::Param["tanb"];
      input.SignMu  = *Pipe::Param["signmu"];
      input.Azero   = *Pipe::Param["A0"];
  
      // Run spectrum generator
      result = run_FS_spectrum_generator<CMSSMbox<Two_scale>>(input,*Pipe::runOptions);
      
      // Dump spectrum information to slha file (for testing...)
      // Also, It should be relatively simple to alter flexiblesusy so that it can 
      // return an slhaea object. It already uses one internally to do the slha
      // writing, and there are routines to fill it from "model". But currently it is
      // a private member; just need a routine to return it, and then need to write an
      // interface function in the Spectrum object.
      //result->dump2slha("SpecBit/CMSSM_fromSpectrumObject.slha");
    }

    void get_GUTMSSMA_spectrum (Spectrum* &result)
    {
      using namespace softsusy;
      namespace Pipe = Pipes::get_GUTMSSMA_spectrum;
      CMSSM_input_parameters input;

      //std::cout<<"accessible params:"<<std::endl;
      //for(auto iter=Pipe::Param.begin(); iter!=Pipe::Param.end(); ++iter) {
      //  std::cout << iter->first <<", "<< std::endl;
      //}

      input.m0      = sqrt(*Pipe::Param["mHu2"]);
      input.m12     = *Pipe::Param["M1"];
      input.Azero   = *Pipe::Param["At"];
      input.TanBeta = *Pipe::Param["tanb"];
      input.SignMu  = *Pipe::Param["signmu"];

      result = run_FS_spectrum_generator<CMSSMbox<Two_scale>>(input,*Pipe::runOptions);
    }

    void get_GUTMSSMB_spectrum (Spectrum* &result)
    {
      // Placeholder
    }


    // Dump whatever is in the spectrum object to SLHA
    // This is mostly for testing purposes.
    void dump_spectrum(double& result)
    {
      namespace Pipe = Pipes::dump_spectrum;

      Spectrum* spec(*Pipe::Dep::SM_spectrum);
      std::string filename(Pipe::runOptions->getValue<std::string>("filename"));

      //spec->dump2slha(filename);

      result = 1;
    }

    // I think spectrum objects will just be able to return SLHAea objects of
    // themselves, so probably don't need this.
    void get_MSSM_spectrum_as_SLHAea (eaSLHA &result)
    {

      using namespace Pipes::get_MSSM_spectrum_as_SLHAea;

      Spectrum* spec = *Dep::MSSM_spectrum; //Test retrieve pointer to Spectrum object 

      // Erase previous contents of container
      for (eaSLHA::iterator block = result.begin(); block != result.end();)
      {
        result.erase(block);
      }

      // Copy Spectrum information into SLHAea container
      std::stringstream ss;
      ss.precision(8);
      ss.setf(ios_base::scientific);

      // Block MASS
      ///TODO Cannot get pole masses right now...
      // ss << "BLOCK MASS\n"
      //    << "     24 " << spec->phys.get_Pole_Mass("MW")     << "  # MW\n"
      //    << "     25 " << spec->phys.get_Pole_Mass("Mhh",0)  << "  # h0\n"
      //    << "     35 " << spec->phys.get_Pole_Mass("Mhh",1)  << "  # H0\n"
      //    << "     36 " << spec->phys.get_Pole_Mass("MA0")    << "  # A0\n"
      //    << "     37 " << spec->phys.get_Pole_Mass("MHpm")   << "  # H+\n"
      //    << "1000012 " << spec->phys.get_Pole_Mass("MSv",0)  << "  # ~nu_e_L\n"
      //    << "1000014 " << spec->phys.get_Pole_Mass("MSv",1)  << "  # ~nu_mu_L\n"
      //    << "1000016 " << spec->phys.get_Pole_Mass("MSv",2)  << "  # ~nu_tau_L\n"
      //    << "1000022 " << spec->phys.get_Pole_Mass("MChi",0) << "  # ~neutralino(1)\n"
      //    << "1000023 " << spec->phys.get_Pole_Mass("MChi",1) << "  # ~neutralino(2)\n"
      //    << "1000025 " << spec->phys.get_Pole_Mass("MChi",2) << "  # ~neutralino(3)\n"
      //    << "1000035 " << spec->phys.get_Pole_Mass("MChi",3) << "  # ~neutralino(4)\n"
      //    << "1000024 " << spec->phys.get_Pole_Mass("MCha",0) << "  # ~chargino(1)\n"
      //    << "1000037 " << spec->phys.get_Pole_Mass("MCha",1) << "  # ~chargino(2)\n";

      // Block NMIX
      //ss << "BLOCK NMIX\n"
      //   << "     24 " << spec->phys.get_Pole_Mass("MW")     << "  # MW\n"
      //   << "     25 " << spec->phys.get_Pole_Mass("Mhh",0)  << "  # h0\n"
      //   << "     35 " << spec->phys.get_Pole_Mass("Mhh",1)  << "  # H0\n"
      //   << "     36 " << spec->phys.get_Pole_Mass("MA0")    << "  # A0\n"
      //   << "     37 " << spec->phys.get_Pole_Mass("MHpm")   << "  # H+\n"
 
      ss >> result;

      // Write files like this (for testing):
      ofstream ofs("SpecBit/test_output.slha");
      if (ofs.is_open()) 
      {
        // Probably need to do some stream flushing if we really must write files every loop for whatever reason
        ofs << result;
        ofs.close();
      }
      else
      {
        SpecBit_error().raise(LOCAL_INFO,"Error opening SpecBit/test_output.slha for writing!");
      }
    }

  } // end namespace SpecBit
} // end namespace Gambit

