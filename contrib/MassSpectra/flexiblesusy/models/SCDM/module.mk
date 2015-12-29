DIR          := models/SCDM
MODNAME      := SCDM
SARAH_MODEL  := SCDM

SCDM_INSTALL_DIR := $(INSTALL_DIR)/$(DIR)

SCDM_MK     := \
		$(DIR)/module.mk

SCDM_TWO_SCALE_SUSY_MK := \
		$(DIR)/two_scale_susy.mk

SCDM_TWO_SCALE_SOFT_MK := \
		$(DIR)/two_scale_soft.mk

SCDM_TWO_SCALE_MK := \
		$(SCDM_TWO_SCALE_SUSY_MK) \
		$(SCDM_TWO_SCALE_SOFT_MK)

SCDM_SLHA_INPUT := \
LesHouches.in.SSDM

SCDM_GNUPLOT := \
		$(DIR)/SCDM_plot_rgflow.gnuplot \
		$(DIR)/SCDM_plot_spectrum.gnuplot

SCDM_TARBALL := \
		$(MODNAME).tar.gz

LIBSCDM_SRC :=
EXESCDM_SRC :=

LIBSCDM_HDR :=

ifneq ($(findstring two_scale,$(ALGORITHMS)),)
LIBSCDM_SRC += \
		$(DIR)/SCDM_mass_eigenstates.cpp \
		$(DIR)/SCDM_info.cpp \
		$(DIR)/SCDM_input_parameters.cpp \
		$(DIR)/SCDM_slha_io.cpp \
		$(DIR)/SCDM_physical.cpp \
		$(DIR)/SCDM_utilities.cpp \
		$(DIR)/SCDM_two_scale_convergence_tester.cpp \
		$(DIR)/SCDM_two_scale_high_scale_constraint.cpp \
		$(DIR)/SCDM_two_scale_initial_guesser.cpp \
		$(DIR)/SCDM_two_scale_low_scale_constraint.cpp \
		$(DIR)/SCDM_two_scale_model.cpp \
		$(DIR)/SCDM_two_scale_model_slha.cpp \
		$(DIR)/SCDM_two_scale_susy_parameters.cpp \
		$(DIR)/SCDM_two_scale_soft_parameters.cpp \
		$(DIR)/SCDM_two_scale_susy_scale_constraint.cpp
EXESCDM_SRC += \
		$(DIR)/run_SCDM.cpp \
		$(DIR)/run_cmd_line_SCDM.cpp \
		$(DIR)/scan_SCDM.cpp
LIBSCDM_HDR += \
		$(DIR)/SCDM_convergence_tester.hpp \
		$(DIR)/SCDM_high_scale_constraint.hpp \
		$(DIR)/SCDM_mass_eigenstates.hpp \
		$(DIR)/SCDM_info.hpp \
		$(DIR)/SCDM_initial_guesser.hpp \
		$(DIR)/SCDM_input_parameters.hpp \
		$(DIR)/SCDM_low_scale_constraint.hpp \
		$(DIR)/SCDM_model.hpp \
		$(DIR)/SCDM_model_slha.hpp \
		$(DIR)/SCDM_physical.hpp \
		$(DIR)/SCDM_slha_io.hpp \
		$(DIR)/SCDM_spectrum_generator_interface.hpp \
		$(DIR)/SCDM_spectrum_generator.hpp \
		$(DIR)/SCDM_susy_scale_constraint.hpp \
		$(DIR)/SCDM_utilities.hpp \
		$(DIR)/SCDM_two_scale_convergence_tester.hpp \
		$(DIR)/SCDM_two_scale_high_scale_constraint.hpp \
		$(DIR)/SCDM_two_scale_initial_guesser.hpp \
		$(DIR)/SCDM_two_scale_low_scale_constraint.hpp \
		$(DIR)/SCDM_two_scale_model.hpp \
		$(DIR)/SCDM_two_scale_model_slha.hpp \
		$(DIR)/SCDM_two_scale_soft_parameters.hpp \
		$(DIR)/SCDM_two_scale_susy_parameters.hpp \
		$(DIR)/SCDM_two_scale_susy_scale_constraint.hpp

ifneq ($(MAKECMDGOALS),showbuild)
ifneq ($(MAKECMDGOALS),tag)
ifneq ($(MAKECMDGOALS),release)
ifneq ($(MAKECMDGOALS),doc)
-include $(SCDM_TWO_SCALE_SUSY_MK)
-include $(SCDM_TWO_SCALE_SOFT_MK)
ifneq ($(MAKECMDGOALS),clean)
ifneq ($(MAKECMDGOALS),distclean)
ifneq ($(MAKECMDGOALS),pack-$(MODNAME)-src)
ifeq ($(findstring clean-,$(MAKECMDGOALS)),)
ifeq ($(findstring distclean-,$(MAKECMDGOALS)),)
ifeq ($(findstring doc-,$(MAKECMDGOALS)),)
$(SCDM_TWO_SCALE_SUSY_MK): run-metacode-$(MODNAME)
		@$(CONVERT_DOS_PATHS) $@
$(SCDM_TWO_SCALE_SOFT_MK): run-metacode-$(MODNAME)
		@$(CONVERT_DOS_PATHS) $@
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

# remove duplicates in case all algorithms are used
LIBSCDM_SRC := $(sort $(LIBSCDM_SRC))
EXESCDM_SRC := $(sort $(EXESCDM_SRC))

LIBSCDM_OBJ := \
		$(patsubst %.cpp, %.o, $(filter %.cpp, $(LIBSCDM_SRC))) \
		$(patsubst %.f, %.o, $(filter %.f, $(LIBSCDM_SRC)))

