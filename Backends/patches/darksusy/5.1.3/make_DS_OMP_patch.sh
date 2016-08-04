#!/usr/bin/env bash
diff -rupN darksusy-5.1.1_unpatched/include/ darksusy-5.1.1/include/ > patchDS_OMP_include.dif
diff -rupN darksusy-5.1.1_unpatched/src/ darksusy-5.1.1/src/ > patchDS_OMP_src.dif
