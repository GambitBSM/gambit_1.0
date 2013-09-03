/* General GAMBIT backend header.
 *  \author Jonathan Cornell
 *  \date 2012-11-27
 *
 *  Modified on 2013-1-15 to use new version of
 *  FortranFunction that catches returned
 *  function values -- J. Cornell
 */

#ifndef BACKEND_COMMON_H
#define BACKEND_COMMON_H

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <dlfcn.h>
#include "FortranFunctor.h"

namespace Gambit {

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
