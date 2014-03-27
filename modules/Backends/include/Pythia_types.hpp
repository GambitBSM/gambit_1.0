//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Types for the Pythia 8 backend
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Anders Kvellestad
///          (anderkve@fys.uio.no)
//   \date 2014 Mar
///
///  *********************************************


#ifndef __Pythia_types_hpp__
#define __Pythia_types_hpp__

namespace Gambit
{
    // Forward declarations:
    class Abstract__Particle;
    class Particle;
    class Abstract__ParticleData;
    class ParticleData;
    class Abstract__Vec4;
    class Vec4;
    class Abstract__RotBstMatrix;
    class RotBstMatrix;
    class Abstract__Event;
    class Event;
    class Abstract__Pythia;
    class Pythia;


    class Abstract__Vec4
    {
        private:
        public:
            // UNKNOWN: OperatorMethod
            // UNKNOWN: OperatorMethod

            virtual void reset_GAMBIT() {};
            void reset()
            {
                reset_GAMBIT();
            }

            virtual void p_GAMBIT(double xIn, double yIn, double zIn, double tIn) {};
            void p(double xIn, double yIn, double zIn, double tIn)
            {
                p_GAMBIT( xIn,  yIn,  zIn,  tIn);
            }

            virtual void p_GAMBIT(Abstract__Vec4 pIn) {};
            void p(Abstract__Vec4 pIn)
            {
                p_GAMBIT( pIn);
            }

            virtual void px_GAMBIT(double xIn) {};
            void px(double xIn)
            {
                px_GAMBIT( xIn);
            }

            virtual void py_GAMBIT(double yIn) {};
            void py(double yIn)
            {
                py_GAMBIT( yIn);
            }

            virtual void pz_GAMBIT(double zIn) {};
            void pz(double zIn)
            {
                pz_GAMBIT( zIn);
            }

            virtual void e_GAMBIT(double tIn) {};
            void e(double tIn)
            {
                e_GAMBIT( tIn);
            }

            virtual double* px_GAMBIT() {};
            double* px()
            {
                return px_GAMBIT();
            }

            virtual double* py_GAMBIT() {};
            double* py()
            {
                return py_GAMBIT();
            }

            virtual double* pz_GAMBIT() {};
            double* pz()
            {
                return pz_GAMBIT();
            }

            virtual double* e_GAMBIT() {};
            double* e()
            {
                return e_GAMBIT();
            }

            virtual double* mCalc_GAMBIT() {};
            double* mCalc()
            {
                return mCalc_GAMBIT();
            }

            virtual double* m2Calc_GAMBIT() {};
            double* m2Calc()
            {
                return m2Calc_GAMBIT();
            }

            virtual double* pT_GAMBIT() {};
            double* pT()
            {
                return pT_GAMBIT();
            }

            virtual double* pT2_GAMBIT() {};
            double* pT2()
            {
                return pT2_GAMBIT();
            }

            virtual double* pAbs_GAMBIT() {};
            double* pAbs()
            {
                return pAbs_GAMBIT();
            }

            virtual double* pAbs2_GAMBIT() {};
            double* pAbs2()
            {
                return pAbs2_GAMBIT();
            }

            virtual double* eT_GAMBIT() {};
            double* eT()
            {
                return eT_GAMBIT();
            }

            virtual double* eT2_GAMBIT() {};
            double* eT2()
            {
                return eT2_GAMBIT();
            }

            virtual double* theta_GAMBIT() {};
            double* theta()
            {
                return theta_GAMBIT();
            }

            virtual double* phi_GAMBIT() {};
            double* phi()
            {
                return phi_GAMBIT();
            }

            virtual double* thetaXZ_GAMBIT() {};
            double* thetaXZ()
            {
                return thetaXZ_GAMBIT();
            }

            virtual double* pPos_GAMBIT() {};
            double* pPos()
            {
                return pPos_GAMBIT();
            }

            virtual double* pNeg_GAMBIT() {};
            double* pNeg()
            {
                return pNeg_GAMBIT();
            }

            virtual double* rap_GAMBIT() {};
            double* rap()
            {
                return rap_GAMBIT();
            }

            virtual double* eta_GAMBIT() {};
            double* eta()
            {
                return eta_GAMBIT();
            }

            virtual void rescale3_GAMBIT(double fac) {};
            void rescale3(double fac)
            {
                rescale3_GAMBIT( fac);
            }

            virtual void rescale4_GAMBIT(double fac) {};
            void rescale4(double fac)
            {
                rescale4_GAMBIT( fac);
            }

            virtual void flip3_GAMBIT() {};
            void flip3()
            {
                flip3_GAMBIT();
            }

            virtual void flip4_GAMBIT() {};
            void flip4()
            {
                flip4_GAMBIT();
            }

            virtual void rot_GAMBIT(double thetaIn, double phiIn) {};
            void rot(double thetaIn, double phiIn)
            {
                rot_GAMBIT( thetaIn,  phiIn);
            }

            virtual void rotaxis_GAMBIT(double phiIn, double nx, double ny, double nz) {};
            void rotaxis(double phiIn, double nx, double ny, double nz)
            {
                rotaxis_GAMBIT( phiIn,  nx,  ny,  nz);
            }

            virtual void rotaxis_GAMBIT(double phiIn, const Abstract__Vec4& n) {};
            void rotaxis(double phiIn, const Abstract__Vec4& n)
            {
                rotaxis_GAMBIT( phiIn,  n);
            }

            virtual void bst_GAMBIT(double betaX, double betaY, double betaZ) {};
            void bst(double betaX, double betaY, double betaZ)
            {
                bst_GAMBIT( betaX,  betaY,  betaZ);
            }

            virtual void bst_GAMBIT(double betaX, double betaY, double betaZ, double gamma) {};
            void bst(double betaX, double betaY, double betaZ, double gamma)
            {
                bst_GAMBIT( betaX,  betaY,  betaZ,  gamma);
            }

            virtual void bst_GAMBIT(const Abstract__Vec4& pIn) {};
            void bst(const Abstract__Vec4& pIn)
            {
                bst_GAMBIT( pIn);
            }

            virtual void bst_GAMBIT(const Abstract__Vec4& pIn, double mIn) {};
            void bst(const Abstract__Vec4& pIn, double mIn)
            {
                bst_GAMBIT( pIn,  mIn);
            }

            virtual void bstback_GAMBIT(const Abstract__Vec4& pIn) {};
            void bstback(const Abstract__Vec4& pIn)
            {
                bstback_GAMBIT( pIn);
            }

            virtual void bstback_GAMBIT(const Abstract__Vec4& pIn, double mIn) {};
            void bstback(const Abstract__Vec4& pIn, double mIn)
            {
                bstback_GAMBIT( pIn,  mIn);
            }

            virtual void rotbst_GAMBIT(const Abstract__RotBstMatrix& M) {};
            void rotbst(const Abstract__RotBstMatrix& M)
            {
                rotbst_GAMBIT( M);
            }
            // UNKNOWN: OperatorMethod
            // UNKNOWN: OperatorMethod
            // UNKNOWN: OperatorMethod
            // UNKNOWN: OperatorMethod
            // UNKNOWN: OperatorMethod

        public:
            Vec4* downcast()
            {
                return reinterpret_cast<Vec4*>(this);
            }
    };



    class Abstract__RotBstMatrix
    {
        private:
        public:
            // UNKNOWN: OperatorMethod

            virtual void rot_GAMBIT(double arg_1, double arg_2) {};
            void rot(double arg_1, double arg_2)
            {
                rot_GAMBIT( arg_1,  arg_2);
            }

            virtual void rot_GAMBIT(const Abstract__Vec4& p) {};
            void rot(const Abstract__Vec4& p)
            {
                rot_GAMBIT( p);
            }

            virtual void bst_GAMBIT(double arg_1, double arg_2, double arg_3) {};
            void bst(double arg_1, double arg_2, double arg_3)
            {
                bst_GAMBIT( arg_1,  arg_2,  arg_3);
            }

            virtual void bst_GAMBIT(const Abstract__Vec4& arg_1) {};
            void bst(const Abstract__Vec4& arg_1)
            {
                bst_GAMBIT( arg_1);
            }

