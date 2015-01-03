#include <iostream>
#include "def.h"
#include "linalg.h"
#include "lowe.h"
#include "nmssmsoftsusy.h"

using namespace softsusy;

namespace softsusy {
   extern template class Softsusy<SoftParsNmssm>;
}

int main() {

  /// Sets format of output: 6 decimal places
  outputCharacteristics(6);
  softsusy::PRINTOUT = 0;

  /// Parameters used: CMSSM parameters
  double m12 = 300., a0 = -300., mGutGuess = 2.0e16, tanb = 10.0, m0 = 500.;
  int sgnMu = 1;      ///< sign of mu parameter
  int numPoints = 10; ///< number of scan points
  double lambda = 0.1, kappa = 0.1, s = 0.0, xiF = 0.0, mupr = 0.0;

  QedQcd oneset;      ///< See "lowe.h" for default definitions parameters

  /// most important Standard Model inputs: you may change these and recompile
  double alphasMZ = 0.1187, mtop = 173.5, mbmb = 4.18;
  oneset.setAlpha(ALPHAS, alphasMZ);
  oneset.setPoleMt(mtop);
  oneset.setMass(mBottom, mbmb);
  oneset.toMz();      ///< Runs SM fermion masses to MZ

  /// Print out the SM data being used, as well as quark mixing assumption and
  /// the numerical accuracy of the solution
  cout << "# Low energy data in SOFTSUSY: MIXING=" << MIXING << " TOLERANCE="
       << TOLERANCE << endl << oneset << endl;

  /// Print out header line
  cout << "# tan beta   mh(1)        mh(2)        mA(1)        mH+-\n";

  /// Set limits of tan beta scan
  double startTanb = 5.0, endTanb = 55.0;

  DoubleVector pars(5);
  pars(1) = m0; pars(2) = m12; pars(3) = a0;
  pars(4) = a0, pars(5) = a0;
  DoubleVector nmpars(5);
  nmpars(1) = lambda; nmpars(2) = kappa; nmpars(3) = s;
  nmpars(4) = xiF; nmpars(5) = mupr;
  bool uni = true; // MGUT defined by g1(MGUT)=g2(MGUT)
  softsusy::Z3 = true;

  for (int i = 0; i < numPoints; i++) {
     tanb = (endTanb - startTanb) / double(numPoints) * double(i) +
        startTanb; // set tan beta ready for the scan.

     NmssmSoftsusy n;

     try {
       n.lowOrg(SemiMsugraBcs, mGutGuess, pars, nmpars, sgnMu, tanb,
                oneset, uni);
     } catch (const std::string& error) {
       n.flagProblemThrown(true);
     } catch (const char* error) {
       n.flagProblemThrown(true);
     }

     /// check the point in question is problem free: if so print the output
     if (!n.displayProblem().test()) {
        cout << tanb << ' '
             << n.displayPhys().mh0(1) << ' '
             << n.displayPhys().mh0(2) << ' '
             << n.displayPhys().mA0(1) << ' '
             << n.displayPhys().mHpm << '\n';
     } else {
        cout << tanb << ' ' << n.displayProblem() << '\n';
     }
  }

  return 0;
}
