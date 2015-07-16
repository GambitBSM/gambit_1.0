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
#include "gambit/Utils/version.hpp"


namespace Gambit
{

  // DecayTable methods

  /// Create a DecayTable from an SLHAea object containing DECAY blocks
  DecayTable::DecayTable(const SLHAstruct& slha, int context)
  {
    // Extract the calculator info if it exists
    str calculator, calculator_version;
    auto dcinfo = slha.find("DCINFO");
    if (dcinfo != slha.end())
    {
      if (dcinfo->size() > 1)
      {
        for (unsigned int i = 1; i < dcinfo->at(1).size(); ++i)
        {
          str s(dcinfo->at(1).at(i));
          if (s[0] != '#') calculator += s;
        }
      }
      if (dcinfo->size() > 2)
      {
        for (unsigned int i = 1; i < dcinfo->at(2).size(); ++i)
        {
          str s(dcinfo->at(2).at(i));
          if (s[0] != '#') calculator_version += s;
        }
      }
    }

    // Iterate over all blocks in the file, ignoring everything except DECAY blocks
    for (auto block = slha.begin(); block != slha.end(); ++block)
    {
      auto block_def = block->find_block_def();
      if (block_def != block->end())
      {
     	  if(block_def->at(0) == "DECAY") 
        {
          // Make sure the block definition has the particle's width and PDG code
          if (block_def->size() < 3) utils_error().raise(LOCAL_INFO, "SLHAea object has DECAY block with < 3 entries in its block definition."); 
          int pdg = SLHAea::to<int>(block_def->at(1)); 
          // Add an entry containing the info in this block
          operator()(std::pair<int,int>(pdg,context)) = Entry(*block, block_def, context, calculator, calculator_version);
        }
      }
    }
  }

  /// Output entire decay table as an SLHAea file full of DECAY blocks
  SLHAstruct DecayTable::as_slhaea(bool include_zero_bfs) const
  {
    SLHAstruct slha;
    std::map<str, std::set<str> > calculator_map;
    str calculators = "GAMBIT, using: ";
    str versions = version + ": ";

    // Add the decay info
    for (auto particle = particles.begin(); particle != particles.end(); ++particle)  
    {
      auto entry = particle->second;
      if (entry.calculator != "") calculator_map[entry.calculator].insert(entry.calculator_version);
      slha.push_back(entry.as_slhaea_block(particle->first, include_zero_bfs));
    }

    // Construct the calculator info
    for (auto be = calculator_map.begin(); be != calculator_map.end(); ++be)
    {
      if (be != calculator_map.begin())
      {
        calculators += " | ";
        versions += " | ";
      }
      calculators += be->first;
      for (auto ver = be->second.begin(); ver != be->second.end(); ++ver)
      {
        if (*ver != "")
        {
          if (ver != be->second.begin()) versions += ", ";
          versions += *ver;
        }
      }
    }

    // Add the calculator info
    SLHAea::Block DCblock;   
    DCblock.push_back("BLOCK DCINFO              # Decay Program information");
    SLHAea::Line line1, line2;
    line1 << 1 << calculators << "# Decay calculators";
    line2 << 2 << versions << "# Version numbers";
    DCblock.push_back(line1);
    DCblock.push_back(line2);
    slha.push_front(DCblock);

    return slha;
  }

  /// Output a decay table entry as an SLHAea DECAY block
  /// @{
  SLHAea::Block DecayTable::as_slhaea_block(std::pair<int,int> p, bool z) const { return particles.at(p).as_slhaea_block(Models::ParticleDB().long_name(p), z); }
  SLHAea::Block DecayTable::as_slhaea_block(str p, bool z)                const { return particles.at(Models::ParticleDB().pdg_pair(p)).as_slhaea_block(p, z); }
  SLHAea::Block DecayTable::as_slhaea_block(str p, int i, bool z)         const { return particles.at(Models::ParticleDB().pdg_pair(p,i)).as_slhaea_block(Models::ParticleDB().long_name(p,i), z); }
  /// @}


