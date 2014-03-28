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


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wreturn-type"


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


    // Typedefs for GAMBIT
    typedef _Particle Abstract__Particle;
    typedef _ParticleData Abstract__ParticleData;
    typedef _Vec4 Abstract__Vec4;
    typedef _RotBstMatrix Abstract__RotBstMatrix;
    typedef _Event Abstract__Event;
    typedef _Pythia Abstract__Pythia;


    class Abstract__Vec4
    {
        private:
        public:
            // UNKNOWN: OperatorMethod
            // UNKNOWN: OperatorMethod

            virtual void reset() {};

            virtual void p(double xIn, double yIn, double zIn, double tIn) {};

            virtual void p_GAMBIT(Abstract__Vec4 pIn) {};
            void p(Abstract__Vec4 pIn)
            {
                p_GAMBIT( pIn);
            }

            virtual void px(double xIn) {};

            virtual void py(double yIn) {};

            virtual void pz(double zIn) {};

            virtual void e(double tIn) {};

            virtual double px() {};

            virtual double py() {};

            virtual double pz() {};

            virtual double e() {};

            virtual double mCalc() {};

            virtual double m2Calc() {};

            virtual double pT() {};

            virtual double pT2() {};

            virtual double pAbs() {};

            virtual double pAbs2() {};

            virtual double eT() {};

            virtual double eT2() {};

            virtual double theta() {};

            virtual double phi() {};

            virtual double thetaXZ() {};

            virtual double pPos() {};

            virtual double pNeg() {};

            virtual double rap() {};

            virtual double eta() {};

            virtual void rescale3(double fac) {};

            virtual void rescale4(double fac) {};

            virtual void flip3() {};

            virtual void flip4() {};

            virtual void rot(double thetaIn, double phiIn) {};

            virtual void rotaxis(double phiIn, double nx, double ny, double nz) {};

            virtual void rotaxis_GAMBIT(double phiIn, const Abstract__Vec4& n) {};
            void rotaxis(double phiIn, const Abstract__Vec4& n)
            {
                rotaxis_GAMBIT( phiIn,  n);
            }

            virtual void bst(double betaX, double betaY, double betaZ) {};

            virtual void bst(double betaX, double betaY, double betaZ, double gamma) {};

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

            virtual void rot(double arg_1, double arg_2) {};

            virtual void rot_GAMBIT(const Abstract__Vec4& p) {};
            void rot(const Abstract__Vec4& p)
            {
                rot_GAMBIT( p);
            }

            virtual void bst(double arg_1, double arg_2, double arg_3) {};

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

            virtual void invert() {};

            virtual void reset() {};

            virtual double deviation() {};

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

            virtual bool init(std::string startFile) {};

            virtual bool reInit(std::string startFile, bool xmlFormat) {};

            virtual bool readXML(std::string inFile, bool reset) {};

            virtual void listXML(std::string outFile) {};

            virtual bool readFF(std::string inFile, bool reset) {};

            virtual void listFF(std::string outFile) {};

            virtual bool readString(std::string lineIn, bool warn, std::ostream& os) {};

            virtual bool readingFailed() {};

            virtual void listAll(std::ostream& os) {};

            virtual void listChanged(std::ostream& os) {};

            virtual void listChanged(bool changedRes, std::ostream& os) {};

            virtual void list(bool changedOnly, bool changedRes, std::ostream& os) {};

            virtual void list(int idList, std::ostream& os) {};

            virtual void list(std::vector<int, std::allocator<int> > idList, std::ostream& os) {};

            virtual void checkTable(std::ostream& os) {};

            virtual void checkTable(int verbosity, std::ostream& os) {};

            virtual void addParticle(int idIn, std::string nameIn, int spinTypeIn, int chargeTypeIn, int colTypeIn, double m0In, double mWidthIn, double mMinIn, double mMaxIn, double tau0In) {};

            virtual void addParticle(int idIn, std::string nameIn, std::string antiNameIn, int spinTypeIn, int chargeTypeIn, int colTypeIn, double m0In, double mWidthIn, double mMinIn, double mMaxIn, double tau0In) {};

            virtual void setAll(int idIn, std::string nameIn, std::string antiNameIn, int spinTypeIn, int chargeTypeIn, int colTypeIn, double m0In, double mWidthIn, double mMinIn, double mMaxIn, double tau0In) {};

            virtual bool isParticle(int idIn) {};

            virtual int nextId(int idIn) {};

            virtual void name(int idIn, std::string nameIn) {};

            virtual void antiName(int idIn, std::string antiNameIn) {};

            virtual void names(int idIn, std::string nameIn, std::string antiNameIn) {};

            virtual void spinType(int idIn, int spinTypeIn) {};

            virtual void chargeType(int idIn, int chargeTypeIn) {};

            virtual void colType(int idIn, int colTypeIn) {};

            virtual void m0(int idIn, double m0In) {};

            virtual void mWidth(int idIn, double mWidthIn) {};

            virtual void mMin(int idIn, double mMinIn) {};

            virtual void mMax(int idIn, double mMaxIn) {};

            virtual void tau0(int idIn, double tau0In) {};

            virtual void isResonance(int idIn, bool isResonanceIn) {};

            virtual void mayDecay(int idIn, bool mayDecayIn) {};

            virtual void doExternalDecay(int idIn, bool doExternalDecayIn) {};

            virtual void isVisible(int idIn, bool isVisibleIn) {};

            virtual void doForceWidth(int idIn, bool doForceWidthIn) {};

            virtual void hasChanged(int idIn, bool hasChangedIn) {};

            virtual bool hasAnti(int idIn) {};

            virtual std::string name(int idIn) {};

            virtual int spinType(int idIn) {};

            virtual int chargeType(int idIn) {};

            virtual double charge(int idIn) {};

            virtual int colType(int idIn) {};

            virtual double m0(int idIn) {};

            virtual double mWidth(int idIn) {};

            virtual double mMin(int idIn) {};

            virtual double m0Min(int idIn) {};

            virtual double mMax(int idIn) {};

            virtual double m0Max(int idIn) {};

            virtual double tau0(int idIn) {};

            virtual bool isResonance(int idIn) {};

            virtual bool mayDecay(int idIn) {};

            virtual bool doExternalDecay(int idIn) {};

            virtual bool isVisible(int idIn) {};

            virtual bool doForceWidth(int idIn) {};

            virtual bool hasChanged(int idIn) {};

            virtual bool useBreitWigner(int idIn) {};

            virtual double constituentMass(int idIn) {};

            virtual double mSel(int idIn) {};

            virtual double mRun(int idIn, double mH) {};

            virtual bool canDecay(int idIn) {};

            virtual bool isLepton(int idIn) {};

            virtual bool isQuark(int idIn) {};

            virtual bool isGluon(int idIn) {};

            virtual bool isDiquark(int idIn) {};

            virtual bool isParton(int idIn) {};

            virtual bool isHadron(int idIn) {};

            virtual bool isMeson(int idIn) {};

            virtual bool isBaryon(int idIn) {};

            virtual bool isOctetHadron(int idIn) {};

            virtual int heaviestQuark(int idIn) {};

            virtual int baryonNumberType(int idIn) {};

            virtual void rescaleBR(int idIn, double newSumBR) {};

            virtual void resInit(int idIn) {};

            virtual double resWidth(int idIn, double mHat, int idInFlav, bool openOnly, bool setBR) {};

            virtual double resWidthOpen(int idIn, double mHat, int idInFlav) {};

            virtual double resWidthStore(int idIn, double mHat, int idInFlav) {};

            virtual double resOpenFrac(int id1In, int id2In, int id3In) {};

            virtual double resWidthRescaleFactor(int idIn) {};

            virtual double resWidthChan(int idIn, double mHat, int idAbs1, int idAbs2) {};
        private:

            virtual void initCommon() {};

            virtual std::string toLower(const std::string& nameConv) {};

            virtual bool boolString(std::string tag) {};

            virtual std::string attributeValue(std::string line, std::string attribute) {};

            virtual bool boolAttributeValue(std::string line, std::string attribute) {};

            virtual int intAttributeValue(std::string line, std::string attribute) {};

            virtual double doubleAttributeValue(std::string line, std::string attribute) {};

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

            virtual void id(int idIn) {};

            virtual void status(int statusIn) {};

            virtual void statusPos() {};

            virtual void statusNeg() {};

            virtual void statusCode(int statusIn) {};

            virtual void mother1(int mother1In) {};

            virtual void mother2(int mother2In) {};

            virtual void mothers(int mother1In, int mother2In) {};

            virtual void daughter1(int daughter1In) {};

            virtual void daughter2(int daughter2In) {};

            virtual void daughters(int daughter1In, int daughter2In) {};

            virtual void col(int colIn) {};

            virtual void acol(int acolIn) {};

            virtual void cols(int colIn, int acolIn) {};

            virtual void p_GAMBIT(Abstract__Vec4 pIn) {};
            void p(Abstract__Vec4 pIn)
            {
                p_GAMBIT( pIn);
            }

            virtual void p(double pxIn, double pyIn, double pzIn, double eIn) {};

            virtual void px(double pxIn) {};

            virtual void py(double pyIn) {};

            virtual void pz(double pzIn) {};

            virtual void e(double eIn) {};

            virtual void m(double mIn) {};

            virtual void scale(double scaleIn) {};

            virtual void pol(double polIn) {};

            virtual void vProd_GAMBIT(Abstract__Vec4 vProdIn) {};
            void vProd(Abstract__Vec4 vProdIn)
            {
                vProd_GAMBIT( vProdIn);
            }

            virtual void vProd(double xProdIn, double yProdIn, double zProdIn, double tProdIn) {};

            virtual void xProd(double xProdIn) {};

            virtual void yProd(double yProdIn) {};

            virtual void zProd(double zProdIn) {};

            virtual void tProd(double tProdIn) {};

            virtual void tau(double tauIn) {};

            virtual int id() {};

            virtual int status() {};

            virtual int mother1() {};

            virtual int mother2() {};

            virtual int daughter1() {};

            virtual int daughter2() {};

            virtual int col() {};

            virtual int acol() {};

            virtual Vec4* p_GAMBIT() {};
            Abstract__Vec4* p()
            {
                return reinterpret_cast<Abstract__Vec4*>(p_GAMBIT());
            }

            virtual double px() {};

            virtual double py() {};

            virtual double pz() {};

            virtual double e() {};

            virtual double m() {};

            virtual double scale() {};

            virtual double pol() {};

            virtual bool hasVertex() {};

            virtual Vec4* vProd_GAMBIT() {};
            Abstract__Vec4* vProd()
            {
                return reinterpret_cast<Abstract__Vec4*>(vProd_GAMBIT());
            }

            virtual double xProd() {};

            virtual double yProd() {};

            virtual double zProd() {};

            virtual double tProd() {};

            virtual double tau() {};

            virtual int idAbs() {};

            virtual int statusAbs() {};

            virtual bool isFinal() {};

            virtual bool isRescatteredIncoming() {};

            virtual double m2() {};

            virtual double mCalc() {};

            virtual double m2Calc() {};

            virtual double eCalc() {};

            virtual double pT() {};

            virtual double pT2() {};

            virtual double mT() {};

            virtual double mT2() {};

            virtual double pAbs() {};

            virtual double pAbs2() {};

            virtual double eT() {};

            virtual double eT2() {};

            virtual double theta() {};

            virtual double phi() {};

            virtual double thetaXZ() {};

            virtual double pPos() {};

            virtual double pNeg() {};

            virtual double y() {};

            virtual double eta() {};

            virtual Vec4* vDec_GAMBIT() {};
            Abstract__Vec4* vDec()
            {
                return reinterpret_cast<Abstract__Vec4*>(vDec_GAMBIT());
            }

            virtual double xDec() {};

            virtual double yDec() {};

            virtual double zDec() {};

            virtual double tDec() {};

            virtual int index() {};

            virtual int statusHepMC() {};

            virtual int iTopCopy() {};

            virtual int iBotCopy() {};

            virtual int iTopCopyId() {};

            virtual int iBotCopyId() {};

            virtual bool isAncestor(int iAncestor) {};

            virtual bool undoDecay() {};

            virtual std::string name() {};

            virtual std::string nameWithStatus(int maxLen) {};

            virtual int spinType() {};

            virtual int chargeType() {};

            virtual double charge() {};

            virtual bool isCharged() {};

            virtual bool isNeutral() {};

            virtual int colType() {};

            virtual double m0() {};

            virtual double mWidth() {};

            virtual double mMin() {};

            virtual double mMax() {};

            virtual double mSel() {};

            virtual double constituentMass() {};

            virtual double tau0() {};

            virtual bool mayDecay() {};

            virtual bool canDecay() {};

            virtual bool doExternalDecay() {};

            virtual bool isResonance() {};

            virtual bool isVisible() {};

            virtual bool isLepton() {};

            virtual bool isQuark() {};

            virtual bool isGluon() {};

            virtual bool isDiquark() {};

            virtual bool isParton() {};

            virtual bool isHadron() {};

            virtual void rescale3(double fac) {};

            virtual void rescale4(double fac) {};

            virtual void rescale5(double fac) {};

            virtual void rot(double thetaIn, double phiIn) {};

            virtual void bst(double betaX, double betaY, double betaZ) {};

            virtual void bst(double betaX, double betaY, double betaZ, double gamma) {};

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

            virtual void offsetHistory(int minMother, int addMother, int minDaughter, int addDaughter) {};

            virtual void offsetCol(int addCol) {};

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

            virtual void clear() {};

            virtual void reset() {};
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

            virtual int size() {};

            virtual int* append_GAMBIT(Abstract__Particle entryIn) {};
            int* append(Abstract__Particle entryIn)
            {
                return append_GAMBIT( entryIn);
            }

            virtual int append(int id, int status, int mother1, int mother2, int daughter1, int daughter2, int col, int acol, double px, double py, double pz, double e, double m, double scaleIn, double polIn) {};

            virtual int* append_GAMBIT(int id, int status, int mother1, int mother2, int daughter1, int daughter2, int col, int acol, Abstract__Vec4 p, double m, double scaleIn, double polIn) {};
            int* append(int id, int status, int mother1, int mother2, int daughter1, int daughter2, int col, int acol, Abstract__Vec4 p, double m, double scaleIn, double polIn)
            {
                return append_GAMBIT( id,  status,  mother1,  mother2,  daughter1,  daughter2,  col,  acol,  p,  m,  scaleIn,  polIn);
            }

            virtual int append(int id, int status, int col, int acol, double px, double py, double pz, double e, double m, double scaleIn, double polIn) {};

            virtual int* append_GAMBIT(int id, int status, int col, int acol, Abstract__Vec4 p, double m, double scaleIn, double polIn) {};
            int* append(int id, int status, int col, int acol, Abstract__Vec4 p, double m, double scaleIn, double polIn)
            {
                return append_GAMBIT( id,  status,  col,  acol,  p,  m,  scaleIn,  polIn);
            }

            virtual void setEvtPtr(int iSet) {};

            virtual int copy(int iCopy, int newStatus) {};

            virtual void list() {};

            virtual void list(std::ostream& os) {};

            virtual void list(bool showScaleAndVertex, bool showMothersAndDaughters) {};

            virtual void list(bool showScaleAndVertex, bool showMothersAndDaughters, std::ostream& os) {};

            virtual void popBack(int nRemove) {};

            virtual void remove(int iFirst, int iLast) {};

            virtual bool undoDecay(int i) {};

            virtual void restorePtrs() {};

            virtual void saveSize() {};

            virtual void restoreSize() {};

            virtual int savedSizeValue() {};

            virtual void initColTag(int colTag) {};

            virtual int lastColTag() {};

            virtual int nextColTag() {};

            virtual void scale(double scaleIn) {};

            virtual double scale() {};

            virtual void scaleSecond(double scaleSecondIn) {};

            virtual double scaleSecond() {};

            virtual int statusHepMC(int i) {};

            virtual int iTopCopy(int i) {};

            virtual int iBotCopy(int i) {};

            virtual int iTopCopyId(int i) {};

            virtual int iBotCopyId(int i) {};

            virtual bool isAncestor(int i, int iAncestor) {};

            virtual void rot(double theta, double phi) {};

            virtual void bst(double betaX, double betaY, double betaZ) {};

            virtual void bst(double betaX, double betaY, double betaZ, double gamma) {};

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

            virtual void clearJunctions() {};

            virtual void appendJunction(int kind, int col0, int col1, int col2) {};

            virtual int sizeJunction() {};

            virtual bool remainsJunction(int i) {};

            virtual void remainsJunction(int i, bool remainsIn) {};

            virtual int kindJunction(int i) {};

            virtual int colJunction(int i, int j) {};

            virtual void colJunction(int i, int j, int colIn) {};

            virtual int endColJunction(int i, int j) {};

            virtual void endColJunction(int i, int j, int endColIn) {};

            virtual int statusJunction(int i, int j) {};

            virtual void statusJunction(int i, int j, int statusIn) {};

            virtual void eraseJunction(int i) {};

            virtual void saveJunctionSize() {};

            virtual void restoreJunctionSize() {};

            virtual void listJunctions(std::ostream& os) {};
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

            virtual bool readString(std::string line, bool warn) {};

            virtual bool readFile(std::string fileName, bool warn, int subrun) {};

            virtual bool readFile(std::string fileName, int subrun) {};

            virtual bool readFile(std::istream& is, bool warn, int subrun) {};

            virtual bool readFile(std::istream& is, int subrun) {};

            virtual bool init() {};

            virtual bool init(int idAin, int idBin, double eCMin) {};

            virtual bool init(int idAin, int idBin, double eAin, double eBin) {};

            virtual bool init(int idAin, int idBin, double pxAin, double pyAin, double pzAin, double pxBin, double pyBin, double pzBin) {};

            virtual bool init(std::string LesHouchesEventFile, bool skipInit) {};

            virtual bool next() {};

            virtual int forceTimeShower(int iBeg, int iEnd, double pTmax, int nBranchMax) {};

            virtual bool forceHadronLevel(bool findJunctions) {};

            virtual bool moreDecays() {};

            virtual bool forceRHadronDecays() {};

            virtual void LHAeventList(std::ostream& os) {};

            virtual bool LHAeventSkip(int nSkip) {};

            virtual void stat() {};

            virtual void statistics(bool all, bool reset) {};

            virtual bool flag(std::string key) {};

            virtual int mode(std::string key) {};

            virtual double parm(std::string key) {};

            virtual std::string word(std::string key) {};
        private:
            // UNKNOWN: OperatorMethod

            virtual void banner(std::ostream& os) {};

            virtual int readSubrun(std::string line, bool warn, std::ostream& os) {};

            virtual int readCommented(std::string line) {};

            virtual void checkSettings() {};

            virtual bool checkBeams() {};

            virtual bool initKinematics() {};

            virtual bool initPDFs() {};

            virtual void nextKinematics() {};

            virtual void boostAndVertex(bool toLab, bool setVertex) {};

            virtual bool doRHadronDecays() {};

            virtual bool check(std::ostream& os) {};

            virtual bool initSLHA() {};

        public:
            Pythia* downcast()
            {
                return reinterpret_cast<Pythia*>(this);
            }
    };

}

#pragma GCC diagnostic pop

#endif /* defined __Pythia_types_hpp__ */
