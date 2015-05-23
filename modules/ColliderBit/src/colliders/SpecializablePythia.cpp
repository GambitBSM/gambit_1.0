#include <stdexcept>
#include <sstream>
#include "gambit/ColliderBit/colliders/SpecializablePythia.hpp"
#include "gambit/ColliderBit/ColliderBit_macros.hpp"

namespace Gambit {
  namespace ColliderBit {

    /// @name Pythia specialization functions
    //@{
      /// @brief No specialization - pure external settings only.
      namespace Pythia_external {
        void init(SpecializablePythia* specializeMe) { }
      }

      /// @brief Specializes for SUSY @ 8TeV LHC
      namespace Pythia_SUSY_LHC_8TeV {
        void init(SpecializablePythia* specializeMe) {
          // Basic setup for a general SUSY LHC run
          specializeMe->addToSettings("Beams:eCM = 8000");
          specializeMe->addToSettings("Main:numberOfEvents = 1000");
          specializeMe->addToSettings("Main:timesAllowErrors = 1000");
          specializeMe->addToSettings("Print:quiet = on");
          specializeMe->addToSettings("Init:showProcesses = on");
          // Default to SUSY with all subprocesses
          specializeMe->addToSettings("SUSY:all = on");

          // Random seed setup
          specializeMe->addToSettings("Random:setSeed = on");
        }
      }

      /// @brief Specializes for SUSY @ 8TeV LHC - only gluino squark processes
      namespace Pythia_glusq_LHC_8TeV {
        void init(SpecializablePythia* specializeMe) {
          /// @note "Inherit" another specialization by calling it also.
          Pythia_SUSY_LHC_8TeV::init(specializeMe);

          specializeMe->addToSettings("SUSY:idA = 1000021");
          specializeMe->addToSettings("SUSY:idVecB = 1000001, 1000002, 1000003, 1000004, 2000001, 2000002, 2000003, 2000004");
        }
      }
    //@}

    /// @name SpecializablePythia definitions
    //@{
      void SpecializablePythia::init(const std::vector<std::string>& externalSettings) {
        // Settings acquired externally (ex from a gambit yaml file)
        for(const auto command : externalSettings) {
          _pythiaSettings.push_back(command);
        }

        // Specialized settings:
        _specialInit(this);

        // Use all settings to instantiate and initialize Pythia
        for(const auto command : _pythiaSettings)
          if(command.find(":") == (size_t) -1)
            _pythiaInstance = new Pythia8::Pythia(command, false);
          else
            _pythiaInstance->readString(command);

        if(!_pythiaInstance) throw InitializationError();
        _pythiaInstance->init();
      }

