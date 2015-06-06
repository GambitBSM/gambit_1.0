DIR          := models/MSSMNoFVatMGUT
MODNAME      := MSSMNoFVatMGUT
SARAH_MODEL  := MSSMNoFV

MSSMNoFVatMGUT_INSTALL_DIR := $(INSTALL_DIR)/$(DIR)

MSSMNoFVatMGUT_MK     := \
		$(DIR)/module.mk

MSSMNoFVatMGUT_TWO_SCALE_SUSY_MK := \
		$(DIR)/two_scale_susy.mk

MSSMNoFVatMGUT_TWO_SCALE_SOFT_MK := \
		$(DIR)/two_scale_soft.mk

MSSMNoFVatMGUT_TWO_SCALE_MK := \
		$(MSSMNoFVatMGUT_TWO_SCALE_SUSY_MK) \
		$(MSSMNoFVatMGUT_TWO_SCALE_SOFT_MK)

MSSMNoFVatMGUT_SLHA_INPUT := \
		$(DIR)/LesHouches.in.MSSMNoFVatMGUT

MSSMNoFVatMGUT_GNUPLOT := \
		$(DIR)/MSSMNoFVatMGUT_plot_rgflow.gnuplot \
		$(DIR)/MSSMNoFVatMGUT_plot_spectrum.gnuplot

MSSMNoFVatMGUT_TARBALL := \
		$(MODNAME).tar.gz

LIBMSSMNoFVatMGUT_SRC :=
EXEMSSMNoFVatMGUT_SRC :=

LIBMSSMNoFVatMGUT_HDR :=

ifneq ($(findstring two_scale,$(ALGORITHMS)),)
LIBMSSMNoFVatMGUT_SRC += \
		$(DIR)/MSSMNoFVatMGUT_mass_eigenstates.cpp \
		$(DIR)/MSSMNoFVatMGUT_info.cpp \
		$(DIR)/MSSMNoFVatMGUT_input_parameters.cpp \
		$(DIR)/MSSMNoFVatMGUT_slha_io.cpp \
		$(DIR)/MSSMNoFVatMGUT_physical.cpp \
		$(DIR)/MSSMNoFVatMGUT_utilities.cpp \
		$(DIR)/MSSMNoFVatMGUT_two_scale_convergence_tester.cpp \
		$(DIR)/MSSMNoFVatMGUT_two_scale_high_scale_constraint.cpp \
		$(DIR)/MSSMNoFVatMGUT_two_scale_initial_guesser.cpp \
		$(DIR)/MSSMNoFVatMGUT_two_scale_low_scale_constraint.cpp \
		$(DIR)/MSSMNoFVatMGUT_two_scale_model.cpp \
		$(DIR)/MSSMNoFVatMGUT_two_scale_model_slha.cpp \
		$(DIR)/MSSMNoFVatMGUT_two_scale_susy_parameters.cpp \
		$(DIR)/MSSMNoFVatMGUT_two_scale_soft_parameters.cpp \
		$(DIR)/MSSMNoFVatMGUT_two_scale_susy_scale_constraint.cpp
EXEMSSMNoFVatMGUT_SRC += \
		$(DIR)/run_MSSMNoFVatMGUT.cpp \
		$(DIR)/run_cmd_line_MSSMNoFVatMGUT.cpp \
		$(DIR)/scan_MSSMNoFVatMGUT.cpp
