//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Type definition header for DarkBit Process
///  Catalogue constituents types.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Christoph Weniger
///          (c.weniger@uva.nl)
///  \date 2012 Mar, 2014 Jan
///
///  \author Pat Scott 
///          (patscott@physics.mcgill.ca)
///  \date 2015 Mar
///
///  *********************************************


#ifndef __ProcessCatalogue_hpp__
#define __ProcessCatalogue_hpp__

#include <vector>
#include <map>

#include "gambit/Utils/util_types.hpp"
#include "gambit/Utils/funktions.hpp"

namespace Gambit
{

  namespace DarkBit
  {
       

    /// A single resonance of a given width at a given energy (both in GeV) 
    struct TH_Resonance
    {
      TH_Resonance() : energy(0.), width (0.) {}
      TH_Resonance(const double & energy, const double & width) : energy(energy), width(width) {}
      double energy;
      double width;
    };

    /// Location of resonances and thresholds in energy (GeV)
    struct TH_resonances_thresholds
    {
      TH_resonances_thresholds() {}
      TH_resonances_thresholds(const TH_resonances_thresholds & copy) : resonances(copy.resonances), threshold_energy(copy.threshold_energy) {}
      TH_resonances_thresholds(const std::vector<TH_Resonance> & resonances, const std::vector<double> & thresholds) : resonances(resonances), threshold_energy(thresholds) {}
      std::vector<TH_Resonance> resonances;
      std::vector<double> threshold_energy;
    };

    /// A container for the mass and spin of a particle.
    struct TH_ParticleProperty
    {
        
        /// Constructor
        TH_ParticleProperty(double, unsigned int);

        /// Particle mass (GeV)
        double mass;
        
        /// Twice the spin of the particle
        unsigned int spin2;
        
    };

    /// All data on a single annihilation or decay channel,
    /// e.g. chi --> gamma gamma, chi chi --> mu+ mu-.
    struct TH_Channel
    {

        // Functions

        /// Constructor
        TH_Channel(std::vector<str>, Funk::Funk);
        
        /// Print information about this channel.
        void printChannel() const;

        /// Indicate whether or not the final states of this channel contain a specific particle.
        bool channelContains(str p) const;

        /// Indicate whether or not this channel is the one defined by some specific final states.  Particle name version.
        bool isChannel(str, str, str = "", str = "") const;
        /// Indicate whether or not this channel is the one defined by some specific final states.  Particle vector version.
        bool isChannel(std::vector<str>) const;


        // Variables

        /// Final state identifiers
        std::vector<std::string> finalStateIDs;

        /// Number of final state particles in this channel
        int nFinalStates;

        /// Generic flags
        std::map<std::string, bool> flags;

        /// Energy dependence of final state particles. Includes v_rel as last argument in case of annihilation
        /// \TODO: Implement checks on TH_Channel::genRate
        Funk::Funk genRate;
        
    };

    /// A container for a single process.
    /// Contains all channels for decay of a single particle, or for 
    /// annihilation of a specific pair of particles.  That is,
    /// TH_Process groups channels together according to initial states,
    /// e.g. chi --> everything, chi chi --> everything.
    struct TH_Process
    {

        // Functions
        
        /// Constructor for decay process
        TH_Process(str);
        
        /// Constructor for annihilation process
        TH_Process(str, str);

        /// Compare initial states
        bool isProcess(str, str = "") const;
 
        /// Check for given channel.  Return a pointer to it if found, NULL if not.
        const TH_Channel* find(std::vector<str>) const;


        // Variables

        /// Annihilation or decay?
        bool isAnnihilation;

        /// Decaying particle or particle pair
        /// @{
        str particle1ID;
        str particle2ID;
        /// @}

        /// Generic flags
        std::map<str, bool> flags;

        /// List of channels
        std::vector<TH_Channel> channelList;

        /// List of resonances and thresholds \TODO rename thresholdResonances to TH_resonances_thresholds
        TH_resonances_thresholds thresholdResonances;

        /// Total decay rate or sigmav. \TODO implement TH_Process::genRateTotal
        Funk::Funk genRateTotal;
        
    };

    /// A container holding all annihilation and decay initial states relevant for DarkBit.
    struct TH_ProcessCatalog
    {

        // Functions
  
        /// Retrieve a specific process from the catalogue
        TH_Process getProcess(str, str = "") const;

        /// Check for a specific process in the catalogue
        const TH_Process* find(str, str = "") const;

        /// Retrieve properties of a given particle involved in one or more processes in this catalogue
        TH_ParticleProperty getParticleProperty(str) const;


        // Variables

        /// Vector of all processes in this catalogue
        std::vector<TH_Process> processList;

        /// Map from particles involved in the processes of this catalogue, to their properties.
        std::map<std::string, TH_ParticleProperty> particleProperties;

    };

  }

}

#endif // #defined __ProcessCatalogue_hpp__