            virtual void bstback_GAMBIT(const Abstract__Vec4& arg_1) {};
            void bstback(const Abstract__Vec4& arg_1)
            {
                bstback_GAMBIT( arg_1);
            }

            virtual void bst_GAMBIT(const Abstract__Vec4& arg_1, const Abstract__Vec4& arg_2) {};
            void bst(const Abstract__Vec4& arg_1, const Abstract__Vec4& arg_2)
            {
                bst_GAMBIT( arg_1,  arg_2);
            }

            virtual void toCMframe_GAMBIT(const Abstract__Vec4& arg_1, const Abstract__Vec4& arg_2) {};
            void toCMframe(const Abstract__Vec4& arg_1, const Abstract__Vec4& arg_2)
            {
                toCMframe_GAMBIT( arg_1,  arg_2);
            }

            virtual void fromCMframe_GAMBIT(const Abstract__Vec4& arg_1, const Abstract__Vec4& arg_2) {};
            void fromCMframe(const Abstract__Vec4& arg_1, const Abstract__Vec4& arg_2)
            {
                fromCMframe_GAMBIT( arg_1,  arg_2);
            }

            virtual void rotbst_GAMBIT(const Abstract__RotBstMatrix& arg_1) {};
            void rotbst(const Abstract__RotBstMatrix& arg_1)
            {
                rotbst_GAMBIT( arg_1);
            }

            virtual void invert_GAMBIT() {};
            void invert()
            {
                invert_GAMBIT();
            }

            virtual void reset_GAMBIT() {};
            void reset()
            {
                reset_GAMBIT();
            }

            virtual double* deviation_GAMBIT() {};
            double* deviation()
            {
                return deviation_GAMBIT();
            }

        public:
            RotBstMatrix* downcast()
            {
                return reinterpret_cast<RotBstMatrix*>(this);
            }
    };


    class Abstract__ParticleData
    {
        private:
        public:

            virtual bool* init_GAMBIT(std::string startFile) {};
            bool* init(std::string startFile)
            {
                return init_GAMBIT( startFile);
            }

            virtual bool* reInit_GAMBIT(std::string startFile, bool xmlFormat) {};
            bool* reInit(std::string startFile, bool xmlFormat)
            {
                return reInit_GAMBIT( startFile,  xmlFormat);
            }

            virtual bool* readXML_GAMBIT(std::string inFile, bool reset) {};
            bool* readXML(std::string inFile, bool reset)
            {
                return readXML_GAMBIT( inFile,  reset);
            }

            virtual void listXML_GAMBIT(std::string outFile) {};
            void listXML(std::string outFile)
            {
                listXML_GAMBIT( outFile);
            }

            virtual bool* readFF_GAMBIT(std::string inFile, bool reset) {};
            bool* readFF(std::string inFile, bool reset)
            {
                return readFF_GAMBIT( inFile,  reset);
            }

            virtual void listFF_GAMBIT(std::string outFile) {};
            void listFF(std::string outFile)
            {
                listFF_GAMBIT( outFile);
            }

            virtual bool* readString_GAMBIT(std::string lineIn, bool warn, std::ostream& os) {};
            bool* readString(std::string lineIn, bool warn, std::ostream& os)
            {
                return readString_GAMBIT( lineIn,  warn,  os);
            }

            virtual bool* readingFailed_GAMBIT() {};
            bool* readingFailed()
            {
                return readingFailed_GAMBIT();
            }

            virtual void listAll_GAMBIT(std::ostream& os) {};
            void listAll(std::ostream& os)
            {
                listAll_GAMBIT( os);
            }

            virtual void listChanged_GAMBIT(std::ostream& os) {};
            void listChanged(std::ostream& os)
            {
                listChanged_GAMBIT( os);
            }

            virtual void listChanged_GAMBIT(bool changedRes, std::ostream& os) {};
            void listChanged(bool changedRes, std::ostream& os)
            {
                listChanged_GAMBIT( changedRes,  os);
            }

            virtual void list_GAMBIT(bool changedOnly, bool changedRes, std::ostream& os) {};
            void list(bool changedOnly, bool changedRes, std::ostream& os)
            {
                list_GAMBIT( changedOnly,  changedRes,  os);
            }

            virtual void list_GAMBIT(int idList, std::ostream& os) {};
            void list(int idList, std::ostream& os)
            {
                list_GAMBIT( idList,  os);
            }

            virtual void list_GAMBIT(std::vector<int, std::allocator<int> > idList, std::ostream& os) {};
            void list(std::vector<int, std::allocator<int> > idList, std::ostream& os)
            {
                list_GAMBIT( idList,  os);
            }

            virtual void checkTable_GAMBIT(std::ostream& os) {};
            void checkTable(std::ostream& os)
            {
                checkTable_GAMBIT( os);
            }

            virtual void checkTable_GAMBIT(int verbosity, std::ostream& os) {};
            void checkTable(int verbosity, std::ostream& os)
            {
                checkTable_GAMBIT( verbosity,  os);
            }

            virtual void addParticle_GAMBIT(int idIn, std::string nameIn, int spinTypeIn, int chargeTypeIn, int colTypeIn, double m0In, double mWidthIn, double mMinIn, double mMaxIn, double tau0In) {};
            void addParticle(int idIn, std::string nameIn, int spinTypeIn, int chargeTypeIn, int colTypeIn, double m0In, double mWidthIn, double mMinIn, double mMaxIn, double tau0In)
            {
                addParticle_GAMBIT( idIn,  nameIn,  spinTypeIn,  chargeTypeIn,  colTypeIn,  m0In,  mWidthIn,  mMinIn,  mMaxIn,  tau0In);
            }

            virtual void addParticle_GAMBIT(int idIn, std::string nameIn, std::string antiNameIn, int spinTypeIn, int chargeTypeIn, int colTypeIn, double m0In, double mWidthIn, double mMinIn, double mMaxIn, double tau0In) {};
            void addParticle(int idIn, std::string nameIn, std::string antiNameIn, int spinTypeIn, int chargeTypeIn, int colTypeIn, double m0In, double mWidthIn, double mMinIn, double mMaxIn, double tau0In)
            {
                addParticle_GAMBIT( idIn,  nameIn,  antiNameIn,  spinTypeIn,  chargeTypeIn,  colTypeIn,  m0In,  mWidthIn,  mMinIn,  mMaxIn,  tau0In);
            }

            virtual void setAll_GAMBIT(int idIn, std::string nameIn, std::string antiNameIn, int spinTypeIn, int chargeTypeIn, int colTypeIn, double m0In, double mWidthIn, double mMinIn, double mMaxIn, double tau0In) {};
            void setAll(int idIn, std::string nameIn, std::string antiNameIn, int spinTypeIn, int chargeTypeIn, int colTypeIn, double m0In, double mWidthIn, double mMinIn, double mMaxIn, double tau0In)
            {
                setAll_GAMBIT( idIn,  nameIn,  antiNameIn,  spinTypeIn,  chargeTypeIn,  colTypeIn,  m0In,  mWidthIn,  mMinIn,  mMaxIn,  tau0In);
            }

            virtual bool* isParticle_GAMBIT(int idIn) {};
            bool* isParticle(int idIn)
            {
                return isParticle_GAMBIT( idIn);
            }

            virtual int* nextId_GAMBIT(int idIn) {};
            int* nextId(int idIn)
            {
                return nextId_GAMBIT( idIn);
            }

            virtual void name_GAMBIT(int idIn, std::string nameIn) {};
            void name(int idIn, std::string nameIn)
            {
                name_GAMBIT( idIn,  nameIn);
            }

            virtual void antiName_GAMBIT(int idIn, std::string antiNameIn) {};
            void antiName(int idIn, std::string antiNameIn)
            {
                antiName_GAMBIT( idIn,  antiNameIn);
            }

            virtual void names_GAMBIT(int idIn, std::string nameIn, std::string antiNameIn) {};
            void names(int idIn, std::string nameIn, std::string antiNameIn)
            {
                names_GAMBIT( idIn,  nameIn,  antiNameIn);
            }

            virtual void spinType_GAMBIT(int idIn, int spinTypeIn) {};
            void spinType(int idIn, int spinTypeIn)
            {
                spinType_GAMBIT( idIn,  spinTypeIn);
            }

            virtual void chargeType_GAMBIT(int idIn, int chargeTypeIn) {};
            void chargeType(int idIn, int chargeTypeIn)
            {
                chargeType_GAMBIT( idIn,  chargeTypeIn);
            }

