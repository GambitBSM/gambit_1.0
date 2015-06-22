DIR          := legacy
MODNAME      := legacy

LIBLEGACY_HDR := \
		$(DIR)/conversion.hpp \
		$(DIR)/diagonalization.hpp \
		$(DIR)/rk_legacy.hpp

LIBLEGACY_MK  := \
		$(DIR)/module.mk

LIBLEGACY_SRC := \
		$(DIR)/conversion.cpp \
		$(DIR)/diagonalization.cpp \
		$(DIR)/rk_legacy.cpp

LIBLEGACY_OBJ := \
		$(patsubst %.cpp, %.o, $(filter %.cpp, $(LIBLEGACY_SRC))) \
		$(patsubst %.f, %.o, $(filter %.f, $(LIBLEGACY_SRC)))

LIBLEGACY_DEP := \
		$(LIBLEGACY_OBJ:.o=.d)

LIBLEGACY     := $(DIR)/lib$(MODNAME)$(LIBEXT)

LIBLEGACY_INSTALL_DIR := $(INSTALL_DIR)/$(DIR)

.PHONY:         all-$(MODNAME) clean-$(MODNAME) distclean-$(MODNAME)

all-$(MODNAME): $(LIBLEGACY)

ifneq ($(INSTALL_DIR),)
install-src::
		install -d $(LIBLEGACY_INSTALL_DIR)
		install -m u=rw,g=r,o=r $(LIBLEGACY_SRC) $(LIBLEGACY_INSTALL_DIR)
		install -m u=rw,g=r,o=r $(LIBLEGACY_HDR) $(LIBLEGACY_INSTALL_DIR)
		install -m u=rw,g=r,o=r $(LIBLEGACY_MK) $(LIBLEGACY_INSTALL_DIR)
endif

clean-$(MODNAME)-dep:
		-rm -f $(LIBLEGACY_DEP)

clean-$(MODNAME)-obj:
		-rm -f $(LIBLEGACY_OBJ)

clean-$(MODNAME): clean-$(MODNAME)-dep clean-$(MODNAME)-obj
		-rm -f $(LIBLEGACY)

distclean-$(MODNAME): clean-$(MODNAME)

clean::         clean-$(MODNAME)

distclean::     distclean-$(MODNAME)

$(LIBLEGACY): $(LIBLEGACY_OBJ)
		$(MAKELIB) $@ $^

# add boost and eigen flags for the test object files and dependencies
$(LIBLEGACY_OBJ) $(LIBLEGACY_DEP): CPPFLAGS += $(BOOSTFLAGS) $(EIGENFLAGS)

ALLDEP += $(LIBLEGACY_DEP)
ALLLIB += $(LIBLEGACY)
