DIR          := models/NSM
MODNAME      := NSM
SARAH_MODEL  := NSM

NSM_INSTALL_DIR := $(INSTALL_DIR)/$(DIR)

NSM_MK     := \
		$(DIR)/module.mk

NSM_TWO_SCALE_SUSY_MK := \
		$(DIR)/two_scale_susy.mk

NSM_TWO_SCALE_SOFT_MK := \
		$(DIR)/two_scale_soft.mk

NSM_TWO_SCALE_MK := \
		$(NSM_TWO_SCALE_SUSY_MK) \
		$(NSM_TWO_SCALE_SOFT_MK)

NSM_SLHA_INPUT := \
		$(DIR)/LesHouches.in.NSM

NSM_GNUPLOT := \
		$(DIR)/NSM_plot_rgflow.gnuplot \
		$(DIR)/NSM_plot_spectrum.gnuplot

NSM_TARBALL := \
		$(MODNAME).tar.gz

LIBNSM_SRC :=
EXENSM_SRC :=

LIBNSM_HDR :=

ifneq ($(findstring two_scale,$(ALGORITHMS)),)
LIBNSM_SRC += \
		$(DIR)/NSM_mass_eigenstates.cpp \
		$(DIR)/NSM_info.cpp \
		$(DIR)/NSM_input_parameters.cpp \
		$(DIR)/NSM_slha_io.cpp \
		$(DIR)/NSM_physical.cpp \
		$(DIR)/NSM_utilities.cpp \
		$(DIR)/NSM_two_scale_convergence_tester.cpp \
		$(DIR)/NSM_two_scale_high_scale_constraint.cpp \
		$(DIR)/NSM_two_scale_initial_guesser.cpp \
		$(DIR)/NSM_two_scale_low_scale_constraint.cpp \
		$(DIR)/NSM_two_scale_model.cpp \
		$(DIR)/NSM_two_scale_model_slha.cpp \
		$(DIR)/NSM_two_scale_susy_parameters.cpp \
		$(DIR)/NSM_two_scale_soft_parameters.cpp \
		$(DIR)/NSM_two_scale_susy_scale_constraint.cpp
EXENSM_SRC += \
		$(DIR)/run_NSM.cpp \
		$(DIR)/run_cmd_line_NSM.cpp \
		$(DIR)/scan_NSM.cpp
LIBNSM_HDR += \
		$(DIR)/NSM_convergence_tester.hpp \
		$(DIR)/NSM_high_scale_constraint.hpp \
		$(DIR)/NSM_mass_eigenstates.hpp \
		$(DIR)/NSM_info.hpp \
		$(DIR)/NSM_initial_guesser.hpp \
		$(DIR)/NSM_input_parameters.hpp \
		$(DIR)/NSM_low_scale_constraint.hpp \
		$(DIR)/NSM_model.hpp \
		$(DIR)/NSM_model_slha.hpp \
		$(DIR)/NSM_physical.hpp \
		$(DIR)/NSM_slha_io.hpp \
		$(DIR)/NSM_spectrum_generator.hpp \
		$(DIR)/NSM_susy_scale_constraint.hpp \
		$(DIR)/NSM_utilities.hpp \
		$(DIR)/NSM_two_scale_convergence_tester.hpp \
		$(DIR)/NSM_two_scale_high_scale_constraint.hpp \
		$(DIR)/NSM_two_scale_initial_guesser.hpp \
		$(DIR)/NSM_two_scale_low_scale_constraint.hpp \
		$(DIR)/NSM_two_scale_model.hpp \
		$(DIR)/NSM_two_scale_model_slha.hpp \
		$(DIR)/NSM_two_scale_soft_parameters.hpp \
		$(DIR)/NSM_two_scale_susy_parameters.hpp \
		$(DIR)/NSM_two_scale_susy_scale_constraint.hpp