            virtual void colType_GAMBIT(int idIn, int colTypeIn) {};
            void colType(int idIn, int colTypeIn)
            {
                colType_GAMBIT( idIn,  colTypeIn);
            }

            virtual void m0_GAMBIT(int idIn, double m0In) {};
            void m0(int idIn, double m0In)
            {
                m0_GAMBIT( idIn,  m0In);
            }

            virtual void mWidth_GAMBIT(int idIn, double mWidthIn) {};
            void mWidth(int idIn, double mWidthIn)
            {
                mWidth_GAMBIT( idIn,  mWidthIn);
            }

            virtual void mMin_GAMBIT(int idIn, double mMinIn) {};
            void mMin(int idIn, double mMinIn)
            {
                mMin_GAMBIT( idIn,  mMinIn);
            }

            virtual void mMax_GAMBIT(int idIn, double mMaxIn) {};
            void mMax(int idIn, double mMaxIn)
            {
                mMax_GAMBIT( idIn,  mMaxIn);
            }

            virtual void tau0_GAMBIT(int idIn, double tau0In) {};
            void tau0(int idIn, double tau0In)
            {
                tau0_GAMBIT( idIn,  tau0In);
            }

            virtual void isResonance_GAMBIT(int idIn, bool isResonanceIn) {};
            void isResonance(int idIn, bool isResonanceIn)
            {
                isResonance_GAMBIT( idIn,  isResonanceIn);
            }

            virtual void mayDecay_GAMBIT(int idIn, bool mayDecayIn) {};
            void mayDecay(int idIn, bool mayDecayIn)
            {
                mayDecay_GAMBIT( idIn,  mayDecayIn);
            }

            virtual void doExternalDecay_GAMBIT(int idIn, bool doExternalDecayIn) {};
            void doExternalDecay(int idIn, bool doExternalDecayIn)
            {
                doExternalDecay_GAMBIT( idIn,  doExternalDecayIn);
            }

            virtual void isVisible_GAMBIT(int idIn, bool isVisibleIn) {};
            void isVisible(int idIn, bool isVisibleIn)
            {
                isVisible_GAMBIT( idIn,  isVisibleIn);
            }

            virtual void doForceWidth_GAMBIT(int idIn, bool doForceWidthIn) {};
            void doForceWidth(int idIn, bool doForceWidthIn)
            {
                doForceWidth_GAMBIT( idIn,  doForceWidthIn);
            }

            virtual void hasChanged_GAMBIT(int idIn, bool hasChangedIn) {};
            void hasChanged(int idIn, bool hasChangedIn)
            {
                hasChanged_GAMBIT( idIn,  hasChangedIn);
            }

            virtual bool* hasAnti_GAMBIT(int idIn) {};
            bool* hasAnti(int idIn)
            {
                return hasAnti_GAMBIT( idIn);
            }

            virtual std::string* name_GAMBIT(int idIn) {};
            std::string* name(int idIn)
            {
                return name_GAMBIT( idIn);
            }

            virtual int* spinType_GAMBIT(int idIn) {};
            int* spinType(int idIn)
            {
                return spinType_GAMBIT( idIn);
            }

            virtual int* chargeType_GAMBIT(int idIn) {};
            int* chargeType(int idIn)
            {
                return chargeType_GAMBIT( idIn);
            }

            virtual double* charge_GAMBIT(int idIn) {};
            double* charge(int idIn)
            {
                return charge_GAMBIT( idIn);
            }

            virtual int* colType_GAMBIT(int idIn) {};
            int* colType(int idIn)
            {
                return colType_GAMBIT( idIn);
            }

            virtual double* m0_GAMBIT(int idIn) {};
            double* m0(int idIn)
            {
                return m0_GAMBIT( idIn);
            }

            virtual double* mWidth_GAMBIT(int idIn) {};
            double* mWidth(int idIn)
            {
                return mWidth_GAMBIT( idIn);
            }

            virtual double* mMin_GAMBIT(int idIn) {};
            double* mMin(int idIn)
            {
                return mMin_GAMBIT( idIn);
            }

            virtual double* m0Min_GAMBIT(int idIn) {};
            double* m0Min(int idIn)
            {
                return m0Min_GAMBIT( idIn);
            }

            virtual double* mMax_GAMBIT(int idIn) {};
            double* mMax(int idIn)
            {
                return mMax_GAMBIT( idIn);
            }

            virtual double* m0Max_GAMBIT(int idIn) {};
            double* m0Max(int idIn)
            {
                return m0Max_GAMBIT( idIn);
            }

            virtual double* tau0_GAMBIT(int idIn) {};
            double* tau0(int idIn)
            {
                return tau0_GAMBIT( idIn);
            }

            virtual bool* isResonance_GAMBIT(int idIn) {};
            bool* isResonance(int idIn)
            {
                return isResonance_GAMBIT( idIn);
            }

            virtual bool* mayDecay_GAMBIT(int idIn) {};
            bool* mayDecay(int idIn)
            {
                return mayDecay_GAMBIT( idIn);
            }

            virtual bool* doExternalDecay_GAMBIT(int idIn) {};
            bool* doExternalDecay(int idIn)
            {
                return doExternalDecay_GAMBIT( idIn);
            }

            virtual bool* isVisible_GAMBIT(int idIn) {};
            bool* isVisible(int idIn)
            {
                return isVisible_GAMBIT( idIn);
            }

            virtual bool* doForceWidth_GAMBIT(int idIn) {};
            bool* doForceWidth(int idIn)
            {
                return doForceWidth_GAMBIT( idIn);
            }

            virtual bool* hasChanged_GAMBIT(int idIn) {};
            bool* hasChanged(int idIn)
            {
                return hasChanged_GAMBIT( idIn);
            }

            virtual bool* useBreitWigner_GAMBIT(int idIn) {};
            bool* useBreitWigner(int idIn)
            {
                return useBreitWigner_GAMBIT( idIn);
            }

            virtual double* constituentMass_GAMBIT(int idIn) {};
            double* constituentMass(int idIn)
            {
                return constituentMass_GAMBIT( idIn);
            }

            virtual double* mSel_GAMBIT(int idIn) {};
            double* mSel(int idIn)
            {
                return mSel_GAMBIT( idIn);
            }

            virtual double* mRun_GAMBIT(int idIn, double mH) {};
            double* mRun(int idIn, double mH)
            {
                return mRun_GAMBIT( idIn,  mH);
            }

            virtual bool* canDecay_GAMBIT(int idIn) {};
            bool* canDecay(int idIn)
            {
                return canDecay_GAMBIT( idIn);
            }

            virtual bool* isLepton_GAMBIT(int idIn) {};
            bool* isLepton(int idIn)
            {
                return isLepton_GAMBIT( idIn);
            }

            virtual bool* isQuark_GAMBIT(int idIn) {};
            bool* isQuark(int idIn)
            {
                return isQuark_GAMBIT( idIn);
            }

            virtual bool* isGluon_GAMBIT(int idIn) {};
            bool* isGluon(int idIn)
            {
                return isGluon_GAMBIT( idIn);
            }

            virtual bool* isDiquark_GAMBIT(int idIn) {};
            bool* isDiquark(int idIn)
            {
                return isDiquark_GAMBIT( idIn);
            }

            virtual bool* isParton_GAMBIT(int idIn) {};
            bool* isParton(int idIn)
            {
                return isParton_GAMBIT( idIn);
            }

            virtual bool* isHadron_GAMBIT(int idIn) {};
            bool* isHadron(int idIn)
            {
                return isHadron_GAMBIT( idIn);
            }

            virtual bool* isMeson_GAMBIT(int idIn) {};
            bool* isMeson(int idIn)
            {
                return isMeson_GAMBIT( idIn);
            }

            virtual bool* isBaryon_GAMBIT(int idIn) {};
            bool* isBaryon(int idIn)
            {
                return isBaryon_GAMBIT( idIn);
            }

            virtual bool* isOctetHadron_GAMBIT(int idIn) {};
            bool* isOctetHadron(int idIn)
            {
                return isOctetHadron_GAMBIT( idIn);
            }

