/* General GAMBIT backend header. This contains bits
 * from backend.h that are not Herwig specific.
 *  \author Jonathan Cornell
 *  \date 2012-11-27
 */

#ifndef BACKEND_COMMON_H
#define BACKEND_COMMON_H

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <dlfcn.h>

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

namespace GAMBIT {

	using std::cout;
	using std::endl; // logger does this?
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
  };
};

#endif /* BACKEND_COMMON_H */
