#include "ExampleEngine.hh"
#include <boost/foreach.hpp>
#include <boost/typeof/typeof.hpp>
#include "core/exceptions.hh"
#include <sstream>

namespace sufit {

  void ExampleEngine::_f_Update(){
    SUFIT_MSG_DEBUG("enter");
    configuration_mark requested_marks=EngineBase::get_configuration_marks();
    ModelParametersPtr modparams= _usedModel->getModelParameters();

    // Extract raw model parameters. Note that this
    // example only deals with this specific model.
    double vals[7];
    int i=0;
    vals[i++]=(*modparams)["mu"];
    vals[i++]=(*modparams)["m2"];
    vals[i++]=(*modparams)["ma"];
    vals[i++]=(*modparams)["tanb"];
    vals[i++]=(*modparams)["mqtild"];
    vals[i++]=(*modparams)["at/m"];
    vals[i++]=(*modparams)["ab/m"];

    // Some basic tests on the model:
    bool possible=(vals[4]>0) ;
    if(!possible){
      using namespace ::sufit::exceptions;
      SUFIT_THROW_EXCEPTION(e_unphysical()<<i_text("invalid tanb"));
    }
    { // calculate some masses. In this dummy example the mass with ID, is
      // calculated as ID*ID*tanb
      typedef BOOST_TYPEOF(_mass_cache) tmp_type;
      BOOST_FOREACH( tmp_type::value_type & io , _mass_cache ){
        tmp_type::key_type in=io.first ;
        // silly example of some function of model and the mass ID:
        io.second = vals[4]*in*in;
      }
    }
    { // Example of filling binned data structure
      typedef BOOST_TYPEOF(_binned_something_cache) tmp_type;
      BOOST_FOREACH( tmp_type::value_type & io , _binned_something_cache ){
        tmp_type::key_type in=io.first;
        io.second=tmp_type::cache_type(in.get<0>(),in.get<1>(),in.get<2>()); // set it up: bin,elow,ehigh
        for (int i=0;i<io.second.size(); i++){
          io.second[i]=i*i+vals[4];  // fill with bin index^2 + tanb
          std::cout <<" looping at i,"<<i<<std::endl;
        }
      }
    }
    { // Caclulate 5 related numbers based on 2 int arguments
      // and the model
      typedef BOOST_TYPEOF(_domega_cache) tmp_type;
      BOOST_FOREACH( tmp_type::value_type & io , _domega_cache ){
        // Usually this will be a function call. (as in DarkSusyEngine )
        // but in this example we just make the calculation here
        // get<N>(X) selects index N in the mixed-type tuple X
        // io.second is the output, io.first are the options
        tmp_type::key_type in=io.first ;
        get<0>(io.second) = get<0>(in)*vals[4]; //   double result
        get<1>(io.second) = get<1>(in)*vals[4]; //   double result
        get<2>(io.second) = get<0>(in)+get<1>(in); // int
        get<3>(io.second) = get<0>(in)-get<1>(in); // int
        get<4>(io.second) = 5*(get<0>(in) > vals[4]);// int
      }
    }
    { // calculate a number not depending on anything except the model
      typedef BOOST_TYPEOF(_channelX_cache) tmp_type;
      BOOST_FOREACH( tmp_type::value_type & io , _channelX_cache ){
        io.second= 55*vals[4];
      }
    }
  }
}
