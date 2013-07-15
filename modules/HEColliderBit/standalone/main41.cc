//// main41.cc is a part of the PYTHIA event generator.
// Copyright (C) 2013 Torbjorn Sjostrand.
// PYTHIA is licenced under the GNU GPL version 2, see COPYING for details.
// Please respect the MCnet Guidelines, see GUIDELINES for details.

// Author: Mikhail Kirsanov, Mikhail.Kirsanov@cern.ch, based on main01.cc.
// This program illustrates how HepMC can be interfaced to Pythia8.
// It studies the charged multiplicity distribution at the LHC.
// HepMC events are output to the hepmcout41.dat file.

// WARNING: typically one needs 25 MB/100 events at the LHC.
// Therefore large event samples may be impractical.

#include "Pythia.h"
#include "HepMCInterface.h"
#include "HepMC/GenEvent.h"
#include "HepMC/IO_GenEvent.h"

using namespace Pythia8; 

int main() {

  // Interface for conversion from Pythia8::Event to HepMC event. 
  HepMC::I_Pythia8 ToHepMC;

  // Specify file where HepMC events will be stored.
  HepMC::IO_GenEvent ascii_io("hepmcout41.dat", std::ios::out);

  // Generator. Process selection. LHC initialization. Histogram.
  Pythia pythiaInstance;
  // some examples of using readString
  pythiaInstance.readString("Beams:eCM = 8000.");
  pythiaInstance.readString("Main:numberOfEvents = 10000");
  pythiaInstance.readString("Main:timesAllowErrors = 1000");
  pythiaInstance.readString("Init:showProcesses = on");
  pythiaInstance.readString("Init:showMultipartonInteractions = off");
  pythiaInstance.readString("Init:showChangedSettings = on");
  pythiaInstance.readString("Init:showChangedParticleData = off");
  pythiaInstance.readString("Next:numberShowEvent = 2");
  pythiaInstance.readString("Next:numberShowInfo = 0");
  pythiaInstance.readString("Next:numberShowProcess = 0");
  pythiaInstance.readString("Random:setSeed = on");
  pythiaInstance.readString("Random:seed = 1");

  pythiaInstance.readString("PartonLevel:MPI = on");
  pythiaInstance.readString("PartonLevel:FSR = on");
  pythiaInstance.readString("HadronLevel:all = on");
  
  pythiaInstance.readString("SUSY:all = on");
  pythiaInstance.readString("SUSY:qqbar2chi0chi0 = off");
  pythiaInstance.readString("SUSY:qqbar2chi+-chi0 = off");
  pythiaInstance.readString("SUSY:qqbar2chi+chi- = off");
  pythiaInstance.readString("SLHA:file = sps1aWithDecays.spc");

  pythiaInstance.init();
  //pythiaInstance.info.list();

  cout << "Pythia seed is " << pythiaInstance.mode("Random:seed") << endl;

  // Begin event loop. Generate event. Skip if error.
  for (int iEvent = 0; iEvent < 10000; ++iEvent) {
    if (!pythiaInstance.next()) continue;

    // Find number of all final charged particles and fill histogram.
    //int nCharged = 0;
    //for (int i = 0; i < pythia.event.size(); ++i) 
    //if (pythia.event[i].isFinal() && pythia.event[i].isCharged()) 
    //  ++nCharged; 
    //mult.fill( nCharged );

    // Construct new empty HepMC event and fill it.
    // Units will be as chosen for HepMC build, but can be changed
    // by arguments, e.g. GenEvt( HepMC::Units::GEV, HepMC::Units::MM)  
    HepMC::GenEvent* hepmcevt = new HepMC::GenEvent();
    ToHepMC.fill_next_event( pythiaInstance, hepmcevt );

    // Write the HepMC event to file. Done with it.
    ascii_io << hepmcevt;
    delete hepmcevt;

  // End of event loop. Statistics. Histogram. 
  }
  pythiaInstance.stat();
  

  // Done.
  return 0;
}
