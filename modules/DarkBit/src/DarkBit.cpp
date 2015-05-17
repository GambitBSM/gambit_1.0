//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Central module file of DarkBit.  Calculates dark matter 
///  related observables.
///  
///  Most of the model- or observable-specific code is 
///  stored in separate source files.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Torsten Bringmann
///          (torsten.bringmann@desy.de) 
///  \date 2013 Jun
///  \date 2014 Mar
///
///  \author Christoph Weniger
///          (c.weniger@uva.nl)
///  \date 2013 Jul - 2015 May
///
///  \author Lars A. Dal  
///          (l.a.dal@fys.uio.no)
///  \date 2014 Mar, Jul, Sep, Oct
///  
///  \author Christopher Savage
///          (chris@savage.name)
///  \date 2014 Oct
///  \date 2015 Jan, Feb
///  
///  \author Pat Scott
///          (pscott@imperial.ac.uk)
///  \date 2014 Mar
///  \date 2015 Mar
///
///  *********************************************

#include "gambit/Elements/gambit_module_headers.hpp"
#include "gambit/DarkBit/DarkBit_rollcall.hpp"

namespace Gambit {
  namespace DarkBit {

    //////////////////////////////////////////////////////////////////////////
    //
    //                 Simple DM property extractors
    //
    //////////////////////////////////////////////////////////////////////////

    /// Retrieve the DM mass in GeV for generic models (GeV)
    void mwimp_generic(double &result) { 
      using namespace Pipes::mwimp_generic;
      result = Dep::TH_ProcessCatalog->getParticleProperty(*Dep::DarkMatter_ID).mass; 
    }

    /// Retrieve the DM mass in GeV for the scalar singlet model (GeV)
    void mwimp_SingletDM(double &result) 
    { 
      result = *Pipes::mwimp_SingletDM::Param["mass"]; 
    }

    /*! \brief Retrieve the total thermally-averaged annihilation cross-section
     * for indirect detection (cm^3 / s).
     */
    // FIXME this needs to be updated once
    // annProc.genTotalRate->bind("v")->eval(0.) works.
    void sigmav_late_universe(double &result)
    {
      using namespace Pipes::sigmav_late_universe;
      std::string DMid = *Dep::DarkMatter_ID;
      TH_Process annProc = Dep::TH_ProcessCatalog->getProcess(DMid, DMid);
      result = 0.0;
      for (std::vector<TH_Channel>::iterator it = annProc.channelList.begin();
          it != annProc.channelList.end(); ++it)
      {
        if ( it->nFinalStates == 2 )
        {
          // (sv)(v=0) for two-body final state
          result += it->genRate->bind("v")->eval(0.);
        }
      }
    }


    //////////////////////////////////////////////////////////////////////////
    //
    //                          DarkBit Unit Test
    //
    //////////////////////////////////////////////////////////////////////////

    /*! \brief Central unit test routine.
     *
     * Dumps various DM related results into yaml files for later inspection.
     */
    void UnitTest_DarkBit(int &result)
    {
      using namespace Pipes::UnitTest_DarkBit;
      /* This function depends on all relevant DM observables (indirect and
       * direct) and dumps them into convenient files in YAML format, which
       * afterwards can be checked against the expectations.
       */

      static unsigned int counter = 0;

      double M_DM = (*Dep::DD_couplings).M_DM;
      double Gps = (*Dep::DD_couplings).gps;
      double Gpa = (*Dep::DD_couplings).gpa;
      double Gns = (*Dep::DD_couplings).gns;
      double Gna = (*Dep::DD_couplings).gna;
      double oh2 = *Dep::RD_oh2;

      std::string DMid = *Dep::DarkMatter_ID;
      TH_Process annProc = (*Dep::TH_ProcessCatalog).getProcess(DMid, DMid);
      Funk::Funk spectrum = (*Dep::GA_AnnYield)->set("v", 0.);

      std::ostringstream filename;
      filename << runOptions->getValueOrDef<std::string>("UnitTest_DarkBit",
          "fileroot");
      filename << "_" << counter << ".yml";
      counter++;

      std::ofstream os;
      os.open(filename.str());
      if(os)
      {
        // Standard output.
        os << "# Direct detection couplings\n";
        os << "DDcouplings:\n";
        os << "  gps: " << Gps << "\n";
        os << "  gpa: " << Gpa << "\n";
        os << "  gns: " << Gns << "\n";
        os << "  gna: " << Gna << "\n";
        os << "\n";
        os << "# Particle masses [GeV] \n";
        os << "ParticleMasses:\n";
        os << "  Mchi: " << M_DM << "\n";
        os << "\n";
        os << "# Relic density Omega h^2\n";
        os << "RelicDensity:\n";
        os << "  oh2: " << oh2 << "\n";
        os << "\n";

        // Output gamma-ray spectrum (grid be set in YAML file).
        double x_min = 
          runOptions->getValueOrDef<double>(0.1, "GA_AnnYield", "Emin");
        double x_max = 
          runOptions->getValueOrDef<double>(10000, "GA_AnnYield", "Emax");
        int n = runOptions->getValueOrDef<double>(26, "GA_AnnYield", "nbins");
        // from 0.1 to 500 GeV
        std::vector<double> x = Funk::logspace(log10(x_min), log10(x_max), n);
        std::vector<double> y = spectrum->bind("E")->vect(x);
        os << "# Annihilation spectrum dNdE [1/GeV]\n";
        os << "GammaRaySpectrum:\n";
        os << "  E: [";
        for (std::vector<double>::iterator it = x.begin(); it != x.end(); it++)
          os << *it << ", ";
        os  << "]\n";
        os << "  dNdE: [";
        for (std::vector<double>::iterator it = y.begin(); it != y.end(); it++)
          os << *it << ", ";
        os  << "]\n";
        os << std::endl;

        os << "# Annihilation rates\n";
        os << "AnnihilationRates:\n";
        for (std::vector<TH_Channel>::iterator it = annProc.channelList.begin();
            it != annProc.channelList.end(); ++it)
        {
          os << "  ";
          for (std::vector<std::string>::iterator 
              jt = it->finalStateIDs.begin(); jt!=it->finalStateIDs.end(); jt++)
          {
            os << *jt << "";
          }
          if (it->finalStateIDs.size() == 2)
            os << ": " << it->genRate->bind("v")->eval(0);
          if (it->finalStateIDs.size() == 3)
            os << ": " << it->genRate->bind("v", "E", "E1")->eval(0., 0., 0.);
          os << "\n";
        }
        os << std::endl;
      }
      else
      {
        logger() << "Warning: outputfile not open for writing." << std::endl;
      }
      os.close();
      result = 0;
    }
  }
}
