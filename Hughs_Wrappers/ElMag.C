// Implementation of Elmag methods
#include <ElMag.h>

// STL headers
#include <cmath>
#include <iostream>


//initialise static pointer to current Elmag object
Elmag * ElmagStorage::fCurrentElmag = NULL;

/** Constructor.
 */
Elmag::Elmag(int nSpecBins, double minEnergy, double maxEnergy, std::string const & outFileName, std::string const & libFileName):
fElmagHandle(dlopen(libFileName.c_str(), RTLD_LAZY)),
fDiffuseSpecHist(NULL),
fResultsTree(NULL),
fCurrentResult(NULL),
fOutFileName(outFileName)
{
	if(!ElmagStorage::setCurrentElmag(this)){
		std::cerr << "Could not set current Elmag object to this!" << std::endl;
	}
	CheckDLStatus();
	SetupHist(nSpecBins, minEnergy, maxEnergy);
	SetupTree();
}

/** Destructor
 */
Elmag::~Elmag(){
	dlclose(fElmagHandle);
	if(fDiffuseSpecHist != NULL){
		delete fDiffuseSpecHist;
	}
	if(fResultsTree != NULL){
		delete fResultsTree;
	}
	if(fCurrentResult != NULL){
		delete fCurrentResult;
	}
}

/** Check for dynamic library errors
 */
void Elmag::CheckDLStatus() const {
	const char * error = dlerror();
	if(error){
		throw(ElmagException(error));
	}
}

/** Save MC output
 */
void Elmag::ProcessParticle(double const & energy, double const & offsetAngle, double const & timeDelay, double const & weight, int const & isElectron){
	/*std::cout << "C++ results!\nenergy = " << energy << ", "
	<< "offsetAngle = " << offsetAngle << ", "
	<< "timeDelay = " << timeDelay << ", "
	<< "weight = " << weight << ", "
	<< "isElectron = " << isElectron << std::endl;*/
	fCurrentResult->magField = GetMagField();
	fCurrentResult->redshift = GetRedshift();
	fCurrentResult->energy = energy;
	fCurrentResult->offsetAngle = offsetAngle;
	fCurrentResult->timeDelay = timeDelay;
	fCurrentResult->weight = weight;
	fCurrentResult->particleType = isElectron;
	fResultsTree->Fill();
}

/** Setup spectrum histogram.
 */
void Elmag::SetupHist(int const & nBins, double const & minEnergy, double const & maxEnergy){
	// Calculate bin boundaries
	std::vector<double> bounds;
	double logMin = std::log10(minEnergy);
	double logMax = std::log10(maxEnergy);
	double logStep = (logMax - logMin)/static_cast<double>(nBins);
	for(int i = 0; i <= nBins; i++){
		double logBoundary = logMin+i*logStep;
		bounds.push_back(std::pow(10.0, logBoundary));
	}
	if(fDiffuseSpecHist != NULL){
		delete fDiffuseSpecHist;
	}
	fDiffuseSpecHist = new TH1D("fDiffuseSpecHist", "Diffuse Spectrum", nBins, &bounds[0]);
}

/** Setup storage Tree.
 */
void Elmag::SetupTree(){
	if(fResultsTree != NULL){
		delete fResultsTree;
	}
	fResultsTree = new TTree("fResultsTree", "ELMAG Results Tree");
	if(fCurrentResult != NULL){
		delete fCurrentResult;
	}
	fCurrentResult = new ElmagResult;
	fResultsTree->Branch("ElmagResult", fCurrentResult, "magField/D:redshift/D:energy/D:offsetAngle/D:timeDelay/D:weight/D:particleType/I");
}

/** Calculate and return the magnetic field strength [G] as a function of distance TO the Earth [cm].
 */
double Elmag::GetMagField(double const & distance){
	return fMagField;
}

/** Register function with external linkage to allow FORTRAN code to register results.
 */
extern "C" void elMagRegister(double const & energy, double const & offsetAngle, double const & timeDelay, double const & weight,int const & isElectron){
	ElmagStorage::getCurrentElmag().ProcessParticle(energy, offsetAngle, timeDelay, weight, isElectron);
}


/** Function with external linkage to allow FORTRAN code to access magnetic field strength [G] as a 
 * function of the distance TO the Earth [cm].
 */
extern "C" double elMagBemf(double const & distance){
	return ElmagStorage::getCurrentElmag().GetMagField(distance);
}