ifneq ($(MAKECMDGOALS),showbuild)
ifneq ($(MAKECMDGOALS),tag)
ifneq ($(MAKECMDGOALS),release)
ifneq ($(MAKECMDGOALS),doc)
-include $(NSM_TWO_SCALE_SUSY_MK)
-include $(NSM_TWO_SCALE_SOFT_MK)
ifneq ($(MAKECMDGOALS),clean)
ifneq ($(MAKECMDGOALS),distclean)
ifneq ($(MAKECMDGOALS),pack-$(MODNAME)-src)
ifeq ($(findstring clean-,$(MAKECMDGOALS)),)
ifeq ($(findstring distclean-,$(MAKECMDGOALS)),)
ifeq ($(findstring doc-,$(MAKECMDGOALS)),)
$(NSM_TWO_SCALE_SUSY_MK): run-metacode-$(MODNAME)
		@$(CONVERT_DOS_PATHS) $@
$(NSM_TWO_SCALE_SOFT_MK): run-metacode-$(MODNAME)
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
LIBNSM_SRC := $(sort $(LIBNSM_SRC))
EXENSM_SRC := $(sort $(EXENSM_SRC))

LIBNSM_OBJ := \
		$(patsubst %.cpp, %.o, $(filter %.cpp, $(LIBNSM_SRC))) \
		$(patsubst %.f, %.o, $(filter %.f, $(LIBNSM_SRC)))

EXENSM_OBJ := \
		$(patsubst %.cpp, %.o, $(filter %.cpp, $(EXENSM_SRC))) \
		$(patsubst %.f, %.o, $(filter %.f, $(EXENSM_SRC)))

LIBNSM_DEP := \
		$(LIBNSM_OBJ:.o=.d)

EXENSM_DEP := \
		$(EXENSM_OBJ:.o=.d)

LIBNSM     := $(DIR)/lib$(MODNAME)$(LIBEXT)

RUN_NSM_OBJ := $(DIR)/run_NSM.o
RUN_NSM_EXE := $(DIR)/run_NSM.x

RUN_CMD_LINE_NSM_OBJ := $(DIR)/run_cmd_line_NSM.o
RUN_CMD_LINE_NSM_EXE := $(DIR)/run_cmd_line_NSM.x

SCAN_NSM_OBJ := $(DIR)/scan_NSM.o
SCAN_NSM_EXE := $(DIR)/scan_NSM.x

METACODE_STAMP_NSM := $(DIR)/00_DELETE_ME_TO_RERUN_METACODE

ifeq ($(ENABLE_META),yes)
SARAH_MODEL_FILES_NSM := \
		$(shell $(SARAH_DEP_GEN) $(SARAH_MODEL))
endif

.PHONY:         all-$(MODNAME) clean-$(MODNAME) clean-$(MODNAME)-src \
		clean-$(MODNAME)-dep clean-$(MODNAME)-obj \
		distclean-$(MODNAME) run-metacode-$(MODNAME) \
		pack-$(MODNAME)-src

all-$(MODNAME): $(LIBNSM)

ifneq ($(INSTALL_DIR),)
install-src::
		install -d $(NSM_INSTALL_DIR)
		install -m u=rw,g=r,o=r $(LIBNSM_SRC) $(NSM_INSTALL_DIR)
		install -m u=rw,g=r,o=r $(LIBNSM_HDR) $(NSM_INSTALL_DIR)
		install -m u=rw,g=r,o=r $(EXENSM_SRC) $(NSM_INSTALL_DIR)
		$(INSTALL_STRIPPED) $(NSM_MK) $(NSM_INSTALL_DIR) -m u=rw,g=r,o=r
		install -m u=rw,g=r,o=r $(NSM_TWO_SCALE_MK) $(NSM_INSTALL_DIR)
ifneq ($(NSM_SLHA_INPUT),)
		install -m u=rw,g=r,o=r $(NSM_SLHA_INPUT) $(NSM_INSTALL_DIR)
endif
		install -m u=rw,g=r,o=r $(NSM_GNUPLOT) $(NSM_INSTALL_DIR)
endif

clean-$(MODNAME)-dep:
		-rm -f $(LIBNSM_DEP)
		-rm -f $(EXENSM_DEP)

clean-$(MODNAME)-obj:
		-rm -f $(LIBNSM_OBJ)
		-rm -f $(EXENSM_OBJ)


