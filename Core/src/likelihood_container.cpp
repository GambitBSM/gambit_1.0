//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  Likelihood container implementations.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Christoph Weniger
///    (c.weniger@uva.nl)
///  \date 2013 May, June, July
///
///  \author Gregory Martinez
///    (gregory.david.martinez@gmail.com)
///  \date 2013 July
///  \date 2014 Feb
///
///  \author Pat Scott
///    (patscott@physics.mcgill.ca)
///  \date 2013 Aug
///  \date 2014 May, June
///
///  *********************************************

#include "gambit/Core/likelihood_container.hpp"
#include "gambit/Utils/mpiwrapper.hpp"
#include "gambit/Utils/signal_helpers.hpp"
#include "gambit/Utils/signal_handling.hpp"

//#define CORE_DEBUG

namespace Gambit
{

  // Methods for Likelihood_Container class.

  /// Constructor
  Likelihood_Container::Likelihood_Container(const std::map<str, primary_model_functor *> &functorMap, 
   DRes::DependencyResolver &dependencyResolver, IniParser::IniFile &iniFile, 
   Priors::CompositePrior &prior, const str &purpose, Printers::BaseBasePrinter& printer
  #ifdef WITH_MPI
    , GMPI::Comm& comm
  #endif
  ) 
  : dependencyResolver (dependencyResolver), 
    prior              (prior),
    printer            (printer),
    functorMap         (functorMap),
    #ifdef WITH_MPI
    errorComm          (comm), 
    #endif
    min_valid_lnlike   (iniFile.getValue<double>("likelihood", "model_invalid_for_lnlike_below")),
    intralooptime_label("Runtime(ns) intraloop"),
    interlooptime_label("Runtime(ns) interloop"),
    totallooptime_label("Runtime(ns) totalloop"),
    /* Note, likelihood container should be constructed after dependency 
       resolution, so that new printer IDs can be safely acquired without
       risk of collision with graph vertex IDs */
    intraloopID(Printers::get_main_param_id(intralooptime_label)),
    interloopID(Printers::get_main_param_id(interlooptime_label)),
    totalloopID(Printers::get_main_param_id(totallooptime_label)),
    #ifdef CORE_DEBUG
      debug            (true)
    #else
      debug            (iniFile.getValueOrDef<bool>(false, "likelihood", "debug"))
    #endif
  {
    // Set the list of valid return types of functions that can be used for 'purpose' by this container class.
    const std::vector<str> allowed_types_for_purpose = initVector<str>("double", "std::vector<double>", "float", "std::vector<float>");
    // Find subset of vertices that match requested purpose
    target_vertices = dependencyResolver.getObsLikeOrder();
    int size = 0;
    auto it = target_vertices.begin();
    for (auto vert_it = target_vertices.begin(), vert_end = target_vertices.end(); vert_it != vert_end; vert_it++)
    {
      if (dependencyResolver.getIniEntry(*vert_it)->purpose == purpose)
      {
        return_types[*vert_it] = dependencyResolver.checkTypeMatch(*vert_it, purpose, allowed_types_for_purpose);
        *(it++) = *vert_it;
        size++;
      }
      else
      {
        aux_vertices.push_back(*vert_it);
      }
    }
    target_vertices.resize(size);
  }

