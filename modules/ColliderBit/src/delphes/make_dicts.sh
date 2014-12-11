rootcint -f BTaggingWithTruthModule_dict.cc -c -I../../../contrib/Delphes-3.1.2 -I../../../contrib/Delphes-3.1.2/external ../../include/delphes/BTaggingWithTruthModule.h ../../include/delphes/BTaggingWithTruthModuleLinkDef.h 
rootcint -f AbsoluteIsolationModule_dict.cc -c -I../../../contrib/Delphes-3.1.2 -I../../../contrib/Delphes-3.1.2/external ../../include/delphes/AbsoluteIsolationModule.h ../../include/delphes/AbsoluteIsolationModuleLinkDef.h 
mv BTaggingWithTruthModule_dict.h ../../include/delphes/
mv AbsoluteIsolationModule_dict.h ../../include/delphes/
