rootcint -f BTaggingWithTruthModule_dict.cc -c -I../../../contrib/Delphes-3.1.2 -I../../../contrib/Delphes-3.1.2/external -I../../include/gambit/ColliderBit/delphes BTaggingWithTruthModule.h BTaggingWithTruthModuleLinkDef.h 
rootcint -f AbsoluteIsolationModule_dict.cc -c -I../../../contrib/Delphes-3.1.2 -I../../../contrib/Delphes-3.1.2/external -I../../include/gambit/ColliderBit/delphes AbsoluteIsolationModule.h AbsoluteIsolationModuleLinkDef.h 
mv BTaggingWithTruthModule_dict.h ../../include/gambit/ColliderBit/delphes/
mv AbsoluteIsolationModule_dict.h ../../include/gambit/ColliderBit/delphes/
