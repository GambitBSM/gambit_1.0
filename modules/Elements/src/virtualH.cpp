//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Simple function for returning SM Higgs partial
///  and total widths as a function of virtuality,
///  as read from data files from CERN Yellow 
///  Paper arXiv:1101.0593.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Christoph Weniger
///          <c.weniger@uva.nl>
///  \date 2014 Dec
///
///  \author Pat Scott
///          <p.scott@imperial.ac.uk>
///  \date 2015 May
///
///  *********************************************

#include <map>
#include <vector>
#include <sstream>

#include "gambit/Elements/virtualH.hpp"
#include "gambit/Utils/ASCIItableReader.hpp"
#include "gambit/cmake/cmake_variables.hpp"

namespace Gambit
{
    
  /// Higgs branching ratios and total width Gamma [GeV], as function of mass [GeV] (90 - 300 GeV)
  double Virtual_SMHiggs_widths(str channel, double mh)
  {
    // Path to file containing virtual Higgs width tables.
    const str VirtualH_tabfile = GAMBIT_DIR "/Elements/data/Higgs_decay_1101.0593.dat";

    // Initialise, reading in the data table and setting up the interpolators.
    static ASCIItableReader table(VirtualH_tabfile);  
    static std::map<std::string, Funk::Funk> f_vs_mass;
    static bool initialised = false;
    static double minmass, maxmass;
    const static std::vector<str> colnames = initVector<std::string>("mass",
     "bb", "tautau", "mumu", "ss", "cc", "tt", "gg", "gammagamma", "Zgamma",
     "WW", "ZZ", "Gamma");
    if (not initialised)
    {
      table.setcolnames(colnames);
      for (auto it = colnames.begin(); it != colnames.end(); it++)
      {
        f_vs_mass[*it] = Funk::interp("mass", table["mass"], table[*it]);
      }
      minmass = table["mass"][0];
      maxmass = table["mass"][table.getnrow()-1];
      initialised = true;
    }

    // Exit if the requested channel is unknown.
    if (std::find(colnames.begin(), colnames.end(), channel) == colnames.end())
    {
      std::stringstream msg;
      msg << "Unknown Higgs decay channel: " << channel << ".  Recognised channel codes are:";
      for (auto it = colnames.begin(); it != colnames.end(); it++) if (*it != "mass") msg << endl << "  " << *it;
      utils_error().raise(LOCAL_INFO, msg.str());
    }

    // Exit if the requested mass is out of range.
    if (mh < minmass or mh > maxmass)
    {
      std::stringstream msg;
      msg << "Requested Higgs virtuality is " << mh << "; allowed range is " << minmass << "--" << maxmass << " GeV!";
      utils_error().raise(LOCAL_INFO, msg.str());
    }

    // Retrieve the interpolated result.     
    return f_vs_mass[channel]->bind("mass")->eval(mh);
    
  }
  
}
