# Package information
PKGNAME            := FlexibleSUSY
FLEXIBLESUSY_VERSION := 1.0.4
FLEXIBLESUSY_MAJOR := 1
FLEXIBLESUSY_MINOR := 0
FLEXIBLESUSY_PATCH := 4
FLEXIBLESUSY_EXTRA := 
FLEXIBLESUSY_PKG   := $(PKGNAME)-$(FLEXIBLESUSY_VERSION)
FLEXIBLESUSY_TAG   := v$(FLEXIBLESUSY_VERSION)
ABSBASEDIR         := /home/peter/Gambit/Fresh/gambit/modules/contrib/MassSpectra/flexiblesusy
INSTALL_DIR        := 

# Makefile switches
ENABLE_COMPILE     := yes
ENABLE_FFLITE      := no
ENABLE_LOOPTOOLS   := no
ENABLE_META        := no
ENABLE_STATIC_LIBS := yes
ENABLE_THREADS     := yes

# C/C++ preprocessor defines
ENABLE_COLOR_PRINTOUT := no
ENABLE_DEBUG          := 
ENABLE_CHECK_EIGENVALUE_ERROR := no
ENABLE_SILENT         := no
ENABLE_VERBOSE        := no

# Makefile modules
MODELS             :=  models/MSSM
ADDONS             := 
MODULES            := config src fflite legacy slhaea doc
MODULES            += $(MODELS) $(ADDONS)

# Variables for Mathematica meta code
MATH               := math
ALGORITHMS         := two_scale

# Variables for compilation
CXX                := /usr/bin/g++-4.6
CPPFLAGS           :=  $(patsubst %,-I%,$(MODULES)) -I.
CXXFLAGS           := -std=c++0x -O2
CXX_DEP_GEN        := /usr/bin/g++-4.6
CXXFLAGS_DEP_GEN   := -std=c++0x
FC                 := /usr/bin/gfortran
FFLAGS             := -O2
FLIBS              := 
FOR_DEP_GEN        := /usr/bin/gfortran
MAKELIB            := ar cru
LIBEXT             := .a
BLASLIBS           := -lblas
BOOSTTESTLIBS      := -lboost_unit_test_framework
BOOSTTHREADLIBS    := 
BOOSTFLAGS         :=  -I/usr/local/include
EIGENFLAGS         := -I/home/peter/Gambit/Fresh/gambit/modules/../extras/eigen3
GSLLIBS            := -L/usr/lib -lgsl -lgslcblas -lm
GSLFLAGS           := -I/usr/include
LAPACKLIBS         := -llapack
LOOPTOOLSFLAGS     := 
LOOPTOOLSLIBS      := 
THREADLIBS         := -lpthread

ifeq ($(ENABLE_LOOPTOOLS),yes)
LOOPFUNCFLAGS	   := $(LOOPTOOLSFLAGS)
LOOPFUNCLIBS	   := $(LOOPTOOLSLIBS)
endif
ifeq ($(ENABLE_FFLITE),yes)
LOOPFUNCFLAGS	   :=
LOOPFUNCLIBS	    = $(LIBFFLITE)
endif

# the modules add their dependency files to this variable
ALLDEP   :=
# the modules add soucre files to be created to this variable
ALLSRC   :=
# the modules add their libraries to this variable
ALLLIB   :=
# the modules add executables to this variable
ALLEXE   :=
# the modules add test executables to this variable
ALLTST   :=

# flexiblesusy-config script
FSCONFIG := ./flexiblesusy-config

# configure script
CONFIGURE_SCRIPT := $(ABSBASEDIR)/configure

# script which lists the SARAH model files
SARAH_DEP_GEN := ./config/list_sarah_model_files.sh

# script which installs a file without export markers
INSTALL_STRIPPED := \
		$(ABSBASEDIR)/config/install_stripped.sh