            virtual int* heaviestQuark_GAMBIT(int idIn) {};
            int* heaviestQuark(int idIn)
            {
                return heaviestQuark_GAMBIT( idIn);
            }

            virtual int* baryonNumberType_GAMBIT(int idIn) {};
            int* baryonNumberType(int idIn)
            {
                return baryonNumberType_GAMBIT( idIn);
            }

            virtual void rescaleBR_GAMBIT(int idIn, double newSumBR) {};
            void rescaleBR(int idIn, double newSumBR)
            {
                rescaleBR_GAMBIT( idIn,  newSumBR);
            }

            virtual void resInit_GAMBIT(int idIn) {};
            void resInit(int idIn)
            {
                resInit_GAMBIT( idIn);
            }

            virtual double* resWidth_GAMBIT(int idIn, double mHat, int idInFlav, bool openOnly, bool setBR) {};
            double* resWidth(int idIn, double mHat, int idInFlav, bool openOnly, bool setBR)
            {
                return resWidth_GAMBIT( idIn,  mHat,  idInFlav,  openOnly,  setBR);
            }

            virtual double* resWidthOpen_GAMBIT(int idIn, double mHat, int idInFlav) {};
            double* resWidthOpen(int idIn, double mHat, int idInFlav)
            {
                return resWidthOpen_GAMBIT( idIn,  mHat,  idInFlav);
            }

            virtual double* resWidthStore_GAMBIT(int idIn, double mHat, int idInFlav) {};
            double* resWidthStore(int idIn, double mHat, int idInFlav)
            {
                return resWidthStore_GAMBIT( idIn,  mHat,  idInFlav);
            }

            virtual double* resOpenFrac_GAMBIT(int id1In, int id2In, int id3In) {};
            double* resOpenFrac(int id1In, int id2In, int id3In)
            {
                return resOpenFrac_GAMBIT( id1In,  id2In,  id3In);
            }

            virtual double* resWidthRescaleFactor_GAMBIT(int idIn) {};
            double* resWidthRescaleFactor(int idIn)
            {
                return resWidthRescaleFactor_GAMBIT( idIn);
            }

            virtual double* resWidthChan_GAMBIT(int idIn, double mHat, int idAbs1, int idAbs2) {};
            double* resWidthChan(int idIn, double mHat, int idAbs1, int idAbs2)
            {
                return resWidthChan_GAMBIT( idIn,  mHat,  idAbs1,  idAbs2);
            }
        private:

            virtual void initCommon_GAMBIT() {};
            void initCommon()
            {
                initCommon_GAMBIT();
            }

            virtual std::string* toLower_GAMBIT(const std::string& nameConv) {};
            std::string* toLower(const std::string& nameConv)
            {
                return toLower_GAMBIT( nameConv);
            }

            virtual bool* boolString_GAMBIT(std::string tag) {};
            bool* boolString(std::string tag)
            {
                return boolString_GAMBIT( tag);
            }

            virtual std::string* attributeValue_GAMBIT(std::string line, std::string attribute) {};
            std::string* attributeValue(std::string line, std::string attribute)
            {
                return attributeValue_GAMBIT( line,  attribute);
            }

            virtual bool* boolAttributeValue_GAMBIT(std::string line, std::string attribute) {};
            bool* boolAttributeValue(std::string line, std::string attribute)
            {
                return boolAttributeValue_GAMBIT( line,  attribute);
            }

            virtual int* intAttributeValue_GAMBIT(std::string line, std::string attribute) {};
            int* intAttributeValue(std::string line, std::string attribute)
            {
                return intAttributeValue_GAMBIT( line,  attribute);
            }

            virtual double* doubleAttributeValue_GAMBIT(std::string line, std::string attribute) {};
            double* doubleAttributeValue(std::string line, std::string attribute)
            {
                return doubleAttributeValue_GAMBIT( line,  attribute);
            }

        public:
            ParticleData* downcast()
            {
                return reinterpret_cast<ParticleData*>(this);
            }
    };



    class Abstract__Particle
    {
        private:
        public:
            // UNKNOWN: OperatorMethod

            virtual void setEvtPtr_GAMBIT(Abstract__Event* evtPtrIn) {};
            void setEvtPtr(Abstract__Event* evtPtrIn)
            {
                setEvtPtr_GAMBIT( evtPtrIn);
            }

            virtual void id_GAMBIT(int idIn) {};
            void id(int idIn)
            {
                id_GAMBIT( idIn);
            }

            virtual void status_GAMBIT(int statusIn) {};
            void status(int statusIn)
            {
                status_GAMBIT( statusIn);
            }

            virtual void statusPos_GAMBIT() {};
            void statusPos()
            {
                statusPos_GAMBIT();
            }

            virtual void statusNeg_GAMBIT() {};
            void statusNeg()
            {
                statusNeg_GAMBIT();
            }

            virtual void statusCode_GAMBIT(int statusIn) {};
            void statusCode(int statusIn)
            {
                statusCode_GAMBIT( statusIn);
            }

            virtual void mother1_GAMBIT(int mother1In) {};
            void mother1(int mother1In)
            {
                mother1_GAMBIT( mother1In);
            }

            virtual void mother2_GAMBIT(int mother2In) {};
            void mother2(int mother2In)
            {
                mother2_GAMBIT( mother2In);
            }

            virtual void mothers_GAMBIT(int mother1In, int mother2In) {};
            void mothers(int mother1In, int mother2In)
            {
                mothers_GAMBIT( mother1In,  mother2In);
            }

            virtual void daughter1_GAMBIT(int daughter1In) {};
            void daughter1(int daughter1In)
            {
                daughter1_GAMBIT( daughter1In);
            }

            virtual void daughter2_GAMBIT(int daughter2In) {};
            void daughter2(int daughter2In)
            {
                daughter2_GAMBIT( daughter2In);
            }

            virtual void daughters_GAMBIT(int daughter1In, int daughter2In) {};
            void daughters(int daughter1In, int daughter2In)
            {
                daughters_GAMBIT( daughter1In,  daughter2In);
            }

            virtual void col_GAMBIT(int colIn) {};
            void col(int colIn)
            {
                col_GAMBIT( colIn);
            }

            virtual void acol_GAMBIT(int acolIn) {};
            void acol(int acolIn)
            {
                acol_GAMBIT( acolIn);
            }

            virtual void cols_GAMBIT(int colIn, int acolIn) {};
            void cols(int colIn, int acolIn)
            {
                cols_GAMBIT( colIn,  acolIn);
            }

            virtual void p_GAMBIT(Abstract__Vec4 pIn) {};
            void p(Abstract__Vec4 pIn)
            {
                p_GAMBIT( pIn);
            }

            virtual void p_GAMBIT(double pxIn, double pyIn, double pzIn, double eIn) {};
            void p(double pxIn, double pyIn, double pzIn, double eIn)
            {
                p_GAMBIT( pxIn,  pyIn,  pzIn,  eIn);
            }

            virtual void px_GAMBIT(double pxIn) {};
            void px(double pxIn)
            {
                px_GAMBIT( pxIn);
            }

            virtual void py_GAMBIT(double pyIn) {};
            void py(double pyIn)
            {
                py_GAMBIT( pyIn);
            }

            virtual void pz_GAMBIT(double pzIn) {};
            void pz(double pzIn)
            {
                pz_GAMBIT( pzIn);
            }

            virtual void e_GAMBIT(double eIn) {};
            void e(double eIn)
            {
                e_GAMBIT( eIn);
            }

            virtual void m_GAMBIT(double mIn) {};
            void m(double mIn)
            {
                m_GAMBIT( mIn);
            }

            virtual void scale_GAMBIT(double scaleIn) {};
            void scale(double scaleIn)
            {
                scale_GAMBIT( scaleIn);
            }

            virtual void pol_GAMBIT(double polIn) {};
            void pol(double polIn)
            {
                pol_GAMBIT( polIn);
            }

            virtual void vProd_GAMBIT(Abstract__Vec4 vProdIn) {};
            void vProd(Abstract__Vec4 vProdIn)
            {
                vProd_GAMBIT( vProdIn);
            }

            virtual void vProd_GAMBIT(double xProdIn, double yProdIn, double zProdIn, double tProdIn) {};
            void vProd(double xProdIn, double yProdIn, double zProdIn, double tProdIn)
            {
                vProd_GAMBIT( xProdIn,  yProdIn,  zProdIn,  tProdIn);
            }

