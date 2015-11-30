GAMBIT vacuum stability calculator and interface to FlexibleSUSY spectrum generator for scalar singlet model.
James McKay
j.mckay14@imperial.ac.uk

The vacuum_stability functions can be run using

gambit_SpecBit_SSDM.yaml

and reading the comments within.


The new functions are contained within SpecBit_SSDM.cpp, these are:

Capability: SSDM_spectrum:

-get_SSDM_spectrum
returns a spectrum object through an interface with FlexibleSUSY, see the new header SSDMSpec.hpp
for details, this is a cut down and modified version of MSSMSpec.hpp.  This spectrum object is intended to have
the same available features as the existing SingletDM version which is just a simple container.

-check_perturb:
this sets the FlexibleSUSY high scale to either a user defined value in the yaml file,
the default (Planck scale), or to the scale of the high energy minimum determined
from find_min_lambda (see below).  Once this is set the spectrum generator (FlexibleSUSY) is
run again and checked for errors.  The return type is a bool with 1 for errors found or 0 for none.

Capability: vacuum_stability

-find_min_lambda: runs spectrum object to find the scale at which the Higgs quartic
coupling is a minimum, and returns a double pair containing the expected lifetime of
the universe before a decay to a high energy vacuum and the scale at which this high
energy minimum exists.

-default_scale: set this as the function to use in the rules section of the yaml file
if you want to run the spectrum up and check for errors without finding the high energy
minimum (so if you either want to choose a scale in the yaml options or let it go to the default scale).

Capability: expected_lifetime

-get_expected_lifetime: return just the expected lifetime from the double pair

Capability: VS_likelihood

-get_likelihood: returns the log likelihood of the vacuum not having decayed before the present time



Model definitions:

The FlexibleSUSY model I have used takes a lambda_hs and lambda_s parameter, as well as the running masses for
the Higgs and Singlet DM particles.  Therefore I have created to new models, SingletDM_running and Higgs_running,
which are parent models of SingletDM and SM_Higgs respectively.  You can choose to scan over either, and the
translation function will use the tree level relation to turn the input mass into a running mass, which will be
input at the Z mass scale.


Notes:

I haven't got the error management sorted properly in the case that the
spectrum isn't viable from the beginning, need to somehow tell GAMBIT the
point in invalid, and perhaps store the reason somewhere (such as a tachyon mass or something).
