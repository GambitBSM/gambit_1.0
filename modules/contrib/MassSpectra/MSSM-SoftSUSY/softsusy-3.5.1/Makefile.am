lib_LTLIBRARIES = 
bin_PROGRAMS = 
CLEANFILES =
BUILT_SOURCES=
EXTRA_DIST=
pkginclude_HEADERS=
dist_pkgdata_DATA = 
ACLOCAL_AMFLAGS = ${ACLOCAL_FLAGS} -I m4

AUTOMAKE_OPTIONS = subdir-objects

include src/softsusy.amk
include doc/doc.amk
if COMPILE_FULL_SUSY_THRESHOLD
else
include inOutFiles/inOut.amk
endif

dist_pkgdata_DATA += softsusy_nmssmtools.x.in setup_nmssmtools.sh \
Makefile.nmssmtools CHANGES GUIDELINES COPYING $(DOCFILES) 

CLEANFILES += $(OUTPUTFILES) *.x

.PHONY: doc test updateWeb install

updateWeb: dist 
	scp softsusy-${VERSION}.tar.gz allanach@login.hepforge.org:~/softsusy/downloads; 
	scp inOutFiles/*{Input,Output}* allanach@login.hepforge.org:~/softsusy/public_html/code
	scp {src/def.h,inOutFiles/outputTest,README} allanach@login.hepforge.org:~/softsusy/public_html/code
	scp Makefile.alt allanach@login.hepforge.org:~/softsusy/public_html/Makefile
	scp -r doc allanach@login.hepforge.org:~/softsusy/public_html/; \
	doxygen softsusy.cfg &&\
	scp -r html allanach@login.hepforge.org:~/softsusy/public_html; \
	scp -r CHANGES allanach@login.hepforge.org:~/softsusy/public_html/CHANGES.${VERSION}.html; \
	rm -fr html *.tar.gz

install-data-local:
	rm -f softsusy.x softsusy-nmssm.x softpoint.x rpvsoftsusy.x rpvneut.x *.la

