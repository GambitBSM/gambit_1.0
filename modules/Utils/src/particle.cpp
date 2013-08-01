#include "backend.hpp"
#include "logs.hpp"


namespace GAMBIT {

  namespace Backend {

    /*! \brief Implementation of Particle class for interface with 
	 * Fortran Herwig event generator.
	 * \author Are Raklev
	 * \author Anders Kvellestad
	 * \data 2012-11-08
	 */
	  	  

	  // Append a particle to the event record
	  void Event::append(Particle particle){
		_entries.push_back(particle);
	  }
	  
	  // Print particles in event
	  void Event::print(){
		for(int i = 0; i < int(_entries.size()); ++i){
		  cout << i << " " << _entries[i].pdg() << " " << _entries[i].px() << " " <<  _entries[i].py() << " "
			   << _entries[i].pz() << " " << _entries[i].e() << endl;
		}
	  }
	  
  } // End of Backend namespace

} // End of GAMBIT namespace
