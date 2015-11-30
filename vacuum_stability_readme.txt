{\rtf1\ansi\ansicpg1252\cocoartf1348\cocoasubrtf170
{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
\paperw11900\paperh16840\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural

\f0\fs24 \cf0 GAMBIT vacuum stability calculator and interface to FlexibleSUSY spectrum generator for scalar singlet model.\
\
The new functions are contained within SpecBit_SSDM.cpp, these are:\
\
\
Capability: SSDM_spectrum:\
\
-get_SSDM_spectrum \'97 returns a spectrum object by interfacing to FlexibleSUSY, see the new header SSDMSpec.hpp for details, this is a cut down and modified version of MSSMSpec.hpp.  This spectrum object is intended to have the same available features as the existing SingletDM version which is just a simple container.\
\
-check_perturb:\
this sets the FlexibleSUSY high scale to either a user defined value in the yaml file, the default (Planck scale), or to the scale of the high energy minimum determined from VS_age (see below).  Once this is set the spectrum generator (FlexibleSUSY) is run again and checked for errors.  The return type is a bool with 1 for errors found or 0 for none.\
\
Capability: vacuum_stability\
\
-find_min_lambda: runs spectrum object to find the scale at which the Higgs quartic coupling is a minimum, and returns a double pair containing the expected lifetime of the universe before a decay to a high energy vacuum and the scale at which this high energy minimum exists.\
\
-default_scale: set this as the function to use in the rules section of the yaml file if you want to run the spectrum up and check for errors without finding the high energy minimum (so if you either want to choose a scale in the yaml options or let it go to the default scale).\
\
Capability: expected_lifetime\
\
-get_expected_lifetime: return just the expected lifetime from the double pair\
\
Capability: VS_likelihood\
-get_likelihood: returns the log likelihood of the vacuum not having decayed before the present time\
\
\
I haven\'92t got the error management sorted properly in the case that the spectrum isn\'92t viable from the beginning, need to somehow tell GAMBIT the point in invalid, and perhaps store the reason somewhere (such as tachyon mass or something).\
\
\
}