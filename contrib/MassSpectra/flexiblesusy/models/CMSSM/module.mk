DIR          := models/CMSSM
MODNAME      := CMSSM
SARAH_MODEL  := MSSM

CMSSM_INSTALL_DIR := $(INSTALL_DIR)/$(DIR)

CMSSM_MK     := \
		$(DIR)/module.mk

CMSSM_TWO_SCALE_SUSY_MK := \
		$(DIR)/two_scale_susy.mk

CMSSM_TWO_SCALE_SOFT_MK := \
		$(DIR)/two_scale_soft.mk

CMSSM_TWO_SCALE_MK := \
		$(CMSSM_TWO_SCALE_SUSY_MK) \
		$(CMSSM_TWO_SCALE_SOFT_MK)

CMSSM_SLHA_INPUT := \
		$(DIR)/LesHouches.in.CMSSM

CMSSM_GNUPLOT := \
		$(DIR)/CMSSM_plot_rgflow.gnuplot \
		$(DIR)/CMSSM_plot_spectrum.gnuplot

CMSSM_TARBALL := \
		$(MODNAME).tar.gz

LIBCMSSM_SRC :=
EXECMSSM_SRC :=

LIBCMSSM_HDR :=

ifneq ($(findstring two_scale,$(ALGORITHMS)),)
LIBCMSSM_SRC += \
		$(DIR)/CMSSM_mass_eigenstates.cpp \
		$(DIR)/CMSSM_info.cpp \
		$(DIR)/CMSSM_input_parameters.cpp \
		$(DIR)/CMSSM_slha_io.cpp \
		$(DIR)/CMSSM_physical.cpp \
		$(DIR)/CMSSM_utilities.cpp \
		$(DIR)/CMSSM_two_scale_convergence_tester.cpp \
		$(DIR)/CMSSM_two_scale_high_scale_constraint.cpp \
		$(DIR)/CMSSM_two_scale_initial_guesser.cpp \
		$(DIR)/CMSSM_two_scale_low_scale_constraint.cpp \
		$(DIR)/CMSSM_two_scale_model.cpp \
		$(DIR)/CMSSM_two_scale_model_slha.cpp \
		$(DIR)/CMSSM_two_scale_susy_parameters.cpp \
		$(DIR)/CMSSM_two_scale_soft_parameters.cpp \
		$(DIR)/CMSSM_two_scale_susy_scale_constraint.cpp
EXECMSSM_SRC += \
		$(DIR)/run_CMSSM.cpp \
		$(DIR)/run_cmd_line_CMSSM.cpp \
		$(DIR)/scan_CMSSM.cpp
LIBCMSSM_HDR += \
		$(DIR)/CMSSM_convergence_tester.hpp \
		$(DIR)/CMSSM_high_scale_constraint.hpp \
		$(DIR)/CMSSM_mass_eigenstates.hpp \
		$(DIR)/CMSSM_info.hpp \
		$(DIR)/CMSSM_initial_guesser.hpp \
		$(DIR)/CMSSM_input_parameters.hpp \
		$(DIR)/CMSSM_low_scale_constraint.hpp \
		$(DIR)/CMSSM_model.hpp \
		$(DIR)/CMSSM_model_slha.hpp \
		$(DIR)/CMSSM_physical.hpp \
		$(DIR)/CMSSM_slha_io.hpp \
		$(DIR)/CMSSM_spectrum_generator.hpp \
		$(DIR)/CMSSM_susy_scale_constraint.hpp \
		$(DIR)/CMSSM_utilities.hpp \
		$(DIR)/CMSSM_two_scale_convergence_tester.hpp \
		$(DIR)/CMSSM_two_scale_high_scale_constraint.hpp \
		$(DIR)/CMSSM_two_scale_initial_guesser.hpp \
		$(DIR)/CMSSM_two_scale_low_scale_constraint.hpp \
		$(DIR)/CMSSM_two_scale_model.hpp \
		$(DIR)/CMSSM_two_scale_model_slha.hpp \
		$(DIR)/CMSSM_two_scale_soft_parameters.hpp \
		$(DIR)/CMSSM_two_scale_susy_parameters.hpp \
		$(DIR)/CMSSM_two_scale_susy_scale_constraint.hpp

