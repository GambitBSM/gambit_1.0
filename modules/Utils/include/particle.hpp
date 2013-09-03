#ifndef BACKEND_PARTICLE_H
#define BACKEND_PARTICLE_H

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cmath>


namespace Gambit {
	
	using std::cout;
	using std::endl; // logger does this?
	using std::string;
	using std::stringstream;
	using std::vector;

  namespace Backend {
	  	
	/*! \brief Four-vector class. 
	 * \author Are Raklev
	 * \author Anders Kvellestad
	 * \data 2012-11-08
	 */
	  
	class Vector4 {
		  
	  public:
		// Constructor
		Vector4(double x = 0, double y = 0, double z = 0, double t = 0){
			_x = x; _y = y; _z = z; _t = t;
		}
		
		// Output components
		double px() const {return _x;}
		double py() const {return _y;}
		double pz() const {return _z;}
		double e()  const {return _t;}
		
		double m()  const {
			double s2 = _t*_t - _x*_x - _y*_y - _z*_z;
			return (s2 >= 0.) ? sqrt(s2) : -sqrt(-s2);
		}
		double m2() const {return _t*_t - _x*_x - _y*_y - _z*_z;}
		double pT() const {return sqrt(_x*_x + _y*_y);}
		double theta() const {return atan2(sqrt(_x*_x + _y*_y), _z);}
		double phi() const {return atan2(_y,_x);}

		
	  private:
		double _x, _y, _z, _t;
	};
	
	/*! \brief Particle class. 
	 * \author Are Raklev
	 * \author Anders Kvellestad
	 * \data 2012-11-08
	 */
	class Particle {
	  public:
		Particle(Vector4 momentum, int pdg){
		  _p = momentum;
		  _pdg = pdg;
		}
	
		// Output 
		double px() const {return _p.px();}
		double py() const {return _p.py();}
		double pz() const {return _p.pz();}
		double e()  const {return _p.e();}
		int pdg() const {return _pdg;}
		
		double m()  const {return _p.m();}
		double m2() const {return _p.m2();}
		double pT() const {return _p.pT();}
		double theta() const {return _p.theta();}
		double phi() const {return _p.phi();}

		
	  private:
		Vector4 _p;
		int _pdg;
	};
	  
	/*! \brief Event class for storing particles. 
	 * \author Are Raklev
	 * \author Anders Kvellestad
	 * \data 2012-11-08
	 */
	class Event {
		  
	  public:
		// Constructor
		Event(int capacity = 1000){
		  _entries.reserve(capacity);
		}
		
		// Append a particle to event
		void append(Particle particle);
		
		// Print event record. Mostly for debugging purposes
		void print();
		
	  private:
		vector<Particle> _entries;
		int _size;

	};		  
	  
	  
  } // Backend namespace ending

} // Gambit namespace ending

#endif
