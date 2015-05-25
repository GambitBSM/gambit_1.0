//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Decay table class declarations.
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

#ifndef __decay_table_hpp__
#define __decay_table_hpp__

#include <map>
#include <set>
#include <string>
#include <sstream>

#include "gambit/Utils/util_types.hpp"
#include "gambit/Utils/standalone_error_handlers.hpp"
#include "gambit/Models/partmap.hpp"

#include "SLHAea/slhaea.h"

namespace Gambit
{

  /// GAMBIT native decay table class.
  class DecayTable
  {
    public:

      // Forward declaration of DecayTable entry class, for readability.  Holds the info on all decays of a given particle.
      class Entry;

      /// Constructors
      /// @{
      /// Default constructor
      DecayTable() {}
      /// Create a DecayTable from an SLHAea DECAY block
      DecayTable(SLHAea::Block&);
      /// @}

      /// Output entire decay table as an SLHAea DECAY block
      SLHAea::Block as_slhaea_block();

      /// Get entry in decay table for a given particle, adding the particle to the table if it is absent.
      /// Three access methods: PDG-context integer pair, full particle name, short particle name + index integer.
      /// @{
      Entry& operator()(std::pair<int,int>);
      Entry& operator()(str);
      Entry& operator()(str, int);
      const Entry& operator()(std::pair<int,int>) const;
      const Entry& operator()(str) const;
      const Entry& operator()(str, int) const;
      /// @}

      /// Get entry in decay table for a give particle, throwing an error if particle is absent.
      /// Three access methods: PDG-context integer pair, full particle name, short particle name + index integer.
      /// @{
      Entry& at(std::pair<int,int>);
      Entry& at(str);
      Entry& at(str, int);
      const Entry& at(std::pair<int,int>) const;
      const Entry& at(str) const;
      const Entry& at(str, int) const;
      /// @}
    
      /// The actual underlying map.  Just iterate over this directly if you need to iterate over all particles in the table.
      std::map< std::pair<int,int>, Entry > particles;


      /// DecayTable entry class.  Holds the info on all decays of a given particle.
      class Entry
      {
        private:

          /// Construct a set of particles from a variadic list of full names or short names and indices 
          /// @{
          /// Base function version
          static void construct_key(std::multiset< std::pair<int,int> >&) {}
          /// Templated version for long names
          template <typename... Args>
          static void construct_key(std::multiset< std::pair<int,int> >& key, str p1, Args... args)
          {
            construct_key(key, args...);
            key.insert(Models::ParticleDB().pdg_pair(p1));
          }
          /// Templated version for short names and indices
          template <typename... Args>
          static void construct_key(std::multiset< std::pair<int,int> >& key, str p1, int i1, Args... args)
          {
            construct_key(key, args...);
            key.insert(Models::ParticleDB().pdg_pair(p1, i1));
          }
          /// @}

        public:

          /// Default constructor
          Entry() :  width_in_GeV(0.0), positive_error(0.0), negative_error(0.0), calculator(""), calculator_version(""), warnings(""), errors("") {}
          /// Constructor taking total width
          Entry(double width) :  width_in_GeV(width), calculator(""), calculator_version(""), warnings(""), errors("") {}

          /// Set branching fraction for decay to a given final state.
          /// Three ways to specify final states: PDG-context integer pairs, full particle names, short particle names + index integers.
          /// Supports arbitrarily many final state particles.
          /// @{
          template <typename... Args>
          void set_BF(double BF, double error, std::pair<int,int> p1, Args... args)
          {
            std::pair<int,int> particles[] = {p1, args...};
            std::multiset< std::pair<int,int> > key(particles, particles+sizeof...(Args));
            for (auto final_state = key.begin(); final_state = key.end(); ++final_state)
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
            channels[key] = std::pair<double, double>(BF, error);
          }
          template <typename... Args>
          void set_BF(double BF, double error, str p1, Args... args)
          {
            std::multiset< std::pair<int,int> > key;
            construct_key(key, p1, args...);
            channels[key] = std::pair<double, double>(BF, error);
          }
          /// @}

