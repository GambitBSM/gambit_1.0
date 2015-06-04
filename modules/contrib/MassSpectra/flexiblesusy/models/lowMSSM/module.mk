DIR          := models/lowMSSM
MODNAME      := lowMSSM
SARAH_MODEL  := MSSM

lowMSSM_INSTALL_DIR := $(INSTALL_DIR)/$(DIR)

lowMSSM_MK     := \
		$(DIR)/module.mk

lowMSSM_TWO_SCALE_SUSY_MK := \
		$(DIR)/two_scale_susy.mk

lowMSSM_TWO_SCALE_SOFT_MK := \
		$(DIR)/two_scale_soft.mk

lowMSSM_TWO_SCALE_MK := \
		$(lowMSSM_TWO_SCALE_SUSY_MK) \
		$(lowMSSM_TWO_SCALE_SOFT_MK)

lowMSSM_SLHA_INPUT := \
		$(DIR)/LesHouches.in.lowMSSM

lowMSSM_GNUPLOT := \
		$(DIR)/lowMSSM_plot_rgflow.gnuplot \
		$(DIR)/lowMSSM_plot_spectrum.gnuplot

lowMSSM_TARBALL := \
		$(MODNAME).tar.gz

LIBlowMSSM_SRC :=
EXElowMSSM_SRC :=

LIBlowMSSM_HDR :=

ifneq ($(findstring two_scale,$(ALGORITHMS)),)
LIBlowMSSM_SRC += \
		$(DIR)/lowMSSM_mass_eigenstates.cpp \
		$(DIR)/lowMSSM_info.cpp \
		$(DIR)/lowMSSM_input_parameters.cpp \
		$(DIR)/lowMSSM_slha_io.cpp \
		$(DIR)/lowMSSM_physical.cpp \
		$(DIR)/lowMSSM_utilities.cpp \
		$(DIR)/lowMSSM_two_scale_convergence_tester.cpp \
		$(DIR)/lowMSSM_two_scale_high_scale_constraint.cpp \
		$(DIR)/lowMSSM_two_scale_initial_guesser.cpp \
		$(DIR)/lowMSSM_two_scale_low_scale_constraint.cpp \
		$(DIR)/lowMSSM_two_scale_model.cpp \
		$(DIR)/lowMSSM_two_scale_model_slha.cpp \
		$(DIR)/lowMSSM_two_scale_susy_parameters.cpp \
		$(DIR)/lowMSSM_two_scale_soft_parameters.cpp \
		$(DIR)/lowMSSM_two_scale_susy_scale_constraint.cpp
EXElowMSSM_SRC += \
		$(DIR)/run_lowMSSM.cpp \
		$(DIR)/run_cmd_line_lowMSSM.cpp \
		$(DIR)/scan_lowMSSM.cpp
LIBlowMSSM_HDR += \
		$(DIR)/lowMSSM_convergence_tester.hpp \
		$(DIR)/lowMSSM_high_scale_constraint.hpp \
		$(DIR)/lowMSSM_mass_eigenstates.hpp \
		$(DIR)/lowMSSM_info.hpp \
		$(DIR)/lowMSSM_initial_guesser.hpp \
		$(DIR)/lowMSSM_input_parameters.hpp \
		$(DIR)/lowMSSM_low_scale_constraint.hpp \
		$(DIR)/lowMSSM_model.hpp \
		$(DIR)/lowMSSM_model_slha.hpp \
		$(DIR)/lowMSSM_physical.hpp \
		$(DIR)/lowMSSM_slha_io.hpp \
		$(DIR)/lowMSSM_spectrum_generator.hpp \
		$(DIR)/lowMSSM_susy_scale_constraint.hpp \
		$(DIR)/lowMSSM_utilities.hpp \
		$(DIR)/lowMSSM_two_scale_convergence_tester.hpp \
		$(DIR)/lowMSSM_two_scale_high_scale_constraint.hpp \
		$(DIR)/lowMSSM_two_scale_initial_guesser.hpp \
		$(DIR)/lowMSSM_two_scale_low_scale_constraint.hpp \
		$(DIR)/lowMSSM_two_scale_model.hpp \
		$(DIR)/lowMSSM_two_scale_model_slha.hpp \
		$(DIR)/lowMSSM_two_scale_soft_parameters.hpp \
		$(DIR)/lowMSSM_two_scale_susy_parameters.hpp \
		$(DIR)/lowMSSM_two_scale_susy_scale_constraint.hpp