            virtual void xProd_GAMBIT(double xProdIn) {};
            void xProd(double xProdIn)
            {
                xProd_GAMBIT( xProdIn);
            }

            virtual void yProd_GAMBIT(double yProdIn) {};
            void yProd(double yProdIn)
            {
                yProd_GAMBIT( yProdIn);
            }

            virtual void zProd_GAMBIT(double zProdIn) {};
            void zProd(double zProdIn)
            {
                zProd_GAMBIT( zProdIn);
            }

            virtual void tProd_GAMBIT(double tProdIn) {};
            void tProd(double tProdIn)
            {
                tProd_GAMBIT( tProdIn);
            }

            virtual void tau_GAMBIT(double tauIn) {};
            void tau(double tauIn)
            {
                tau_GAMBIT( tauIn);
            }

            virtual int* id_GAMBIT() {};
            int* id()
            {
                return id_GAMBIT();
            }

            virtual int* status_GAMBIT() {};
            int* status()
            {
                return status_GAMBIT();
            }

            virtual int* mother1_GAMBIT() {};
            int* mother1()
            {
                return mother1_GAMBIT();
            }

            virtual int* mother2_GAMBIT() {};
            int* mother2()
            {
                return mother2_GAMBIT();
            }

            virtual int* daughter1_GAMBIT() {};
            int* daughter1()
            {
                return daughter1_GAMBIT();
            }

            virtual int* daughter2_GAMBIT() {};
            int* daughter2()
            {
                return daughter2_GAMBIT();
            }

            virtual int* col_GAMBIT() {};
            int* col()
            {
                return col_GAMBIT();
            }

            virtual int* acol_GAMBIT() {};
            int* acol()
            {
                return acol_GAMBIT();
            }

            virtual Vec4* p_GAMBIT() {};
            Abstract__Vec4* p()
            {
                return reinterpret_cast<Abstract__Vec4*>(p_GAMBIT());
            }

            virtual double* px_GAMBIT() {};
            double* px()
            {
                return px_GAMBIT();
            }

            virtual double* py_GAMBIT() {};
            double* py()
            {
                return py_GAMBIT();
            }

            virtual double* pz_GAMBIT() {};
            double* pz()
            {
                return pz_GAMBIT();
            }

            virtual double* e_GAMBIT() {};
            double* e()
            {
                return e_GAMBIT();
            }

            virtual double* m_GAMBIT() {};
            double* m()
            {
                return m_GAMBIT();
            }

            virtual double* scale_GAMBIT() {};
            double* scale()
            {
                return scale_GAMBIT();
            }

            virtual double* pol_GAMBIT() {};
            double* pol()
            {
                return pol_GAMBIT();
            }

            virtual bool* hasVertex_GAMBIT() {};
            bool* hasVertex()
            {
                return hasVertex_GAMBIT();
            }

            virtual Vec4* vProd_GAMBIT() {};
            Abstract__Vec4* vProd()
            {
                return reinterpret_cast<Abstract__Vec4*>(vProd_GAMBIT());
            }

            virtual double* xProd_GAMBIT() {};
            double* xProd()
            {
                return xProd_GAMBIT();
            }

            virtual double* yProd_GAMBIT() {};
            double* yProd()
            {
                return yProd_GAMBIT();
            }

            virtual double* zProd_GAMBIT() {};
            double* zProd()
            {
                return zProd_GAMBIT();
            }

            virtual double* tProd_GAMBIT() {};
            double* tProd()
            {
                return tProd_GAMBIT();
            }

            virtual double* tau_GAMBIT() {};
            double* tau()
            {
                return tau_GAMBIT();
            }

            virtual int* idAbs_GAMBIT() {};
            int* idAbs()
            {
                return idAbs_GAMBIT();
            }

            virtual int* statusAbs_GAMBIT() {};
            int* statusAbs()
            {
                return statusAbs_GAMBIT();
            }

            virtual bool* isFinal_GAMBIT() {};
            bool* isFinal()
            {
                return isFinal_GAMBIT();
            }

            virtual bool* isRescatteredIncoming_GAMBIT() {};
            bool* isRescatteredIncoming()
            {
                return isRescatteredIncoming_GAMBIT();
            }

            virtual double* m2_GAMBIT() {};
            double* m2()
            {
                return m2_GAMBIT();
            }

            virtual double* mCalc_GAMBIT() {};
            double* mCalc()
            {
                return mCalc_GAMBIT();
            }

            virtual double* m2Calc_GAMBIT() {};
            double* m2Calc()
            {
                return m2Calc_GAMBIT();
            }

            virtual double* eCalc_GAMBIT() {};
            double* eCalc()
            {
                return eCalc_GAMBIT();
            }

            virtual double* pT_GAMBIT() {};
            double* pT()
            {
                return pT_GAMBIT();
            }

            virtual double* pT2_GAMBIT() {};
            double* pT2()
            {
                return pT2_GAMBIT();
            }

            virtual double* mT_GAMBIT() {};
            double* mT()
            {
                return mT_GAMBIT();
            }

            virtual double* mT2_GAMBIT() {};
            double* mT2()
            {
                return mT2_GAMBIT();
            }

            virtual double* pAbs_GAMBIT() {};
            double* pAbs()
            {
                return pAbs_GAMBIT();
            }

            virtual double* pAbs2_GAMBIT() {};
            double* pAbs2()
            {
                return pAbs2_GAMBIT();
            }

            virtual double* eT_GAMBIT() {};
            double* eT()
            {
                return eT_GAMBIT();
            }

            virtual double* eT2_GAMBIT() {};
            double* eT2()
            {
                return eT2_GAMBIT();
            }

            virtual double* theta_GAMBIT() {};
            double* theta()
            {
                return theta_GAMBIT();
            }

            virtual double* phi_GAMBIT() {};
            double* phi()
            {
                return phi_GAMBIT();
            }

            virtual double* thetaXZ_GAMBIT() {};
            double* thetaXZ()
            {
                return thetaXZ_GAMBIT();
            }

            virtual double* pPos_GAMBIT() {};
            double* pPos()
            {
                return pPos_GAMBIT();
            }

            virtual double* pNeg_GAMBIT() {};
            double* pNeg()
            {
                return pNeg_GAMBIT();
            }

            virtual double* y_GAMBIT() {};
            double* y()
            {
                return y_GAMBIT();
            }

            virtual double* eta_GAMBIT() {};
            double* eta()
            {
                return eta_GAMBIT();
            }

            virtual Vec4* vDec_GAMBIT() {};
            Abstract__Vec4* vDec()
            {
                return reinterpret_cast<Abstract__Vec4*>(vDec_GAMBIT());
            }

            virtual double* xDec_GAMBIT() {};
            double* xDec()
            {
                return xDec_GAMBIT();
            }

            virtual double* yDec_GAMBIT() {};
            double* yDec()
            {
                return yDec_GAMBIT();
            }

            virtual double* zDec_GAMBIT() {};
            double* zDec()
            {
                return zDec_GAMBIT();
            }

            virtual double* tDec_GAMBIT() {};
            double* tDec()
            {
                return tDec_GAMBIT();
            }

            virtual int* index_GAMBIT() {};
            int* index()
            {
                return index_GAMBIT();
            }

            virtual int* statusHepMC_GAMBIT() {};
            int* statusHepMC()
            {
                return statusHepMC_GAMBIT();
            }

            virtual int* iTopCopy_GAMBIT() {};
            int* iTopCopy()
            {
                return iTopCopy_GAMBIT();
            }

            virtual int* iBotCopy_GAMBIT() {};
            int* iBotCopy()
            {
                return iBotCopy_GAMBIT();
            }

            virtual int* iTopCopyId_GAMBIT() {};
            int* iTopCopyId()
            {
                return iTopCopyId_GAMBIT();
            }

            virtual int* iBotCopyId_GAMBIT() {};
            int* iBotCopyId()
            {
                return iBotCopyId_GAMBIT();
            }

            virtual bool* isAncestor_GAMBIT(int iAncestor) {};
            bool* isAncestor(int iAncestor)
            {
                return isAncestor_GAMBIT( iAncestor);
            }

            virtual bool* undoDecay_GAMBIT() {};
            bool* undoDecay()
            {
                return undoDecay_GAMBIT();
            }

