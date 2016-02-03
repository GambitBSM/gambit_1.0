#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ(2.57)
AC_INIT(DarkSUSY,, edsjo@fysik.su.se)

AC_PREFIX_DEFAULT(${PWD})
#AC_CONFIG_SRCDIR([contrib/cfitsio/speed.c])
AC_CONFIG_SRCDIR([src/ini/dsinit.f])
#AC_CONFIG_HEADER([config.h])

# Checks for programs.
#AC_PROG_AWK
#AC_PROG_YACC
AC_PROG_CXX
AC_PROG_CC
#AC_PROG_LEX
AC_PROG_LN_S
#AC_PROG_MAKE_SET
AC_PROG_RANLIB

FCSET=false
if test "${FCFLAGS+set}" = set; then
   FCSET=true
fi

AC_PROG_FC([ifort gfortran])
if test "${FCSET}" = "false" ; then
  if test "${FC}" = "ifort"; then 
    echo "Fortran compiler is $FC"
    FCFLAGS=${FCFLAGS+-O -extend_source -openmp}
  fi 
  if test "${FC}" = "gfortran"; then
    echo "Fortran compiler is $FC"
    FCFLAGS=${FCFLAGS+-O -ffixed-line-length-none -fopenmp}
  fi
fi

AC_PROG_F77([ifort gfortran])
F77=${FC}
FFLAGS=${FCFLAGS}
#FFLAGS=${FFLAGS--funroll-loops -fno-emulate-complex -ffast-math -O}
# Set default g77 options
AC_ARG_VAR(FOPT,[Fortran compiler flags for DarkSUSY])
# If not set, set to default for g77
#FOPT=${FOPT--O -ffixed-line-length-none}
#FOPT=${FOPT--funroll-loops -fno-emulate-complex -ffast-math -O -ffixed-line-length-none}
#FOPT="-funroll-loops -fno-emulate-complex"
FOPT=${FCFLAGS}

# root directory
AC_ARG_VAR(DSINSTALL,[Full path to install directory])
if test "${prefix}" = "NONE"; then
DSINSTALL="${PWD}"
else
DSINSTALL="${prefix}"
fi

# ds version
AC_ARG_VAR(DSVERSION,[String containing the DarkSUSY version])
#DSVERSION=`echo $DSINSTALL | sed s:[^/]*/::g` # does not work
#DSVERSION=$DSINSTALL
DSVERSION="${PWD}"

# svn revision
AC_ARG_VAR(DSREV,[String containing DarkSUSY svn revision])
AC_CHECK_PROGS([SVN],[svn],[:])
if test "$SVN" = :; then
DSREV=""
else
DSREV=" rev ("`svn info | grep Revision | sed "s/Revision: //"`")"
fi

# Make dsdirver.h from DSVERSION and DSINSTALL
echo 'Creating include/dsdirver.h'
scr/config2.pl ${DSVERSION} ${DSINSTALL}

#####
##### NOTE FOR DarkSUSY Developers
##### When contributed packages are updated, add the correct path to them
##### below and then run 'autoconf' in the DarkSUSY
##### root to update the configure script. Then run ./configure and make
##### as usual to create makefiles and make DarkSUSY.
##### As of 2010-03-05, we no longer use symbolic links for contributed
##### packages

# ISAJET
AC_ARG_VAR(ISAJETDIR,[Directory where ISAJET is])
# Set ISAJETDIR if not set
ISAJETDIR=${ISAJETDIR-${PWD}/contrib/isajet781-for-darksusy}

# HIGGSBOUNDSDIR
AC_ARG_VAR(HIGGSBOUNDSDIR,[Directory where HiggsBounds is])
# Set HIGGSBOUNDSDIR if not set
HIGGSBOUNDSDIR=${HIGGSBOUNDSDIR-${PWD}/contrib/HiggsBounds-3.8.1/HiggsBounds}
#HIGGSBOUNDSDIR=${HIGGSBOUNDSDIR-${PWD}/contrib/HiggsBounds-3.7.0/HiggsBounds-f90}
#HIGGSBOUNDSDIR=${HIGGSBOUNDSDIR-${PWD}/contrib/HiggsBounds-3.5.0beta-for-darksusy/HiggsBounds-f90}
AC_ARG_VAR(HBFHINCLUDE,[FeynHiggs include directory for HiggsBounds])
HBFHINCLUDE=${HBFHINCLUDE-${PWD}/include}
AC_ARG_VAR(HBFHLIBS,[FeynHiggs lib directory for HiggsBounds])
HBFHLIBS=${HBFHLIBS-${PWD}/lib}
AC_ARG_VAR(HBCPSUPERHLIBS,[CPSuperH lib directory for HiggsBounds])
HBCPSUPERHLIBS=${HBCPSUPERHLIBS-${PWD}/lib}
# Run configure in HIGGSBOUNDSDIR
echo "Running configure in ${HIGGSBOUNDSDIR}"
(cd ${HIGGSBOUNDSDIR} ; 
echo "./configure_darksusy" ;
./configure_darksusy)

# SLHADIR
AC_ARG_VAR(SLHADIR,[Directory where SLHALIB is])
# Set SLHADIR if not set
SLHADIR=${SLHADIR-${PWD}/contrib/SLHALib-2.2}