LIBMSSMNoFVatMGUT_HDR += \
		$(DIR)/MSSMNoFVatMGUT_convergence_tester.hpp \
		$(DIR)/MSSMNoFVatMGUT_high_scale_constraint.hpp \
		$(DIR)/MSSMNoFVatMGUT_mass_eigenstates.hpp \
		$(DIR)/MSSMNoFVatMGUT_info.hpp \
		$(DIR)/MSSMNoFVatMGUT_initial_guesser.hpp \
		$(DIR)/MSSMNoFVatMGUT_input_parameters.hpp \
		$(DIR)/MSSMNoFVatMGUT_low_scale_constraint.hpp \
		$(DIR)/MSSMNoFVatMGUT_model.hpp \
		$(DIR)/MSSMNoFVatMGUT_model_slha.hpp \
		$(DIR)/MSSMNoFVatMGUT_physical.hpp \
		$(DIR)/MSSMNoFVatMGUT_slha_io.hpp \
		$(DIR)/MSSMNoFVatMGUT_spectrum_generator.hpp \
		$(DIR)/MSSMNoFVatMGUT_susy_scale_constraint.hpp \
		$(DIR)/MSSMNoFVatMGUT_utilities.hpp \
		$(DIR)/MSSMNoFVatMGUT_two_scale_convergence_tester.hpp \
		$(DIR)/MSSMNoFVatMGUT_two_scale_high_scale_constraint.hpp \
		$(DIR)/MSSMNoFVatMGUT_two_scale_initial_guesser.hpp \
		$(DIR)/MSSMNoFVatMGUT_two_scale_low_scale_constraint.hpp \
		$(DIR)/MSSMNoFVatMGUT_two_scale_model.hpp \
		$(DIR)/MSSMNoFVatMGUT_two_scale_model_slha.hpp \
		$(DIR)/MSSMNoFVatMGUT_two_scale_soft_parameters.hpp \
		$(DIR)/MSSMNoFVatMGUT_two_scale_susy_parameters.hpp \
		$(DIR)/MSSMNoFVatMGUT_two_scale_susy_scale_constraint.hpp

ifneq ($(MAKECMDGOALS),showbuild)
ifneq ($(MAKECMDGOALS),tag)
ifneq ($(MAKECMDGOALS),release)
ifneq ($(MAKECMDGOALS),doc)
-include $(MSSMNoFVatMGUT_TWO_SCALE_SUSY_MK)
-include $(MSSMNoFVatMGUT_TWO_SCALE_SOFT_MK)
ifneq ($(MAKECMDGOALS),clean)
ifneq ($(MAKECMDGOALS),distclean)
ifneq ($(MAKECMDGOALS),pack-$(MODNAME)-src)
ifeq ($(findstring clean-,$(MAKECMDGOALS)),)
ifeq ($(findstring distclean-,$(MAKECMDGOALS)),)
ifeq ($(findstring doc-,$(MAKECMDGOALS)),)
$(MSSMNoFVatMGUT_TWO_SCALE_SUSY_MK): run-metacode-$(MODNAME)
		@$(CONVERT_DOS_PATHS) $@
$(MSSMNoFVatMGUT_TWO_SCALE_SOFT_MK): run-metacode-$(MODNAME)
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
LIBMSSMNoFVatMGUT_SRC := $(sort $(LIBMSSMNoFVatMGUT_SRC))
EXEMSSMNoFVatMGUT_SRC := $(sort $(EXEMSSMNoFVatMGUT_SRC))

LIBMSSMNoFVatMGUT_OBJ := \
		$(patsubst %.cpp, %.o, $(filter %.cpp, $(LIBMSSMNoFVatMGUT_SRC))) \
		$(patsubst %.f, %.o, $(filter %.f, $(LIBMSSMNoFVatMGUT_SRC)))

EXEMSSMNoFVatMGUT_OBJ := \
		$(patsubst %.cpp, %.o, $(filter %.cpp, $(EXEMSSMNoFVatMGUT_SRC))) \
		$(patsubst %.f, %.o, $(filter %.f, $(EXEMSSMNoFVatMGUT_SRC)))

LIBMSSMNoFVatMGUT_DEP := \
		$(LIBMSSMNoFVatMGUT_OBJ:.o=.d)

EXEMSSMNoFVatMGUT_DEP := \
		$(EXEMSSMNoFVatMGUT_OBJ:.o=.d)

LIBMSSMNoFVatMGUT     := $(DIR)/lib$(MODNAME)$(LIBEXT)

RUN_MSSMNoFVatMGUT_OBJ := $(DIR)/run_MSSMNoFVatMGUT.o
RUN_MSSMNoFVatMGUT_EXE := $(DIR)/run_MSSMNoFVatMGUT.x

RUN_CMD_LINE_MSSMNoFVatMGUT_OBJ := $(DIR)/run_cmd_line_MSSMNoFVatMGUT.o
RUN_CMD_LINE_MSSMNoFVatMGUT_EXE := $(DIR)/run_cmd_line_MSSMNoFVatMGUT.x