            virtual std::string* name_GAMBIT() {};
            std::string* name()
            {
                return name_GAMBIT();
            }

            virtual std::string* nameWithStatus_GAMBIT(int maxLen) {};
            std::string* nameWithStatus(int maxLen)
            {
                return nameWithStatus_GAMBIT( maxLen);
            }

            virtual int* spinType_GAMBIT() {};
            int* spinType()
            {
                return spinType_GAMBIT();
            }

            virtual int* chargeType_GAMBIT() {};
            int* chargeType()
            {
                return chargeType_GAMBIT();
            }

            virtual double* charge_GAMBIT() {};
            double* charge()
            {
                return charge_GAMBIT();
            }

            virtual bool* isCharged_GAMBIT() {};
            bool* isCharged()
            {
                return isCharged_GAMBIT();
            }

            virtual bool* isNeutral_GAMBIT() {};
            bool* isNeutral()
            {
                return isNeutral_GAMBIT();
            }

            virtual int* colType_GAMBIT() {};
            int* colType()
            {
                return colType_GAMBIT();
            }

            virtual double* m0_GAMBIT() {};
            double* m0()
            {
                return m0_GAMBIT();
            }

            virtual double* mWidth_GAMBIT() {};
            double* mWidth()
            {
                return mWidth_GAMBIT();
            }

            virtual double* mMin_GAMBIT() {};
            double* mMin()
            {
                return mMin_GAMBIT();
            }

            virtual double* mMax_GAMBIT() {};
            double* mMax()
            {
                return mMax_GAMBIT();
            }

            virtual double* mSel_GAMBIT() {};
            double* mSel()
            {
                return mSel_GAMBIT();
            }

            virtual double* constituentMass_GAMBIT() {};
            double* constituentMass()
            {
                return constituentMass_GAMBIT();
            }

            virtual double* tau0_GAMBIT() {};
            double* tau0()
            {
                return tau0_GAMBIT();
            }

            virtual bool* mayDecay_GAMBIT() {};
            bool* mayDecay()
            {
                return mayDecay_GAMBIT();
            }

            virtual bool* canDecay_GAMBIT() {};
            bool* canDecay()
            {
                return canDecay_GAMBIT();
            }

            virtual bool* doExternalDecay_GAMBIT() {};
            bool* doExternalDecay()
            {
                return doExternalDecay_GAMBIT();
            }

            virtual bool* isResonance_GAMBIT() {};
            bool* isResonance()
            {
                return isResonance_GAMBIT();
            }

            virtual bool* isVisible_GAMBIT() {};
            bool* isVisible()
            {
                return isVisible_GAMBIT();
            }

            virtual bool* isLepton_GAMBIT() {};
            bool* isLepton()
            {
                return isLepton_GAMBIT();
            }

            virtual bool* isQuark_GAMBIT() {};
            bool* isQuark()
            {
                return isQuark_GAMBIT();
            }

            virtual bool* isGluon_GAMBIT() {};
            bool* isGluon()
            {
                return isGluon_GAMBIT();
            }

            virtual bool* isDiquark_GAMBIT() {};
            bool* isDiquark()
            {
                return isDiquark_GAMBIT();
            }

            virtual bool* isParton_GAMBIT() {};
            bool* isParton()
            {
                return isParton_GAMBIT();
            }

            virtual bool* isHadron_GAMBIT() {};
            bool* isHadron()
            {
                return isHadron_GAMBIT();
            }

            virtual void rescale3_GAMBIT(double fac) {};
            void rescale3(double fac)
            {
                rescale3_GAMBIT( fac);
            }

            virtual void rescale4_GAMBIT(double fac) {};
            void rescale4(double fac)
            {
                rescale4_GAMBIT( fac);
            }

            virtual void rescale5_GAMBIT(double fac) {};
            void rescale5(double fac)
            {
                rescale5_GAMBIT( fac);
            }

            virtual void rot_GAMBIT(double thetaIn, double phiIn) {};
            void rot(double thetaIn, double phiIn)
            {
                rot_GAMBIT( thetaIn,  phiIn);
            }

            virtual void bst_GAMBIT(double betaX, double betaY, double betaZ) {};
            void bst(double betaX, double betaY, double betaZ)
            {
                bst_GAMBIT( betaX,  betaY,  betaZ);
            }

            virtual void bst_GAMBIT(double betaX, double betaY, double betaZ, double gamma) {};
            void bst(double betaX, double betaY, double betaZ, double gamma)
            {
                bst_GAMBIT( betaX,  betaY,  betaZ,  gamma);
            }

            virtual void bst_GAMBIT(const Abstract__Vec4& pBst) {};
            void bst(const Abstract__Vec4& pBst)
            {
                bst_GAMBIT( pBst);
            }

            virtual void bst_GAMBIT(const Abstract__Vec4& pBst, double mBst) {};
            void bst(const Abstract__Vec4& pBst, double mBst)
            {
                bst_GAMBIT( pBst,  mBst);
            }

            virtual void bstback_GAMBIT(const Abstract__Vec4& pBst) {};
            void bstback(const Abstract__Vec4& pBst)
            {
                bstback_GAMBIT( pBst);
            }

            virtual void bstback_GAMBIT(const Abstract__Vec4& pBst, double mBst) {};
            void bstback(const Abstract__Vec4& pBst, double mBst)
            {
                bstback_GAMBIT( pBst,  mBst);
            }

            virtual void rotbst_GAMBIT(const Abstract__RotBstMatrix& M) {};
            void rotbst(const Abstract__RotBstMatrix& M)
            {
                rotbst_GAMBIT( M);
            }

            virtual void offsetHistory_GAMBIT(int minMother, int addMother, int minDaughter, int addDaughter) {};
            void offsetHistory(int minMother, int addMother, int minDaughter, int addDaughter)
            {
                offsetHistory_GAMBIT( minMother,  addMother,  minDaughter,  addDaughter);
            }

            virtual void offsetCol_GAMBIT(int addCol) {};
            void offsetCol(int addCol)
            {
                offsetCol_GAMBIT( addCol);
            }

        public:
            Particle* downcast()
            {
                return reinterpret_cast<Particle*>(this);
            }
    };



    class Abstract__Event
    {
        private:
        public:
            // UNKNOWN: OperatorMethod

            virtual void init_GAMBIT(std::string headerIn, Abstract__ParticleData* particleDataPtrIn, int startColTagIn) {};
            void init(std::string headerIn, Abstract__ParticleData* particleDataPtrIn, int startColTagIn)
            {
                init_GAMBIT( headerIn,  particleDataPtrIn,  startColTagIn);
            }

            virtual void clear_GAMBIT() {};
            void clear()
            {
                clear_GAMBIT();
            }

            virtual void reset_GAMBIT() {};
            void reset()
            {
                reset_GAMBIT();
            }
            // UNKNOWN: OperatorMethod
            // UNKNOWN: OperatorMethod

            virtual Particle*& front_GAMBIT() {};
            Abstract__Particle*& front()
            {
                return reinterpret_cast<Abstract__Particle*&>(front_GAMBIT());
            }

            virtual Particle*& at_GAMBIT(int i) {};
            Abstract__Particle*& at(int i)
            {
                return reinterpret_cast<Abstract__Particle*&>(at_GAMBIT( i));
            }

            virtual Particle*& back_GAMBIT() {};
            Abstract__Particle*& back()
            {
                return reinterpret_cast<Abstract__Particle*&>(back_GAMBIT());
            }

            virtual int* size_GAMBIT() {};
            int* size()
            {
                return size_GAMBIT();
            }

            virtual int* append_GAMBIT(Abstract__Particle entryIn) {};
            int* append(Abstract__Particle entryIn)
            {
                return append_GAMBIT( entryIn);
            }

            virtual int* append_GAMBIT(int id, int status, int mother1, int mother2, int daughter1, int daughter2, int col, int acol, double px, double py, double pz, double e, double m, double scaleIn, double polIn) {};
            int* append(int id, int status, int mother1, int mother2, int daughter1, int daughter2, int col, int acol, double px, double py, double pz, double e, double m, double scaleIn, double polIn)
            {
                return append_GAMBIT( id,  status,  mother1,  mother2,  daughter1,  daughter2,  col,  acol,  px,  py,  pz,  e,  m,  scaleIn,  polIn);
            }