  /// Do the prior transformation and populate the parameter map
  void Likelihood_Container::setParameters (const std::vector<double> &vec)
  {
    // Do the prior transformation, saving the real parameter values in the parameterMap
    prior.transform(vec, parameterMap);

    // Set up a stream containing the parameter values, for diagnostic output
    std::ostringstream parstream;

    // Iterate over the primary_model_parameters functors of all the models being scanned.
    for (auto act_it = functorMap.begin(), act_end = functorMap.end(); act_it != act_end; act_it++)
    {
      parstream << "  " << act_it->first << ":" << endl;
      // Get the names of the parameters for this model.
      auto paramkeys = act_it->second->getcontentsPtr()->getKeys();
      // Iterate over the parameters, setting their values in the primary_model_parameters functors from the parameterMap.
      for (auto par_it = paramkeys.begin(), par_end = paramkeys.end(); par_it != par_end; par_it++)
      {
        str key = act_it->first + "::" + *par_it;
        parstream << "    " << *par_it << ": " << parameterMap[key] << endl;
        act_it->second->getcontentsPtr()->setValue(*par_it, parameterMap[key]);
      }
    }

    // Notify all exceptions of the values of the parameters for this point.
    exception::set_parameters("\n\nYAML-ready parameter values at failed point:\n"+parstream.str());

    // Print out the MPI rank and values of the parameters for this point if in debug mode.
    if (debug)
    {
      #ifdef WITH_MPI
        GMPI::Comm COMM_WORLD;
        std::cout << "MPI process rank: "<< COMM_WORLD.Get_rank() << std::endl;
      #endif
      cout << parstream.str();
    }
  }

