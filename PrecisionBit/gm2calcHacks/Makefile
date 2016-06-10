# Package information
PKGNAME         := gm2calc
MAJOR           := 1
MINOR           := 1
PATCH           := 2
VERSION         := $(MAJOR).$(MINOR).$(PATCH)

# Variables for compilation
CC              := gcc
CFLAGS          := -O2 -std=c99
CLIBS           := -lstdc++ -lm
CXX             := g++
CPPFLAGS        := -Isrc
CXXFLAGS        := -O2 -std=c++11
CXX_DEP_GEN     := g++
MAKELIB         := ar cru
MAKESHAREDLIB   := $(CXX) -shared 
BOOSTFLAGS      := -I/usr/include
EIGENFLAGS      := -I/usr/include/eigen3
LIBEXT          := .a
SHAREDLIBEXT    := .so
BINDIR          := bin
CONFIG_H        := src/config.h

# Flags (set to 1 to enable, leave empty to disable)
ENABLE_LAPACK   :=

all: alllib allexec make.args sharedlib

.PHONY: all allexec alllib clean depend make.args sharedlib

clean::
	-rm -f $(CONFIG_H)
	-rm -rf $(BINDIR)
	-rm -f make.args

include src/module.mk
include examples/module.mk
include doc/module.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(MAKECMDGOALS),depend)
ifneq ($(MAKECMDGOALS),doc)
ifneq ($(MAKECMDGOALS),make.args)
ifneq ($(MAKECMDGOALS),tag)
ifeq ($(findstring doc-,$(MAKECMDGOALS)),)
ifeq ($(findstring print-,$(MAKECMDGOALS)),)
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

allexec:  $(ALLEXE)
alllib:   $(ALLLIB)
depend:   $(ALLDEP)

sharedlib: $(SHAREDLIB)
	
$(BINDIR):
	mkdir $(BINDIR)

$(CONFIG_H): Makefile
	rm -f $@-t $@
	{ echo '/* DO NOT EDIT! GENERATED AUTOMATICALLY! */'; \
	  echo ''; \
	  echo '/* program version */'; \
	  echo '#define GM2CALC_VERSION "$(VERSION)"'; \
	  echo '#define GM2CALC_VERSION_MAJOR $(MAJOR)'; \
	  echo '#define GM2CALC_VERSION_MINOR $(MINOR)'; \
	  echo '#define GM2CALC_VERSION_PATCH $(PATCH)'; \
	  echo ''; \
	  echo '/* enable/disable LAPACK */'; \
	  echo '#define ENABLE_LAPACK "$(ENABLE_LAPACK)"'; \
	} | sed '/""/d' > $@-t
	mv $@-t $@

make.args:
	rm -f $@-t $@
	{ echo 'CXX="$(CXX)"' \
	       'CPPFLAGS="$(CPPFLAGS)"' \
	       'CXXFLAGS="$(CXXFLAGS)"' \
	       'CXX_DEP_GEN="$(CXX_DEP_GEN)"' \
	       'MAKELIB="$(MAKELIB)"' \
	       'BOOSTFLAGS="$(BOOSTFLAGS)"' \
	       'EIGENFLAGS="$(EIGENFLAGS)"'; \
	} > $@-t
	mv $@-t $@

%.d: %.cpp | $(CONFIG_H)
	$(CXX_DEP_GEN) $(CPPFLAGS) -MM -MP -MG -o $@ -MT '$*.o' $^

%.d: %.c | $(CONFIG_H)
	$(CXX_DEP_GEN) $(CPPFLAGS) -MM -MP -MG -o $@ -MT '$*.o' $^

print-% : ; @echo $* = $($*)

tag:
	git tag v$(VERSION)

release-tag:
	git archive --worktree-attributes --prefix=gm2calc-$(VERSION)/ \
		--output=gm2calc-$(VERSION).tar.gz v$(VERSION)
	md5sum gm2calc-$(VERSION).tar.gz > gm2calc-$(VERSION).tar.gz.md5

release-head:
	$(eval GIT_HEAD_DESCR := $(shell git describe --tags HEAD))
	git archive --worktree-attributes --prefix=gm2calc-$(GIT_HEAD_DESCR)/ \
		--output=gm2calc-$(GIT_HEAD_DESCR).tar.gz HEAD
	md5sum gm2calc-$(GIT_HEAD_DESCR).tar.gz \
		> gm2calc-$(GIT_HEAD_DESCR).tar.gz.md5