            virtual int* append_GAMBIT(int id, int status, int mother1, int mother2, int daughter1, int daughter2, int col, int acol, Abstract__Vec4 p, double m, double scaleIn, double polIn) {};
            int* append(int id, int status, int mother1, int mother2, int daughter1, int daughter2, int col, int acol, Abstract__Vec4 p, double m, double scaleIn, double polIn)
            {
                return append_GAMBIT( id,  status,  mother1,  mother2,  daughter1,  daughter2,  col,  acol,  p,  m,  scaleIn,  polIn);
            }

            virtual int* append_GAMBIT(int id, int status, int col, int acol, double px, double py, double pz, double e, double m, double scaleIn, double polIn) {};
            int* append(int id, int status, int col, int acol, double px, double py, double pz, double e, double m, double scaleIn, double polIn)
            {
                return append_GAMBIT( id,  status,  col,  acol,  px,  py,  pz,  e,  m,  scaleIn,  polIn);
            }

            virtual int* append_GAMBIT(int id, int status, int col, int acol, Abstract__Vec4 p, double m, double scaleIn, double polIn) {};
            int* append(int id, int status, int col, int acol, Abstract__Vec4 p, double m, double scaleIn, double polIn)
            {
                return append_GAMBIT( id,  status,  col,  acol,  p,  m,  scaleIn,  polIn);
            }

            virtual void setEvtPtr_GAMBIT(int iSet) {};
            void setEvtPtr(int iSet)
            {
                setEvtPtr_GAMBIT( iSet);
            }

            virtual int* copy_GAMBIT(int iCopy, int newStatus) {};
            int* copy(int iCopy, int newStatus)
            {
                return copy_GAMBIT( iCopy,  newStatus);
            }

            virtual void list_GAMBIT() {};
            void list()
            {
                list_GAMBIT();
            }

            virtual void list_GAMBIT(std::ostream& os) {};
            void list(std::ostream& os)
            {
                list_GAMBIT( os);
            }

            virtual void list_GAMBIT(bool showScaleAndVertex, bool showMothersAndDaughters) {};
            void list(bool showScaleAndVertex, bool showMothersAndDaughters)
            {
                list_GAMBIT( showScaleAndVertex,  showMothersAndDaughters);
            }

            virtual void list_GAMBIT(bool showScaleAndVertex, bool showMothersAndDaughters, std::ostream& os) {};
            void list(bool showScaleAndVertex, bool showMothersAndDaughters, std::ostream& os)
            {
                list_GAMBIT( showScaleAndVertex,  showMothersAndDaughters,  os);
            }

            virtual void popBack_GAMBIT(int nRemove) {};
            void popBack(int nRemove)
            {
                popBack_GAMBIT( nRemove);
            }

            virtual void remove_GAMBIT(int iFirst, int iLast) {};
            void remove(int iFirst, int iLast)
            {
                remove_GAMBIT( iFirst,  iLast);
            }

            virtual bool* undoDecay_GAMBIT(int i) {};
            bool* undoDecay(int i)
            {
                return undoDecay_GAMBIT( i);
            }

            virtual void restorePtrs_GAMBIT() {};
            void restorePtrs()
            {
                restorePtrs_GAMBIT();
            }

            virtual void saveSize_GAMBIT() {};
            void saveSize()
            {
                saveSize_GAMBIT();
            }

            virtual void restoreSize_GAMBIT() {};
            void restoreSize()
            {
                restoreSize_GAMBIT();
            }

            virtual int* savedSizeValue_GAMBIT() {};
            int* savedSizeValue()
            {
                return savedSizeValue_GAMBIT();
            }

            virtual void initColTag_GAMBIT(int colTag) {};
            void initColTag(int colTag)
            {
                initColTag_GAMBIT( colTag);
            }

            virtual int* lastColTag_GAMBIT() {};
            int* lastColTag()
            {
                return lastColTag_GAMBIT();
            }

            virtual int* nextColTag_GAMBIT() {};
            int* nextColTag()
            {
                return nextColTag_GAMBIT();
            }

            virtual void scale_GAMBIT(double scaleIn) {};
            void scale(double scaleIn)
            {
                scale_GAMBIT( scaleIn);
            }

            virtual double* scale_GAMBIT() {};
            double* scale()
            {
                return scale_GAMBIT();
            }

            virtual void scaleSecond_GAMBIT(double scaleSecondIn) {};
            void scaleSecond(double scaleSecondIn)
            {
                scaleSecond_GAMBIT( scaleSecondIn);
            }

            virtual double* scaleSecond_GAMBIT() {};
            double* scaleSecond()
            {
                return scaleSecond_GAMBIT();
            }

            virtual int* statusHepMC_GAMBIT(int i) {};
            int* statusHepMC(int i)
            {
                return statusHepMC_GAMBIT( i);
            }

            virtual int* iTopCopy_GAMBIT(int i) {};
            int* iTopCopy(int i)
            {
                return iTopCopy_GAMBIT( i);
            }

            virtual int* iBotCopy_GAMBIT(int i) {};
            int* iBotCopy(int i)
            {
                return iBotCopy_GAMBIT( i);
            }

            virtual int* iTopCopyId_GAMBIT(int i) {};
            int* iTopCopyId(int i)
            {
                return iTopCopyId_GAMBIT( i);
            }

            virtual int* iBotCopyId_GAMBIT(int i) {};
            int* iBotCopyId(int i)
            {
                return iBotCopyId_GAMBIT( i);
            }

            virtual bool* isAncestor_GAMBIT(int i, int iAncestor) {};
            bool* isAncestor(int i, int iAncestor)
            {
                return isAncestor_GAMBIT( i,  iAncestor);
            }

            virtual void rot_GAMBIT(double theta, double phi) {};
            void rot(double theta, double phi)
            {
                rot_GAMBIT( theta,  phi);
            }

            virtual void bst_GAMBIT(double betaX, double betaY, double betaZ) {};
            void bst(double betaX, double betaY, double betaZ)
            {
                bst_GAMBIT( betaX,  betaY,  betaZ);
            }

            virtual void bst_GAMBIT(double betaX, double betaY, double betaZ, double gamma) {};
            void bst(double betaX, double betaY, double betaZ, double gamma)
            {
                bst_GAMBIT( betaX,  betaY,  betaZ,  gamma);
            }

            virtual void bst_GAMBIT(const Abstract__Vec4& vec) {};
            void bst(const Abstract__Vec4& vec)
            {
                bst_GAMBIT( vec);
            }

            virtual void rotbst_GAMBIT(const Abstract__RotBstMatrix& M) {};
            void rotbst(const Abstract__RotBstMatrix& M)
            {
                rotbst_GAMBIT( M);
            }

            virtual void clearJunctions_GAMBIT() {};
            void clearJunctions()
            {
                clearJunctions_GAMBIT();
            }

            virtual void appendJunction_GAMBIT(int kind, int col0, int col1, int col2) {};
            void appendJunction(int kind, int col0, int col1, int col2)
            {
                appendJunction_GAMBIT( kind,  col0,  col1,  col2);
            }

            virtual int* sizeJunction_GAMBIT() {};
            int* sizeJunction()
            {
                return sizeJunction_GAMBIT();
            }

            virtual bool* remainsJunction_GAMBIT(int i) {};
            bool* remainsJunction(int i)
            {
                return remainsJunction_GAMBIT( i);
            }

            virtual void remainsJunction_GAMBIT(int i, bool remainsIn) {};
            void remainsJunction(int i, bool remainsIn)
            {
                remainsJunction_GAMBIT( i,  remainsIn);
            }

            virtual int* kindJunction_GAMBIT(int i) {};
            int* kindJunction(int i)
            {
                return kindJunction_GAMBIT( i);
            }

            virtual int* colJunction_GAMBIT(int i, int j) {};
            int* colJunction(int i, int j)
            {
                return colJunction_GAMBIT( i,  j);
            }

            virtual void colJunction_GAMBIT(int i, int j, int colIn) {};
            void colJunction(int i, int j, int colIn)
            {
                colJunction_GAMBIT( i,  j,  colIn);
            }

            virtual int* endColJunction_GAMBIT(int i, int j) {};
            int* endColJunction(int i, int j)
            {
                return endColJunction_GAMBIT( i,  j);
            }

