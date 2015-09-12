DIR          := models/SSDM
MODNAME      := SSDM
SARAH_MODEL  := SSDM

SSDM_INSTALL_DIR := $(INSTALL_DIR)/$(DIR)

SSDM_MK     := \
		$(DIR)/module.mk

SSDM_TWO_SCALE_SUSY_MK := \
		$(DIR)/two_scale_susy.mk

SSDM_TWO_SCALE_SOFT_MK := \
		$(DIR)/two_scale_soft.mk

SSDM_TWO_SCALE_MK := \
		$(SSDM_TWO_SCALE_SUSY_MK) \
		$(SSDM_TWO_SCALE_SOFT_MK)

SSDM_SLHA_INPUT := \
LesHouches.in.SSDM

SSDM_GNUPLOT := \
		$(DIR)/SSDM_plot_rgflow.gnuplot \
		$(DIR)/SSDM_plot_spectrum.gnuplot

SSDM_TARBALL := \
		$(MODNAME).tar.gz

LIBSSDM_SRC :=
EXESSDM_SRC :=

LIBSSDM_HDR :=

ifneq ($(findstring two_scale,$(ALGORITHMS)),)
LIBSSDM_SRC += \
		$(DIR)/SSDM_mass_eigenstates.cpp \
		$(DIR)/SSDM_info.cpp \
		$(DIR)/SSDM_input_parameters.cpp \
		$(DIR)/SSDM_slha_io.cpp \
		$(DIR)/SSDM_physical.cpp \
		$(DIR)/SSDM_utilities.cpp \
		$(DIR)/SSDM_two_scale_convergence_tester.cpp \
		$(DIR)/SSDM_two_scale_high_scale_constraint.cpp \
		$(DIR)/SSDM_two_scale_initial_guesser.cpp \
		$(DIR)/SSDM_two_scale_low_scale_constraint.cpp \
		$(DIR)/SSDM_two_scale_model.cpp \
		$(DIR)/SSDM_two_scale_model_slha.cpp \
		$(DIR)/SSDM_two_scale_susy_parameters.cpp \
		$(DIR)/SSDM_two_scale_soft_parameters.cpp \
		$(DIR)/SSDM_two_scale_susy_scale_constraint.cpp
EXESSDM_SRC += \
		$(DIR)/run_SSDM.cpp \
		$(DIR)/run_cmd_line_SSDM.cpp \
		$(DIR)/scan_SSDM.cpp
LIBSSDM_HDR += \
		$(DIR)/SSDM_convergence_tester.hpp \
		$(DIR)/SSDM_high_scale_constraint.hpp \
		$(DIR)/SSDM_mass_eigenstates.hpp \
		$(DIR)/SSDM_info.hpp \
		$(DIR)/SSDM_initial_guesser.hpp \
		$(DIR)/SSDM_input_parameters.hpp \
		$(DIR)/SSDM_low_scale_constraint.hpp \
		$(DIR)/SSDM_model.hpp \
		$(DIR)/SSDM_model_slha.hpp \
		$(DIR)/SSDM_physical.hpp \
		$(DIR)/SSDM_slha_io.hpp \
		$(DIR)/SSDM_spectrum_generator.hpp \
		$(DIR)/SSDM_susy_scale_constraint.hpp \
		$(DIR)/SSDM_utilities.hpp \
		$(DIR)/SSDM_two_scale_convergence_tester.hpp \
		$(DIR)/SSDM_two_scale_high_scale_constraint.hpp \
		$(DIR)/SSDM_two_scale_initial_guesser.hpp \
		$(DIR)/SSDM_two_scale_low_scale_constraint.hpp \
		$(DIR)/SSDM_two_scale_model.hpp \
		$(DIR)/SSDM_two_scale_model_slha.hpp \
		$(DIR)/SSDM_two_scale_soft_parameters.hpp \
		$(DIR)/SSDM_two_scale_susy_parameters.hpp \
		$(DIR)/SSDM_two_scale_susy_scale_constraint.hpp

ifneq ($(MAKECMDGOALS),showbuild)
ifneq ($(MAKECMDGOALS),tag)
ifneq ($(MAKECMDGOALS),release)
ifneq ($(MAKECMDGOALS),doc)
-include $(SSDM_TWO_SCALE_SUSY_MK)
-include $(SSDM_TWO_SCALE_SOFT_MK)
ifneq ($(MAKECMDGOALS),clean)
ifneq ($(MAKECMDGOALS),distclean)
ifneq ($(MAKECMDGOALS),pack-$(MODNAME)-src)
ifeq ($(findstring clean-,$(MAKECMDGOALS)),)
ifeq ($(findstring distclean-,$(MAKECMDGOALS)),)
ifeq ($(findstring doc-,$(MAKECMDGOALS)),)
$(SSDM_TWO_SCALE_SUSY_MK): run-metacode-$(MODNAME)
		@$(CONVERT_DOS_PATHS) $@