          /// Retrieve branching fraction for decay to a given final state.
          /// Three ways to specify final states: PDG-context integer pairs, full particle names, short particle names + index integers.
          /// Supports arbitrarily many final state particles.
          /// @{
          template <typename... Args>
          double BF(std::pair<int,int> p1, Args... args) const
          {
            std::pair<int,int> particles[] = {p1, args...};
            std::multiset< std::pair<int,int> > key(particles, particles+sizeof...(Args));
            if (channels.find(key) == channels.end())
            {
              model_error().raise(LOCAL_INFO,"No branching fraction exists for the requested final states.");
            }
            return channels.at(key).first;
          }
          template <typename... Args>
          double BF(str p1, Args... args) const
          {
            std::multiset< std::pair<int,int> > key;
            construct_key(key, p1, args...);
            if (channels.find(key) == channels.end())
            {
              model_error().raise(LOCAL_INFO,"No branching fraction exists for the requested final states.");
            }
            return channels.at(key).first;
          }
          /// @}

          /// Retrieve branching fraction error for decay to a given final state.
          /// Three ways to specify final states: PDG-context integer pairs, full particle names, short particle names + index integers.
          /// Supports arbitrarily many final state particles.
          /// @{
          template <typename... Args>
          double BF_error(std::pair<int,int> p1, Args... args) const
          {
            std::pair<int,int> particles[] = {p1, args...};
            std::multiset< std::pair<int,int> > key(particles, particles+sizeof...(Args));
            if (channels.find(key) == channels.end())
            {
              model_error().raise(LOCAL_INFO,"No branching fraction exists for the requested final states.");
            }
            return channels.at(key).second;
          }
          template <typename... Args>
          double BF_error(str p1, Args... args) const
          {
            std::multiset< std::pair<int,int> > key;
            construct_key(key, p1, args...);
            if (channels.find(key) == channels.end())
            {
              model_error().raise(LOCAL_INFO,"No branching fraction exists for the requested final states.");
            }
            return channels.at(key).second;
          }
          /// @}

          /// Retrieve branching fraction and error for decay to a given final state.
          /// Three ways to specify final states: PDG-context integer pairs, full particle names, short particle names + index integers.
          /// Supports arbitrarily many final state particles.
          /// @{
          template <typename... Args>
          std::pair<double, double> BF_with_error(std::pair<int,int> p1, Args... args) const
          {
            std::pair<int,int> particles[] = {p1, args...};
            std::multiset< std::pair<int,int> > key(particles, particles+sizeof...(Args));
            if (channels.find(key) == channels.end())
            {
              model_error().raise(LOCAL_INFO,"No branching fraction exists for the requested final states.");
            }
            return channels.at(key);
          }
          template <typename... Args>
          std::pair<double, double> BF_with_error(str p1, Args... args) const
          {
            std::multiset< std::pair<int,int> > key;
            construct_key(key, p1, args...);
            if (channels.find(key) == channels.end())
            {
              model_error().raise(LOCAL_INFO,"No branching fraction exists for the requested final states.");
            }
            return channels.at(key);
          }
          /// @}

          /// Sum up the partial widths and return the result.
          double sum_BF() const;

          /// Total particle width (in GeV)
          double width_in_GeV;
          
          /// Positive error on width
          double positive_error;

          /// Negative error on width
          double negative_error;

          /// Name of the code (backend or otherwise) used for calculating this entry
          str calculator;
          /// Version of the code used for calculating this entry
          str calculator_version;
          /// Warnings from the calculator
          str warnings;
          /// Errors from the calculator
          str errors;

          /// The actual underlying map of channels to their BFs.
          /// Just iterate over this directly if you need to iterate over all decays of this particle.
          std::map< std::multiset< std::pair<int,int> >, std::pair<double, double> > channels;

      };

  };


}


#endif //#defined __decay_table_hpp__