clean-$(MODNAME): clean-$(MODNAME)-dep clean-$(MODNAME)-obj
		-rm -f $(LIBNSM)
		-rm -f $(RUN_NSM_EXE)
		-rm -f $(RUN_CMD_LINE_NSM_EXE)
		-rm -f $(SCAN_NSM_EXE)

distclean-$(MODNAME): clean-$(MODNAME)

clean::         clean-$(MODNAME)

distclean::     distclean-$(MODNAME)

pack-$(MODNAME)-src:
		tar -czf $(NSM_TARBALL) \
		$(LIBNSM_SRC) $(LIBNSM_HDR) \
		$(EXENSM_SRC) \
		$(NSM_MK) $(NSM_TWO_SCALE_MK) \
		$(NSM_SLHA_INPUT) $(NSM_GNUPLOT)

$(LIBNSM_SRC) $(LIBNSM_HDR) $(EXENSM_SRC) \
: run-metacode-$(MODNAME)
		@true

run-metacode-$(MODNAME): $(METACODE_STAMP_NSM)
		@true

ifeq ($(ENABLE_META),yes)
$(METACODE_STAMP_NSM): $(DIR)/start.m $(DIR)/FlexibleSUSY.m $(META_SRC) $(TEMPLATES) $(SARAH_MODEL_FILES_NSM)
		"$(MATH)" -run "Get[\"$<\"]; Quit[]"
		@touch "$(METACODE_STAMP_NSM)"
		@echo "Note: to regenerate NSM source files," \
		      "please remove the file "
		@echo "\"$(METACODE_STAMP_NSM)\" and run make"
		@echo "---------------------------------"
else
$(METACODE_STAMP_NSM):
		@true
endif

$(LIBNSM_DEP) $(EXENSM_DEP) $(LIBNSM_OBJ) $(EXENSM_OBJ): CPPFLAGS += $(GSLFLAGS) $(EIGENFLAGS) $(BOOSTFLAGS)

ifneq (,$(findstring yes,$(ENABLE_LOOPTOOLS)$(ENABLE_FFLITE)))
$(LIBNSM_DEP) $(EXENSM_DEP) $(LIBNSM_OBJ) $(EXENSM_OBJ): CPPFLAGS += $(LOOPFUNCFLAGS)
endif

$(LIBNSM): $(LIBNSM_OBJ)
		$(MAKELIB) $@ $^

$(RUN_NSM_EXE): $(RUN_NSM_OBJ) $(LIBNSM) $(LIBFLEXI) $(LIBLEGACY) $(filter-out -%,$(LOOPFUNCLIBS))
		$(CXX) -o $@ $(call abspathx,$^) $(filter -%,$(LOOPFUNCLIBS)) $(GSLLIBS) $(BOOSTTHREADLIBS) $(THREADLIBS) $(LAPACKLIBS) $(BLASLIBS) $(FLIBS)

$(RUN_CMD_LINE_NSM_EXE): $(RUN_CMD_LINE_NSM_OBJ) $(LIBNSM) $(LIBFLEXI) $(LIBLEGACY) $(filter-out -%,$(LOOPFUNCLIBS))
		$(CXX) -o $@ $(call abspathx,$^) $(filter -%,$(LOOPFUNCLIBS)) $(GSLLIBS) $(BOOSTTHREADLIBS) $(THREADLIBS) $(LAPACKLIBS) $(BLASLIBS) $(FLIBS)

$(SCAN_NSM_EXE): $(SCAN_NSM_OBJ) $(LIBNSM) $(LIBFLEXI) $(LIBLEGACY) $(filter-out -%,$(LOOPFUNCLIBS))
		$(CXX) -o $@ $(call abspathx,$^) $(filter -%,$(LOOPFUNCLIBS)) $(GSLLIBS) $(BOOSTTHREADLIBS) $(THREADLIBS) $(LAPACKLIBS) $(BLASLIBS) $(FLIBS)

ALLDEP += $(LIBNSM_DEP) $(EXENSM_DEP)
ALLSRC += $(LIBNSM_SRC) $(EXENSM_SRC)
ALLLIB += $(LIBNSM)
ALLEXE += $(RUN_NSM_EXE) $(RUN_CMD_LINE_NSM_EXE) $(SCAN_NSM_EXE)