ifneq ($(MAKECMDGOALS),showbuild)
ifneq ($(MAKECMDGOALS),tag)
ifneq ($(MAKECMDGOALS),release)
ifneq ($(MAKECMDGOALS),doc)
-include $(lowMSSM_TWO_SCALE_SUSY_MK)
-include $(lowMSSM_TWO_SCALE_SOFT_MK)
ifneq ($(MAKECMDGOALS),clean)
ifneq ($(MAKECMDGOALS),distclean)
ifneq ($(MAKECMDGOALS),pack-$(MODNAME)-src)
ifeq ($(findstring clean-,$(MAKECMDGOALS)),)
ifeq ($(findstring distclean-,$(MAKECMDGOALS)),)
ifeq ($(findstring doc-,$(MAKECMDGOALS)),)
$(lowMSSM_TWO_SCALE_SUSY_MK): run-metacode-$(MODNAME)
		@$(CONVERT_DOS_PATHS) $@
$(lowMSSM_TWO_SCALE_SOFT_MK): run-metacode-$(MODNAME)
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
LIBlowMSSM_SRC := $(sort $(LIBlowMSSM_SRC))
EXElowMSSM_SRC := $(sort $(EXElowMSSM_SRC))

LIBlowMSSM_OBJ := \
		$(patsubst %.cpp, %.o, $(filter %.cpp, $(LIBlowMSSM_SRC))) \
		$(patsubst %.f, %.o, $(filter %.f, $(LIBlowMSSM_SRC)))

EXElowMSSM_OBJ := \
		$(patsubst %.cpp, %.o, $(filter %.cpp, $(EXElowMSSM_SRC))) \
		$(patsubst %.f, %.o, $(filter %.f, $(EXElowMSSM_SRC)))

LIBlowMSSM_DEP := \
		$(LIBlowMSSM_OBJ:.o=.d)

EXElowMSSM_DEP := \
		$(EXElowMSSM_OBJ:.o=.d)

LIBlowMSSM     := $(DIR)/lib$(MODNAME)$(LIBEXT)

RUN_lowMSSM_OBJ := $(DIR)/run_lowMSSM.o
RUN_lowMSSM_EXE := $(DIR)/run_lowMSSM.x

RUN_CMD_LINE_lowMSSM_OBJ := $(DIR)/run_cmd_line_lowMSSM.o
RUN_CMD_LINE_lowMSSM_EXE := $(DIR)/run_cmd_line_lowMSSM.x

SCAN_lowMSSM_OBJ := $(DIR)/scan_lowMSSM.o
SCAN_lowMSSM_EXE := $(DIR)/scan_lowMSSM.x

METACODE_STAMP_lowMSSM := $(DIR)/00_DELETE_ME_TO_RERUN_METACODE

ifeq ($(ENABLE_META),yes)
SARAH_MODEL_FILES_lowMSSM := \
		$(shell $(SARAH_DEP_GEN) $(SARAH_MODEL))
endif

.PHONY:         all-$(MODNAME) clean-$(MODNAME) clean-$(MODNAME)-src \
		clean-$(MODNAME)-dep clean-$(MODNAME)-obj \
		distclean-$(MODNAME) run-metacode-$(MODNAME) \
		pack-$(MODNAME)-src

all-$(MODNAME): $(LIBlowMSSM)

ifneq ($(INSTALL_DIR),)
install-src::
		install -d $(lowMSSM_INSTALL_DIR)
		install -m u=rw,g=r,o=r $(LIBlowMSSM_SRC) $(lowMSSM_INSTALL_DIR)
		install -m u=rw,g=r,o=r $(LIBlowMSSM_HDR) $(lowMSSM_INSTALL_DIR)
		install -m u=rw,g=r,o=r $(EXElowMSSM_SRC) $(lowMSSM_INSTALL_DIR)
		$(INSTALL_STRIPPED) $(lowMSSM_MK) $(lowMSSM_INSTALL_DIR) -m u=rw,g=r,o=r
		install -m u=rw,g=r,o=r $(lowMSSM_TWO_SCALE_MK) $(lowMSSM_INSTALL_DIR)
ifneq ($(lowMSSM_SLHA_INPUT),)
		install -m u=rw,g=r,o=r $(lowMSSM_SLHA_INPUT) $(lowMSSM_INSTALL_DIR)
endif
		install -m u=rw,g=r,o=r $(lowMSSM_GNUPLOT) $(lowMSSM_INSTALL_DIR)
endif

clean-$(MODNAME)-dep:
		-rm -f $(LIBlowMSSM_DEP)
		-rm -f $(EXElowMSSM_DEP)

clean-$(MODNAME)-obj:
		-rm -f $(LIBlowMSSM_OBJ)
		-rm -f $(EXElowMSSM_OBJ)


