rootcint -f BTaggingWithTruthModule_dict.cc -c -I../../../contrib/Delphes-3.1.2 -I../../../contrib/Delphes-3.1.2/external ../../include/gambit/ColliderBit/delphes/BTaggingWithTruthModule.h ../../include/gambit/ColliderBit/delphes/BTaggingWithTruthModuleLinkDef.h 
rootcint -f AbsoluteIsolationModule_dict.cc -c -I../../../contrib/Delphes-3.1.2 -I../../../contrib/Delphes-3.1.2/external ../../include/gambit/ColliderBit/delphes/AbsoluteIsolationModule.h ../../include/gambit/ColliderBit/delphes/AbsoluteIsolationModuleLinkDef.h 
mv BTaggingWithTruthModule_dict.h ../../include/gambit/ColliderBit/delphes/
mv AbsoluteIsolationModule_dict.h ../../include/gambit/ColliderBit/delphes/
