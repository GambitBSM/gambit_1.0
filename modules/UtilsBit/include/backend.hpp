#ifndef GAMBIT_BACKEND_H
#define GAMBIT_BACKEND_H

#include <dlfcn.h>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

static const int NMXHEP = 5000;

/*! \brief Templated wrapping of variables and functions from dynamic libraries
 * \author Hugh Dickinson
 * \data 2012-XX-XX
 */

/*********************************************************************************/
/** Helper traits class to hold the type of a user variable */
template <typename TagT>
struct VarType{
	// default to double
	typedef double type;
};
/*********************************************************************************/
/** Helper traits class to hold the name of a user variable */
template <typename TagT>
struct VarName;
/*********************************************************************************/
/// Macro to enable access to a FORTRAN variable
#define VARIABLE(TAG, NAME, MODULE, TYPE)	\
namespace tags {				\
struct TAG;					\
}						\
\
template <>					\
struct VarType<tags::TAG> {			\
typedef TYPE type;				\
};						\
\
template <>					\
struct VarName<tags::TAG> {			\
static std::string name(){			\
return #NAME;				\
}						\
\
static std::string module(){		\
return #MODULE;				\
}						\
\
};
/*********************************************************************************/
/** Helper traits class to hold the characteristics of a FORTRAN subroutine */
template <typename TagT>
struct FunctionTraits;
/*********************************************************************************/
/// Macro to define interface for subroutines
#define FUNCTION(TAG, NAME, NUMPAR)		\
namespace tags{				\
struct TAG;					\
}						\
\
template <>					\
struct FunctionTraits<tags::TAG> {		\
static std::string name(){			\
return #NAME;				\
}						\
\
static int const NumPars = NUMPAR;		\
\
};
/*********************************************************************************/
/** Singleton functor class to wrap an FORTRAN function/subroutine call */
template <typename TagT>
class FortranFunctor {
	
	void * fHandle;
	void * fSymbol;
	
	protected :
	
	/// Constructor
	FortranFunctor(void * handle):
	fHandle(handle),
    fSymbol(dlsym(fHandle, FortranSymbolName(FunctionTraits<TagT>::name(),"").c_str()))
	{}
	
	/// Destructor
	~FortranFunctor()
    {}
	
	public :
	
	static FortranFunctor & instance(void * handle){
		static FortranFunctor theFortranFunctor(handle);
		return theFortranFunctor;
	}
	
    void operator()(){
		if(FunctionTraits<TagT>::NumPars == 0){
			typedef void (*funcPtr)();
			((funcPtr)(fSymbol))();
		}
	}	
	
	template <typename T1>
    void operator()(T1 & t1){
		if(FunctionTraits<TagT>::NumPars == 1){
			typedef void (*funcPtr)(T1 &);
			((funcPtr)(fSymbol))(t1);
		}
	}
	
	template <typename T1, typename T2>
    void operator()(T1 & t1, T2 & t2){
		if(FunctionTraits<TagT>::NumPars == 2){
			typedef void (*funcPtr)(T1 & t1, T2 & t2);
			((funcPtr)(fSymbol))(t1, t2);
		}
	}
	
	template <typename T1, typename T2, typename T3>
    void operator()(T1 & t1, T2 & t2, T3 & t3){
		if(FunctionTraits<TagT>::NumPars == 3){
			typedef void (*funcPtr)(T1 & t1, T2 & t2, T3 & t3);
			((funcPtr)(fSymbol))(t1, t2, t3);
		}
	}
	
	template <typename T1, typename T2, typename T3, typename T4>
    void operator()(T1 & t1, T2 & t2, T3 & t3, T4 & t4){
		if(FunctionTraits<TagT>::NumPars == 4){
			typedef void (*funcPtr)(T1 & t1, T2 & t2, T3 & t3, T4 & t4);
			((funcPtr)(fSymbol))(t1, t2, t3, t4);
		}
	}

	template <typename T1, typename T2, typename T3, typename T4, typename T5>
    void operator()(T1 & t1, T2 & t2, T3 & t3, T4 & t4, T5 & t5){
		if(FunctionTraits<TagT>::NumPars == 5){
			typedef void (*funcPtr)(T1 & t1, T2 & t2, T3 & t3, T4 & t4, T5 & t5);
			((funcPtr)(fSymbol))(t1, t2, t3, t4, t5);
		}
	}	
	
	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
    void operator()(T1 & t1, T2 & t2, T3 & t3, T4 & t4, T5 & t5, T6 & t6){
		if(FunctionTraits<TagT>::NumPars == 6){
			typedef void (*funcPtr)(T1 & t1, T2 & t2, T3 & t3, T4 & t4, T5 & t5, T6 & t6);
			((funcPtr)(fSymbol))(t1, t2, t3, t4, t5, t6);
		}
	}
	
	/// Transform a FORTRAN subroutine name into the corresponding library symbol name.
	static std::string FortranSymbolName(std::string const & name, std::string const & moduleName=""){
		std::stringstream symbolName;
		if(moduleName.size() > 0){
			symbolName << "__" << moduleName << "__" << name;
		}
		else{
			symbolName << name << "_";
		}
		return symbolName.str();
	}
	
};
// End of template set-up