clean-$(MODNAME): clean-$(MODNAME)-dep clean-$(MODNAME)-obj
		-rm -f $(LIBlowMSSM)
		-rm -f $(RUN_lowMSSM_EXE)
		-rm -f $(RUN_CMD_LINE_lowMSSM_EXE)
		-rm -f $(SCAN_lowMSSM_EXE)

distclean-$(MODNAME): clean-$(MODNAME)

clean::         clean-$(MODNAME)

distclean::     distclean-$(MODNAME)

pack-$(MODNAME)-src:
		tar -czf $(lowMSSM_TARBALL) \
		$(LIBlowMSSM_SRC) $(LIBlowMSSM_HDR) \
		$(EXElowMSSM_SRC) \
		$(lowMSSM_MK) $(lowMSSM_TWO_SCALE_MK) \
		$(lowMSSM_SLHA_INPUT) $(lowMSSM_GNUPLOT)

$(LIBlowMSSM_SRC) $(LIBlowMSSM_HDR) $(EXElowMSSM_SRC) \
: run-metacode-$(MODNAME)
		@true

run-metacode-$(MODNAME): $(METACODE_STAMP_lowMSSM)
		@true

ifeq ($(ENABLE_META),yes)
$(METACODE_STAMP_lowMSSM): $(DIR)/start.m $(DIR)/FlexibleSUSY.m $(META_SRC) $(TEMPLATES) $(SARAH_MODEL_FILES_lowMSSM)
		"$(MATH)" -run "Get[\"$<\"]; Quit[]"
		@touch "$(METACODE_STAMP_lowMSSM)"
		@echo "Note: to regenerate lowMSSM source files," \
		      "please remove the file "
		@echo "\"$(METACODE_STAMP_lowMSSM)\" and run make"
		@echo "---------------------------------"
else
$(METACODE_STAMP_lowMSSM):
		@true
endif

$(LIBlowMSSM_DEP) $(EXElowMSSM_DEP) $(LIBlowMSSM_OBJ) $(EXElowMSSM_OBJ): CPPFLAGS += $(GSLFLAGS) $(EIGENFLAGS) $(BOOSTFLAGS)

ifneq (,$(findstring yes,$(ENABLE_LOOPTOOLS)$(ENABLE_FFLITE)))
$(LIBlowMSSM_DEP) $(EXElowMSSM_DEP) $(LIBlowMSSM_OBJ) $(EXElowMSSM_OBJ): CPPFLAGS += $(LOOPFUNCFLAGS)
endif

$(LIBlowMSSM): $(LIBlowMSSM_OBJ)
		$(MAKELIB) $@ $^

$(RUN_lowMSSM_EXE): $(RUN_lowMSSM_OBJ) $(LIBlowMSSM) $(LIBFLEXI) $(LIBLEGACY) $(filter-out -%,$(LOOPFUNCLIBS))
		$(CXX) -o $@ $(call abspathx,$^) $(filter -%,$(LOOPFUNCLIBS)) $(GSLLIBS) $(BOOSTTHREADLIBS) $(THREADLIBS) $(LAPACKLIBS) $(BLASLIBS) $(FLIBS)

$(RUN_CMD_LINE_lowMSSM_EXE): $(RUN_CMD_LINE_lowMSSM_OBJ) $(LIBlowMSSM) $(LIBFLEXI) $(LIBLEGACY) $(filter-out -%,$(LOOPFUNCLIBS))
		$(CXX) -o $@ $(call abspathx,$^) $(filter -%,$(LOOPFUNCLIBS)) $(GSLLIBS) $(BOOSTTHREADLIBS) $(THREADLIBS) $(LAPACKLIBS) $(BLASLIBS) $(FLIBS)

$(SCAN_lowMSSM_EXE): $(SCAN_lowMSSM_OBJ) $(LIBlowMSSM) $(LIBFLEXI) $(LIBLEGACY) $(filter-out -%,$(LOOPFUNCLIBS))
		$(CXX) -o $@ $(call abspathx,$^) $(filter -%,$(LOOPFUNCLIBS)) $(GSLLIBS) $(BOOSTTHREADLIBS) $(THREADLIBS) $(LAPACKLIBS) $(BLASLIBS) $(FLIBS)

ALLDEP += $(LIBlowMSSM_DEP) $(EXElowMSSM_DEP)
ALLSRC += $(LIBlowMSSM_SRC) $(EXElowMSSM_SRC)
ALLLIB += $(LIBlowMSSM)
ALLEXE += $(RUN_lowMSSM_EXE) $(RUN_CMD_LINE_lowMSSM_EXE) $(SCAN_lowMSSM_EXE)
