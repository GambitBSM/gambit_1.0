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

#define CORE_DEBUG

namespace Gambit
{

  // Methods for Likelihood_Container class.

  /// Constructor
  Likelihood_Container::Likelihood_Container(const std::map<str, primary_model_functor *> &functorMap, 
   DRes::DependencyResolver &dependencyResolver, IniParser::IniFile &iniFile, Priors::CompositePrior &prior, const str &purpose, Printers::BaseBasePrinter& printer) 
  : dependencyResolver (dependencyResolver), 
    realParameters     (prior.getShownParameters().size()), 
    prior              (prior),
    printer            (printer),
    functorMap         (functorMap),
    min_valid_lnlike   (iniFile.getValue<double>("likelihood", "model_invalid_for_lnlike_below")),
    intralooptime_label("Runtime(ns) intraloop"),
    interlooptime_label("Runtime(ns) interloop"),
    totallooptime_label("Runtime(ns) totalloop"),
    /* Note, likelihood container should be constructed after dependency 
       resolution, so that new printer IDs can be safely acquired without
       risk of collision with graph vertex IDs */
    intraloopID(Printers::get_main_param_id(intralooptime_label)),
    interloopID(Printers::get_main_param_id(interlooptime_label)),
    totalloopID(Printers::get_main_param_id(totallooptime_label))
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
    prior.transform(vec, parameterMap);
    
    auto real_it = realParameters.begin();
    for (auto par_it = prior.getShownParameters().begin(), par_end = prior.getShownParameters().end(); par_it != par_end; par_it++, real_it++)
    {
      *real_it = parameterMap[*par_it];
    }
      
    for (auto act_it = functorMap.begin(), act_end = functorMap.end(); act_it != act_end; act_it++)
    {
      auto paramkeys = act_it->second->getcontentsPtr()->getKeys();
      for (auto par_it = paramkeys.begin(), par_end = paramkeys.end(); par_it != par_end; par_it++)
      {
        //std::cout << (act_it->first + "::" + *it) << "   " << parameterMap[act_it->first + "::" + *it] << std::endl;
        act_it->second->getcontentsPtr()->setValue(*par_it, parameterMap[act_it->first + "::" + *par_it]);
      }
    }
    //getchar();
  }
    
  /// Print the results of the likelihood evaluation
  void Likelihood_Container::print(double in, const str &type) const
  {
    //real stuff here to replace what is below;
    double tmp = in; tmp++; str tmp2 = type;
  }
      
  /// Evaluate total likelihood function
  // TODO sort out print statements for invalid points and invalid observables associated with otherwise valid points 
  // (ie ones with valid likelihood calculations but invalid auxilary observables).  Invalid observables should be identified by
  // functor::retrieve_invalid_point_exception() != NULL in printers.
  double Likelihood_Container::main (const std::vector<double> &in)
  {
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
          lnlike += dependencyResolver.getObsLike<double>(*it);
        }
        else if (rtype == "std::vector<double>")
        {
          std::vector<double> result = dependencyResolver.getObsLike<std::vector<double> >(*it);
          for (auto jt = result.begin(); jt != result.end(); ++jt) lnlike += *jt;
        }
        else if (rtype == "float")
        {
          lnlike += dependencyResolver.getObsLike<float>(*it);
        }
        else if (rtype == "std::vector<float>")
        {
          std::vector<float> result = dependencyResolver.getObsLike<std::vector<float> >(*it);
          for (auto jt = result.begin(); jt != result.end(); ++jt) lnlike += *jt;
        }
        else core_error().raise(LOCAL_INFO, "Unexpected target functor type.");
        bool isnan = Utils::isnan(lnlike);
        if (isnan or lnlike <= min_valid_lnlike) dependencyResolver.invalidatePointAt(*it, isnan);
        logger() << LogTags::core << "Computed likelihood vertex " << *it << "." << EOM;
      }
      // Catch points that are invalid, either due to low like or pathology.  Skip the rest of the vertices if a point is invalid.
      catch(invalid_point_exception& e)
      {
        logger() << LogTags::core << "Point invalidated by " << e.thrower()->origin() << "::" << e.thrower()->name() << ": " << e.message() << EOM;
        logger().leaving_module();
        lnlike = min_valid_lnlike;
        compute_aux = false;
        #ifdef CORE_DEBUG
          cout << "Point invalid." << endl;
        #endif        
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
        }
      }
    }
      
    #ifdef CORE_DEBUG
      cout << "log-likelihood: " << lnlike << endl;
    #endif
      
    dependencyResolver.resetAll();
    return lnlike;
  }

  
}

