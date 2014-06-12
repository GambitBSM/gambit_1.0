DIR          := fflite
MODNAME      := fflite

LIBFFLITE_HDR := \
		$(DIR)/defs.h \
		$(DIR)/externals.h \
		$(DIR)/ff.h \
		$(DIR)/fferr.h \
		$(DIR)/fflite.hpp \
		$(DIR)/ffwarn.h \
		$(DIR)/lt.h \
		$(DIR)/types.h

LIBFFLITE_MK := \
		$(DIR)/module.mk

LIBFFLITE_SRC := \
		$(DIR)/BcoeffAD.F \
		$(DIR)/ffca0.F \
		$(DIR)/ffcb0.F \
		$(DIR)/ffcb1.F \
		$(DIR)/ffcb2p.F \
		$(DIR)/ffcc0.F \
		$(DIR)/ffcli2.F \
		$(DIR)/ffinit.F \
		$(DIR)/ffxa0.F \
		$(DIR)/ffxb0.F \
		$(DIR)/ffxb1.F \
		$(DIR)/ffxb2p.F \
		$(DIR)/ffxli2.F \
		$(DIR)/ini.F

LIBFFLITE_OBJ := \
		$(patsubst %.cpp, %.o, $(filter %.cpp, $(LIBFFLITE_SRC))) \
		$(patsubst %.f, %.o, $(filter %.f, $(LIBFFLITE_SRC))) \
		$(patsubst %.F, %.o, $(filter %.F, $(LIBFFLITE_SRC)))

LIBFFLITE_DEP := \
		$(LIBFFLITE_OBJ:.o=.d)

LIBFFLITE     := $(DIR)/lib$(MODNAME)$(LIBEXT)

LIBFFLITE_INSTALL_DIR := $(INSTALL_DIR)/$(DIR)

.PHONY:         all-$(MODNAME) clean-$(MODNAME) distclean-$(MODNAME)

all-$(MODNAME): $(LIBFFLITE)

ifneq ($(INSTALL_DIR),)
install-src::
		install -d $(LIBFFLITE_INSTALL_DIR)
		install -m u=rw,g=r,o=r $(LIBFFLITE_SRC) $(LIBFFLITE_INSTALL_DIR)
		install -m u=rw,g=r,o=r $(LIBFFLITE_HDR) $(LIBFFLITE_INSTALL_DIR)
		install -m u=rw,g=r,o=r $(LIBFFLITE_MK) $(LIBFFLITE_INSTALL_DIR)
endif

clean-$(MODNAME)-dep:
		-rm -f $(LIBFFLITE_DEP)

clean-$(MODNAME)-obj:
		-rm -f $(LIBFFLITE_OBJ)

clean-$(MODNAME): clean-$(MODNAME)-dep clean-$(MODNAME)-obj
		-rm -f $(LIBFFLITE)

distclean-$(MODNAME): clean-$(MODNAME)

clean::         clean-$(MODNAME)

distclean::     distclean-$(MODNAME)

$(LIBFFLITE): $(LIBFFLITE_OBJ)
		$(MAKELIB) $@ $^

ifeq ($(ENABLE_FFLITE),yes)
ALLDEP += $(LIBFFLITE_DEP)
ALLLIB += $(LIBFFLITE)
endif
