//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Function definitions for DecayBit decay
///  utilities.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Pat Scott
///          (p.scott@imperial.ac.uk)
///  \date 2015 May
///
///  *********************************************

#include "gambit/DecayBit/decay_utils.hpp"

namespace Gambit
{

  namespace DecayBit
  {
      
    /// Construct a decay table entry for a particle, from the entry for its antiparticle
    DecayTable::Entry CP_conjugate(const DecayTable::Entry& in)      
    {  
      typedef std::map< std::multiset< std::pair<int,int> >, std::pair<double, double> > channelmap;
      DecayTable::Entry out;

      // Copy all the basic info to the new DecayTable entry
      out.width_in_GeV = in.width_in_GeV;                    
      out.positive_error = in.positive_error;
      out.negative_error = out.negative_error;
      out.calculator = in.calculator;
      out.calculator_version = in.calculator_version;
      out.warnings = in.warnings;
      out.errors = in.errors;

      // Iterate over all the open decay channels
      for (auto i : in.channels)
      {
        // Retrieve the decay final states
        std::multiset< std::pair<int,int> > particles = i.first;
        // Determine the antiparticles of the final states
        std::multiset< std::pair<int,int> > antiparticles;
        for (auto particle : particles)
        {
          std::pair<int,int> antiparticle(-1*(particle.first), particle.second); 
          // If the antiparticle exists as a distinct particle, add it.
          if (Models::ParticleDB().has_particle(antiparticle)) antiparticles.insert(antiparticle);
          //Otherwise, use the original particle
          else antiparticles.insert(particle);
        }
        // Set the corresponding branching fraction and error in the conjugate entry
        out.channels[antiparticles] = i.second;
      }

      // Hand over the CP-conjugate entry
      return out;
    }

  }

}  