# script which replaces path\like\this with path/like/this
# thereby enabling FlexibleSUSY to run on Cygwin
CONVERT_DOS_PATHS := \
		$(ABSBASEDIR)/config/convert_dos_paths.sh

# README file
README_FILE := $(ABSBASEDIR)/README

.PHONY:  all allsrc allexec alllib alltest clean-executables \
	 clean clean-dep depend distclean showbuild tag \
	 release-tag release-head

all:
ifeq ($(ENABLE_META),yes)
all:     allsrc
endif
ifeq ($(ENABLE_COMPILE),yes)
all:     alllib allexec
endif

ifeq ($(INSTALL_DIR),)
install-src::
	$(error Installation directory is not set!  To set in please run: ./configure --with-install-dir=/path/to/install/dir)
else
install-src::
	install -d $(INSTALL_DIR)
	$(INSTALL_STRIPPED) $(CONFIGURE_SCRIPT) $(INSTALL_DIR)/configure -m u=rwx,g=r,o=r
	$(INSTALL_STRIPPED) $(README_FILE) $(INSTALL_DIR)/README -m u=rw,g=r,o=r

ifeq ($(ENABLE_META),yes)
install-src:: allsrc
endif
endif

include config/abspathx.mk
include $(patsubst %, %/module.mk, $(MODULES))

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(MAKECMDGOALS),distclean)
ifneq ($(MAKECMDGOALS),install-src)
ifneq ($(MAKECMDGOALS),showbuild)
ifneq ($(MAKECMDGOALS),tag)
ifneq ($(MAKECMDGOALS),depend)
ifneq ($(MAKECMDGOALS),doc)
ifeq ($(ENABLE_COMPILE),yes)
ifeq ($(findstring clean-,$(MAKECMDGOALS)),)
ifeq ($(findstring distclean-,$(MAKECMDGOALS)),)
ifeq ($(findstring doc-,$(MAKECMDGOALS)),)
ifeq ($(findstring pack-,$(MAKECMDGOALS)),)
ifeq ($(findstring release-,$(MAKECMDGOALS)),)
-include $(ALLDEP)
endif
endif
endif
endif
endif
endif
endif
endif
endif
endif
endif
endif
endif

allsrc:   $(ALLSRC)
allexec:  $(ALLEXE)
alllib:   $(ALLLIB)
alltest:  $(ALLTST)

clean-dep:
	-rm -f $(ALLDEP)

depend:  clean-dep
depend:  $(ALLDEP)

%.d: %.cpp
# -MT '$*.o' ensures that the target contains the full path
	$(CXX_DEP_GEN) $(CPPFLAGS) $(CXXFLAGS_DEP_GEN) -MM -MP -MG -o $@ -MT '$*.o' $^

%.d: %.f
# the sed script ensures that the target contains the full path
	$(FOR_DEP_GEN) $(CPPFLAGS) -cpp -MM -MP -MG $^ -MT '$*.o' | \
	sed 's|.*\.o:|$*.o:|' > $@

%.d: %.F
# the sed script ensures that the target contains the full path
	$(FC) $(CPPFLAGS) -cpp -MM -MP -MG $^ -MT '$*.o' | \
	sed 's|.*\.o:|$*.o:|' > $@

clean-executables:
	-rm -f $(ALLEXE)

distclean::
	-rm -f Makefile
	-rm -f $(FSCONFIG)
	-rm -f $(SARAH_DEP_GEN)
	-rm -f config.boost config.log config.math config.sarah config.status