$(SSDM_TWO_SCALE_SOFT_MK): run-metacode-$(MODNAME)
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
LIBSSDM_SRC := $(sort $(LIBSSDM_SRC))
EXESSDM_SRC := $(sort $(EXESSDM_SRC))

LIBSSDM_OBJ := \
		$(patsubst %.cpp, %.o, $(filter %.cpp, $(LIBSSDM_SRC))) \
		$(patsubst %.f, %.o, $(filter %.f, $(LIBSSDM_SRC)))

EXESSDM_OBJ := \
		$(patsubst %.cpp, %.o, $(filter %.cpp, $(EXESSDM_SRC))) \
		$(patsubst %.f, %.o, $(filter %.f, $(EXESSDM_SRC)))

LIBSSDM_DEP := \
		$(LIBSSDM_OBJ:.o=.d)

EXESSDM_DEP := \
		$(EXESSDM_OBJ:.o=.d)

LIBSSDM     := $(DIR)/lib$(MODNAME)$(LIBEXT)

RUN_SSDM_OBJ := $(DIR)/run_SSDM.o
RUN_SSDM_EXE := $(DIR)/run_SSDM.x

RUN_CMD_LINE_SSDM_OBJ := $(DIR)/run_cmd_line_SSDM.o
RUN_CMD_LINE_SSDM_EXE := $(DIR)/run_cmd_line_SSDM.x

SCAN_SSDM_OBJ := $(DIR)/scan_SSDM.o
SCAN_SSDM_EXE := $(DIR)/scan_SSDM.x

METACODE_STAMP_SSDM := $(DIR)/00_DELETE_ME_TO_RERUN_METACODE

ifeq ($(ENABLE_META),yes)
SARAH_MODEL_FILES_SSDM := \
		$(shell $(SARAH_DEP_GEN) $(SARAH_MODEL))
endif

.PHONY:         all-$(MODNAME) clean-$(MODNAME) clean-$(MODNAME)-src \
		clean-$(MODNAME)-dep clean-$(MODNAME)-obj \
		distclean-$(MODNAME) run-metacode-$(MODNAME) \
		pack-$(MODNAME)-src

all-$(MODNAME): $(LIBSSDM)

ifneq ($(INSTALL_DIR),)
install-src::
		install -d $(SSDM_INSTALL_DIR)
		install -m u=rw,g=r,o=r $(LIBSSDM_SRC) $(SSDM_INSTALL_DIR)
		install -m u=rw,g=r,o=r $(LIBSSDM_HDR) $(SSDM_INSTALL_DIR)
		install -m u=rw,g=r,o=r $(EXESSDM_SRC) $(SSDM_INSTALL_DIR)
		$(INSTALL_STRIPPED) $(SSDM_MK) $(SSDM_INSTALL_DIR) -m u=rw,g=r,o=r
		install -m u=rw,g=r,o=r $(SSDM_TWO_SCALE_MK) $(SSDM_INSTALL_DIR)
ifneq ($(SSDM_SLHA_INPUT),)
		install -m u=rw,g=r,o=r $(SSDM_SLHA_INPUT) $(SSDM_INSTALL_DIR)
endif
		install -m u=rw,g=r,o=r $(SSDM_GNUPLOT) $(SSDM_INSTALL_DIR)
endif

clean-$(MODNAME)-dep:
		-rm -f $(LIBSSDM_DEP)
		-rm -f $(EXESSDM_DEP)

clean-$(MODNAME)-obj:
		-rm -f $(LIBSSDM_OBJ)
		-rm -f $(EXESSDM_OBJ)

# BEGIN: NOT EXPORTED ##########################################
clean-$(MODNAME)-src:
		-rm -f $(LIBSSDM_SRC)
		-rm -f $(LIBSSDM_HDR)
		-rm -f $(EXESSDM_SRC)
		-rm -f $(METACODE_STAMP_SSDM)
		-rm -f $(SSDM_TWO_SCALE_MK)
		-rm -f $(SSDM_GNUPLOT)