SCAN_MSSMNoFVatMGUT_OBJ := $(DIR)/scan_MSSMNoFVatMGUT.o
SCAN_MSSMNoFVatMGUT_EXE := $(DIR)/scan_MSSMNoFVatMGUT.x

METACODE_STAMP_MSSMNoFVatMGUT := $(DIR)/00_DELETE_ME_TO_RERUN_METACODE

ifeq ($(ENABLE_META),yes)
SARAH_MODEL_FILES_MSSMNoFVatMGUT := \
		$(shell $(SARAH_DEP_GEN) $(SARAH_MODEL))
endif

.PHONY:         all-$(MODNAME) clean-$(MODNAME) clean-$(MODNAME)-src \
		clean-$(MODNAME)-dep clean-$(MODNAME)-obj \
		distclean-$(MODNAME) run-metacode-$(MODNAME) \
		pack-$(MODNAME)-src

all-$(MODNAME): $(LIBMSSMNoFVatMGUT)

ifneq ($(INSTALL_DIR),)
install-src::
		install -d $(MSSMNoFVatMGUT_INSTALL_DIR)
		install -m u=rw,g=r,o=r $(LIBMSSMNoFVatMGUT_SRC) $(MSSMNoFVatMGUT_INSTALL_DIR)
		install -m u=rw,g=r,o=r $(LIBMSSMNoFVatMGUT_HDR) $(MSSMNoFVatMGUT_INSTALL_DIR)
		install -m u=rw,g=r,o=r $(EXEMSSMNoFVatMGUT_SRC) $(MSSMNoFVatMGUT_INSTALL_DIR)
		$(INSTALL_STRIPPED) $(MSSMNoFVatMGUT_MK) $(MSSMNoFVatMGUT_INSTALL_DIR) -m u=rw,g=r,o=r
		install -m u=rw,g=r,o=r $(MSSMNoFVatMGUT_TWO_SCALE_MK) $(MSSMNoFVatMGUT_INSTALL_DIR)
ifneq ($(MSSMNoFVatMGUT_SLHA_INPUT),)
		install -m u=rw,g=r,o=r $(MSSMNoFVatMGUT_SLHA_INPUT) $(MSSMNoFVatMGUT_INSTALL_DIR)
endif
		install -m u=rw,g=r,o=r $(MSSMNoFVatMGUT_GNUPLOT) $(MSSMNoFVatMGUT_INSTALL_DIR)
endif

clean-$(MODNAME)-dep:
		-rm -f $(LIBMSSMNoFVatMGUT_DEP)
		-rm -f $(EXEMSSMNoFVatMGUT_DEP)

clean-$(MODNAME)-obj:
		-rm -f $(LIBMSSMNoFVatMGUT_OBJ)
		-rm -f $(EXEMSSMNoFVatMGUT_OBJ)


clean-$(MODNAME): clean-$(MODNAME)-dep clean-$(MODNAME)-obj
		-rm -f $(LIBMSSMNoFVatMGUT)
		-rm -f $(RUN_MSSMNoFVatMGUT_EXE)
		-rm -f $(RUN_CMD_LINE_MSSMNoFVatMGUT_EXE)
		-rm -f $(SCAN_MSSMNoFVatMGUT_EXE)

distclean-$(MODNAME): clean-$(MODNAME)

clean::         clean-$(MODNAME)

distclean::     distclean-$(MODNAME)

pack-$(MODNAME)-src:
		tar -czf $(MSSMNoFVatMGUT_TARBALL) \
		$(LIBMSSMNoFVatMGUT_SRC) $(LIBMSSMNoFVatMGUT_HDR) \
		$(EXEMSSMNoFVatMGUT_SRC) \
		$(MSSMNoFVatMGUT_MK) $(MSSMNoFVatMGUT_TWO_SCALE_MK) \
		$(MSSMNoFVatMGUT_SLHA_INPUT) $(MSSMNoFVatMGUT_GNUPLOT)

$(LIBMSSMNoFVatMGUT_SRC) $(LIBMSSMNoFVatMGUT_HDR) $(EXEMSSMNoFVatMGUT_SRC) \
: run-metacode-$(MODNAME)
		@true