  // DecayTable::Entry subclass methods

  /// Constructor creating a DecayTable Entry from an SLHAea DECAY block; full version 
  DecayTable::Entry::Entry(const SLHAea::Block& block, int context, str calc, str calc_ver) :
   positive_error(0.0), 
   negative_error(0.0), 
   calculator(calc), 
   calculator_version(calc_ver), 
   warnings(""), 
   errors("")    
  { 
    auto block_def = block.find_block_def();
 	  if (block_def->at(0) != "DECAY" or  block_def->size() < 3)
     utils_error().raise(LOCAL_INFO, "SLHAea block is not DECAY or has < 3 entries in its block definition."); 
    width_in_GeV = SLHAea::to<double>(block_def->at(2));
    init(block, context);
  }

  /// Constructor creating a DecayTable Entry from an SLHAea DECAY block; full version; version assuming block def is already known 
  DecayTable::Entry::Entry(const SLHAea::Block& block, SLHAea::Block::const_iterator block_def, int context, str calc, str calc_ver) :
   width_in_GeV (SLHAea::to<double>(block_def->at(2))),
   positive_error(0.0), 
   negative_error(0.0), 
   calculator(calc), 
   calculator_version(calc_ver), 
   warnings(""), 
   errors("")    
  {
    init(block, context);
  }

  /// Initialise a DecayTable Entry using an SLHAea DECAY block
  void DecayTable::Entry::init(const SLHAea::Block& block, int context)
  {
    for (auto channel = block.begin(); channel != block.end(); ++channel)
    {
      str first_entry(channel->at(0));
      if (first_entry != "DECAY" and first_entry[0] != '#')
      {
        if (channel->size() < 4) utils_error().raise(LOCAL_INFO, "SLHAea DECAY block line has < 4 entries!"); 
        double BF = SLHAea::to<double>(first_entry);
        int n_daughters = SLHAea::to<int>(channel->at(1));
        std::vector<std::pair<int,int> > daughter_pdg_codes;
        for (int i = 2; i < n_daughters+2; ++i)
        {
          std::pair<int,int> pdg_pair(SLHAea::to<int>(channel->at(i)), context);
          daughter_pdg_codes.push_back(pdg_pair);
        }
        set_BF(BF, 0.0, daughter_pdg_codes);      
      }
    }
  }

  /// Make sure all particles listed in a set are actually known to the GAMBIT particle database
  void DecayTable::Entry::check_particles_exist(std::multiset< std::pair<int,int> >& particles) const
  {
    for (auto final_state = particles.begin(); final_state != particles.end(); ++final_state)
    {
      if (not Models::ParticleDB().has_particle(*final_state))
      {
        std::ostringstream err;
        err << "Particle with PDG code" << final_state->first << " and context integer " << endl
            << final_state->second << " is not in the in GAMBIT particle database." << endl
            << "Please add such a particle to Models/src/particle_database.cpp and recompile.";
        model_error().raise(LOCAL_INFO,err.str());
      }
    }
  }

  /// Set branching fraction for decay to a given final state; vector of PDG-context integer pair version.
  void DecayTable::Entry::set_BF(double BF, double error, std::vector<std::pair<int,int> >& daughters)
  {
    std::multiset< std::pair<int,int> > key(daughters.begin(), daughters.end());
    check_particles_exist(key);
    channels[key] = std::pair<double, double>(BF, error);
  }

  /// Output a decay table entry as an SLHAea DECAY block
  /// @{
  SLHAea::Block DecayTable::Entry::as_slhaea_block(str p, bool z)         const { return as_slhaea_block(Models::ParticleDB().pdg_pair(p), z); }
  SLHAea::Block DecayTable::Entry::as_slhaea_block(str p, int i, bool z)  const { return as_slhaea_block(Models::ParticleDB().pdg_pair(p,i), z); }
  SLHAea::Block DecayTable::Entry::as_slhaea_block(std::pair<int,int> p, bool include_zero_bfs) const
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
          comment[comment.size()-1] = ')';
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