clean-$(MODNAME): clean-$(MODNAME)-src
# END:   NOT EXPORTED ##########################################

clean-$(MODNAME): clean-$(MODNAME)-dep clean-$(MODNAME)-obj
		-rm -f $(LIBSSDM)
		-rm -f $(RUN_SSDM_EXE)
		-rm -f $(RUN_CMD_LINE_SSDM_EXE)
		-rm -f $(SCAN_SSDM_EXE)

distclean-$(MODNAME): clean-$(MODNAME)

clean::         clean-$(MODNAME)

distclean::     distclean-$(MODNAME)

pack-$(MODNAME)-src:
		tar -czf $(SSDM_TARBALL) \
		$(LIBSSDM_SRC) $(LIBSSDM_HDR) \
		$(EXESSDM_SRC) \
		$(SSDM_MK) $(SSDM_TWO_SCALE_MK) \
		$(SSDM_SLHA_INPUT) $(SSDM_GNUPLOT)

$(LIBSSDM_SRC) $(LIBSSDM_HDR) $(EXESSDM_SRC) \
: run-metacode-$(MODNAME)
		@true

run-metacode-$(MODNAME): $(METACODE_STAMP_SSDM)
		@true

ifeq ($(ENABLE_META),yes)
$(METACODE_STAMP_SSDM): $(DIR)/start.m $(DIR)/FlexibleSUSY.m $(META_SRC) $(TEMPLATES) $(SARAH_MODEL_FILES_SSDM)
		"$(MATH)" -run "Get[\"$<\"]; Quit[]"
		@touch "$(METACODE_STAMP_SSDM)"
		@echo "Note: to regenerate SSDM source files," \
		      "please remove the file "
		@echo "\"$(METACODE_STAMP_SSDM)\" and run make"
		@echo "---------------------------------"
else
$(METACODE_STAMP_SSDM):
		@true
endif

$(LIBSSDM_DEP) $(EXESSDM_DEP) $(LIBSSDM_OBJ) $(EXESSDM_OBJ): CPPFLAGS += $(GSLFLAGS) $(EIGENFLAGS) $(BOOSTFLAGS)

ifneq (,$(findstring yes,$(ENABLE_LOOPTOOLS)$(ENABLE_FFLITE)))
$(LIBSSDM_DEP) $(EXESSDM_DEP) $(LIBSSDM_OBJ) $(EXESSDM_OBJ): CPPFLAGS += $(LOOPFUNCFLAGS)
endif

$(LIBSSDM): $(LIBSSDM_OBJ)
		$(MAKELIB) $@ $^

$(RUN_SSDM_EXE): $(RUN_SSDM_OBJ) $(LIBSSDM) $(LIBFLEXI) $(LIBLEGACY) $(filter-out -%,$(LOOPFUNCLIBS))
		$(CXX) -o $@ $(call abspathx,$^) $(filter -%,$(LOOPFUNCLIBS)) $(GSLLIBS) $(BOOSTTHREADLIBS) $(THREADLIBS) $(LAPACKLIBS) $(BLASLIBS) $(FLIBS)

$(RUN_CMD_LINE_SSDM_EXE): $(RUN_CMD_LINE_SSDM_OBJ) $(LIBSSDM) $(LIBFLEXI) $(LIBLEGACY) $(filter-out -%,$(LOOPFUNCLIBS))
		$(CXX) -o $@ $(call abspathx,$^) $(filter -%,$(LOOPFUNCLIBS)) $(GSLLIBS) $(BOOSTTHREADLIBS) $(THREADLIBS) $(LAPACKLIBS) $(BLASLIBS) $(FLIBS)

$(SCAN_SSDM_EXE): $(SCAN_SSDM_OBJ) $(LIBSSDM) $(LIBFLEXI) $(LIBLEGACY) $(filter-out -%,$(LOOPFUNCLIBS))
		$(CXX) -o $@ $(call abspathx,$^) $(filter -%,$(LOOPFUNCLIBS)) $(GSLLIBS) $(BOOSTTHREADLIBS) $(THREADLIBS) $(LAPACKLIBS) $(BLASLIBS) $(FLIBS)

ALLDEP += $(LIBSSDM_DEP) $(EXESSDM_DEP)
ALLSRC += $(LIBSSDM_SRC) $(EXESSDM_SRC)
ALLLIB += $(LIBSSDM)
ALLEXE += $(RUN_SSDM_EXE) $(RUN_CMD_LINE_SSDM_EXE) $(SCAN_SSDM_EXE)