run-metacode-$(MODNAME): $(METACODE_STAMP_MSSMNoFVatMGUT)
		@true

ifeq ($(ENABLE_META),yes)
$(METACODE_STAMP_MSSMNoFVatMGUT): $(DIR)/start.m $(DIR)/FlexibleSUSY.m $(META_SRC) $(TEMPLATES) $(SARAH_MODEL_FILES_MSSMNoFVatMGUT)
		"$(MATH)" -run "Get[\"$<\"]; Quit[]"
		@touch "$(METACODE_STAMP_MSSMNoFVatMGUT)"
		@echo "Note: to regenerate MSSMNoFVatMGUT source files," \
		      "please remove the file "
		@echo "\"$(METACODE_STAMP_MSSMNoFVatMGUT)\" and run make"
		@echo "---------------------------------"
else
$(METACODE_STAMP_MSSMNoFVatMGUT):
		@true
endif

$(LIBMSSMNoFVatMGUT_DEP) $(EXEMSSMNoFVatMGUT_DEP) $(LIBMSSMNoFVatMGUT_OBJ) $(EXEMSSMNoFVatMGUT_OBJ): CPPFLAGS += $(GSLFLAGS) $(EIGENFLAGS) $(BOOSTFLAGS)

ifneq (,$(findstring yes,$(ENABLE_LOOPTOOLS)$(ENABLE_FFLITE)))
$(LIBMSSMNoFVatMGUT_DEP) $(EXEMSSMNoFVatMGUT_DEP) $(LIBMSSMNoFVatMGUT_OBJ) $(EXEMSSMNoFVatMGUT_OBJ): CPPFLAGS += $(LOOPFUNCFLAGS)
endif

$(LIBMSSMNoFVatMGUT): $(LIBMSSMNoFVatMGUT_OBJ)
		$(MAKELIB) $@ $^

$(RUN_MSSMNoFVatMGUT_EXE): $(RUN_MSSMNoFVatMGUT_OBJ) $(LIBMSSMNoFVatMGUT) $(LIBFLEXI) $(LIBLEGACY) $(filter-out -%,$(LOOPFUNCLIBS))
		$(CXX) -o $@ $(call abspathx,$^) $(filter -%,$(LOOPFUNCLIBS)) $(GSLLIBS) $(BOOSTTHREADLIBS) $(THREADLIBS) $(LAPACKLIBS) $(BLASLIBS) $(FLIBS)

$(RUN_CMD_LINE_MSSMNoFVatMGUT_EXE): $(RUN_CMD_LINE_MSSMNoFVatMGUT_OBJ) $(LIBMSSMNoFVatMGUT) $(LIBFLEXI) $(LIBLEGACY) $(filter-out -%,$(LOOPFUNCLIBS))
		$(CXX) -o $@ $(call abspathx,$^) $(filter -%,$(LOOPFUNCLIBS)) $(GSLLIBS) $(BOOSTTHREADLIBS) $(THREADLIBS) $(LAPACKLIBS) $(BLASLIBS) $(FLIBS)

$(SCAN_MSSMNoFVatMGUT_EXE): $(SCAN_MSSMNoFVatMGUT_OBJ) $(LIBMSSMNoFVatMGUT) $(LIBFLEXI) $(LIBLEGACY) $(filter-out -%,$(LOOPFUNCLIBS))
		$(CXX) -o $@ $(call abspathx,$^) $(filter -%,$(LOOPFUNCLIBS)) $(GSLLIBS) $(BOOSTTHREADLIBS) $(THREADLIBS) $(LAPACKLIBS) $(BLASLIBS) $(FLIBS)

ALLDEP += $(LIBMSSMNoFVatMGUT_DEP) $(EXEMSSMNoFVatMGUT_DEP)
ALLSRC += $(LIBMSSMNoFVatMGUT_SRC) $(EXEMSSMNoFVatMGUT_SRC)
ALLLIB += $(LIBMSSMNoFVatMGUT)
ALLEXE += $(RUN_MSSMNoFVatMGUT_EXE) $(RUN_CMD_LINE_MSSMNoFVatMGUT_EXE) $(SCAN_MSSMNoFVatMGUT_EXE)
