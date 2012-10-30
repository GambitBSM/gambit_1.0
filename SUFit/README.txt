
SUFIT package
-------------
A package for global fits and scans.

This is a package in early development and contains mostly class skeletons,
base classes and generic methods.

============================================================
To generate the documentation, run:
        make doxygen
  the documentation is then found in doc/html/index.html       

Requires 
   
   boost  - common C++ methods and classes:
       
       With rpm:
          usually called 'boost-devel'
          yum install boost-devel 
       With ubuntu:
          sudo apt-get install libboost-dev libboost-doc

       Mac OS: download existing binaries : http://www.boost.org/users/download/    
              http://sourceforge.net/projects/boost/files/boost-jam/

       it's also easy to compile and install and use even without root access:

	    download: http://sourceforge.net/projects/boost/files/boost/    ( example: boost_1_47_0.tar.gz )

	      tar -xzvf boost_1_47_0.tar.gz
	      cd boost_1_47_0
	      export BOOST=/my/boost/installdir
	      mkdir -p /my/boost/installdir

	    build instructions are here:   	      
		    http://www.boost.org/doc/libs/1_47_0/more/getting_started/unix-variants.html#easy-build-and-install
 
	      example:

	      ./bootstrap.sh --prefix=path/to/installation/prefix     
	      ./b2 install

   darksusy 
       www.physto.se/~edsjo/darksusy/

============================================================


Example compile, run:
        make  


Developers:
SUFIT group at OKC


Code revision log:
   Just run:
   svn log svn://cnlx03.physto.se/OKCFit | less


Brief code history:

*  First version, 2010-2011, coded by Joachim Ripken, with Seon-Hee Seo.

    Developed basic concepts and example classes: scanner, variables,
    etc. Implemented working example fortran calls to dark susy.

*  Second version, July 2011, coded by Johan Lundberg;

    Redesigned the object oriented framework and classes
    using input also from from Pat Scott, Joachim Ripken, Seon-Hee Seo.
    
    Added doxygen documentation
    there are still classes from the old version remaining un-merged.    
    All up-to-date classes live in the C++ namespace sufit::

*  Second version, continued Aug-September 2011, Johan Lundberg

    classes:

     * AssociatedHandler< ENGINE, T >
         Handler for type T from specific ENGINE
     * AtlasEventInfo
         Example data content class
     * AtlasExampleComparator
         Simple example of LLH calculator comparing two complicated objects
     * atlasExperimentEngine
         Holder of code providing atlas measured quantities
     * atlasTheoryEventEngine
         Holder of code calculating atlas theory quantities
     * BinnedData< T >
         Simple binned data (of any type. Suggest: double) in 1 dimension
     * ComparatorBase
         Interface for LLH calculator, aka Comparator
     * configuration_mark
         Configuration mark
     * DarkSusyEngine
         Dark Susy backend
     * exceptions::e_configuration
         Configuraton exception
     * exceptions::e_incalculable
         Incalculable exception
     * exceptions::e_limitation
         Unphysical exception
     * exceptions::e_unphysical
         Unphysical exception
     * EngineBase
         Engine base class
     * ExampleEngine
         Example Engine
     * GlobalResourceScopeLock
         Lock a global by name
     * Handler< T >
         Pure abstract variable holder
     * HandlerBase
         Pure virtual base for Handler
     * HandlerP< T >
         Handler pointer template
     * map_looper< T >::key_types< N >
         Key: mapped tuple type at index N
     * LLHSumComparator
         LLH Sum Class using other LLH objects as input
     * map_looper< T >
         Ease looping over map like object
     * map_looper< T >::mapped_types< N >
         Value: mapped tuple type at index N
     * ModelBase
         Virtual base class for model parameters
     * ModelParameters
         Model Parameters Base class example
     * ModelParameters_CMSSM5
         CMSSM5 parameter set. Defined names: m0 m1/2 A0 sgnmu tanb
     * ModelParameters_pMSSM7
         PMSSM7 parameter set. Defined names: mu m2 ma tanb mqtild at/m ab/m
     * ModelParametersBase
         Virtual base class for model parameters
     * mssmX
         Empty example model
     * NamedCache< C, O >
         Named cache template
     * NamedCache< C >
         Named cache template without options
     * NamedCacheInterface
         Interface definition for NamedCache<C,O>
     * RandomScanner
         Random Scanner
     * ScannerBase
         Scanner Base class example
     * simpleHandleToComparator
         Handle to LLH Converter
     * simplePoissonComparator< T >
         Poisson LLH calculator
     * sufit_core
         Core sutup
     * exceptions::sufit_exception_base
         Sufit exception base class
     * EngineBase::types< ENGINE, T >
         Templated typedef for method function pointers used by EngineBase
     * Uncopyable
         Class used to copy-protect classes 
