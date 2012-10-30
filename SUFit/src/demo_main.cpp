#include "demo_main.hh"

// some specifics
#include "mssmX.hh"
#include "ExampleEngine.hh"
#include "AtlasExampleEngines.hh"

#include "DarkSusyEngine.hh"
#include "RandomScanner.hh"
#include "AtlasExampleComparator.hh"

// some core classes
#include "core/SimpleHandleToComparator.hh"
#include "core/SimplePoissonComparator.hh"
#include "core/LLHSumComparator.hh"
#include "core/ModelParameters.hh"
#include "core/Handler.hh"
#include "core/logcore.hh"

#include "BinnedData.hh"
#include "ModelParametersSusy.hh"
#include "AtlasExampleEngines.hh"
#include "AtlasEventInfo.hh"

/*!
//  \brief Example of sufit core framework use
//
//   A program to demo what can be done with the current code.
//
//////////////////////////////////////////////////////////////////////////////
//
//  Note note note! dsdemo_main.cxx is a more up to date example.
//  /Johan Aug-September 2011
//
/////////////////////////////////////////////////////////////////////////////
//
//   \author Johan Lundberg
//   \date July-September 2011

*/
int main(){
  using namespace sufit;

  logsetup::setfile("_sufit_msgs_errors.txt");              // setup detailed debug
  logsetup::setfile_upto_LOG("_sufit_msgs_normal.txt");    // into files, depending
  logsetup::setfile_upto_DEBUG("_sufit_msgs_debug0.txt");   // on debug level.
  logsetup::setfile_upto_DEBUG("_sufit_msgs_debug1.txt",1);
  logsetup::setfile_upto_DEBUG("_sufit_msgs_debug2.txt",2);
  logsetup::setLogLevel(logsetup::sDEBUG4);   // log all
  logsetup::setEchoLevel(logsetup::sINFO); // echo only relevant logs
  SUFIT_MSG_INFO("starting example");

  // Modelparameters defines a state of a model. Some modelparameters may
  // only work with some models, but that is up to the programmers of those classes.
  // ModelParameters also has a well defined interface to the scanner (look at the code)

  ModelParametersPtr myModelPars(new ModelParameters_CMSSM5);
  myModelPars->redefineValue("m0",50,10,1000);
  myModelPars->redefineValue("m1/2",50,10,1000);
  myModelPars->redefineValue("A0",5,10,1000);
  myModelPars->redefineValue("sgnmu",1,-1,1);
  myModelPars->redefineValue("tanb",50,4,1000);

  ModelBasePtr aModel(new mssmX(myModelPars)); // mssms

  // Something giving theory predictions for atlas signature
  atlasTheoryEventEngine myAtlasTheoryEngine(aModel);

  // something that returns experimental statements for a model: (eg, gamma counts, number of observed events)
  // (naturally, some may also be independent on aModel - but they need not be)
  atlasExperimentEngine myAtlasExperimentEngine(aModel);

  ExampleEngine myEn(aModel);


  typedef shared_ptr<Handler<double> > shared_dbl;
  shared_dbl vM20 = myEn.mass("vM20",20); // define a varibale with an option
  shared_dbl vM21 = myEn.mass("vM21",21); // -- || --

  // double above is just an example. Other example. These give HandlerBase<AtlasEvent>* :
  // (could be any type)
  typedef shared_ptr<Handler<AtlasEventInfo> > shared_AtlasEventInfo;
  shared_AtlasEventInfo myAtlasSimEvent=myAtlasTheoryEngine.AtlasEvent("myATL-EV");
  shared_AtlasEventInfo myAtlasDataEvent=myAtlasExperimentEngine.AtlasEvent("myATL-EXP");


  //////////////////////////
  //
  // Comparators
  // -----------------
  //
  // Now we use some helper classes who knows how to form likelihoods based on
  // these numbers. Examples:
  //
  // Example 1:
  //
  // implement a specific atlas analysis using numbers from both a therory and
  // experimental module

  ComparatorBasePtr myLLHdilepCalc(new AtlasExampleComparator(static_pointer_cast<Handler<AtlasEventInfo> >(myAtlasDataEvent),static_pointer_cast<Handler<AtlasEventInfo> >(myAtlasSimEvent)));

  // Example 2: use the LLH provided by some Engine. In this (silly) case
  // we reinterpret the mass as a LLH value:
  ComparatorBasePtr myMass_LLH(new simpleHandleToComparator(vM20)) ;

  // Example 3: use the LLH calculated by comparing a single poisson count with an expectation:
  // ComparatorBasePtr myPoissonExperiment(new simplePoissonComparator<double>(myFermiData,myFermiExpectation));

  // Example 4: a combined likelihood using the above:
  // add other likelihood components:
  std::vector<ComparatorBasePtr > llh_in_vector;
  llh_in_vector.push_back(myLLHdilepCalc);
  llh_in_vector.push_back(myMass_LLH);
  //  llh_in_vector.push_back(myPoissonExperiment);
  ComparatorBasePtr myLLHsummer(new LLHSumComparator(llh_in_vector));

  //////////////////////
  //   Scanner
  std::cout << "  ------------- running scanner -------------- " <<std::endl;
  RandomScanner myScanner(myLLHsummer,aModel);
  // first one manual step:
  std::cout << "  ------------- first just one step ---------- " <<std::endl;
  myScanner.doScanStep();
  // Note that this updates the 'myModelPars' variable, so we could inspect
  // it here

  std::cout << "  ------------- a few more steps: ------------ " <<std::endl;
  // then 2 more steps. depending on the scanner class it may save/reject
  // or do whatever it wants. It could also be a minimizer taking other
  // arguments to the constructor. if it needs history or some other
  // states it's naturally stored in it's private members.

  myScanner.runStepping(2);

  std::cout << "  -------------  END OF " << __FILE__ <<std::endl;

  return 1;
};