      void SpecializablePythia::initSLHAea(const SLHAea::Coll& slhaea) {
        _pythiaInstance->couplings.isSUSY = true;

        // Error and warning prefixes for this method
        const std::string errPref  = "Error in SLHAinterface::initSLHA: ";
        const std::string warnPref = "Warning in SLHAinterface::initSLHA: ";
        const std::string infoPref = "Info from SLHAinterface::initSLHA: ";

        //***
        // Model selection: for Pythia to set up extra particles or mixings.
        //***
        const auto& modsel = slhaea.at("modsel");
        const auto slhaeaEnd = slhaea.end();

        // NMSSM spectrum (modify existing Higgs names and add particles) 
        try {
          if ( SLHAea::to<int>(modsel.at("3").at(1)) >= 1) {
            // Modify Higgs names 
            _pythiaInstance->particleData.name(25,"H_1");
            _pythiaInstance->particleData.name(35,"H_2");
            _pythiaInstance->particleData.name(45,"H_3");
            _pythiaInstance->particleData.name(36,"A_1");
            _pythiaInstance->particleData.name(46,"A_2");
            _pythiaInstance->particleData.name(1000045,"~chi_50");
          }
        } catch (std::out_of_range& e) {}

        // SLHA2 spectrum with flavour mixing (modify squark and/or slepton names)
        try {
          const int modsel6 = SLHAea::to<int>(modsel.at("6").at(1));
          if (modsel6 >= 1 ) {
            // Squark flavour violation
            if ( (modsel6 == 1 || modsel6 >= 3)
                 && slhaea.find("usqmix") < slhaeaEnd
                 && slhaea.find("dsqmix") < slhaeaEnd ) {
              // Modify squark names
              _pythiaInstance->particleData.names(1000001,"~d1","~d1bar");
              _pythiaInstance->particleData.names(1000002,"~u1","~u1bar");
              _pythiaInstance->particleData.names(1000003,"~d2","~d2bar");
              _pythiaInstance->particleData.names(1000004,"~u2","~u2bar");
              _pythiaInstance->particleData.names(1000005,"~d3","~d3bar");
              _pythiaInstance->particleData.names(1000006,"~u3","~u3bar");
              _pythiaInstance->particleData.names(2000001,"~d4","~d4bar");
              _pythiaInstance->particleData.names(2000002,"~u4","~u4bar");
              _pythiaInstance->particleData.names(2000003,"~d5","~d5bar");
              _pythiaInstance->particleData.names(2000004,"~u5","~u5bar");
              _pythiaInstance->particleData.names(2000005,"~d6","~d6bar");
              _pythiaInstance->particleData.names(2000006,"~u6","~u6bar");
            }
            // Slepton flavour violation
            if ( (modsel6 == 2 || modsel6 >= 3)
                 && slhaea.find("selmix") < slhaeaEnd ) {
              // Modify slepton names
              _pythiaInstance->particleData.names(1000011,"~e1-","~e1+");
              _pythiaInstance->particleData.names(1000013,"~e2-","~e2+");
              _pythiaInstance->particleData.names(1000015,"~e3-","~e3+");
              _pythiaInstance->particleData.names(2000011,"~e4-","~e4+");
              _pythiaInstance->particleData.names(2000013,"~e5-","~e5+");
              _pythiaInstance->particleData.names(2000015,"~e6-","~e6+");
            }
            // Sneutrino flavour violation
            if ( (modsel6 == 2 || modsel6 >= 3)
                 && slhaea.find("snumix") < slhaeaEnd ) {
              // Modify sneutrino names
              _pythiaInstance->particleData.names(1000012,"~nu_1","~nu_1bar");
              _pythiaInstance->particleData.names(1000014,"~nu_2","~nu_2bar");
              _pythiaInstance->particleData.names(1000016,"~nu_3","~nu_3bar");
            }
            // Optionally allow for separate scalar and pseudoscalar sneutrinos
            if ( slhaea.find("snsmix") < slhaeaEnd
                 && slhaea.find("snamix") < slhaeaEnd ) {
              // Scalar sneutrinos
              _pythiaInstance->particleData.names(1000012,"~nu_S1","~nu_S1bar");
              _pythiaInstance->particleData.names(1000014,"~nu_S2","~nu_S2bar");
              _pythiaInstance->particleData.names(1000016,"~nu_S3","~nu_S3bar");
              // Add the pseudoscalar sneutrinos
              _pythiaInstance->particleData.addParticle(1000017, "~nu_A1", "~nu_A1bar",1, 0., 0);
              _pythiaInstance->particleData.addParticle(1000018, "~nu_A2", "~nu_A2bar",1, 0., 0);    
              _pythiaInstance->particleData.addParticle(1000019, "~nu_A3", "~nu_A3bar",1, 0., 0);    
            }
          }
        } catch (std::out_of_range& e) {}

        // SLHA2 spectrum with RPV
        try {
          if ( SLHAea::to<int>(modsel.at("4").at(1)) >= 1) {
            if ( slhaea.find("rvnmix") < slhaeaEnd ) {
              // Neutralinos -> neutrinos
              _pythiaInstance->particleData.names(12,"nu_1","nu_1bar");
              _pythiaInstance->particleData.names(14,"nu_2","nu_2bar");
              _pythiaInstance->particleData.names(16,"nu_3","nu_3bar");
              _pythiaInstance->particleData.names(1000022,"nu_4","nu_4bar");
              _pythiaInstance->particleData.names(1000023,"nu_5","nu_5bar");
              _pythiaInstance->particleData.names(1000025,"nu_6","nu_6bar");
              _pythiaInstance->particleData.names(1000035,"nu_7","nu_7bar");      
            }
            if ( slhaea.find("rvumix") < slhaeaEnd
                 && slhaea.find("rvvmix") < slhaeaEnd ) {
              // Charginos -> charged leptons (note sign convention)
              _pythiaInstance->particleData.names(11,"e_1-","e_1+");
              _pythiaInstance->particleData.names(13,"e_2-","e_2+");
              _pythiaInstance->particleData.names(15,"e_3-","e_3+");
              _pythiaInstance->particleData.names(1000024,"e_4+","e_4-");
              _pythiaInstance->particleData.names(1000037,"e_5+","e_5-");
            }
            if ( slhaea.find("rvhmix") < slhaeaEnd ) {
              // Sneutrinos -> higgses
              _pythiaInstance->particleData.name(25,"H_1");
              _pythiaInstance->particleData.name(35,"H_2");
              _pythiaInstance->particleData.name(1000012,"H_3");
              _pythiaInstance->particleData.name(1000014,"H_4");
              _pythiaInstance->particleData.name(1000016,"H_5");
            }
            if ( slhaea.find("rvamix") < slhaeaEnd ) {
              // Sneutrinos -> higgses
              _pythiaInstance->particleData.name(36,"A_1");
              _pythiaInstance->particleData.name(1000017,"A_2");
              _pythiaInstance->particleData.name(1000018,"A_3");
              _pythiaInstance->particleData.name(1000019,"A_4");
            }
            if ( slhaea.find("rvlmix") < slhaeaEnd ) {
              // sleptons -> charged higgses (note sign convention)
              _pythiaInstance->particleData.names(37,"H_1+","H_1-");
              _pythiaInstance->particleData.names(1000011,"H_2-","H_2+");
              _pythiaInstance->particleData.names(1000013,"H_3-","H_3+");
              _pythiaInstance->particleData.names(1000015,"H_4-","H_4+");
              _pythiaInstance->particleData.names(2000011,"H_5-","H_5+");
              _pythiaInstance->particleData.names(2000013,"H_6-","H_6+");
              _pythiaInstance->particleData.names(2000015,"H_7-","H_7+");
            }
          }
        } catch (std::out_of_range& e) {}

        // SLHA2 spectrum with CPV 
        try {
          if ( SLHAea::to<int>(modsel.at("5").at(1)) >= 1) {
            // no scalar/pseudoscalar distinction
            _pythiaInstance->particleData.name(25,"H_1");
            _pythiaInstance->particleData.name(35,"H_2");
            _pythiaInstance->particleData.name(36,"H_3");    
          }
        } catch (std::out_of_range& e) {}

        //***
        // Qnumbers: for Pythia to set up custom BSM particles.
        //***
        auto qnumBegin = slhaea.begin();
        auto qnumFound = SLHAea::Coll::find(qnumBegin, slhaeaEnd, "qnumbers");

        while (qnumFound != slhaeaEnd) {
          // Always use positive id codes
          int id = abs(SLHAea::to<int>(qnumFound->at(0).at(2)));
          std::ostringstream idCode;
          idCode << id;
          if (_pythiaInstance->particleData.isParticle(id)) {
            _pythiaInstance->info.errorMsg(warnPref + "ignoring QNUMBERS", "for id = "
                              + idCode.str() + " (already exists)", true);
          } else {
            int qEM3    = SLHAea::to<int>(qnumFound->at("1").at(1));
            int nSpins  = SLHAea::to<int>(qnumFound->at("2").at(1));
            int colRep  = SLHAea::to<int>(qnumFound->at("3").at(1));
            int hasAnti = SLHAea::to<int>(qnumFound->at("4").at(1));
            // Translate colRep to PYTHIA colType
            int colType = 0;
            if (colRep == 3) colType = 1;
            else if (colRep == -3) colType = -1;
            else if (colRep == 8) colType = 2;
            else if (colRep == 6) colType = 3;
            else if (colRep == -6) colType = -3;
            // Default name: PDG code
            /// @todo Put qnumbersName support back in
            std::string name, antiName;
            std::ostringstream idStream;
            idStream<<id;
            name     = idStream.str();
            antiName = "-"+name;
            if ( hasAnti == 0) {
              antiName = "";
              _pythiaInstance->particleData.addParticle(id, name, nSpins, qEM3, colType);
            } else {
              _pythiaInstance->particleData.addParticle(id, name, antiName, nSpins, qEM3,
                colType);
            }
          }
          // Get next qnumFound
          qnumBegin = ++qnumFound;
          qnumFound = SLHAea::Coll::find(qnumBegin, slhaeaEnd, "qnumbers");
        }

        //***
        // Import mass spectrum.
        //***
        bool keepSM = _pythiaInstance->settings.flag("SLHA:keepSM");
        double minMassSM = _pythiaInstance->settings.parm("SLHA:minMassSM");
        bool allowUserOverride = _pythiaInstance->settings.flag("SLHA:allowUserOverride");
        int verboseSLHA = _pythiaInstance->settings.mode("SLHA:verbose");
        int meMode = _pythiaInstance->settings.mode("SLHA:meMode");
        std::vector<int> idModified;

        // Loop over the mass block, "masses", to update particle data.
        const auto& masses = slhaea.at("mass");
        for (auto massEntry = masses.begin(); massEntry != masses.end(); massEntry++) {
          // Catch comment lines and BLOCK declaration lines
          if (!massEntry->is_data_line()) continue;

          int id = SLHAea::to<int>(massEntry->at(0));
          std::ostringstream idCode;
          idCode << id;
          double mass = abs(SLHAea::to<double>(massEntry->at(1)));

          // ignore masses for known sm particles or particles with
          // default masses < minmasssm; overwrite masses for rest.
          if (keepSM && (id < 25 || (id > 80 && id < 1000000))) ;
          else if (id < 1000000 && _pythiaInstance->particleData.m0(id) < minMassSM) {
            cout<<" id = "<<id<<" m0 = "<<_pythiaInstance->particleData.m0(id)<<" minMassSM = "
                <<minMassSM<<endl;
            _pythiaInstance->info.errorMsg(warnPref + "ignoring mass entry", "for id = "
                              + idCode.str() + " (m0 < slha:minMassSM)", true);
          }

          // also ignore slha mass values if user has already set
          // a different value and is allowed to override them.
          else if (allowUserOverride && _pythiaInstance->particleData.hasChanged(id)) {
            std::ostringstream mValue;
            mValue << _pythiaInstance->particleData.m0(id);
            _pythiaInstance->info.errorMsg(warnPref + "keeping user mass",
              "for id = " + idCode.str() + ", m0 = " + mValue.str(), true);
            idModified.push_back(id);
          }
          else {
            _pythiaInstance->particleData.m0(id,mass);
            idModified.push_back(id);
          }
        }

        //***
        // Update decay data.
        //***
        const std::vector<std::string> decayKey = {"decay", "(any)"};
        auto decayBegin = slhaea.begin();
        auto decayFound = SLHAea::Coll::find(decayBegin, slhaeaEnd, decayKey);

        while (decayFound != slhaeaEnd) {
          // Extract ID and create pointer to corresponding particle data object
          int idRes = SLHAea::to<int>(decayFound->at(0).at(1));
          std::ostringstream idCode;
          idCode << idRes;

          /// TODO: Anders says BOSS should be able to handle this.
          Pythia8::ParticleDataEntry* particlePtr
            = _pythiaInstance->particleData.particleDataEntryPtr(idRes);

          // Ignore decay channels for known SM particles or particles with
          // default masses < minMassSM; overwrite masses for rest.
          if (keepSM && (idRes < 25 || (idRes > 80 && idRes < 1000000))) continue;
          else if (idRes < 1000000 && _pythiaInstance->particleData.m0(idRes) < minMassSM
                   && !_pythiaInstance->particleData.hasChanged(idRes) ) {
            _pythiaInstance->info.errorMsg(warnPref + "ignoring DECAY table", "for id = "
                              + idCode.str() + " (m0 < SLHA:minMassSM)", true);
            continue;
          }

          // Verbose output. Let user know we are using these tables.
          if (verboseSLHA <= 1) 
            _pythiaInstance->info.errorMsg(infoPref + "importing SLHA decay table(s)","");
          else 
            _pythiaInstance->info.errorMsg(infoPref + "importing SLHA decay table","for id = "
                              +idCode.str(),true);

          // Extract and store total width (absolute value, neg -> switch off)
          double widRes = abs(SLHAea::to<double>(decayFound->at(0).at(2)));
          double pythiaMinWidth = _pythiaInstance->settings.parm("ResonanceWidths:minWidth");
          if (widRes > 0. && widRes < pythiaMinWidth) {
            _pythiaInstance->info.errorMsg(warnPref + "forcing width = 0 ","for id = "
              + idCode.str() + " (width < ResonanceWidths:minWidth)" , true);
            widRes = 0.0;
          }
          particlePtr->setMWidth(widRes);

          // Set lifetime in mm for displaced vertex calculations
          // (convert GeV^-1 to mm)
          if (widRes > 0.) {
            double decayLength = 1.97e-13/widRes;
            particlePtr->setTau0(decayLength);
          
            // Reset decay table of the particle. Allow decays, treat as resonance.
            if (decayFound->size() > 1) {
              particlePtr->clearChannels();
              _pythiaInstance->particleData.mayDecay(idRes,true);
              _pythiaInstance->particleData.isResonance(idRes,true);
            } else {
              _pythiaInstance->info.errorMsg(warnPref + "empty DECAY table ","for id = "
                + idCode.str() + " (total width provided but no branching"
                + " fractions)", true);
            }
          }
          // Reset to stable if width <= 0.0
          else {
            particlePtr->clearChannels();
            _pythiaInstance->particleData.mayDecay(idRes,false);
            _pythiaInstance->particleData.isResonance(idRes,false);
          }

          // Set initial minimum mass.
          double brWTsum   = 0.;
          double massWTsum = 0.;

          // Loop over SLHA channels, import into Pythia, treating channels
          // with negative branching fractions as having the equivalent positive
          // branching fraction, but being switched off for this run
          for (auto decayChannel = decayFound->begin(); decayChannel != decayFound->end();
               decayChannel++) {
            // Catch comment lines and DECAY declaration lines
            if (!decayChannel->is_data_line()) continue;

            // Get decay info into local variables
            double brat = SLHAea::to<double>(decayChannel->at(0));
            std::vector<int> idDa;
            for (SLHAea::Line::size_type i = 1; i < decayChannel->data_size(); i++)
              idDa.push_back(SLHAea::to<int>(decayChannel->at(i)));

            // Too many or too few decay products
            if (idDa.size() >= 9) {
              _pythiaInstance->info.errorMsg(errPref + "max number of DECAY products is 8");
            } else if (idDa.size() <= 1) {
              _pythiaInstance->info.errorMsg(errPref + "min number of DECAY products is 2");
            }
            else {
              int onMode = 1;
              if (brat < 0.0) onMode = 0;
              int meModeNow = meMode;

              // Check phase space, including margin ~ sqrt(sum(widths^2))
              double massSum(0.);
              double widSqSum = widRes * widRes;
              int nDa = idDa.size();
              for (int jDa=0; jDa<nDa; ++jDa) {
                massSum += _pythiaInstance->particleData.m0( idDa[jDa] );
                widSqSum += _pythiaInstance->particleData.mWidth( idDa[jDa] )
                          * _pythiaInstance->particleData.mWidth( idDa[jDa] );
              }
              double deltaM = _pythiaInstance->particleData.m0(idRes) - massSum;
              // Negative mass difference: intrinsically off shell
              if (onMode == 1 && brat > 0.0 && deltaM < 0.) {
                // String containing decay name
                std::ostringstream errCode;
                errCode << idRes <<" ->";
                for (int jDa=0; jDa<nDa; ++jDa) errCode<<" "<<idDa[jDa];
                // Could mass fluctuations at all give the needed deltaM ?
                if (abs(deltaM) > 100. * sqrt(widSqSum)) {
                  _pythiaInstance->info.errorMsg(warnPref + "switched off DECAY mode",
                    ": " + errCode.str()+" (too far off shell)",true);
                  onMode = 0;
                }
                // If ~ OK within fluctuations
                else {
                  // Ignore user-selected meMode
                  if (meModeNow != 100) {
                    _pythiaInstance->info.errorMsg(warnPref + "adding off shell DECAY mode",
                      ": "+errCode.str()+" (forced meMode = 100)",true);
                    meModeNow = 100;
                  } else {
                    _pythiaInstance->info.errorMsg(warnPref + "adding off shell DECAY mode",
                      errCode.str(), true);
                  }
                }
              }
              // Branching-ratio-weighted average mass in decay.
              brWTsum   += abs(brat);
              massWTsum += abs(brat) * massSum;

              // Add channel
              int id0 = idDa[0];
              int id1 = idDa[1];
              int id2 = (idDa.size() >= 3) ? idDa[2] : 0;
              int id3 = (idDa.size() >= 4) ? idDa[3] : 0;
              int id4 = (idDa.size() >= 5) ? idDa[4] : 0;
              int id5 = (idDa.size() >= 6) ? idDa[5] : 0;
              int id6 = (idDa.size() >= 7) ? idDa[6] : 0;
              int id7 = (idDa.size() >= 8) ? idDa[7] : 0;
              particlePtr->addChannel(onMode,abs(brat),meModeNow,
                                      id0,id1,id2,id3,id4,id5,id6,id7);

            }
          }

          // Set minimal mass, but always below nominal one.
          if (decayFound->data_size() > 0) {
            double massAvg = massWTsum / brWTsum;
            double massMin = (massAvg < particlePtr->m0()) ? massAvg : particlePtr->m0();
            particlePtr->setMMin(massMin);
          }
          
          // Add to list of particles that have been modified
          idModified.push_back(idRes);

        }

        //***
        // Sanity check of all decay tables with modified MASS or DECAY info
        //***
        for (int iMod = 0; iMod < int(idModified.size()); ++iMod) {
          int id = idModified[iMod];
          std::ostringstream idCode;
          idCode << id;
          Pythia8::ParticleDataEntry* particlePtr
            = _pythiaInstance->particleData.particleDataEntryPtr(id);
          double m0  = particlePtr->m0();
          double wid = particlePtr->mWidth();
          // Always set massless particles stable
          if (m0 <= 0.0 && (wid > 0.0 || particlePtr->mayDecay())) {
            _pythiaInstance->info.errorMsg(warnPref + "massless particle forced stable"," id = "
              + idCode.str(), true);
            particlePtr->clearChannels();
            particlePtr->setMWidth(0.0);
            particlePtr->setMayDecay(false);
            _pythiaInstance->particleData.isResonance(id,false);
            continue;
          }
          // Declare zero-width particles to be stable (for now)
          if (wid == 0.0 && particlePtr->mayDecay()) {
            particlePtr->setMayDecay(false);
            continue;
          }
          // Check at least one on-shell channel is available
          double mSumMin = 10. * m0;
          int nChannels = particlePtr->sizeChannels();
          if (nChannels >= 1) {
            for (int iChannel=0; iChannel<nChannels; ++iChannel) {
              Pythia8::DecayChannel channel = particlePtr->channel(iChannel);
              if (channel.onMode() <= 0) continue;
              int nProd = channel.multiplicity();
              double mSum = 0.;
              for (int iDa = 0; iDa < nProd; ++iDa) {
                int idDa   = channel.product(iDa);
                mSum += _pythiaInstance->particleData.m0(idDa);
              }
              mSumMin = (mSumMin < mSum) ? mSumMin : mSum;
            }
            // Require at least one on-shell channel
            if (mSumMin > m0) {
              _pythiaInstance->info.errorMsg(warnPref + "particle forced stable"," id = "
                        + idCode.str() + " (no on-shell decay channels)", true);
              particlePtr->setMWidth(0.0);
              particlePtr->setMayDecay(false);
              continue;
            }
            else {
            // mMin: lower cutoff on Breit-Wigner: default is mMin = m0 - 5*Gamma
            // (User is allowed to specify a lower value if desired.)
            // Increase minimum if needed to ensure at least one channel on shell
              double temp = (0.0 > m0 - 5.*wid) ? 0.0 : m0 - 5.*wid;
              double mMin = (particlePtr->mMin() < temp) ? particlePtr->mMin() : temp;
              mMin = (mSumMin > mMin) ? mSumMin : mMin;
              particlePtr->setMMin(mMin);
            }
          } 
        }

      }

      void SpecializablePythia::resetSpecialization(const std::string& specName) {
        clear();
        #define IF_X_SPECIALIZEX(X) if (specName == #X) { _specialInit = X::init; return; }
        IF_X_SPECIALIZEX(Pythia_external)
        IF_X_SPECIALIZEX(Pythia_SUSY_LHC_8TeV)
        IF_X_SPECIALIZEX(Pythia_glusq_LHC_8TeV)
        #undef IF_X_SPECIALIZEX
        // default to a Pythia instance configured entirely by external (yaml) settings:
        _specialInit = Pythia_external::init;
        std::cout<<"\n\n\n"
                 <<"COLLIDERBIT WARNING: Pythia named "<<specName<<" is not coded in SpecializablePythia."
                 <<"                     Now trying to configure Pythia entirely by yaml input..."
                 <<"\n\n\n";
      }
    //@}
  }
}
