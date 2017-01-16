
/** \file lowe.cpp
   - Project:     SOFTSUSY
   - Author:      Ben Allanach
   - Manual:      hep-ph/0104145, Comp. Phys. Comm. 143 (2002) 305
   - Webpage:     http://hepforge.cedar.ac.uk/softsusy/
*/

#include "lowe.h"
#include "conversion.hpp"
#include "ew_input.hpp"
#include "wrappers.hpp"

namespace softsusy {

const char* QedQcd_input_parmeter_names[NUMBER_OF_LOW_ENERGY_INPUT_PARAMETERS] = {
   "alpha_em_MSbar_at_MZ",
   "alpha_s_MSbar_at_MZ",
   "GFermi",
   "MZ_pole", "MW_pole",
   "Mv1_pole", "Mv2_pole", "Mv3_pole",
   "MElectron_pole", "MMuon_pole", "MTau_pole",
   "MU_2GeV", "MS_2GeV", "MT_pole",
   "MD_2GeV", "mc_mc", "mb_mb"
};

///  external object temp used to get objects into external routines, however:
///  don't use it!
static QedQcd *tempLe;

QedQcd::QedQcd()
  : a(2)
  , mf(9)
  , input(static_cast<unsigned>(NUMBER_OF_LOW_ENERGY_INPUT_PARAMETERS))
  , mbPole(PMBOTTOM)
  , ckm()
  , pmns()
{
  setPars(11);
  // Default object: 1998 PDB defined in 'def.h'
  mf(1) = MUP; mf(2) = MCHARM;
  mf(4) = MDOWN; mf(5) = MSTRANGE; mf(6) = MBOTTOM;
  mf(7) = MELECTRON; mf(8) = MMUON; mf(9) = MTAU;
  a(1) = ALPHAMZ;  a(2) = ALPHASMZ;
  mf(3) = getRunMtFromMz(PMTOP, ALPHASMZ);
  input(alpha_em_MSbar_at_MZ) = ALPHAMZ;
  input(alpha_s_MSbar_at_MZ) = ALPHASMZ;
  input(MT_pole) = PMTOP;
  input(mb_mb) = MBOTTOM;
  input(MTau_pole) = MTAU;
  input(MMuon_pole) = MMUON;
  input(MElectron_pole) = MELECTRON;
  input(MW_pole) = flexiblesusy::Electroweak_constants::MW;
  input(MZ_pole) = flexiblesusy::Electroweak_constants::MZ;
  input(GFermi) = flexiblesusy::Electroweak_constants::gfermi;
  input(mc_mc) = MCHARM;
  input(MU_2GeV) = MUP;
  input(MD_2GeV) = MDOWN;
  input(MS_2GeV) = MSTRANGE;
  setMu(MZ);
  setLoops(3);
  setThresholds(1);
}

const QedQcd & QedQcd::operator=(const QedQcd & m) {
  if (this == &m) return *this;
  a = m.a;
  mf = m.mf;
  mbPole = m.mbPole;
  input = m.input;
  ckm = m.ckm;
  pmns = m.pmns;
  setLoops(m.displayLoops());
  setThresholds(m.displayThresholds());
  setMu(m.displayMu());
  return *this;
}

//For communication with outside routines: sets all data by one vector y=1..11.
void QedQcd::set(const DoubleVector & y) {
  a(ALPHA) = y.display(1);
  a(ALPHAS) = y.display(2);
  int i; for (i=3; i<=11; i++)
    mf(i-2) = y.display(i);
}

const DoubleVector QedQcd::display() const {
  DoubleVector y(11);
  y(1) = a.display(ALPHA);
  y(2) = a.display(ALPHAS);
  int i; for (i=3; i<=11; i++)
    y(i) = mf.display(i-2);
  return y;
}

void QedQcd::runto_safe(double scale, double eps)
{
   if (runto(scale, eps)) {
      throw std::string("Error: Non-perturbative running to Q = ")
         + flexiblesusy::ToString(scale)
         + " during determination of the SM(5) parameters.";
   }
}

//  Active flavours at energy mu
int QedQcd::flavours(double mu) const {
  int k = 0;
  // if (mu > mf.display(mTop)) k++;
  if (mu > mf.display(mCharm)) k++;
  if (mu > mf.display(mUp)) k++;
  if (mu > mf.display(mDown)) k++;
  if (mu > mf.display(mBottom)) k++;
  if (mu > mf.display(mStrange)) k++;
  return k;
}

ostream & operator <<(ostream &left, const QedQcd &m) {
  left << "mU: " << m.displayMass(mUp)
       << "  mC: " << m.displayMass(mCharm)
       << "  mt: " << m.displayMass(mTop)
       << "  mt^pole: " << m.displayPoleMt()
       << endl;
  left << "mD: " << m.displayMass(mDown)
       << "  mS: " << m.displayMass(mStrange)
       << "  mB: " << m.displayMass(mBottom)
       << "  mb(mb):  " << m.displayMbMb()
       << endl;
  left << "mE: " << m.displayMass(mElectron)
       << "  mM: " << m.displayMass(mMuon)
       <<  "  mT: " << m.displayMass(mTau)
       << "  mb^pole: " << m.displayPoleMb()
       << endl;
  left << "aE: " << 1.0 / m.displayAlpha(ALPHA)
       << "  aS: " << m.displayAlpha(ALPHAS)
       << "   Q: " << m.displayMu()
       << "  mT^pole: " << m.displayPoleMtau()
       << endl;
  left << "loops: " << m.displayLoops()
       << "        thresholds: " << m.displayThresholds() << endl;

  return left;
}

istream & operator >>(istream &left, QedQcd &m) {

  string c, cmbmb, cmbpole;
  double mu, mc, mtpole, md, ms, me, mmu, mtau, invalph,
    alphas, scale;
  int t, l;
  left >> c >> mu >> c >> mc >> c >> c >> c >> mtpole;
  left >> c >> md >> c >> ms >> c >> cmbmb >> c >> cmbpole;
  left >> c >> me >> c >> mmu >> c >> mtau;
  left >> c >> invalph >> c >> alphas >> c >> scale;
  left  >> c >> l >> c >> t;
  m.setMass(mUp, mu);
  m.setMass(mCharm, mc);
  m.setMass(mDown, md);
  m.setMass(mStrange, ms);
  m.setMass(mElectron, me);
  m.setMass(mMuon, mmu);
  m.setMass(mTau, mtau);
  m.setAlpha(ALPHA, 1.0 / invalph);
  m.setAlpha(ALPHAS, alphas);
  m.setMu(scale);
  // y[3] is pole mass
  m.setPoleMt(mtpole);

  // default 3-loop qcd calculation
  m.setLoops(l);
  m.setThresholds(t);

  m.setMass(mTop, getRunMtFromMz(mtpole, alphas));

  if (cmbmb == "?" && cmbpole == "?") {
    ostringstream ii;
    ii << "Error reading in low energy QCDQED object: must specify ";
    ii << "running AND/OR pole bottom mass" << endl;
    throw ii.str();
  }

  // If you set one of the bottom mass parameters to be "?", it will calculate
  // it from the other one
  if (cmbmb != "?") m.setMass(mBottom, atof(cmbmb.c_str()));
  if (cmbpole != "?") m.setPoleMb(atof(cmbpole.c_str()));

  if (cmbmb == "?") m.calcRunningMb();
  if (cmbpole == "?") m.calcPoleMb();

  return left;
}

//  returns qed beta function at energy mu < mtop
double QedQcd::qedBeta() const {
  double x;
  x = 24.0 / 9.0;
  if (displayMu() > mf.display(mCharm)) x += 8.0 / 9.0;
  // if (displayMu() > mf.display(mTop)) x += 8.0 / 9.0;
  if (displayMu() > mf.display(mBottom)) x += 2.0 / 9.0;
  if (displayMu() > mf.display(mTau)) x += 2.0 / 3.0;
  if (displayMu() > MW) x += -7.0 / 2.0;

  return (x * sqr(a.display(ALPHA)) / PI);
}

//  next routine calculates beta function to 3 loops in qcd for The Standard
//  Model. Note that if quark masses are running, the number of active quarks
//  will take this into account. Returns beta
double QedQcd::qcdBeta() const {
  static const double INVPI = 1.0 / PI;
  int quarkFlavours = flavours(this->displayMu());
  double qb0, qb1, qb2;
  qb0 = (11.0e0 - (2.0e0 / 3.0e0 * quarkFlavours)) / 4.0;
  qb1 = (102.0e0 - (38.0e0 * quarkFlavours) / 3.0e0) / 16.0;
  qb2 = (2.857e3 * 0.5 - (5.033e3 * quarkFlavours) / 18.0  +
         (3.25e2 * sqr(quarkFlavours) ) / 5.4e1) / 64;

  double qa0 = 0., qa1 = 0., qa2 = 0.;

  if (displayLoops() > 0) qa0 = qb0 * INVPI;
  if (displayLoops() > 1) qa1 = qb1 * sqr(INVPI);
  if (displayLoops() > 2) qa2 = qb2 * sqr(INVPI) * INVPI;

  // add contributions of the one, two and three loop constributions resp.
  double beta;
  beta = -2.0 * sqr(displayAlpha(ALPHAS)) *
    (qa0 + qa1 * displayAlpha(ALPHAS) + qa2 *
     sqr(displayAlpha(ALPHAS)));
  return beta;
}

//(See comments for above function). returns a vector x(1..9) of fermion mass
//beta functions -- been checked!
void QedQcd::massBeta(DoubleVector & x) const {
  static const double INVPI = 1.0 / PI, ZETA3 = 1.202056903159594;

  // qcd bits: 1,2,3 loop resp.
  double qg1 = 0., qg2 = 0., qg3 = 0.;
  int quarkFlavours = flavours(displayMu());
  if (displayLoops() > 0) qg1 = INVPI;
  if (displayLoops() > 1)
    qg2 = (202.0 / 3.0 - (20.0e0 * quarkFlavours) / 9.0) * sqr(INVPI) / 16.0;
  if (displayLoops() > 2)
    qg3 = (1.249e3 - ((2.216e3 * quarkFlavours) / 27.0e0 +
                      1.6e2 * ZETA3 * quarkFlavours / 3.0e0) -
           140.0e0 * quarkFlavours * quarkFlavours / 81.0e0) * sqr(INVPI) *
      INVPI / 64.0;

  double qcd = -2.0 * a.display(ALPHAS) * (qg1  + qg2 * a.display(ALPHAS) +
                                           qg3 * sqr(a.display(ALPHAS)));
  double qed = -a.display(ALPHA) * INVPI / 2;

  int i;
  for (i=1;i<=3;i++)   // up quarks
    x(i) = (qcd + 4.0 * qed / 3.0) * mf.display(i);
  for (i=4;i<=6;i++)   // down quarks
    x(i) = (qcd + qed / 3.0) * mf.display(i);
  for (i=7;i<=9;i++)   // leptons
    x(i) = 3.0 * qed * mf.display(i);

  // switch off relevant beta functions
  if (displayThresholds() > 0)
    for(i=1;i<=9;i++) if (displayMu() < displayMass().display(i)) x(i) = 0.0;
  // nowadays, u,d,s masses defined at 2 GeV: don't run them below that
  if (displayMu() < 2.0) x(1) = x(4) = x(5) = 0.0;
}

DoubleVector QedQcd::beta() const {
  DoubleVector dydx(11);
  dydx(1) = qedBeta();
  dydx(2) = qcdBeta();
  DoubleVector y(9);
  massBeta(y);
  int i; for (i=3; i<=11; i++)
    dydx(i) = y(i-2);
  return dydx;
}

void QedQcd::runGauge(double x1, double x2) {
  const double tol = 1.0e-5;

  DoubleVector y(2);
  tempLe = this;
  y(1) = tempLe->displayAlpha(ALPHA);
  y(2) = tempLe->displayAlpha(ALPHAS);

  callRK(x1, x2, y, gaugeDerivs, tol);

  setAlpha(ALPHA, y(1));
  setAlpha(ALPHAS, y(2));
}

// Done at pole mb: extracts running mb(polemb)
double QedQcd::extractRunningMb(double alphasMb) {
  double mbPole = displayPoleMb();

  if (displayMu() != mbPole) {
    ostringstream ii;
    ii << "ERROR: QedQcd::extractRunningMb called at scale "
         << displayMu() << " instead of mbpole\n";
    throw ii.str();
  }

  // Following is the MSbar correction from QCD, hep-ph/9912391 and ZPC48 673
  // (1990)
  double delta = 0.;
  if (displayLoops() > 0) delta = delta + 4.0 / 3.0 * alphasMb / PI;
  if (displayLoops() > 1)
    delta = delta + sqr(alphasMb / PI) *
      (10.1667 + (displayMass(mUp) + displayMass(mDown) +
                  displayMass(mCharm) + displayMass(mStrange)) / mbPole);
  if (displayLoops() > 2)
    delta = delta + 101.45424 * alphasMb / PI * sqr(alphasMb / PI);

  double mbmb = mbPole * (1.0 - delta);

  return mbmb;
}

// Supposed to be done at mb(mb) -- MSbar, calculates pole mass
double QedQcd::extractPoleMb(double alphasMb) {

  if (displayMu() != displayMass(mBottom)) {
    ostringstream ii;
    ii << "ERROR: QedQcd::extractPoleMb called at scale " << displayMu() <<
      " instead of mb(mb)\n";
    throw ii.str();
  }

  // Following is the MSbar correction from QCD, hep-ph/9912391
  double delta = 0.0;
  if (displayLoops() > 0) delta = delta + 4.0 / 3.0 * alphasMb / PI;
  if (displayLoops() > 1) delta = delta + sqr(alphasMb / PI) *
    (9.2778 + (displayMass(mUp) + displayMass(mDown) + displayMass(mCharm) +
               displayMass(mStrange)) / mbPole);
  if (displayLoops() > 2)
    delta = delta + 94.4182 * alphasMb / PI * sqr(alphasMb / PI);

  double mbPole = displayMass(mBottom) * (1.0 + delta);

  return mbPole;
}

// Calculates the running mass from the pole mass:
void QedQcd::calcRunningMb() {

  const double tol = 1.0e-5;

  // Save initial object
  DoubleVector saving(display());
  double saveMu = displayMu();

  // Set arbitrarily low bottom mass to make sure it's included in the RGEs
  setMass(mBottom, 0.);
  runto(displayPoleMb(), tol);
  double mbAtPoleMb = extractRunningMb(displayAlpha(ALPHAS));
  setMass(mBottom, mbAtPoleMb);
  // Now, by running down to 1 GeV, you'll be left with mb(mb) since it will
  // decouple at this scale.
  runto(1.0, tol);
  double mbmb = displayMass(mBottom);

  // restore initial object
  set(saving);
  setMu(saveMu);
  setMass(mBottom, mbmb);
}

// Calculates the pole mass from the running mass, which should be defined at
// mb
void QedQcd::calcPoleMb() {

  double alphasMZ = displayAlpha(ALPHAS);
  double alphaMZ = displayAlpha(ALPHA);
  double saveMu = displayMu();

  runGauge(displayMu(), displayMass(mBottom));
  double poleMb = extractPoleMb(displayAlpha(ALPHAS));
  setPoleMb(poleMb);

  // Reset to erase numerical integration errors.
  setAlpha(ALPHAS, alphasMZ);
  setAlpha(ALPHA, alphaMZ);
  setMu(saveMu);
}

// Takes QedQcd object created at MZ and spits it out at mt
void QedQcd::toMt() {

  const double tol = 1.0e-5;

  setMass(mTop, getRunMtFromMz(displayPoleMt(), displayAlpha(ALPHAS)));
  calcPoleMb();

  double alphasMZ = displayAlpha(ALPHAS);
  double alphaMZ = displayAlpha(ALPHA);

  double mz = displayPoleMZ();

  runGauge(mz, 1.0);
  //Run whole lot up to pole top mass
  double mt = this->displayPoleMt();
  run(1.0, mz, tol);

  // Reset alphas to erase numerical integration errors.
  setAlpha(ALPHAS, alphasMZ);
  setAlpha(ALPHA, alphaMZ);
  run(mz, mt, tol);
}

// Takes QedQcd object created at MZ and spits it out at MZ
void QedQcd::toMz() {
  double mt = input(MT_pole), as = a(2);
  setMass(mTop, getRunMtFromMz(mt, as));
  calcPoleMb();

  const double tol = 1.0e-5;

  double alphasMZ = displayAlpha(ALPHAS);
  double alphaMZ = displayAlpha(ALPHA);
  double mz = displayPoleMZ();
  runGauge(mz, 1.0);
  run(1.0, mz, tol);
  // Reset alphas to erase numerical integration errors.
  setAlpha(ALPHAS, alphasMZ);
  setAlpha(ALPHA, alphaMZ);
}

/**
 * Calculates all running parameters in the SM w/o top quark at Q.
 * This function can be called multiple times, leading to the same
 * result (in contrast to toMz()).
 *
 * @param scale target renormalization scale
 * @param precision_goal precision goal
 * @param max_iterations maximum number of iterations
 */
void QedQcd::to(double scale, double precision_goal, unsigned max_iterations) {
   unsigned it = 0;
   bool converged = false;
   DoubleVector qedqcd_old(display()), qedqcd_new(display());

   while (!converged && it < max_iterations) {
      // set alpha_i(MZ)
      runto_safe(displayPoleMZ(), precision_goal);
      setAlpha(ALPHA, input(alpha_em_MSbar_at_MZ));
      setAlpha(ALPHAS, input(alpha_s_MSbar_at_MZ));

      // set mb(mb)
      runto_safe(displayMbMb(), precision_goal);
      setMass(mBottom, displayMbMb());
      setPoleMb(extractPoleMb(displayAlpha(ALPHAS)));

      // set mc(mc)
      runto_safe(displayMcMc(), precision_goal);
      setMass(mCharm, displayMcMc());

      // set mu, md, ms at 2 GeV
      runto_safe(2.0, precision_goal);
      setMass(mUp, displayMu2GeV());
      setMass(mDown, displayMd2GeV());
      setMass(mStrange, displayMs2GeV());

      // set me, mm, ml at 2 GeV
      setMass(mElectron, displayPoleMel());
      setMass(mMuon, displayPoleMmuon());
      setMass(mTau, displayPoleMtau());

      // check convergence
      runto_safe(scale, precision_goal);
      qedqcd_new = display();

      converged = flexiblesusy::MaxRelDiff(
         flexiblesusy::ToEigenArray(qedqcd_old),
         flexiblesusy::ToEigenArray(qedqcd_new)) < precision_goal;

      qedqcd_old = qedqcd_new;

      it++;
   }

   // set alpha_i(MZ) on last time
   runto_safe(displayPoleMZ(), precision_goal);
   setAlpha(ALPHA, input(alpha_em_MSbar_at_MZ));
   setAlpha(ALPHAS, input(alpha_s_MSbar_at_MZ));

   runto_safe(scale, precision_goal);

   if (!converged && max_iterations > 0) {
      std::ostringstream ostr;
      ostr << "Error: Iteration to determine SM(5) parameters did not"
         " converge after " << max_iterations;
      throw ostr.str();
   }
}

// This will calculate the three gauge couplings of the Standard Model at the
// scale m2.
// It's a simple one-loop calculation only and no
// thresholds are assumed. Range of validity is electroweak to top scale.
// alpha1 is in the GUT normalisation. sinth = sin^2 thetaW(Q) in MSbar
// scheme
DoubleVector QedQcd::getGaugeMu(const double m2, const double sinth) const {
  using std::log;
  static const double INVPI = 1.0 / PI;
  /*
  if (displayMu() != MZ) {
    ostringstream ii;
    ii << "Error in lowe.cpp:QedQcd::getGaugeMu called with mu=" <<
      displayMu() << " not MZ=" << MZ << endl;
    throw ii.str();
    }
  */
  DoubleVector temp(1, 3);

  double a1, a2, aem = displayAlpha(ALPHA), m1 = displayMu();
  // Set alpha1,2 at scale m1 from data:
  a1 = 5.0 * aem / (3.0 * (1.0 - sinth));
  a2 = aem / sinth;

  const double mtpole = displayPoleMt();
  QedQcd oneset(*this);

  if (m1 < mtpole) {
    // Renormalise a1,a2 to threshold scale assuming topless SM with one
    // light Higgs doublet
    const double thresh = minimum(m2, mtpole);
    a1 = 1.0 / ( 1.0 / a1 + 4.0 * INVPI * 1.07e2 * log(m1 / thresh) / 2.4e2 );
    a2 = 1.0 / ( 1.0 / a2 - 4.0 * INVPI * 2.50e1 * log(m1 / thresh) / 4.8e1 );

    temp.set(1, a1);
    temp.set(2, a2);

    // calculate alphas(m2)
    if (m2 >= 1.0) {
       oneset.runto(thresh);
    } else {
       oneset.runto(1.0);
    }
    // Set alphas(m) to be what's already calculated.
    temp.set(3, oneset.displayAlpha(ALPHAS));

    if (m2 > mtpole) {
      if (displayThresholds() > 0) {
        const double mtrun = oneset.displayMass(mTop);
        const double alphas_5f = oneset.displayAlpha(ALPHAS);
        const double alphas_sm = alphas_5f / (1.0 + INVPI * alphas_5f *
                                              log(mtrun / mtpole) / 3.0);
        oneset.setAlpha(ALPHAS, alphas_sm);
      }
      temp = oneset.runSMGauge(m2, temp);
    }
  } else {
    // Above the top threshold use SM RGEs only
    temp.set(1, a1);
    temp.set(2, a2);
    temp.set(3, oneset.displayAlpha(ALPHAS));
    temp = oneset.runSMGauge(m2, temp);
  }

  return temp;
}

// Given the values of the SM gauge couplings alpha_i, i = 1, 2, 3, at
// the current scale, run to the scale end using SM RGEs.
// Range of validity is for scales greater than or equal to the
// top quark pole mass.
DoubleVector QedQcd::runSMGauge(double end, const DoubleVector& alphas)
{
  const double tol = 1.0e-5;

  const double start = displayMu();

  DoubleVector y(3);
  QedQcd oneset(*this);
  tempLe = &oneset;
  y(1) = alphas(1);
  y(2) = alphas(2);
  y(3) = alphas(3);

  callRK(start, end, y, smGaugeDerivs, tol);

  return y;
}

int accessedReadIn; // Should be initialised to zero at start of prog
/*
--------------- read in a qcd-type object ------------------
Call with fname "" if you want it to come from standard input

"massIn" is an example of a data initialisation file:
*/
void readIn(QedQcd &mset, const char fname[80]) {
   static QedQcd prevReadIn; // Data will be stored in here for rest of the
                                // run

  // Read in data if it's not been set
  if (accessedReadIn == 0) {
    string c;
    if (!strcmp(fname,"")) cin >> prevReadIn >> c >> MIXING >> c >> TOLERANCE
                               >> c >> PRINTOUT; // from standard input
    else {
      // read from filename fname
          fstream fin(fname, ios::in);
          if(!fin) {
            mset = QedQcd();
            return;
          }
          fin >> prevReadIn >> c >> MIXING >> c >> TOLERANCE >> c >> PRINTOUT;
          fin.close();
    }

    if (PRINTOUT) cout << prevReadIn;
    accessedReadIn = 1; // Flag the fact we've read in the data once
  }

  mset = prevReadIn;

}

DoubleVector gaugeDerivs(double x, const DoubleVector & y) {
  using std::exp;
  tempLe->setMu(exp(x));
  tempLe->setAlpha(ALPHA, y.display(1));
  tempLe->setAlpha(ALPHAS, y.display(2));
  DoubleVector dydx(2);
  dydx(1) = tempLe->qedBeta();
  dydx(2) = tempLe->qcdBeta();

  return dydx;
}

// SM beta functions for the gauge couplings, neglecting Yukawa
// contributions, from arXiv:1208.3357 [hep-ph].
DoubleVector smGaugeDerivs(double x, const DoubleVector & y) {
  const double oneO4Pi = 1.0 / (4.0 * PI);

  const double scale = std::exp(x);

  tempLe->setMu(scale);

  const double a1 = y(1);
  const double a2 = y(2);
  const double a3 = y(3);

  const int nG = 3;

  DoubleVector dydx(3);

  dydx(1) = oneO4Pi * a1 * a1 * (0.2 + 8.0 * nG / 3.0 + oneO4Pi * (0.36 * a1
    + 1.8 * a2 + nG * (38.0 * a1 / 15.0 + 1.2 * a2 + 88.0 * a3 / 15.0)));
  dydx(2) = oneO4Pi * a2 * a2 * (-43.0 / 3.0 + 8.0 * nG / 3.0 + oneO4Pi *
    (0.6 * a1 - 259.0 * a2 / 3.0 + nG * (0.4 * a1 + 98.0 * a2 / 3.0 + 8.0
    * a3)));
  dydx(3) = oneO4Pi * a3 * a3 * (-22.0 + 8.0 * nG / 3.0 + oneO4Pi * (-204.0
    * a3 + nG * (11.0 * a1 / 15.0 + 3.0 * a2 + 152.0 * a3 / 3.0)));

  return dydx;
}

// Given pole mass and alphaS(MZ), returns running top mass -- one loop qcd
double getRunMtFromMz(double poleMt, double asMZ) {
  return getRunMt(poleMt, getAsmt(poleMt, asMZ));
}

// Input pole mass of top and alphaS(mt), outputs running mass mt(mt)
// including one-loop standard model correction only
double getRunMt(double poleMt, double asmt) {
  return poleMt / (1.0 + (4.0 / (3.0 * PI)) * asmt);
}

// Given a value of mt, and alphas(MZ), find alphas(mt) to 1 loops in qcd:
// it's a very good approximation at these scales, better than 10^-3 accuracy
double getAsmt(double mtop, double alphasMz) {
  using std::log;
  return alphasMz /
      (1.0 - 23.0 * alphasMz / (6.0 * PI) * log(MZ / mtop));
}

// We must first define a down-quark mass matrix: 3 x 3. QedQcd should be at MZ
void massFermions(const QedQcd & r, DoubleMatrix & mDon,
                           DoubleMatrix & mUpq, DoubleMatrix & mEle) {

  mDon(3, 3) = r.displayMass(mBottom);
  mUpq(3, 3) = r.displayMass(mTop);
  mEle(3, 3) = r.displayMass(mTau);

  mDon(1, 1) = r.displayMass(mDown);
  mDon(2, 2) = r.displayMass(mStrange);
  mUpq(1, 1) = r.displayMass(mUp);
  mUpq(2, 2) = r.displayMass(mCharm);
  mEle(1, 1) = r.displayMass(mElectron);
  mEle(2, 2) = r.displayMass(mMuon);
}

void QedQcd::set_input(const Eigen::ArrayXd& pars)
{
   input = pars;
}

Eigen::ArrayXd QedQcd::display_input() const
{
   return input;
}

std::vector<std::string> QedQcd::display_input_parameter_names()
{
   return std::vector<std::string>(QedQcd_input_parmeter_names,
                                   QedQcd_input_parmeter_names
                                   + NUMBER_OF_LOW_ENERGY_INPUT_PARAMETERS);
}

bool operator ==(const QedQcd& a, const QedQcd& b)
{
   const double eps = 1e-10;

   return
      std::fabs(a.displayMu() - b.displayMu()) < eps &&
      std::fabs(a.displayLoops() - b.displayLoops()) < eps &&
      std::fabs(a.displayThresholds() - b.displayThresholds()) < eps &&
      std::fabs(a.displayAlpha(ALPHA) - b.displayAlpha(ALPHA)) < eps &&
      std::fabs(a.displayAlpha(ALPHAS) - b.displayAlpha(ALPHAS)) < eps &&
      std::fabs(a.displayMass(mUp) - b.displayMass(mUp)) < eps &&
      std::fabs(a.displayMass(mCharm) - b.displayMass(mCharm)) < eps &&
      std::fabs(a.displayMass(mTop) - b.displayMass(mTop)) < eps &&
      std::fabs(a.displayMass(mDown) - b.displayMass(mDown)) < eps &&
      std::fabs(a.displayMass(mStrange) - b.displayMass(mStrange)) < eps &&
      std::fabs(a.displayMass(mBottom) - b.displayMass(mBottom)) < eps &&
      std::fabs(a.displayMass(mElectron) - b.displayMass(mElectron)) < eps &&
      std::fabs(a.displayMass(mMuon) - b.displayMass(mMuon)) < eps &&
      std::fabs(a.displayMass(mTau) - b.displayMass(mTau)) < eps &&
      std::fabs(a.displayNeutrinoPoleMass(1) - b.displayNeutrinoPoleMass(1)) < eps &&
      std::fabs(a.displayNeutrinoPoleMass(2) - b.displayNeutrinoPoleMass(2)) < eps &&
      std::fabs(a.displayNeutrinoPoleMass(3) - b.displayNeutrinoPoleMass(3)) < eps &&
      std::fabs(a.displayPoleMt() - b.displayPoleMt()) < eps &&
      std::fabs(a.displayPoleMb() - b.displayPoleMb()) < eps &&
      std::fabs(a.displayPoleMtau() - b.displayPoleMtau()) < eps &&
      std::fabs(a.displayPoleMW() - b.displayPoleMW()) < eps &&
      std::fabs(a.displayPoleMZ() - b.displayPoleMZ()) < eps &&
      std::fabs(a.displayFermiConstant() - b.displayFermiConstant()) < eps;
}

} // namespace softsusy