            virtual void endColJunction_GAMBIT(int i, int j, int endColIn) {};
            void endColJunction(int i, int j, int endColIn)
            {
                endColJunction_GAMBIT( i,  j,  endColIn);
            }

            virtual int* statusJunction_GAMBIT(int i, int j) {};
            int* statusJunction(int i, int j)
            {
                return statusJunction_GAMBIT( i,  j);
            }

            virtual void statusJunction_GAMBIT(int i, int j, int statusIn) {};
            void statusJunction(int i, int j, int statusIn)
            {
                statusJunction_GAMBIT( i,  j,  statusIn);
            }

            virtual void eraseJunction_GAMBIT(int i) {};
            void eraseJunction(int i)
            {
                eraseJunction_GAMBIT( i);
            }

            virtual void saveJunctionSize_GAMBIT() {};
            void saveJunctionSize()
            {
                saveJunctionSize_GAMBIT();
            }

            virtual void restoreJunctionSize_GAMBIT() {};
            void restoreJunctionSize()
            {
                restoreJunctionSize_GAMBIT();
            }

            virtual void listJunctions_GAMBIT(std::ostream& os) {};
            void listJunctions(std::ostream& os)
            {
                listJunctions_GAMBIT( os);
            }
            // UNKNOWN: OperatorMethod

        public:
            Event* downcast()
            {
                return reinterpret_cast<Event*>(this);
            }
    };



    class Abstract__Pythia
    {
        public:
        private:
        public:
            virtual ~Abstract__Pythia() {};

            virtual bool* readString_GAMBIT(std::string line, bool warn) {};
            bool* readString(std::string line, bool warn)
            {
                return readString_GAMBIT( line,  warn);
            }

            virtual bool* readFile_GAMBIT(std::string fileName, bool warn, int subrun) {};
            bool* readFile(std::string fileName, bool warn, int subrun)
            {
                return readFile_GAMBIT( fileName,  warn,  subrun);
            }

            virtual bool* readFile_GAMBIT(std::string fileName, int subrun) {};
            bool* readFile(std::string fileName, int subrun)
            {
                return readFile_GAMBIT( fileName,  subrun);
            }

            virtual bool* readFile_GAMBIT(std::istream& is, bool warn, int subrun) {};
            bool* readFile(std::istream& is, bool warn, int subrun)
            {
                return readFile_GAMBIT( is,  warn,  subrun);
            }

            virtual bool* readFile_GAMBIT(std::istream& is, int subrun) {};
            bool* readFile(std::istream& is, int subrun)
            {
                return readFile_GAMBIT( is,  subrun);
            }

            // virtual bool* init_GAMBIT() {};
            virtual bool* init_GAMBIT()  {};
            bool* init()
            {
                return init_GAMBIT();
            }

            virtual bool* init_GAMBIT(int idAin, int idBin, double eCMin) {};
            bool* init(int idAin, int idBin, double eCMin)
            {
                return init_GAMBIT( idAin,  idBin,  eCMin);
            }

            virtual bool* init_GAMBIT(int idAin, int idBin, double eAin, double eBin) {};
            bool* init(int idAin, int idBin, double eAin, double eBin)
            {
                return init_GAMBIT( idAin,  idBin,  eAin,  eBin);
            }

            virtual bool* init_GAMBIT(int idAin, int idBin, double pxAin, double pyAin, double pzAin, double pxBin, double pyBin, double pzBin) {};
            bool* init(int idAin, int idBin, double pxAin, double pyAin, double pzAin, double pxBin, double pyBin, double pzBin)
            {
                return init_GAMBIT( idAin,  idBin,  pxAin,  pyAin,  pzAin,  pxBin,  pyBin,  pzBin);
            }

            virtual bool* init_GAMBIT(std::string LesHouchesEventFile, bool skipInit) {};
            bool* init(std::string LesHouchesEventFile, bool skipInit)
            {
                return init_GAMBIT( LesHouchesEventFile,  skipInit);
            }

            virtual bool* next_GAMBIT() {};
            bool* next()
            {
                return next_GAMBIT();
            }

            virtual int* forceTimeShower_GAMBIT(int iBeg, int iEnd, double pTmax, int nBranchMax) {};
            int* forceTimeShower(int iBeg, int iEnd, double pTmax, int nBranchMax)
            {
                return forceTimeShower_GAMBIT( iBeg,  iEnd,  pTmax,  nBranchMax);
            }

            virtual bool* forceHadronLevel_GAMBIT(bool findJunctions) {};
            bool* forceHadronLevel(bool findJunctions)
            {
                return forceHadronLevel_GAMBIT( findJunctions);
            }

            virtual bool* moreDecays_GAMBIT() {};
            bool* moreDecays()
            {
                return moreDecays_GAMBIT();
            }

            virtual bool* forceRHadronDecays_GAMBIT() {};
            bool* forceRHadronDecays()
            {
                return forceRHadronDecays_GAMBIT();
            }

            virtual void LHAeventList_GAMBIT(std::ostream& os) {};
            void LHAeventList(std::ostream& os)
            {
                LHAeventList_GAMBIT( os);
            }

            virtual bool* LHAeventSkip_GAMBIT(int nSkip) {};
            bool* LHAeventSkip(int nSkip)
            {
                return LHAeventSkip_GAMBIT( nSkip);
            }

            virtual void stat_GAMBIT() {};
            void stat()
            {
                stat_GAMBIT();
            }

            virtual void statistics_GAMBIT(bool all, bool reset) {};
            void statistics(bool all, bool reset)
            {
                statistics_GAMBIT( all,  reset);
            }

            virtual bool* flag_GAMBIT(std::string key) {};
            bool* flag(std::string key)
            {
                return flag_GAMBIT( key);
            }

            virtual int* mode_GAMBIT(std::string key) {};
            int* mode(std::string key)
            {
                return mode_GAMBIT( key);
            }

            virtual double* parm_GAMBIT(std::string key) {};
            double* parm(std::string key)
            {
                return parm_GAMBIT( key);
            }

            virtual std::string* word_GAMBIT(std::string key) {};
            std::string* word(std::string key)
            {
                return word_GAMBIT( key);
            }
        private:
            // UNKNOWN: OperatorMethod

            virtual void banner_GAMBIT(std::ostream& os) {};
            void banner(std::ostream& os)
            {
                banner_GAMBIT( os);
            }

            virtual int* readSubrun_GAMBIT(std::string line, bool warn, std::ostream& os) {};
            int* readSubrun(std::string line, bool warn, std::ostream& os)
            {
                return readSubrun_GAMBIT( line,  warn,  os);
            }

            virtual int* readCommented_GAMBIT(std::string line) {};
            int* readCommented(std::string line)
            {
                return readCommented_GAMBIT( line);
            }

            virtual void checkSettings_GAMBIT() {};
            void checkSettings()
            {
                checkSettings_GAMBIT();
            }

            virtual bool* checkBeams_GAMBIT() {};
            bool* checkBeams()
            {
                return checkBeams_GAMBIT();
            }

            virtual bool* initKinematics_GAMBIT() {};
            bool* initKinematics()
            {
                return initKinematics_GAMBIT();
            }

            virtual bool* initPDFs_GAMBIT() {};
            bool* initPDFs()
            {
                return initPDFs_GAMBIT();
            }

            virtual void nextKinematics_GAMBIT() {};
            void nextKinematics()
            {
                nextKinematics_GAMBIT();
            }

            virtual void boostAndVertex_GAMBIT(bool toLab, bool setVertex) {};
            void boostAndVertex(bool toLab, bool setVertex)
            {
                boostAndVertex_GAMBIT( toLab,  setVertex);
            }

            virtual bool* doRHadronDecays_GAMBIT() {};
            bool* doRHadronDecays()
            {
                return doRHadronDecays_GAMBIT();
            }

            virtual bool* check_GAMBIT(std::ostream& os) {};
            bool* check(std::ostream& os)
            {
                return check_GAMBIT( os);
            }

            virtual bool* initSLHA_GAMBIT() {};
            bool* initSLHA()
            {
                return initSLHA_GAMBIT();
            }

        public:
            Pythia* downcast()
            {
                return reinterpret_cast<Pythia*>(this);
            }
    };

}

#endif /* defined __Pythia_types_hpp__ */
