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

  class Pythia;
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

          virtual bool* init_GAMBIT() {};
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
