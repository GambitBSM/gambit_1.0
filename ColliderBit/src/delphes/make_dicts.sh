#! /usr/bin/env bash

DDIR="../../../contrib/Delphes-3.1.2"
FLAGS="-I$DDIR -I$DDIR/external -I../../include/gambit/ColliderBit/delphes"

rootcint -f BTaggingWithTruthModule_dict.cc -c $FLAGS BTaggingWithTruthModule.h BTaggingWithTruthModuleLinkDef.h
mv BTaggingWithTruthModule_dict.h ../../include/gambit/ColliderBit/delphes/

rootcint -f AbsoluteIsolationModule_dict.cc -c $FLAGS AbsoluteIsolationModule.h AbsoluteIsolationModuleLinkDef.h
mv AbsoluteIsolationModule_dict.h ../../include/gambit/ColliderBit/delphes/