  /// Evaluate total likelihood function
  double Likelihood_Container::main (const std::vector<double> &in)
  {
    /// Unblock system signals (these are blocked to prevent external scanner 
    /// codes from getting interrupted while they are performing sensitive
    /// tasks, like writing to disk; i.e. we do not trust them to have 
    /// protected themselves properly.
    unblock_signals();    

    /// Check for signals to abort run
    signaldata().check_for_shutdown_signal();

    double lnlike = 0;
    bool compute_aux = true;
    setParameters(in);

    logger() << LogTags::core << "Number of vertices to calculate: " << (target_vertices.size() + aux_vertices.size()) << EOM;

    // Begin timing of total likelihood evaluation
    std::chrono::time_point<std::chrono::system_clock> startL = std::chrono::system_clock::now();
  
    // Compute time since the previous likelihood evaluation ended
    std::chrono::duration<double> interloop_time = startL - previous_endL;

    // First work through the target functors, i.e. the ones contributing to the likelihood.
    for (auto it = target_vertices.begin(), end = target_vertices.end(); it != end; ++it)
    {
      logger() << LogTags::core << "Calculating likelihood vertex " << *it << "." << EOM;
      try
      {
        dependencyResolver.calcObsLike(*it,getPtID()); //pointID is passed through to the printer call for each functor
        // Switch depending on whether the functor returns floats or doubles and a single likelihood or a vector of them.
        str rtype = return_types[*it];
        if (rtype == "double")
        {
          double result = dependencyResolver.getObsLike<double>(*it);
          if (debug) cout << "  Likelihood contribution from " << dependencyResolver.get_functor(*it)->origin()
                          << "::" << dependencyResolver.get_functor(*it)->name() << ": " << result << endl;
          lnlike += result;
        }
        else if (rtype == "std::vector<double>")
        {
          std::vector<double> result = dependencyResolver.getObsLike<std::vector<double> >(*it);
          for (auto jt = result.begin(); jt != result.end(); ++jt)
          {
            if (debug) cout << "  Likelihood contribution from " << dependencyResolver.get_functor(*it)->origin()
                            << "::" << dependencyResolver.get_functor(*it)->name() << ": " << *jt << endl;
            lnlike += *jt;
          }
        }
        else if (rtype == "float")
        {
          float result = dependencyResolver.getObsLike<float>(*it);
          if (debug) cout << "  Likelihood contribution from " << dependencyResolver.get_functor(*it)->origin()
                          << "::" << dependencyResolver.get_functor(*it)->name() << ": " << result << endl;
          lnlike += result;
        }
        else if (rtype == "std::vector<float>")
        {
          std::vector<float> result = dependencyResolver.getObsLike<std::vector<float> >(*it);
          for (auto jt = result.begin(); jt != result.end(); ++jt)
          {
            if (debug) cout << "  Likelihood contribution from " << dependencyResolver.get_functor(*it)->origin()
                            << "::" << dependencyResolver.get_functor(*it)->name() << ": " << *jt << endl;
            lnlike += *jt;
          }
        }
        else core_error().raise(LOCAL_INFO, "Unexpected target functor type.");

        // Don't just roll over if it's a NaN, kill the scan and force the developer to fix it.
        if (Utils::isnan(lnlike))
        {
          std::ostringstream err;
          err << "Likelihood contribution from " << dependencyResolver.get_functor(*it)->origin()
                 << "::" << dependencyResolver.get_functor(*it)->name() << " is NaN!";
          core_error().raise(LOCAL_INFO, err.str());
        }

        // If we've dropped below the likelihood corresponding to effective zero already, skip the rest of the vertices.
        if (lnlike <= min_valid_lnlike) dependencyResolver.invalidatePointAt(*it, false);

        logger() << LogTags::core << "Computed likelihood vertex " << *it << "." << EOM;
      }

      // Catch points that are invalid, either due to low like or pathology.  Skip the rest of the vertices if a point is invalid.
      catch(invalid_point_exception& e)
      {
        logger() << LogTags::core << "Point invalidated by " << e.thrower()->origin() << "::" << e.thrower()->name() << ": " << e.message() << EOM;
        logger().leaving_module();
        lnlike = min_valid_lnlike;
        compute_aux = false;
        if (debug) cout << "Point invalid." << endl;
        break;
      }

      // End timing of total likelihood evaluation
      std::chrono::time_point<std::chrono::system_clock> endL = std::chrono::system_clock::now();
 
      // Compute time since the previous likelihood evaluation ended
      // I.e. computing time of this likelihood, plus overhead from previous inter-loop time.
      std::chrono::duration<double> true_total_loop_time = endL - previous_endL;

      // Update stored timing information for use in next loop
      previous_startL = startL;
      previous_endL   = endL;

      // Print timing data
      if(dependencyResolver.printTiming())
      {
        int rank = printer.getRank();
        std::chrono::duration<double> runtimeL = endL - startL;
        printer.print(runtimeL.count(),            intralooptime_label,intraloopID,rank,getPtID());
        printer.print(interloop_time.count(),      interlooptime_label,interloopID,rank,getPtID());
        printer.print(true_total_loop_time.count(),totallooptime_label,totalloopID,rank,getPtID());
      }
    }

    // If none of the likelihood calculations have invalidated the point, calculate the additional auxiliary observables.
    if (compute_aux)
    {
      for (auto it = aux_vertices.begin(), end = aux_vertices.end(); it != end; ++it)
      {
        logger() << LogTags::core << "Calculating auxiliary vertex " << *it << EOM;
        try
        {
          dependencyResolver.calcObsLike(*it,getPtID());
          logger() << LogTags::core << "done with auxiliary vertex " << *it << EOM;;
        }
        catch(Gambit::invalid_point_exception& e)
        {
          logger() << LogTags::core << "Observable calculation was declared invalid by " << e.thrower()->origin()
                   << "::" << e.thrower()->name() << ".  Not declaring point invalid, as no likelihood depends on this."
                   << "Message: " << e.message() << EOM;
          if (debug) cout << "Auxiliary invalid: " << e.thrower()->origin() << "::" << e.thrower()->name() << "." << endl;
        }
      }
    }

    if (debug) cout << "log-likelihood: " << lnlike << endl << endl;
    dependencyResolver.resetAll();

    #ifdef WITH_MPI
    /// Check for shutdown signals from other processes
    if(errorComm.Iprobe(MPI_ANY_SOURCE, errorComm.mytag))
    {
      int tmp_buf;
      MPI_Status msg_status;
      errorComm.Recv(&tmp_buf, 1, MPI_ANY_SOURCE, errorComm.mytag, &msg_status);
      // Set flag to begin emergency shutdown
      signaldata().set_shutdown_begun(1);
      logger() << LogTags::core << LogTags::info << "Received emergency shutdown signal from process with rank " << msg_status.MPI_SOURCE << EOM;
    }
    #endif

    /// Check once more for signals to abort run
    signaldata().check_for_shutdown_signal();

    /// Re-block signals 
    block_signals();    

    return lnlike;
  }


}