ifneq ($(MAKECMDGOALS),showbuild)
ifneq ($(MAKECMDGOALS),tag)
ifneq ($(MAKECMDGOALS),release)
ifneq ($(MAKECMDGOALS),doc)
-include $(CMSSM_TWO_SCALE_SUSY_MK)
-include $(CMSSM_TWO_SCALE_SOFT_MK)
ifneq ($(MAKECMDGOALS),clean)
ifneq ($(MAKECMDGOALS),distclean)
ifneq ($(MAKECMDGOALS),pack-$(MODNAME)-src)
ifeq ($(findstring clean-,$(MAKECMDGOALS)),)
ifeq ($(findstring distclean-,$(MAKECMDGOALS)),)
ifeq ($(findstring doc-,$(MAKECMDGOALS)),)
$(CMSSM_TWO_SCALE_SUSY_MK): run-metacode-$(MODNAME)
		@$(CONVERT_DOS_PATHS) $@
$(CMSSM_TWO_SCALE_SOFT_MK): run-metacode-$(MODNAME)
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
LIBCMSSM_SRC := $(sort $(LIBCMSSM_SRC))
EXECMSSM_SRC := $(sort $(EXECMSSM_SRC))

LIBCMSSM_OBJ := \
		$(patsubst %.cpp, %.o, $(filter %.cpp, $(LIBCMSSM_SRC))) \
		$(patsubst %.f, %.o, $(filter %.f, $(LIBCMSSM_SRC)))

EXECMSSM_OBJ := \
		$(patsubst %.cpp, %.o, $(filter %.cpp, $(EXECMSSM_SRC))) \
		$(patsubst %.f, %.o, $(filter %.f, $(EXECMSSM_SRC)))

LIBCMSSM_DEP := \
		$(LIBCMSSM_OBJ:.o=.d)

EXECMSSM_DEP := \
		$(EXECMSSM_OBJ:.o=.d)

LIBCMSSM     := $(DIR)/lib$(MODNAME)$(LIBEXT)

RUN_CMSSM_OBJ := $(DIR)/run_CMSSM.o
RUN_CMSSM_EXE := $(DIR)/run_CMSSM.x

RUN_CMD_LINE_CMSSM_OBJ := $(DIR)/run_cmd_line_CMSSM.o
RUN_CMD_LINE_CMSSM_EXE := $(DIR)/run_cmd_line_CMSSM.x

SCAN_CMSSM_OBJ := $(DIR)/scan_CMSSM.o
SCAN_CMSSM_EXE := $(DIR)/scan_CMSSM.x

METACODE_STAMP_CMSSM := $(DIR)/00_DELETE_ME_TO_RERUN_METACODE

ifeq ($(ENABLE_META),yes)
SARAH_MODEL_FILES_CMSSM := \
		$(shell $(SARAH_DEP_GEN) $(SARAH_MODEL))
endif

.PHONY:         all-$(MODNAME) clean-$(MODNAME) clean-$(MODNAME)-src \
		clean-$(MODNAME)-dep clean-$(MODNAME)-obj \
		distclean-$(MODNAME) run-metacode-$(MODNAME) \
		pack-$(MODNAME)-src

all-$(MODNAME): $(LIBCMSSM)

ifneq ($(INSTALL_DIR),)
install-src::
		install -d $(CMSSM_INSTALL_DIR)
		install -m u=rw,g=r,o=r $(LIBCMSSM_SRC) $(CMSSM_INSTALL_DIR)
		install -m u=rw,g=r,o=r $(LIBCMSSM_HDR) $(CMSSM_INSTALL_DIR)
		install -m u=rw,g=r,o=r $(EXECMSSM_SRC) $(CMSSM_INSTALL_DIR)
		$(INSTALL_STRIPPED) $(CMSSM_MK) $(CMSSM_INSTALL_DIR) -m u=rw,g=r,o=r
		install -m u=rw,g=r,o=r $(CMSSM_TWO_SCALE_MK) $(CMSSM_INSTALL_DIR)
ifneq ($(CMSSM_SLHA_INPUT),)
		install -m u=rw,g=r,o=r $(CMSSM_SLHA_INPUT) $(CMSSM_INSTALL_DIR)
endif
		install -m u=rw,g=r,o=r $(CMSSM_GNUPLOT) $(CMSSM_INSTALL_DIR)
endif

clean-$(MODNAME)-dep:
		-rm -f $(LIBCMSSM_DEP)
		-rm -f $(EXECMSSM_DEP)

clean-$(MODNAME)-obj:
		-rm -f $(LIBCMSSM_OBJ)
		-rm -f $(EXECMSSM_OBJ)


