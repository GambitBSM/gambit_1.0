#ifndef ELMAGCXX
#define ELMAGCXX

#include <dlfcn.h>

#include <TH1D.h>
#include <TTree.h>
#include <TBranch.h>

#include <string>
#include <sstream>
#include <stdexcept>

typedef std::runtime_error ElmagException;

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

/** Helper traits class to hold the characteristics of a FORTRAN subroutine.
 */
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

// Enable tag-dispatching access to FORTRAN entities.
VARIABLE(ThresholdEnergy, ethr, user_variables, double)
VARIABLE(MaxPhotonEnergy, egmax, user_variables, double)
VARIABLE(MagFieldCoherenceLength, cohlnth, user_variables, double)
VARIABLE(JetOpeningAngle, th_jet, user_variables, double)
VARIABLE(SamplingIndex, a_smp, user_variables, double)
VARIABLE(EBLModelType, model, user_variables, int)
VARIABLE(NumInjectedPhotons, nmax, user_variables, int)
VARIABLE(OutFileName, filename, user_result, const char *)

FUNCTION(Init, init, 2)
FUNCTION(Cascade, cascade, 4)
FUNCTION(Banner, banner, 2)
FUNCTION(GenInitialParticle, initial_particle, 2)


/*********************************************************************************/

/** Singleton functor class to wrap an FORTRAN function/subroutine call
 */
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

/*********************************************************************************/

/** Structure to hold "particle" data returned from an ELMAG cascade
*/
struct ElmagResult{
	
	double magField; // IGMF strength [G]
	double redshift; // source redshift
	
	double energy; // particle energy [eV]
	double offsetAngle; // offset relative to source position [degrees]
	double timeDelay; // arrival time delay [s]
	double weight; // ~number of actual particles represented by this particle.
	
	int particleType; // 0 => photon, 1 => electron, -1 => positron 	
};

/*********************************************************************************/

/** C++ wrapper for the ELMAG electromagnetic cascade MC code.
 */
class Elmag {
	
	/// Handle for the ELMAG library (compiled from FORTRAN code)
	void * fElmagHandle;
	
	/// Diffuse spectrum histogram
	TH1D * fDiffuseSpecHist;
	
	/// TTree to store data
	TTree * fResultsTree;
	
	// Structure to store the current result.
	ElmagResult * fCurrentResult;
	
	/// Constant magnetic field strength [G]
	double fMagField;
	
	/// Source redshift.
	double fRedshift;
	
	/// Output filename
	std::string fOutFileName;
	
	/// Check dtatus of dynamic library interface
	void CheckDLStatus() const;

	void SetupHist(int const & nBins, double const & minEnergy, double const & maxEnergy);

	void SetupTree();
	
	public :
	
	/// Constructor.
	Elmag(int nSpecBins,
		  double minEnergy,
		  double maxEnergy,
		  std::string const & outFileName = "cpp_output",
		  std::string const & libFileName = "libElMagFortran.so");
	
	/// Destructor.
	~Elmag();
	
	/// Set a user variable
	template<typename TagT>
    void SetUserVariable(typename VarType<TagT>::type const & value){
		std::string symbolName = FortranFunctor<TagT>::FortranSymbolName(VarName<TagT>::name(), VarName<TagT>::module());
		typename VarType<TagT>::type * varPtr = static_cast<typename VarType<TagT>::type *>(dlsym(fElmagHandle, symbolName.c_str()));
		CheckDLStatus();
		*varPtr = value;
	}
	
	/// Get a user variable
	template<typename TagT>
    typename VarType<TagT>::type const & GetUserVariable() const {
		std::string symbolName = FortranFunctor<TagT>::FortranSymbolName(VarName<TagT>::name(), VarName<TagT>::module());
		typename VarType<TagT>::type * varPtr = static_cast<typename VarType<TagT>::type *>(dlsym(fElmagHandle, symbolName.c_str()));
		CheckDLStatus();
		return *varPtr;
	}
	
	/** Load a function pointer from the ELMAG library, wrap it in a FortranFunctor, and return
	 * that functor.
	 */
	template <typename TagT>
    FortranFunctor<TagT> & Function(){
		return FortranFunctor<TagT>::instance(fElmagHandle);
	}

	/// Calculate the magnetic field strength as a function of the distance TO the Earth [cm].
	double GetMagField(double const & distance = 0.0);

	/// Set a constant magnetic field strength [G].
	void SetMagField(double const & magField){
		fMagField = magField;
	}
	
	/// Return the source redshift
	double GetRedshift(){
		return fRedshift;
	}
	
	/// Set the source redshift.
	void SetRedshift(double const & redshift){
		fRedshift = redshift;
	}
	
	/// Process the data from about a "particle" which remains in the cascade at Earth.
	void ProcessParticle(double const & energy, double const & offsetAngle, double const & timeDelay, double const & weight, int const & isElectron);
	
	/// Return a reference to a histogram containing the diffuse spectrum.
	TH1D & GetDiffuseSpecHist(){
		return *fDiffuseSpecHist;
	}

	/// Return a reference to the data storage tree.
	TTree & GetResultsTree(){
		return *fResultsTree;
	}
	
};

/*********************************************************************************/

/** Helper class to manage storage for the ELMAG C++ wrapper.
 */
class ElmagStorage {
	
	/// Private consructor and copy constructor
	ElmagStorage();
	ElmagStorage(ElmagStorage const &);
	
	static Elmag * fCurrentElmag;
	
	public :
	
	static Elmag & getCurrentElmag(){
		return *fCurrentElmag;
	}
	
	static bool setCurrentElmag(Elmag * elmag){
		if(fCurrentElmag){
			return false;
		}
		fCurrentElmag = elmag;
		return true;
	}
	
	static void releaseCurrentElmag(){
		fCurrentElmag = NULL;
	}
};

#endif /* ELMAGCXX */