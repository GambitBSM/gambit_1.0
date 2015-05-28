//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Frontend for MicrOmegas MSSM 3.5.5 backend
///
///  Note that if you're going to put backend
///  convenience and ini functions in a cpp file,
///  you need to have one cpp file for each renamed
///  version of the backend that you want to employ.
///  You also need to define BACKENDRENAME *before*
///  including the frontend header.

///  *********************************************
///
///  Authors (add name and date if you modify):
///
/// \author Jonathan Cornell
/// \date 2015
///
///  *********************************************

#include "gambit/Backends/frontend_macros.hpp"
#include "gambit/Backends/frontends/micromegas.hpp"

// Convenience functions (definitions)
BE_NAMESPACE
{
    double dNdE(double Ecm, double E, int inP, int outN)
    {
      // outN 0-5: gamma, e+, p-, nu_e, nu_mu, nu_tau
      // inP:  0 - 6: glu, d, u, s, c, b, t
      //       7 - 9: e, m, l
      //       10 - 15: Z, ZT, ZL, W, WT, WL
      double tab[250];  // NZ = 250
      readSpectra();
      mInterp(Ecm/2, inP, outN, tab);
      return zInterp(log(E/Ecm*2), tab);
    }
}
END_BE_NAMESPACE

// Initialisation function (definition)
BE_INI_FUNCTION
{
    using namespace SLHAea;

    std::string filename;

    // Write out a SLHA file with a random file name;
    srand (time(NULL));
    filename = "DarkBit" + std::to_string(rand()) + ".slha";
    const Spectrum* mySpec = *Dep::MSSM_spectrum;
    SLHAstruct mySLHA = mySpec->getSLHAea();

    // STOPMIX and SBOTMIX blocks are constructed asssuming mass eigenstates 1 and 2 are
    // predominantly made up of stops and sbottoms respectively
    mySLHA["STOPMIX"][""] << "Block"<< "STOPMIX";
    mySLHA["STOPMIX"][""] << 1 << 1 << to<double>(mySLHA.at("USQMIX").at(1, 3).at(2));
    mySLHA["STOPMIX"][""] << 1 << 2 << to<double>(mySLHA.at("USQMIX").at(1, 6).at(2));
    mySLHA["STOPMIX"][""] << 2 << 1 << to<double>(mySLHA.at("USQMIX").at(2, 3).at(2));
    mySLHA["STOPMIX"][""] << 2 << 2 << to<double>(mySLHA.at("USQMIX").at(2, 6).at(2));

    mySLHA["SBOTMIX"][""] << "Block"<< "SBOTMIX";
    mySLHA["SBOTMIX"][""] << 1 << 1 << to<double>(mySLHA.at("DSQMIX").at(1, 3).at(2));
    mySLHA["SBOTMIX"][""] << 1 << 2 << to<double>(mySLHA.at("DSQMIX").at(1, 6).at(2));
    mySLHA["SBOTMIX"][""] << 2 << 1 << to<double>(mySLHA.at("DSQMIX").at(2, 3).at(2));
    mySLHA["SBOTMIX"][""] << 2 << 2 << to<double>(mySLHA.at("DSQMIX").at(2, 6).at(2));

    // STAUMIX block is constructed assuming mass eigenstates 1 and 6 are predominantly
    // made up of staus
    mySLHA["STAUMIX"][""] << "Block"<< "STAUMIX";
    mySLHA["STAUMIX"][""] << 1 << 1 << to<double>(mySLHA.at("SELMIX").at(1, 3).at(2));
    mySLHA["STAUMIX"][""] << 1 << 2 << to<double>(mySLHA.at("SELMIX").at(1, 6).at(2));
    mySLHA["STAUMIX"][""] << 2 << 1 << to<double>(mySLHA.at("SELMIX").at(6, 3).at(2));
    mySLHA["STAUMIX"][""] << 2 << 2 << to<double>(mySLHA.at("SELMIX").at(6, 6).at(2));

    std::ofstream ofs(filename);
    ofs << mySLHA;
    ofs.close();

    // Convert filename string to char* type
    char * filename_c = new char[filename.size() + 1];
    std::copy(filename.begin(), filename.end(), filename_c);
    filename_c[filename.size()] = '\0';

    // Initialize micromegas mass spectrum from SLHA
    char cdmName[10];
    int error;

    error = lesHinput(byVal(filename_c));
    if (error != 0) backend_error().raise(LOCAL_INFO, "MicrOmegas function "
            "lesHinput returned error code: " + std::to_string(error));
    error = sortOddParticles(byVal(cdmName));
    if (error != 0) backend_error().raise(LOCAL_INFO, "MicrOmegas function "
            "sortOddParticles returned error code: " + std::to_string(error));

    if (remove(filename_c) != 0)
        backend_warning().raise(LOCAL_INFO, "Unable to delete SLHA file "+filename);

}
END_BE_INI_FUNCTION
