//
//  FortranFunctor.h
//  GlobalFits
//
//  Created by Hugh Dickinson on 12/3/12.
//  Copyright (c) 2012 Hugh Dickinson. All rights reserved.
//
//  Modified by J. Cornell on 13/15/1 to restore ability to call
//  FORTRAN functions with 0 to 6 arguments

#ifndef GlobalFits_FortranFunctor_h
#define GlobalFits_FortranFunctor_h

#include <dlfcn.h>
#include <stdexcept>
#include <sstream>

typedef std::runtime_error FortranFunctorException;

/*********************************************************************************/

/** Helper traits class to hold the type of a user variable.
 */
template <typename TagT>
struct VarType{
	// default to double
	typedef double type;
};

/*********************************************************************************/

/** Helper traits class to hold the name of a user variable.
 */
template <typename TagT>
struct VarName;

/*********************************************************************************/
/// Macro to enable access to a FORTRAN variable
#define BE_F_VARIABLE(TAG, NAME, MODULE, TYPE)	\
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

/** Helper traits class to hold the characteristics of a FORTRAN subroutine or function.
 */
template <typename TagT>
struct FunctionTraits;

/** Helper traits class to hold the return type characteristics of a FORTRAN function.
 */
template <typename TagT>
struct FunctionReturnTypeTraits{
	typedef void type; // default to void return type for subroutines
};

/*********************************************************************************/
/// Macro to define interface for subroutines

#define BE_F_SUBROUTINE(TAG, NAME, NUMPAR)		\
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
/// Macro to define interface for functions

#define BE_F_FUNCTION(TAG, NAME, RETURNTYPE, NUMPAR)		\
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
};\
\
template <>					\
struct FunctionReturnTypeTraits<tags::TAG> {		\
typedef RETURNTYPE type;\
};

/*********************************************************************************/

/** Singleton functor class to wrap an FORTRAN function/subroutine call
 */
template <typename TagT>
class FortranFunctor {
	
	typedef typename FunctionReturnTypeTraits<TagT>::type ReturnT;
	
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
	
    ReturnT operator()(){
		if(FunctionTraits<TagT>::NumPars == 0){
			typedef ReturnT (*funcPtr)();
			return ((funcPtr)(fSymbol))();
		}
	}

	template <typename T1>
    ReturnT operator()(T1 & t1){
		if(FunctionTraits<TagT>::NumPars == 1){
			typedef ReturnT (*funcPtr)(T1 &);
			return ((funcPtr)(fSymbol))(t1);
		}
	}
	
	template <typename T1, typename T2>
    ReturnT operator()(T1 & t1, T2 & t2){
		if(FunctionTraits<TagT>::NumPars == 2){
			typedef ReturnT (*funcPtr)(T1 & t1, T2 & t2);
			return ((funcPtr)(fSymbol))(t1, t2);
		}
	}
	
	template <typename T1, typename T2, typename T3>
    ReturnT operator()(T1 & t1, T2 & t2, T3 & t3){
		if(FunctionTraits<TagT>::NumPars == 3){
			typedef ReturnT (*funcPtr)(T1 & t1, T2 & t2, T3 & t3);
			return ((funcPtr)(fSymbol))(t1, t2, t3);
		}
	}
	
	template <typename T1, typename T2, typename T3, typename T4>
    ReturnT operator()(T1 & t1, T2 & t2, T3 & t3, T4 & t4){
		if(FunctionTraits<TagT>::NumPars == 4){
			typedef ReturnT (*funcPtr)(T1 & t1, T2 & t2, T3 & t3, T4 & t4);
			return ((funcPtr)(fSymbol))(t1, t2, t3, t4);
		}
	}
	
	template <typename T1, typename T2, typename T3, typename T4, typename T5>
    ReturnT operator()(T1 & t1, T2 & t2, T3 & t3, T4 & t4, T5 & t5){
		if(FunctionTraits<TagT>::NumPars == 5){
			typedef ReturnT (*funcPtr)(T1 & t1, T2 & t2, T3 & t3, T4 & t4, T5 & t5);
			return ((funcPtr)(fSymbol))(t1, t2, t3, t4, t5);
		}
	}

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
    ReturnT operator()(T1 & t1, T2 & t2, T3 & t3, T4 & t4, T5 & t5, T6 & t6){
		if(FunctionTraits<TagT>::NumPars == 6){
			typedef ReturnT (*funcPtr)(T1 & t1, T2 & t2, T3 & t3, T4 & t4, T5 & t5, T6 & t6);
			return ((funcPtr)(fSymbol))(t1, t2, t3, t4, t5, t6);
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

#endif
