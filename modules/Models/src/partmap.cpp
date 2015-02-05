//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Class definitions for GAMBIT particle
///  database.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Pat Scott  
///          (p.scott@imperial.ac.uk)
///  \date 2015 Jan
///
///  *********************************************


#include <sstream>

#include "partmap.hpp"
#include "standalone_error_handlers.hpp"
#include "stream_overloads.hpp"

namespace Gambit
{

  namespace Models
  {

    /// Database accessor function
    partmap& ParticleDB()
    {
      static partmap local;
      return local;
    }

    /// Declare redirected constructor
    extern void define_particles(partmap*);

    /// Constructor
    partmap::partmap() { define_particles(this); }
    
    /// Add a new particle to the database
    void partmap::add(str long_name, std::pair<int, int> pdgpr)
    {
      if (has_particle(long_name))
      {
        model_error().raise(LOCAL_INFO,"Particle "+long_name+" is multiply defined.");
      }
      long_name_to_pdg_pair[long_name] = pdgpr;
      pdg_pair_to_long_name[pdgpr] = long_name;
    } 

    /// Add a new particle to the database with a short name and an index
    void partmap::add_with_short_pair(str long_name, std::pair<int, int> pdgpr, std::pair<str, int> shortpr)
    {
      // debug:
      add(long_name, pdgpr);
      short_name_pair_to_pdg_pair[shortpr] = pdgpr;
      short_name_pair_to_long_name[shortpr] = long_name;
      pdg_pair_to_short_name_pair[pdgpr] = shortpr;
      long_name_to_short_name_pair[long_name] = shortpr;
    }

    /// Retrieve the PDG code and context integer, from the long name
    std::pair<int, int> partmap::pdg_pair(str long_name)
    {
      if (not has_particle(long_name))
      {
        model_error().raise(LOCAL_INFO,"Particle long name "+long_name+" is not in the particle database.");
      }
      return long_name_to_pdg_pair.at(long_name);
    }

    /// Retrieve the PDG code and context integer, from the short name and index
    std::pair<int, int> partmap::pdg_pair(str short_name, int i)
    {
      std::pair<str, int> shortpr(short_name, i);
      if (not has_particle(shortpr))
      {
        std::ostringstream ss;
        ss << "Short name " << short_name << " and index " << i << " are not in the particle database.";
        model_error().raise(LOCAL_INFO,ss.str());
      }
      return short_name_pair_to_pdg_pair.at(shortpr);
    }

    /// Retrieve the long name, from the short name and index
    str partmap::long_name(str short_name, int i)
    {
      std::pair<str, int> shortpr(short_name, i);
      if (not has_particle(std::pair<str, int>(short_name, i)))
      {
        std::ostringstream ss;
        ss << "Short name " << short_name << " and index " << i << " are not in the particle database.";
        model_error().raise(LOCAL_INFO,ss.str());
      }
      return short_name_pair_to_long_name.at(shortpr);
    }

    /// Retrieve the long name, from the PDG code and context integer 
    str partmap::long_name(std::pair<int, int> pdgpr)
    {
      if (not has_particle(pdgpr))
      {
        std::ostringstream ss;
        ss << "Particle with PDG code " << pdgpr.first << " and context integer " << pdgpr.second << " is not in the particle database.";
        model_error().raise(LOCAL_INFO,ss.str());
      }
      return pdg_pair_to_long_name.at(pdgpr);
    }

    /// Retrieve the long name, from the PDG code and context integer
    str partmap::long_name(int pdg_code, int context)
    {
       return long_name(std::make_pair(pdg_code,context));
    }

    /// Retrieve the short name and index, from the long name 
    std::pair<str, int> partmap::short_name_pair(str long_name)
    {
      if (not has_particle(long_name))
      {
        model_error().raise(LOCAL_INFO,"Particle "+long_name+" is not in the particle database.");
      }
      if (not has_short_name(long_name))
      {
        model_error().raise(LOCAL_INFO,"Particle "+long_name+" does not have a short name.");
      }
      return long_name_to_short_name_pair.at(long_name);
    }

    /// Retrieve the short name and index, from the PDG code and context integer 
    std::pair<str, int> partmap::short_name_pair(std::pair<int, int> pdgpr)
    {
      if (not has_particle(pdgpr))
      {
        std::ostringstream ss;
        ss << "Particle with PDG code " << pdgpr.first << " and context integer " << pdgpr.second << " is not in the particle database.";
        model_error().raise(LOCAL_INFO,ss.str());
      }
      if (not has_short_name(pdgpr))
      {
        std::ostringstream ss;
        ss << "Particle with PDG code " << pdgpr.first << " and context integer " << pdgpr.second << " does not have a short name.";
        model_error().raise(LOCAL_INFO,ss.str());
      }
      return pdg_pair_to_short_name_pair.at(pdgpr);
    }

