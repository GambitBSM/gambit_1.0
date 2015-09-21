//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Abstract class for accessing general spectrum information.
///
///  *********************************************
///
///  Authors: 
///  <!-- add name and date if you modify -->
///   
///  \author Peter Athron  
///          (peter.athron@coepp.org.au)
///  \date 2014, 2015 Jan, Feb, Mar 
///
///  \author Ben Farmer
///          (benjamin.farmer@fysik.su.se)
///  \date 2014, 2015 Jan - Jul 
///
///  *********************************************

#include <fstream>

#include "gambit/Elements/subspectrum.hpp"
#include "gambit/Elements/spec_fptrfinder.hpp"

namespace Gambit
{

  /// @{ Remnants of old interface (PDG overloads for getter functions)
  DEFINE_PDG_GETTERS(RunningPars,mass_parameter)
  DEFINE_PDG_GETTERS(RunningPars,mass2_parameter)
  DEFINE_PDG_GETTERS(RunningPars,mass3_parameter)
  DEFINE_PDG_GETTERS(RunningPars,mass4_parameter)
  DEFINE_PDG_GETTERS(RunningPars,dimensionless_parameter)
  DEFINE_PDG_GETTERS(RunningPars,mass_eigenstate)

  DEFINE_PDG_GETTERS(Phys,Pole_Mass)
  DEFINE_PDG_GETTERS(Phys,Pole_Mixing)
  /// @}

  /// Dump out spectrum information to an SLHA file (if possible)
  void SubSpectrum::getSLHA(const str& filename) const
  {
    std::ofstream ofs(filename);
    if (ofs)
    { 
      ofs << getSLHAea();
    }
    else
    { 
      utils_error().raise(LOCAL_INFO,"Could not open file '"+filename+
       "' for writing. Please check that the path exists!"); 
    }     
    ofs.close();
  }
           
  /// Get spectrum information in SLHAea format (if possible)
  SLHAstruct SubSpectrum::getSLHAea() const
  {
    SLHAstruct slha;
    this->add_to_SLHAea(slha);
    return slha;    
  }

   /// @{ SubSpectrum member function defintions

   /// Add simple symmetric uncertainty data to a vector of parameters
   /// 'Phys' tag only. Could easily add equivalent for 'Running', but
   /// these uncertainties probably don't make sense for them.
   /// (uncertainities are input as fractional values, or 'relative deviation')
   void SubSpectrum::add_uncertainty(const double rd, const Par::Phys tag, const std::vector<str>& params)
   {
      add_uncertainty_high(rd, tag, params);
      add_uncertainty_low(rd, tag, params);
   }

   void SubSpectrum::add_uncertainty_high(const double rd, const Par::Phys tag, const std::vector<str>& params)
   {
      for(std::vector<str>::const_iterator it = params.begin();
	  it != params.end(); ++it)
	{
	  str high = "rd_" + *it + "_high";
	  this->phys().set_override(tag, rd, high, false);
	}
   }
   void SubSpectrum::add_uncertainty_low(const double rd, const Par::Phys tag, const std::vector<str>& params)
   {
      for(std::vector<str>::const_iterator it = params.begin();
	  it != params.end(); ++it)
	{
	  str low =  "rd_" + *it + "_low";
	  this->phys().set_override(tag, rd, low,  false);
	}
   }

   void SubSpectrum::add_uncertainty(const double rd, const Par::Phys tag, const str& par)
   {
     std::vector<str> params;
     params.push_back(par);
     add_uncertainty(rd, tag, params);
   }

   void SubSpectrum::add_uncertainty_high(const double rd, const Par::Phys tag, const str& par)
   {
     std::vector<str> params;
     params.push_back(par);
     add_uncertainty_high(rd, tag, params);
   }

   void SubSpectrum::add_uncertainty_low(const double rd, const Par::Phys tag, const str& par)
   {
     std::vector<str> params;
     params.push_back(par);
     add_uncertainty_low(rd, tag, params);
   }


   /// As above, 1-index setters
   void SubSpectrum::add_uncertainty(const double rd, const Par::Phys tag, const std::vector<str>& params, const std::vector<int> indices)
   {
      add_uncertainty_high(rd, tag, params, indices);
      add_uncertainty_low(rd, tag, params, indices);
   }

   void SubSpectrum::add_uncertainty_high(const double rd, const Par::Phys tag, const std::vector<str>& params, const std::vector<int> indices)
   {
      for(std::vector<str>::const_iterator it = params.begin();
	  it != params.end(); ++it)
	{
	  for(std::vector<int>::const_iterator i = indices.begin(); i != indices.end() ; ++i){
	    str high = "rd_" + *it + "_high";
	    this->phys().set_override(tag, rd, high, *i, false);
	  }
	}
   }

   void SubSpectrum::add_uncertainty_low(const double rd, const Par::Phys tag, const std::vector<str>& params, const std::vector<int> indices)
   {
      for(std::vector<str>::const_iterator it = params.begin();
	  it != params.end(); ++it)
	{
	  for(std::vector<int>::const_iterator i = indices.begin(); i != indices.end() ; ++i){
	    str low =  "rd_" + *it + "_low";
	    this->phys().set_override(tag, rd, low,  *i, false);
	  }
	}
   }

   /// 1-index convenience overloads
   void SubSpectrum::add_uncertainty(const double rd, const Par::Phys tag, const str& par, int i)
   {
     std::vector<str> params;
     std::vector<int> indices;
     params.push_back(par);
     indices.push_back(i);
     add_uncertainty(rd, tag, params, indices);
   }

   void SubSpectrum::add_uncertainty_high(const double rd, const Par::Phys tag, const str& par, const int i)
   {
     std::vector<str> params;
     std::vector<int> indices;
     params.push_back(par);
     indices.push_back(i);
     add_uncertainty_high(rd, tag, params, indices);
   }

   void SubSpectrum::add_uncertainty_low(const double rd, const Par::Phys tag, const str& par, const int i)
   {
     std::vector<str> params;
     std::vector<int> indices;
     params.push_back(par);
     indices.push_back(i);
     add_uncertainty_low(rd, tag, params, indices);
   }

   void SubSpectrum::add_uncertainty(const double rd, const Par::Phys tag, const str& par, const std::vector<int> indices)
   {
     std::vector<str> params;
     params.push_back(par);
     add_uncertainty(rd, tag, params, indices);
   }

   void SubSpectrum::add_uncertainty_high(const double rd, const Par::Phys tag, const str& par, const std::vector<int> indices)
   {
     std::vector<str> params;
     params.push_back(par);
     add_uncertainty_high(rd, tag, params, indices);
   }

   void SubSpectrum::add_uncertainty_low(const double rd, const Par::Phys tag, const str& par, const std::vector<int> indices)
   {
     std::vector<str> params;
     params.push_back(par);
     add_uncertainty_low(rd, tag, params, indices);
   }

   void SubSpectrum::add_uncertainty(const double rd, const Par::Phys tag, const std::vector<str>& params, const int i)
   {
     std::vector<int> indices;
     indices.push_back(i);
     add_uncertainty(rd, tag, params, indices);
   }
 
   void SubSpectrum::add_uncertainty_high(const double rd, const Par::Phys tag, const std::vector<str>& params, const int i)
   {
     std::vector<int> indices;
     indices.push_back(i);
     add_uncertainty_high(rd, tag, params, indices);
   }

   void SubSpectrum::add_uncertainty_low(const double rd, const Par::Phys tag, const std::vector<str>& params, const int i)
   {
     std::vector<int> indices;
     indices.push_back(i);
     add_uncertainty_low(rd, tag, params, indices);
   }

   /// @}


}