# FeynHiggs
AC_ARG_VAR(FEYNHIGGSDIR,[Directory where FeynHiggs is])
# Set FeynHiggsdir if not set
FEYNHIGGSDIR=${FEYNHIGGSDIR-${PWD}/contrib/FeynHiggs-2.9.4}

# Run configure in FeynHiggsdir
echo "Running configure in ${FEYNHIGGSDIR}"
(cd ${FEYNHIGGSDIR} ; 
#if test "${F77}" = "g77" ; then
#   COPT="--prefix=ds FC=${F77}"
#else
#   COPT="--prefix=ds FFLAGS=default FC=${F77}"
#fi
# there is a bounds-check problem when linking FH to DS...........
echo "./configure --prefix=ds FC=${FC}" ;
./configure FC=${FC} --prefix=ds)
#echo "./configure --prefix=ds FC=${FC} FFLAGS=""${FCFLAGS}""" ;
#./configure FC=${FC} --prefix=ds FFLAGS="${FCFLAGS}")

# TSPACK
AC_ARG_VAR(TSPACKDIR,[Directory where TSPACK is])
# Set TSPACKDIR if not set
TSPACKDIR=${TSPACKDIR-${PWD}/contrib/TSPACK}


# Run configure in cfitsio
echo "Running configure in contrib/cfitsio"
(cd contrib/cfitsio; ./configure)

SLHADIR=${SLHADIR-${PWD}/contrib/slha}
# Run configure in SLHA
echo "Running configure in ${SLHADIR}"
(cd ${SLHADIR} ; 
echo "./configure --prefix=ds FC=${F77}" ;
unset FFLAGS
./configure FC=${F77} --prefix=ds)

AC_ARG_VAR(CFITSIO,[Location of cfitsio library])

# Checks for libraries (external of DarkSUSY).
AC_ARG_WITH([cfitsio],[  --with-cfitsio=CFITSIO  location of cfitsio library],[CFITSIO=$withval],[CFITSIO=.])
AC_CHECK_LIB([cfitsio], [ffopen],[rm -f .no_cfitsio],[touch .no_cfitsio],[-L$CFITSIO -lm])
# AC_CHECK_LIB([darksusy], [dsinit])
AC_CHECK_LIB([g2c], [erfc])
#AC_CHECK_LIB([ink], [main])
AC_CHECK_LIB([isajet], [sugra])
AC_CHECK_LIB([m], [sqrt])

# Checks for header files.
#AC_FUNC_ALLOCA
#AC_HEADER_STDC
#AC_CHECK_HEADERS([arpa/inet.h fcntl.h limits.h malloc.h memory.h netdb.h netinet/in.h stddef.h stdlib.h string.h sys/socket.h unistd.h])

# Checks for typedefs, structures, and compiler characteristics.
#AC_C_CONST
#AC_TYPE_MODE_T
#AC_TYPE_SIZE_T
#AC_STRUCT_TM

# Checks for library functions.
#AC_FUNC_ERROR_AT_LINE
#AC_FUNC_FSEEKO
#AC_FUNC_LSTAT
#AC_FUNC_LSTAT_FOLLOWS_SLASHED_SYMLINK
#AC_FUNC_MALLOC
#AC_FUNC_MEMCMP
#AC_FUNC_REALLOC
#AC_TYPE_SIGNAL
#AC_FUNC_STRFTIME
#AC_FUNC_STRTOD
#AC_CHECK_FUNCS([alarm atexit floor ftruncate getcwd gethostbyname memchr memset pow socket sqrt strcasecmp strchr strcspn strncasecmp strrchr strspn strstr strtol])

# do not put contrib/feynhiggs/makefile - it has its own configure
AC_CONFIG_FILES([${ISAJETDIR}/makefile
		 contrib/galprop/v50p/Configure.cc
		 contrib/galprop/v50p/nuc_package.cc
		 contrib/galprop/v50p/makefile
                 ${HIGGSBOUNDSDIR}/makefile_darksusy
		 ${TSPACKDIR}/makefile
                 share/DarkSUSY/makefile
                 makefile
                 src/ac/makefile
                 src/an/makefile
                 src/an1l/makefile
                 src/anstu/makefile
                 src/as/makefile
                 src/bsg/makefile
                 src/db/makefile
                 src/dd/makefile
                 src/ep/makefile
                 src/ep2/makefile
                 src/ge/makefile
                 src/ha/makefile
                 src/hm/makefile
                 src/hr/makefile
                 src/ib/makefile
                 src/ini/makefile
                 src/makefile
                 src/mh/makefile
                 src/wa/makefile
                 src/nt/makefile
                 src/pb/makefile
                 src/rd/makefile
                 src/rge/makefile
                 src/rn/makefile
		 src/slha/makefile
                 src/su/makefile
                 src/ucmh/makefile
                 src/xcern/makefile
                 src/xcmlib/makefile
                 src/xfeynhiggs/makefile
                 src/xgalprop/makefile
                 src/xhiggsbounds/makefile
		 src/xdiag/makefile
                 test/makefile
		 misc/makefile])
AC_OUTPUT