EXESCDM_OBJ := \
		$(patsubst %.cpp, %.o, $(filter %.cpp, $(EXESCDM_SRC))) \
		$(patsubst %.f, %.o, $(filter %.f, $(EXESCDM_SRC)))

EXESCDM_EXE := \
		$(patsubst %.cpp, %.x, $(filter %.cpp, $(EXESCDM_SRC))) \
		$(patsubst %.f, %.x, $(filter %.f, $(EXESCDM_SRC)))

LIBSCDM_DEP := \
		$(LIBSCDM_OBJ:.o=.d)

EXESCDM_DEP := \
		$(EXESCDM_OBJ:.o=.d)

LIBSCDM     := $(DIR)/lib$(MODNAME)$(LIBEXT)

METACODE_STAMP_SCDM := $(DIR)/00_DELETE_ME_TO_RERUN_METACODE

ifeq ($(ENABLE_META),yes)
SARAH_MODEL_FILES_SCDM := \
		$(shell $(SARAH_DEP_GEN) $(SARAH_MODEL))
endif

.PHONY:         all-$(MODNAME) clean-$(MODNAME) clean-$(MODNAME)-src \
		clean-$(MODNAME)-dep clean-$(MODNAME)-obj \
		distclean-$(MODNAME) run-metacode-$(MODNAME) \
		pack-$(MODNAME)-src

all-$(MODNAME): $(LIBSCDM)

ifneq ($(INSTALL_DIR),)
install-src::
		install -d $(SCDM_INSTALL_DIR)
		install -m u=rw,g=r,o=r $(LIBSCDM_SRC) $(SCDM_INSTALL_DIR)
		install -m u=rw,g=r,o=r $(LIBSCDM_HDR) $(SCDM_INSTALL_DIR)
		install -m u=rw,g=r,o=r $(EXESCDM_SRC) $(SCDM_INSTALL_DIR)
		$(INSTALL_STRIPPED) $(SCDM_MK) $(SCDM_INSTALL_DIR) -m u=rw,g=r,o=r
		install -m u=rw,g=r,o=r $(SCDM_TWO_SCALE_MK) $(SCDM_INSTALL_DIR)
ifneq ($(SCDM_SLHA_INPUT),)
		install -m u=rw,g=r,o=r $(SCDM_SLHA_INPUT) $(SCDM_INSTALL_DIR)
endif
		install -m u=rw,g=r,o=r $(SCDM_GNUPLOT) $(SCDM_INSTALL_DIR)
endif

clean-$(MODNAME)-dep:
		-rm -f $(LIBSCDM_DEP)
		-rm -f $(EXESCDM_DEP)

clean-$(MODNAME)-obj:
		-rm -f $(LIBSCDM_OBJ)
		-rm -f $(EXESCDM_OBJ)


clean-$(MODNAME): clean-$(MODNAME)-dep clean-$(MODNAME)-obj
		-rm -f $(LIBSCDM)
		-rm -f $(EXESCDM_EXE)

distclean-$(MODNAME): clean-$(MODNAME)

clean::         clean-$(MODNAME)

distclean::     distclean-$(MODNAME)

pack-$(MODNAME)-src:
		tar -czf $(SCDM_TARBALL) \
		$(LIBSCDM_SRC) $(LIBSCDM_HDR) \
		$(EXESCDM_SRC) \
		$(SCDM_MK) $(SCDM_TWO_SCALE_MK) \
		$(SCDM_SLHA_INPUT) $(SCDM_GNUPLOT)

$(LIBSCDM_SRC) $(LIBSCDM_HDR) $(EXESCDM_SRC) \
: run-metacode-$(MODNAME)
		@true

run-metacode-$(MODNAME): $(METACODE_STAMP_SCDM)
		@true

ifeq ($(ENABLE_META),yes)
$(METACODE_STAMP_SCDM): $(DIR)/start.m $(DIR)/FlexibleSUSY.m $(META_SRC) $(TEMPLATES) $(SARAH_MODEL_FILES_SCDM)
		"$(MATH)" -run "Get[\"$<\"]; Quit[]"
		@touch "$(METACODE_STAMP_SCDM)"
		@echo "Note: to regenerate SCDM source files," \
		      "please remove the file "
		@echo "\"$(METACODE_STAMP_SCDM)\" and run make"
		@echo "---------------------------------"
else
$(METACODE_STAMP_SCDM):
		@true
endif

$(LIBSCDM_DEP) $(EXESCDM_DEP) $(LIBSCDM_OBJ) $(EXESCDM_OBJ): CPPFLAGS += $(GSLFLAGS) $(EIGENFLAGS) $(BOOSTFLAGS)

ifneq (,$(findstring yes,$(ENABLE_LOOPTOOLS)$(ENABLE_FFLITE)))
$(LIBSCDM_DEP) $(EXESCDM_DEP) $(LIBSCDM_OBJ) $(EXESCDM_OBJ): CPPFLAGS += $(LOOPFUNCFLAGS)
endif

$(LIBSCDM): $(LIBSCDM_OBJ)
		$(MAKELIB) $@ $^

$(DIR)/%.x: $(DIR)/%.o $(LIBSCDM) $(LIBFLEXI) $(LIBLEGACY) $(filter-out -%,$(LOOPFUNCLIBS))
		$(CXX) $(LDFLAGS) -o $@ $(call abspathx,$^) $(filter -%,$(LOOPFUNCLIBS)) $(GSLLIBS) $(BOOSTTHREADLIBS) $(THREADLIBS) $(LAPACKLIBS) $(BLASLIBS) $(FLIBS) $(LDLIBS)

ALLDEP += $(LIBSCDM_DEP) $(EXESCDM_DEP)
ALLSRC += $(LIBSCDM_SRC) $(EXESCDM_SRC)
ALLLIB += $(LIBSCDM)
ALLEXE += $(EXESCDM_EXE)