    /// Retrieve the short name and index, from the PDG code and context integer
    std::pair<str, int> partmap::short_name_pair(int pdg_code, int context)
    {
      return short_name_pair(std::make_pair(pdg_code,context));
    }

    /// Check if a particle is in the database, using the long name 
    bool partmap::has_particle(str long_name)
    { 
      return (long_name_to_pdg_pair.find(long_name) != long_name_to_pdg_pair.end());
    }

    /// Check if a particle is in the database, using the short name and index 
    bool partmap::has_particle(std::pair<str, int> shortpr)
    {
      return (short_name_pair_to_pdg_pair.find(shortpr) != short_name_pair_to_pdg_pair.end());
    }

    /// Check if a particle is in the database, using the PDG code and context integer 
    bool partmap::has_particle(std::pair<int, int> pdgpr)
    {
      return (pdg_pair_to_long_name.find(pdgpr) != pdg_pair_to_long_name.end());
    }

    /// Check if a particle has a short name, using the long name 
    bool partmap::has_short_name(str long_name)
    { 
      return (long_name_to_short_name_pair.find(long_name) != long_name_to_short_name_pair.end());
    }

    /// Check if a particle has a short name, using the PDG code and context integer 
    bool partmap::has_short_name(std::pair<int, int> pdgpr)
    {
      return (pdg_pair_to_short_name_pair.find(pdgpr) != pdg_pair_to_short_name_pair.end());
    }

    /// For debugging: use to check the contents of the particle database
    void partmap::check_contents()
    {
       // Check that long and short names retrieve same information (when short name exists)
       typedef std::map<str, std::pair<int, int> >::iterator                 it_long_name_to_pdg_pair;
       typedef std::map<std::pair<int, int>, str>::iterator                  it_pdg_pair_to_long_name;
       typedef std::map<std::pair<str, int>, std::pair<int, int> >::iterator it_short_name_pair_to_pdg_pair;
       typedef std::map<std::pair<int, int>, std::pair<str, int> >::iterator it_pdg_pair_to_short_name_pair;
       typedef std::map<str, std::pair<str, int> >::iterator                 it_long_name_to_short_name_pair;
       typedef std::map<std::pair<str, int>, str>::iterator                  it_short_name_pair_to_long_name;

       cout << "PDB: long name as key" << endl;
       #define IT_OBJ long_name_to_pdg_pair
       for(it_long_name_to_pdg_pair it = IT_OBJ.begin(); it != IT_OBJ.end(); it++) {
           cout   << "  long_name_to_pdg_pair       [" << it->first << "] => " << it->second << endl;
           if(has_short_name(it->first))
           { cout << "  long_name_to_short_name_pair[" << it->first << "] => " << long_name_to_short_name_pair[it->first] << endl; }
           else
           { cout << "  long_name_to_short_name_pair[" << it->first << "] => " << "Has no short name!" << endl; }
       }
       #undef IT_OBJ
       #define IT_OBJ pdg_pair_to_long_name
       cout << endl << "PDB: pdg_pair as key" << endl;
       for(it_pdg_pair_to_long_name it = IT_OBJ.begin(); it != IT_OBJ.end(); it++) {
           cout   << "  pdg_pair_to_long_name [" << it->first << "] => " << it->second << endl;
           if(has_short_name(it->second))
           { cout << "  pdg_pair_to_short_name[" << it->first << "] => " << pdg_pair_to_short_name_pair[it->first] << endl; }
           else
           { cout << "  pdg_pair_to_short_name[" << it->first << "] => " << "Has no short name!" << endl; }
       }
       #undef IT_OBJ
       #define IT_OBJ short_name_pair_to_long_name
       cout << endl << "PDB: short name pair as key" << endl;
       for(it_short_name_pair_to_long_name it = IT_OBJ.begin(); it != IT_OBJ.end(); it++) {
           cout << "  short_name_pair_to_long_name[" << it->first << "] => " << it->second << endl;
           cout << "  short_name_pair_to_pdg_pair [" << it->first << "] => " << short_name_pair_to_pdg_pair[it->first] << endl;
       }
    }


  }

}

