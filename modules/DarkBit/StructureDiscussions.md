DarkBit Structure discussions
=============================

## Annihilation and Decay Channels for Indirect Searches

To represent this information, we can use a hierarchy of the form

* DecayTableList
    * DecayTable
        * Channel
        * Channel
    * DecayTable
        * Channel
        * Channel
        * Channel

which contains all information about DM annihilation, the annihilation of
several DM particles, velocity dependence, cascade decays, etc.

The inner-most part of the setup is the decay/annihilation "Channel", which
contains the following information

* Channel
  * List of string identifiers for final state particles ("eL+, eL-, gamma, A,
    ...")

    In case of DM DM --> e+ e- gamma, this is obviously ["e+", "e-", "gamma"].
    This list includes all SM particles, but also - in general - all relevant
    additional particles that our BSM theory might contain.

    Questions:
        - Do we want to use integers instead for some reason?
        - Do we need to distinguish at this level between left- and
          right-handed particles?

    Comments:
        - Use PDG MC instead

  * Function for kinematic variables

    In case of two-body final states, this is trivial. In case of three-body,
    we would have f(E_1, E_2), normalized to one, etc.

    Questions:
        - Can we get that information directly and easily from DS, if needed?

  * Branching ratio
    
    The branching ratio into this channel.  In general, it can depend on the
    relative velocity of annihilating DM particles.

    Questions:
        - We had last time the discussion that it might sometimes be not easy
          to make a clear cut between VIB, FSR, etc.  I still think we do not
          get around talking about branching ratios.  What possible problems
          could arise here, and how would we have to extend the BR concept to
          account for them?
        - To take velocity dependent annihilation spectra into account, I
          expect it is enough to make the branching ratios velocity dependent
          (that everything splits into non-interfering contributions with
          different v^n dependence).  Where does this break down?  Would this
          be relevant for us?

    Comments:
        - Use (differential) partial cross-sections instead of BRs.
        - In some cases (p-wave), the v^0 and v^2 dependenent terms can be
          considered separately, but not in general (resonances/Sommerfeld).

    Question II:
        - What simplifications for the velocity dependence can we think of
          (general resonances of Breit-Wigner form, v^n dependence, etc)?
          Finding the a few relevant subsets of a general f(v) dependence would
          simplify subsequent calculations considerably.

  * Flags

    These flags might contain information about whether f(E_1, E_2) -- in case
    of e.g. VIB -- already includes FSR, or whether it has to be included when
    adding the e.g. "mu+" and "mu-" components.

    Questions:
        - What other flags can you think of?

    Comments:
        - DM = anti-DM
        - On-shell kinematics included

Different "channels" would be combined into a "DecayTable".  This decay table
describes all we need to know (in the DarkBit context) about the decay
properties of BSM particles, as well as the decay properties of the "DM DM"
initial state. They look like

* DecayTable
  * Particle type

    This can be either "DM DM", or any other BSM particle that might appear in
    cascade decays of DM annihilation products.

    Question:
        - Is there a good reason to treat "DM DM" and, say, some SUSY scalars,
          not on the same footing in the way I describe here?
        - If we have multiple dark matter particles, we can include "DM1 DM2"
          channels. Would this be general enough for all models you can think
          of?

    Comment:
        - "SM DM" should also be possible

  * Particle properties

    This includes spin, mass (or center-of-mass energy for DM DM), charge, (and
    lifetime, if it is not "DM DM").

    Question:
        - Do we need more information for some reason?

    Comments:
        - Lifetime should be included

  * List of Channels

    This is a list of "channels" in the above format.  Branching ratios should
    sum up to one.

    Question:
        - Again, what problems could arise here from the difficulties in
          separating VIB + FSR, or making a difference between on-shell and
          off-shell contributions from unstable particles etc.?  How to
          incorporate this in the given framework?

The last layer is the "DecayTableList".

* DecayTableList
  * Annihilation rate (velocity dependent) of "DM DM"
  
    In case of multiple DM particles, we could also give the rates for "DM1 DM2" etc.

  * List of DecayTable

    This list must contain obviously the decay table for "DM DM", but also for
    all BSM particles that can be potentially produced by "DM DM", and so on.


This DecayTableList would be the return type of some module function that
calculates the particle physics side of the DM annihilation process, and would
be the input type for some module function that calculates dNdE for different
astrophysical objects.  This calculation can be done by reading precomputed
tables from DarkSUSY and boosting them appropriately, or by calling Pythia or
Herwig directly to do a MC for each and every point (which naively should be
still much less time-consuming than a collider MC).

More Questions:
    - Can you think of a natural way to extend this framework to also be
      applicable to annihilation during freeze-out?
    - How does this framework compare to what happens inside DarkSUSY (Torsten,
      Joakim?) or MicrOmegas (Jonathan?).  Is it general enough to accommodate
      all the complexity of these backends?
    - Could you think of a more compact way of parametrizing all the required
      information?

Comments:
    - No chance for freeze-out
    - Too close to DS


## Halo Catalog

another thing is the "Halo Catalog" that I mentioned last meeting, that should
be defined generally enough to carry all information about dark matter halos
that might be relevant for calculating annihilation signals (and also the
impact on CMB, 21cm, radio, etc).

Again, this will be a hierarchical structure:

* Halo
    * Mean density <rho> of halo as 3-dim function
    * Mean square density <rho^2> of halo as 3-dim function
    * Mean velocity <v> of DM halo particles as 3-dim function
    * Mean square velocity <v^2> of DM halo particles as 3-dim function
    * Position of the halo relative to host halo, or for isolated objects relative to Milky Way
    * Name of Halo
    * Symmetry properties
    * List of subhalos (again of type halo)

This should be general enough to describe any prompt annihilation signal.

Questions:
    - Would we need to extend this setup by some function f(v) to accommodate
      all effects that might arise from velocity-dependent cross-sections, or
      would we be happy with just <v> and <v^2>?
    - If we want to include ICS signals, we have to discuss diffusion
      properties of electrons + positrons.  Every halo could carry around some
      information about diffusion properties.  Would it be useful to think
      about this at the current point?

Comments:
    - Need general f(x, v) dependence to accomodate all effects
    - Need smoothing scale
    - Need to put unresolved substructure somewhere
    - Need propagation parameters

At the very top level, we would then have a 

* Halo Catalog
    * List of all main halos (of type Halo, which might have subhalos,
      subsubhalos)


This all could be build together in what one might call a J-value layer
structure:

* Jlayers
    * List of hierarchical Healpix maps (see previous mail) at different redshifts z,
      together with redshift information

        These healpix maps carry the results from a los integral through
        different objects (a J-value map) at the corresponding redshift, and
        work like shells at redshift z.  Many of these maps can be used to
        describe all relevant objects in the sky.  When summing the DM signal
        one can take into account absorption effects and the redshift easily.

    * Jex(z)
    
        There is an approximately isotropic extragalactic contribution which
        just depends on the redshift z.  Instead of using a large number of
        essentially isotropic hierarchical healpix maps at different redshift to
        account for this component, we have an additional function Jex(z) that
        takes this into account.


It will be straightforward to generate a Jlayers object from the Halo Catalog,
and then - given a certain DM model - a full signal sky map from this Jlayer.
The signal sky map might also contain non-deterministic information about the
auto-correlation from blazars etc., which can be used as additional information
in the fit to gamma-ray data.  This full signal sky map would again have the
format of a hierarchical healpix map (plus some Cls for the auto-correlation).

Questions:
    - Can you think of cases where the above setup breaks down?
    - Does anybody have experience with the Clumpy code for los integration?  I
      would be interested to hear how they do, but haven't checked it yet.

Comments:
    - IBL absorption should be included


## Dark Matter Profiles

I implemented a simple generic 3D function as abstract base class that is
supposed to describe DM distributions within the DarkBit framework (at the very
end of DarkBittypes.hpp).  Last September, we had some email discussion about
what would be the right format for that, in particular in context of what can
be communicated to your propagation code backend.

The DM profiles will be instantiated as daughter classes of the abstract 3D
function base class.  The profiles might be implemented analytically, or use
some tables, or something else.  This instantiation will either happen during
the module-level initialization function (which is now existing), or somewhere
subsequently in one of the module functions of DarkBit.  A pointer to this
instance (with the type of the abstract 3D function base class) will then be
stored in the Halo Catalog.

Within gambit, we can just use these generic 3D functions for all purposes, and
it is no problem to set functions up with the correct parameters (rhos, rs,
whatever).  Your question was how to get this information into some backend
that takes a pointer to a function with signature double rho(double r).  If we
want to avoid the use of global variables (as discussed in September), one can
follow a "C-style" approach as discussed in

    http://stackoverflow.com/questions/282372/demote-boostfunction-to-a-plain-function-pointer

and explicitly used in GSL (e.g. integration routines).

--> Take instead of some function with signature double rho(double r) a
function with signature double rho(double r, void data), that has an
additional void pointer.  Your propagation routines would then require a
pointer to such a function, as well as a void pointer to data.  Within DarkBit,
we would define a plain function of signature

    double rho(double r, void* data)

which casts the data void pointer into the pointer on a 3D function abstract
base class, dereferences it, obtains the density from this function, and
returns it to your code.  This void pointer construction should be thread safe.

I guess that you are not working on backending propagation codes right now, but
this will become important at some point again when we backend Dragon, Galprop
or your own codes.  I am curious to know whether you think this is a workable
approach.

Comments:
    - void-pointer is typical trick in many codes that we have to backend
    - We need to extend the above function to 6D, to account for all kinds of
      DM phase space distributions.  Smart implementations of the abstract 6D
      base class could carry around all kind of approximations.


## Nested Healpix

In case you are not familiar with healpix, have a look at

    http://healpix.jpl.nasa.gov/

Basically, the 4pi sphere is first split up in 12 equal sized pixels, which are
then further subdivided into 4^n more pixels each.  For arcmin resolution, you
would e.g. take n=10.

Using the healpix format as GAMBIT standard for pixelizing the sky has the
advantage that it is simple to use (pixels have all the same size, can be
easily integrated, convolved, etc), and a large number of software packages can
handle this format, so it is also the natural choice for us.  

However, in many practical applications, we need only certain parts of the sky
well resolved (like the position around dwarf spheroidals, the Galactic center,
etc), while others do not matter.  So what would be handy is an extension of
healpix that allows a variable resolution in different regions of the sky.

I would not be surprised if somebody already wrote such an extension, but I am
not aware of any.  

Question:
    - Is there anything anywhere in this direction already?

A default healpix map is fully specified by two numbers, the above value of
"n", and an array with 124^n values.  The indexing of the pixels can be done
in a "nested" way.  In that case the index of pixels follows healpix' natural
structure of pixels, subpixels, subsubpixels, etc.  Larger sets of pixels can
be moved around the sky by simply adding some offset to the index. See Fig. 3
in http://healpix.jpl.nasa.gov/html/intronode4.htm for reference.

It is straightforward to define a hierarchical healpix map as a tree of
objects.  Everything starts with a healpix map with n=0, and of type patch.
This is defined as

struct patch
{
    double data[l];  // The data of each pixel (in case pixels are further resolved subsequently, this stores the average value)
    int next_n[l];  // zero if this is already the deepest resolution, otherwise the n of next submap
    patch* next_patch[l];  // pointer to patch that further resolves that pixel
}    

here l=12 for the upper-most patch, and l=4^(thisn - previousn) for all patches
deeper down the hierarchy (thisn and previousn can be inferred from nextn).

This kind of structures will be simple to create, sum, multiply, integrate
etc., and I can think of a few ways to save memory when storing these maps.
Also, the access time should not be too terrible.

As interface, I have in mind the usual healpix access functions that transform
sky coordinates into pixel indices and vice-versa

    int ang2pix(l, b, max_n)
    double, double pix2ang(i, max_n)

as well as some
    
    double sr(i, max_n)

which returns the pixel size.  max means here the maximal resolution we are
interested in.  The return type of ang2pix will be some pointer to the position
of the double that carries the value of that pixel, or some corresponding array
index (assuming that we somehow separate "data" and "nextn"+"nextpatch" in
different parts of memory).

Access interface:

ConstructMap(ResList)

which takes a resolution list of the form

    ResList = std::list<Res>

    struct Res
    {
    int N;  // resolution
    bool (f*)(double l, double b);  // Mask for ROI that has resolution N
    }

If ROIs are overlapping, always the higher resolution is selected.  For each
point in the scan you can construct a map anew if you want, with dynamically
selected hi-res patches.

