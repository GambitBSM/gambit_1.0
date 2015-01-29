//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Decay table class definitions.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Pat Scott 
///          (patscott@physics.mcgill.ca)
///  \date 2015 Jan
///
///  *********************************************

#include "decay_table.hpp"

namespace Gambit
{

  /// Create a DecayTable from an SLHAea DECAY block
  DecayTable::DecayTable(SLHAea::Block& block)
  {
    //do cool things here
  }

  /// Output entire decay table as an SLHAea DECAY block
  SLHAea::Block DecayTable::as_slhaea_block()
  {
    //do cool things here
  }

  /// Get entry in decay table for a given particle, adding the particle to the table if it is absent.
  /// Three access methods: PDG-context integer pair, full particle name, short particle name + index integer.
  /// @{
  DecayTable::Entry& DecayTable::operator()(std::pair<int,int> p)              { return particles[p]; }
  DecayTable::Entry& DecayTable::operator()(str p)                             { return particles[Models::ParticleDB().pdg_pair(p)]; }    
  DecayTable::Entry& DecayTable::operator()(str p, int i)                      { return particles[Models::ParticleDB().pdg_pair(p,i)]; }
  const DecayTable::Entry& DecayTable::operator()(std::pair<int,int> p) const  { return particles.at(p); }
  const DecayTable::Entry& DecayTable::operator()(str p) const                 { return particles.at(Models::ParticleDB().pdg_pair(p)); }
  const DecayTable::Entry& DecayTable::operator()(str p, int i) const          { return particles.at(Models::ParticleDB().pdg_pair(p,i)); }
  /// @}

  /// Get entry in decay table for a give particle, throwing an error if particle is absent.
  /// Three access methods: PDG-context integer pair, full particle name, short particle name + index integer.
  /// @{
  DecayTable::Entry& DecayTable::at(std::pair<int,int> p)              { return particles.at(p); }
  DecayTable::Entry& DecayTable::at(str p)                             { return particles.at(Models::ParticleDB().pdg_pair(p)); }    
  DecayTable::Entry& DecayTable::at(str p, int i)                      { return particles.at(Models::ParticleDB().pdg_pair(p,i)); }
  const DecayTable::Entry& DecayTable::at(std::pair<int,int> p) const  { return particles.at(p); }
  const DecayTable::Entry& DecayTable::at(str p) const                 { return particles.at(Models::ParticleDB().pdg_pair(p)); }
  const DecayTable::Entry& DecayTable::at(str p, int i) const          { return particles.at(Models::ParticleDB().pdg_pair(p,i)); }
  /// @}
    

  /// Sum up the branching fractions for a single particle's entry and return the result.
  double DecayTable::Entry::sum_BF()
  {
    double sum = 0.0;
    for (auto channel = channels.begin(); channel != channels.end(); ++channel)  
    {
      sum += channel->second;
    }
    return sum;
  } 

}