clean-$(MODNAME): clean-$(MODNAME)-dep clean-$(MODNAME)-obj
		-rm -f $(LIBCMSSM)
		-rm -f $(RUN_CMSSM_EXE)
		-rm -f $(RUN_CMD_LINE_CMSSM_EXE)
		-rm -f $(SCAN_CMSSM_EXE)

distclean-$(MODNAME): clean-$(MODNAME)

clean::         clean-$(MODNAME)

distclean::     distclean-$(MODNAME)

pack-$(MODNAME)-src:
		tar -czf $(CMSSM_TARBALL) \
		$(LIBCMSSM_SRC) $(LIBCMSSM_HDR) \
		$(EXECMSSM_SRC) \
		$(CMSSM_MK) $(CMSSM_TWO_SCALE_MK) \
		$(CMSSM_SLHA_INPUT) $(CMSSM_GNUPLOT)

$(LIBCMSSM_SRC) $(LIBCMSSM_HDR) $(EXECMSSM_SRC) \
: run-metacode-$(MODNAME)
		@true

run-metacode-$(MODNAME): $(METACODE_STAMP_CMSSM)
		@true

ifeq ($(ENABLE_META),yes)
$(METACODE_STAMP_CMSSM): $(DIR)/start.m $(DIR)/FlexibleSUSY.m $(META_SRC) $(TEMPLATES) $(SARAH_MODEL_FILES_CMSSM)
		"$(MATH)" -run "Get[\"$<\"]; Quit[]"
		@touch "$(METACODE_STAMP_CMSSM)"
		@echo "Note: to regenerate CMSSM source files," \
		      "please remove the file "
		@echo "\"$(METACODE_STAMP_CMSSM)\" and run make"
		@echo "---------------------------------"
else
$(METACODE_STAMP_CMSSM):
		@true
endif

$(LIBCMSSM_DEP) $(EXECMSSM_DEP) $(LIBCMSSM_OBJ) $(EXECMSSM_OBJ): CPPFLAGS += $(GSLFLAGS) $(EIGENFLAGS) $(BOOSTFLAGS)

ifneq (,$(findstring yes,$(ENABLE_LOOPTOOLS)$(ENABLE_FFLITE)))
$(LIBCMSSM_DEP) $(EXECMSSM_DEP) $(LIBCMSSM_OBJ) $(EXECMSSM_OBJ): CPPFLAGS += $(LOOPFUNCFLAGS)
endif

$(LIBCMSSM): $(LIBCMSSM_OBJ)
		$(MAKELIB) $@ $^

$(RUN_CMSSM_EXE): $(RUN_CMSSM_OBJ) $(LIBCMSSM) $(LIBFLEXI) $(LIBLEGACY) $(filter-out -%,$(LOOPFUNCLIBS))
		$(CXX) -o $@ $(call abspathx,$^) $(filter -%,$(LOOPFUNCLIBS)) $(GSLLIBS) $(BOOSTTHREADLIBS) $(THREADLIBS) $(LAPACKLIBS) $(BLASLIBS) $(FLIBS)

$(RUN_CMD_LINE_CMSSM_EXE): $(RUN_CMD_LINE_CMSSM_OBJ) $(LIBCMSSM) $(LIBFLEXI) $(LIBLEGACY) $(filter-out -%,$(LOOPFUNCLIBS))
		$(CXX) -o $@ $(call abspathx,$^) $(filter -%,$(LOOPFUNCLIBS)) $(GSLLIBS) $(BOOSTTHREADLIBS) $(THREADLIBS) $(LAPACKLIBS) $(BLASLIBS) $(FLIBS)

$(SCAN_CMSSM_EXE): $(SCAN_CMSSM_OBJ) $(LIBCMSSM) $(LIBFLEXI) $(LIBLEGACY) $(filter-out -%,$(LOOPFUNCLIBS))
		$(CXX) -o $@ $(call abspathx,$^) $(filter -%,$(LOOPFUNCLIBS)) $(GSLLIBS) $(BOOSTTHREADLIBS) $(THREADLIBS) $(LAPACKLIBS) $(BLASLIBS) $(FLIBS)

ALLDEP += $(LIBCMSSM_DEP) $(EXECMSSM_DEP)
ALLSRC += $(LIBCMSSM_SRC) $(EXECMSSM_SRC)
ALLLIB += $(LIBCMSSM)
ALLEXE += $(RUN_CMSSM_EXE) $(RUN_CMD_LINE_CMSSM_EXE) $(SCAN_CMSSM_EXE)
