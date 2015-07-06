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

#include "gambit/Elements/decay_table.hpp"
#include "gambit/Utils/util_functions.hpp"

namespace Gambit
{

  /// Create a DecayTable from an SLHAea object containing DECAY blocks
  DecayTable::DecayTable(SLHAstruct& slha)
  {
    //tomorrow; also add calculator info (SUSY-HIT <version> via GAMBIT <version>)
  }

  /// Output entire decay table as an SLHAea file full of DECAY blocks
  SLHAstruct DecayTable::as_slhaea(bool include_zero_bfs)
  {
    SLHAstruct slha;
    for (auto particle = particles.begin(); particle != particles.end(); ++particle)  
    {
      slha.push_back(particle->second.as_slhaea_block(particle->first, include_zero_bfs));
    }
    return slha;
  }

  /// Output a decay table entry as an SLHAea DECAY block
  /// @{
  SLHAea::Block DecayTable::as_slhaea_block(std::pair<int,int> p, bool z) { return particles[p].as_slhaea_block(Models::ParticleDB().long_name(p), z); }
  SLHAea::Block DecayTable::as_slhaea_block(str p, bool z)                { return particles[Models::ParticleDB().pdg_pair(p)].as_slhaea_block(p, z); }
  SLHAea::Block DecayTable::as_slhaea_block(str p, int i, bool z)         { return particles[Models::ParticleDB().pdg_pair(p,i)].as_slhaea_block(Models::ParticleDB().long_name(p,i), z); }
  SLHAea::Block DecayTable::Entry::as_slhaea_block(str p, bool z)         { return as_slhaea_block(Models::ParticleDB().pdg_pair(p), z); }
  SLHAea::Block DecayTable::Entry::as_slhaea_block(str p, int i, bool z)  { return as_slhaea_block(Models::ParticleDB().pdg_pair(p,i), z); }
  SLHAea::Block DecayTable::Entry::as_slhaea_block(std::pair<int,int> p, bool include_zero_bfs)
  {
    // Make sure the particle actually exists in the database
    if (not Models::ParticleDB().has_particle(p))
    {
      std::stringstream ss;
      ss << "GAMBIT particle database does not have particle with (PDG,context) codes (" << p.first << "," << p.second << ").";
      utils_error().raise(LOCAL_INFO, ss.str()); 
    }

    // Add the info about the decay in general
    str long_name = Models::ParticleDB().long_name(p);
    SLHAea::Block block;   
    block.push_back("#     PDG         Width (GeV)");
    SLHAea::Line line;
    line << "DECAY" << p.first << this->width_in_GeV << "# " + long_name + " decays";
    block.push_back(line);
    block.push_back("#          BF              NDA Daughter PDG codes");

    // Add the branching fraction and daughter particle PDG codes for each decay channel
    for (auto channel = channels.begin(); channel != channels.end(); ++channel)  
    {
      // Skip this channel if its BF is NaN (undefined) or zero (on request)
      double BF = (channel->second).first;
      if (not Utils::isnan(BF))
      {
        if (BF > 0.0 or include_zero_bfs)
        {
          auto daughters = channel->first;
          str comment = "# BF(" + long_name + " --> ";
          line.clear();
          // Get the branching fraction and number of particles in the final state
          line << BF << daughters.size();
          // Get the PDG code for each daughter particle
          for (auto daughter = daughters.begin(); daughter != daughters.end(); ++daughter)
          {
            line << daughter->first;
            comment += Models::ParticleDB().long_name(*daughter) + " ";        
          }
          comment.replace(comment.size()-1, 1, ")");
          line << comment;
          block.push_back(line);
        }
      }
    }

    return block;

  }
  /// @}


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
  double DecayTable::Entry::sum_BF() const
  {
    double sum = 0.0;
    for (auto channel = channels.begin(); channel != channels.end(); ++channel)  
    {
      sum += (channel->second).first;
    }
    return sum;
  } 

}