showbuild:
	@echo "PKGNAME            = $(PKGNAME)"
	@echo "VERSION            = $(FLEXIBLESUSY_VERSION)"
	@echo "ABSBASEDIR         = $(ABSBASEDIR)"
	@echo "INSTALL_DIR        = $(INSTALL_DIR)"
	@echo ""
	@echo "MATH               = $(MATH)"
	@echo "MODELS             = $(MODELS)"
	@echo "ADDONS             = $(ADDONS)"
	@echo "ALGORITHMS         = $(ALGORITHMS)"
	@echo ""
	@echo "CXX                = $(CXX)"
	@echo "CPPFLAGS           = $(CPPFLAGS)"
	@echo "CXXFLAGS           = $(CXXFLAGS)"
	@echo "CXX_DEP_GEN        = $(CXX_DEP_GEN)"
	@echo "CXXFLAGS_DEP_GEN   = $(CXXFLAGS_DEP_GEN)"
	@echo "FC                 = $(FC)"
	@echo "FFLAGS             = $(FFLAGS)"
	@echo "FLIBS              = $(FLIBS)"
	@echo "FOR_DEP_GEN        = $(FOR_DEP_GEN)"
	@echo "MAKELIB            = $(MAKELIB)"
	@echo "LIBEXT             = $(LIBEXT)"
	@echo "BLASLIBS           = $(BLASLIBS)"
	@echo "BOOSTTESTLIBS      = $(BOOSTTESTLIBS)"
	@echo "BOOSTTHREADLIBS    = $(BOOSTTHREADLIBS)"
	@echo "BOOSTFLAGS         = $(BOOSTFLAGS)"
	@echo "EIGENFLAGS         = $(EIGENFLAGS)"
	@echo "GSLLIBS            = $(GSLLIBS)"
	@echo "GSLFLAGS           = $(GSLFLAGS)"
	@echo "LAPACKLIBS         = $(LAPACKLIBS)"
	@echo "LOOPFUNCFLAGS      = $(LOOPFUNCFLAGS)"
	@echo "LOOPFUNCLIBS       = $(LOOPFUNCLIBS)"
	@echo "THREADLIBS         = $(THREADLIBS)"
	@echo ""
	@echo "ENABLE_COLOR_PRINTOUT = $(ENABLE_COLOR_PRINTOUT)"
	@echo "ENABLE_COMPILE     = $(ENABLE_COMPILE)"
	@echo "ENABLE_DEBUG       = $(ENABLE_DEBUG)"
	@echo "ENABLE_CHECK_EIGENVALUE_ERROR = $(ENABLE_CHECK_EIGENVALUE_ERROR)"
	@echo "ENABLE_FFLITE      = $(ENABLE_FFLITE)"
	@echo "ENABLE_LOOPTOOLS   = $(ENABLE_LOOPTOOLS)"
	@echo "ENABLE_META        = $(ENABLE_META)"
	@echo "ENABLE_SILENT      = $(ENABLE_SILENT)"
	@echo "ENABLE_STATIC_LIBS = $(ENABLE_STATIC_LIBS)"
	@echo "ENABLE_THREADS     = $(ENABLE_THREADS)"
	@echo "ENABLE_VERBOSE     = $(ENABLE_VERBOSE)"
	@echo ""
	@echo "The list of modules to be built:"
	@echo "--------------------------------"
	@echo "$(MODULES)"

tag:
	git tag $(FLEXIBLESUSY_TAG)

release-tag:
	git archive --worktree-attributes \
		--prefix=$(FLEXIBLESUSY_PKG)/ \
		--output=$(FLEXIBLESUSY_PKG).tar.gz $(FLEXIBLESUSY_TAG)
	md5sum $(FLEXIBLESUSY_PKG).tar.gz \
		> $(FLEXIBLESUSY_PKG).tar.gz.md5

release-head:
	$(eval GIT_HEAD_DESCR := $(shell git describe --tags HEAD))
	$(eval FLEXIBLESUSY_HEAD_PKG := $(PKGNAME)-$(GIT_HEAD_DESCR))
	git archive --worktree-attributes \
		--prefix=$(FLEXIBLESUSY_HEAD_PKG)/ \
		--output=$(FLEXIBLESUSY_HEAD_PKG).tar.gz HEAD
	md5sum $(FLEXIBLESUSY_HEAD_PKG).tar.gz \
		> $(FLEXIBLESUSY_HEAD_PKG).tar.gz.md5