// List of functions and variables that can be called from libraries
FUNCTION(HWIGIN, hwigin, 0)
FUNCTION(INIMAS, inimas, 0)
FUNCTION(HWUINC, hwuinc, 0)
FUNCTION(HWABEG, hwabeg, 0)
FUNCTION(HWEINI, hweini, 0)
FUNCTION(HWUINE, hwuine, 0)
FUNCTION(HWEFIN, hwefin, 0)
FUNCTION(HWEPRO, hwepro, 0)
FUNCTION(HWBGEN, hwbgen, 0)
FUNCTION(HWDHOB, hwdhob, 0)
FUNCTION(HWCFOR, hwcfor, 0)
FUNCTION(HWCDEC, hwcdec, 0)
FUNCTION(HWDHAD, hwdhad, 0)
FUNCTION(HWDHVY, hwdhvy, 0)
FUNCTION(HWMEVT, hwmevt, 0)
FUNCTION(HWUFNE, hwufne, 0)

struct hwproc_type{
	double ebeam1, ebeam2, pbeam1, pbeam2;
	int iproc, maxev;
};
VARIABLE(HWPROC, hwproc, , hwproc_type)
struct hwbmch_type{
	char part1[8], part2[8];
};
VARIABLE(HWBMCH, hwbmch, , hwbmch_type)
// Struct for event common block
struct hepevt_type{
	int nevhep, nhep, isthep[NMXHEP], idhep[NMXHEP], jmohep[NMXHEP][2], jdahep[NMXHEP][2];
	double phep[NMXHEP][5], vhep[NMXHEP][4];
};
VARIABLE(HEPEVT, hepevt, , hepevt_type)


namespace GAMBIT {
	
	using std::cout;
	using std::endl; // SUFit logger does this?
	using std::string;
	using std::stringstream;
	using std::vector;

  namespace Backend {
	  
	/*! \brief Base class for interface with external codes 
	 * \author Are Raklev
	 * \author Anders Kvellestad
	 * \data 2012-11-08
	 */
	class BackendBitBase {
    public:

      // Standard constructor
      BackendBitBase() : _libState(false) {}

      // Destructor
      virtual ~BackendBitBase() {}

      // Load library. Virtual because there might be different ways.
      virtual void loadLib() = 0;
		
	  // Unload library
	  virtual void unLoadLib() = 0;
	
	  // Initialize program
	  virtual void initialize() = 0;

	  // Clean up
	  virtual void finalize() = 0;
		
	  // Load a function pointer from the library, wrap it in a FortranFunctor, and return that functor
	  template <typename TagT>
	  FortranFunctor<TagT> & Function(){
	    return FortranFunctor<TagT>::instance(pHandle);
	  }
		
	  // Set a user variable
	  template<typename TagT>
	  void SetUserVariable(typename VarType<TagT>::type const & value){
		std::string symbolName = FortranFunctor<TagT>::FortranSymbolName(VarName<TagT>::name(), VarName<TagT>::module());
		cout << symbolName << endl;
		typename VarType<TagT>::type * varPtr = static_cast<typename VarType<TagT>::type *>(dlsym(pHandle, symbolName.c_str()));
		checkDLStatus();
		*varPtr = value;
	  }
	
	  // Get a user variable
	  template<typename TagT>
	  typename VarType<TagT>::type const & GetUserVariable() const {
		std::string symbolName = FortranFunctor<TagT>::FortranSymbolName(VarName<TagT>::name(), VarName<TagT>::module());
		cout << symbolName << endl;
		typename VarType<TagT>::type * varPtr = static_cast<typename VarType<TagT>::type *>(dlsym(pHandle, symbolName.c_str()));
		checkDLStatus();
		return *varPtr;
	  }
		

    protected:
      bool _libState;  // Library loaded
      string _libName; // Name of library
	  void * pHandle; // Handle to library

    private:
	  // Check status of dynamic library
	  virtual void checkDLStatus() const = 0;
      
    };

	
	/*! \brief Interface for Fortran Herwig event generator. 
	 * \author Are Raklev
	 * \author Anders Kvellestad
	 * \data 2012-11-08
	 */
    class FHerwig : public BackendBitBase {
    public:

      // Constructor
      FHerwig() {
		_hadronize = true;
		_soft = true;
	    _libName = "/Applications/Physics/herwig/libherwig.so";
		loadLib();
      }

      // Destructor
      ~FHerwig() {
		unLoadLib();
	  }

		// Initialize Herwig
		void initialize();

		// Finalize Herwig run
		void finalize();
		
		// Generate one event
		void generateEvent();

	private:
		
      // Load library
      void loadLib();

	  // Unload library
	  void unLoadLib();
		
	  // Check status of dynamic library	
	  void checkDLStatus() const;		
		
	  bool _hadronize;
	  bool _soft;
    };

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

} // GAMBIT namespace ending

#endif
