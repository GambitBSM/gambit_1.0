DIR          := models/MSSMatMGUT
MODNAME      := MSSMatMGUT
SARAH_MODEL  := MSSM

MSSMatMGUT_INSTALL_DIR := $(INSTALL_DIR)/$(DIR)

MSSMatMGUT_MK     := \
		$(DIR)/module.mk

MSSMatMGUT_TWO_SCALE_SUSY_MK := \
		$(DIR)/two_scale_susy.mk

MSSMatMGUT_TWO_SCALE_SOFT_MK := \
		$(DIR)/two_scale_soft.mk

MSSMatMGUT_TWO_SCALE_MK := \
		$(MSSMatMGUT_TWO_SCALE_SUSY_MK) \
		$(MSSMatMGUT_TWO_SCALE_SOFT_MK)

MSSMatMGUT_SLHA_INPUT := \
		$(DIR)/LesHouches.in.MSSMatMGUT

MSSMatMGUT_GNUPLOT := \
		$(DIR)/MSSMatMGUT_plot_rgflow.gnuplot \
		$(DIR)/MSSMatMGUT_plot_spectrum.gnuplot

MSSMatMGUT_TARBALL := \
		$(MODNAME).tar.gz

LIBMSSMatMGUT_SRC :=
EXEMSSMatMGUT_SRC :=

LIBMSSMatMGUT_HDR :=

ifneq ($(findstring two_scale,$(ALGORITHMS)),)
LIBMSSMatMGUT_SRC += \
		$(DIR)/MSSMatMGUT_mass_eigenstates.cpp \
		$(DIR)/MSSMatMGUT_info.cpp \
		$(DIR)/MSSMatMGUT_input_parameters.cpp \
		$(DIR)/MSSMatMGUT_slha_io.cpp \
		$(DIR)/MSSMatMGUT_physical.cpp \
		$(DIR)/MSSMatMGUT_utilities.cpp \
		$(DIR)/MSSMatMGUT_two_scale_convergence_tester.cpp \
		$(DIR)/MSSMatMGUT_two_scale_high_scale_constraint.cpp \
		$(DIR)/MSSMatMGUT_two_scale_initial_guesser.cpp \
		$(DIR)/MSSMatMGUT_two_scale_low_scale_constraint.cpp \
		$(DIR)/MSSMatMGUT_two_scale_model.cpp \
		$(DIR)/MSSMatMGUT_two_scale_model_slha.cpp \
		$(DIR)/MSSMatMGUT_two_scale_susy_parameters.cpp \
		$(DIR)/MSSMatMGUT_two_scale_soft_parameters.cpp \
		$(DIR)/MSSMatMGUT_two_scale_susy_scale_constraint.cpp
EXEMSSMatMGUT_SRC += \
		$(DIR)/run_MSSMatMGUT.cpp \
		$(DIR)/run_cmd_line_MSSMatMGUT.cpp \
		$(DIR)/scan_MSSMatMGUT.cpp
LIBMSSMatMGUT_HDR += \
		$(DIR)/MSSMatMGUT_convergence_tester.hpp \
		$(DIR)/MSSMatMGUT_high_scale_constraint.hpp \
		$(DIR)/MSSMatMGUT_mass_eigenstates.hpp \
		$(DIR)/MSSMatMGUT_info.hpp \
		$(DIR)/MSSMatMGUT_initial_guesser.hpp \
		$(DIR)/MSSMatMGUT_input_parameters.hpp \
		$(DIR)/MSSMatMGUT_low_scale_constraint.hpp \
		$(DIR)/MSSMatMGUT_model.hpp \
		$(DIR)/MSSMatMGUT_model_slha.hpp \
		$(DIR)/MSSMatMGUT_physical.hpp \
		$(DIR)/MSSMatMGUT_slha_io.hpp \
		$(DIR)/MSSMatMGUT_spectrum_generator.hpp \
		$(DIR)/MSSMatMGUT_susy_scale_constraint.hpp \
		$(DIR)/MSSMatMGUT_utilities.hpp \
		$(DIR)/MSSMatMGUT_two_scale_convergence_tester.hpp \
		$(DIR)/MSSMatMGUT_two_scale_high_scale_constraint.hpp \
		$(DIR)/MSSMatMGUT_two_scale_initial_guesser.hpp \
		$(DIR)/MSSMatMGUT_two_scale_low_scale_constraint.hpp \
		$(DIR)/MSSMatMGUT_two_scale_model.hpp \
		$(DIR)/MSSMatMGUT_two_scale_model_slha.hpp \
		$(DIR)/MSSMatMGUT_two_scale_soft_parameters.hpp \
		$(DIR)/MSSMatMGUT_two_scale_susy_parameters.hpp \
		$(DIR)/MSSMatMGUT_two_scale_susy_scale_constraint.hpp

ifneq ($(MAKECMDGOALS),showbuild)
ifneq ($(MAKECMDGOALS),tag)
ifneq ($(MAKECMDGOALS),release)
ifneq ($(MAKECMDGOALS),doc)
-include $(MSSMatMGUT_TWO_SCALE_SUSY_MK)
-include $(MSSMatMGUT_TWO_SCALE_SOFT_MK)
ifneq ($(MAKECMDGOALS),clean)
ifneq ($(MAKECMDGOALS),distclean)
ifneq ($(MAKECMDGOALS),pack-$(MODNAME)-src)
ifeq ($(findstring clean-,$(MAKECMDGOALS)),)
ifeq ($(findstring distclean-,$(MAKECMDGOALS)),)
ifeq ($(findstring doc-,$(MAKECMDGOALS)),)
$(MSSMatMGUT_TWO_SCALE_SUSY_MK): run-metacode-$(MODNAME)
		@$(CONVERT_DOS_PATHS) $@
$(MSSMatMGUT_TWO_SCALE_SOFT_MK): run-metacode-$(MODNAME)
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
LIBMSSMatMGUT_SRC := $(sort $(LIBMSSMatMGUT_SRC))
EXEMSSMatMGUT_SRC := $(sort $(EXEMSSMatMGUT_SRC))

LIBMSSMatMGUT_OBJ := \
		$(patsubst %.cpp, %.o, $(filter %.cpp, $(LIBMSSMatMGUT_SRC))) \
		$(patsubst %.f, %.o, $(filter %.f, $(LIBMSSMatMGUT_SRC)))

EXEMSSMatMGUT_OBJ := \
		$(patsubst %.cpp, %.o, $(filter %.cpp, $(EXEMSSMatMGUT_SRC))) \
		$(patsubst %.f, %.o, $(filter %.f, $(EXEMSSMatMGUT_SRC)))

LIBMSSMatMGUT_DEP := \
		$(LIBMSSMatMGUT_OBJ:.o=.d)

EXEMSSMatMGUT_DEP := \
		$(EXEMSSMatMGUT_OBJ:.o=.d)

LIBMSSMatMGUT     := $(DIR)/lib$(MODNAME)$(LIBEXT)

RUN_MSSMatMGUT_OBJ := $(DIR)/run_MSSMatMGUT.o
RUN_MSSMatMGUT_EXE := $(DIR)/run_MSSMatMGUT.x

RUN_CMD_LINE_MSSMatMGUT_OBJ := $(DIR)/run_cmd_line_MSSMatMGUT.o
RUN_CMD_LINE_MSSMatMGUT_EXE := $(DIR)/run_cmd_line_MSSMatMGUT.x

SCAN_MSSMatMGUT_OBJ := $(DIR)/scan_MSSMatMGUT.o
SCAN_MSSMatMGUT_EXE := $(DIR)/scan_MSSMatMGUT.x

METACODE_STAMP_MSSMatMGUT := $(DIR)/00_DELETE_ME_TO_RERUN_METACODE

ifeq ($(ENABLE_META),yes)
SARAH_MODEL_FILES_MSSMatMGUT := \
		$(shell $(SARAH_DEP_GEN) $(SARAH_MODEL))
endif

.PHONY:         all-$(MODNAME) clean-$(MODNAME) clean-$(MODNAME)-src \
		clean-$(MODNAME)-dep clean-$(MODNAME)-obj \
		distclean-$(MODNAME) run-metacode-$(MODNAME) \
		pack-$(MODNAME)-src

all-$(MODNAME): $(LIBMSSMatMGUT)

ifneq ($(INSTALL_DIR),)
install-src::
		install -d $(MSSMatMGUT_INSTALL_DIR)
		install -m u=rw,g=r,o=r $(LIBMSSMatMGUT_SRC) $(MSSMatMGUT_INSTALL_DIR)
		install -m u=rw,g=r,o=r $(LIBMSSMatMGUT_HDR) $(MSSMatMGUT_INSTALL_DIR)
		install -m u=rw,g=r,o=r $(EXEMSSMatMGUT_SRC) $(MSSMatMGUT_INSTALL_DIR)
		$(INSTALL_STRIPPED) $(MSSMatMGUT_MK) $(MSSMatMGUT_INSTALL_DIR) -m u=rw,g=r,o=r
		install -m u=rw,g=r,o=r $(MSSMatMGUT_TWO_SCALE_MK) $(MSSMatMGUT_INSTALL_DIR)
ifneq ($(MSSMatMGUT_SLHA_INPUT),)
		install -m u=rw,g=r,o=r $(MSSMatMGUT_SLHA_INPUT) $(MSSMatMGUT_INSTALL_DIR)
endif
		install -m u=rw,g=r,o=r $(MSSMatMGUT_GNUPLOT) $(MSSMatMGUT_INSTALL_DIR)
endif

clean-$(MODNAME)-dep:
		-rm -f $(LIBMSSMatMGUT_DEP)
		-rm -f $(EXEMSSMatMGUT_DEP)

clean-$(MODNAME)-obj:
		-rm -f $(LIBMSSMatMGUT_OBJ)
		-rm -f $(EXEMSSMatMGUT_OBJ)


clean-$(MODNAME): clean-$(MODNAME)-dep clean-$(MODNAME)-obj
		-rm -f $(LIBMSSMatMGUT)
		-rm -f $(RUN_MSSMatMGUT_EXE)
		-rm -f $(RUN_CMD_LINE_MSSMatMGUT_EXE)
		-rm -f $(SCAN_MSSMatMGUT_EXE)

distclean-$(MODNAME): clean-$(MODNAME)

clean::         clean-$(MODNAME)

distclean::     distclean-$(MODNAME)

pack-$(MODNAME)-src:
		tar -czf $(MSSMatMGUT_TARBALL) \
		$(LIBMSSMatMGUT_SRC) $(LIBMSSMatMGUT_HDR) \
		$(EXEMSSMatMGUT_SRC) \
		$(MSSMatMGUT_MK) $(MSSMatMGUT_TWO_SCALE_MK) \
		$(MSSMatMGUT_SLHA_INPUT) $(MSSMatMGUT_GNUPLOT)

$(LIBMSSMatMGUT_SRC) $(LIBMSSMatMGUT_HDR) $(EXEMSSMatMGUT_SRC) \
: run-metacode-$(MODNAME)
		@true

run-metacode-$(MODNAME): $(METACODE_STAMP_MSSMatMGUT)
		@true

ifeq ($(ENABLE_META),yes)
$(METACODE_STAMP_MSSMatMGUT): $(DIR)/start.m $(DIR)/FlexibleSUSY.m $(META_SRC) $(TEMPLATES) $(SARAH_MODEL_FILES_MSSMatMGUT)
		"$(MATH)" -run "Get[\"$<\"]; Quit[]"
		@touch "$(METACODE_STAMP_MSSMatMGUT)"
		@echo "Note: to regenerate MSSMatMGUT source files," \
		      "please remove the file "
		@echo "\"$(METACODE_STAMP_MSSMatMGUT)\" and run make"
		@echo "---------------------------------"
else
$(METACODE_STAMP_MSSMatMGUT):
		@true
endif

$(LIBMSSMatMGUT_DEP) $(EXEMSSMatMGUT_DEP) $(LIBMSSMatMGUT_OBJ) $(EXEMSSMatMGUT_OBJ): CPPFLAGS += $(GSLFLAGS) $(EIGENFLAGS) $(BOOSTFLAGS)

ifneq (,$(findstring yes,$(ENABLE_LOOPTOOLS)$(ENABLE_FFLITE)))
$(LIBMSSMatMGUT_DEP) $(EXEMSSMatMGUT_DEP) $(LIBMSSMatMGUT_OBJ) $(EXEMSSMatMGUT_OBJ): CPPFLAGS += $(LOOPFUNCFLAGS)
endif

$(LIBMSSMatMGUT): $(LIBMSSMatMGUT_OBJ)
		$(MAKELIB) $@ $^

$(RUN_MSSMatMGUT_EXE): $(RUN_MSSMatMGUT_OBJ) $(LIBMSSMatMGUT) $(LIBFLEXI) $(LIBLEGACY) $(filter-out -%,$(LOOPFUNCLIBS))
		$(CXX) -o $@ $(call abspathx,$^) $(filter -%,$(LOOPFUNCLIBS)) $(GSLLIBS) $(BOOSTTHREADLIBS) $(THREADLIBS) $(LAPACKLIBS) $(BLASLIBS) $(FLIBS)

$(RUN_CMD_LINE_MSSMatMGUT_EXE): $(RUN_CMD_LINE_MSSMatMGUT_OBJ) $(LIBMSSMatMGUT) $(LIBFLEXI) $(LIBLEGACY) $(filter-out -%,$(LOOPFUNCLIBS))
		$(CXX) -o $@ $(call abspathx,$^) $(filter -%,$(LOOPFUNCLIBS)) $(GSLLIBS) $(BOOSTTHREADLIBS) $(THREADLIBS) $(LAPACKLIBS) $(BLASLIBS) $(FLIBS)

$(SCAN_MSSMatMGUT_EXE): $(SCAN_MSSMatMGUT_OBJ) $(LIBMSSMatMGUT) $(LIBFLEXI) $(LIBLEGACY) $(filter-out -%,$(LOOPFUNCLIBS))
		$(CXX) -o $@ $(call abspathx,$^) $(filter -%,$(LOOPFUNCLIBS)) $(GSLLIBS) $(BOOSTTHREADLIBS) $(THREADLIBS) $(LAPACKLIBS) $(BLASLIBS) $(FLIBS)

ALLDEP += $(LIBMSSMatMGUT_DEP) $(EXEMSSMatMGUT_DEP)
ALLSRC += $(LIBMSSMatMGUT_SRC) $(EXEMSSMatMGUT_SRC)
ALLLIB += $(LIBMSSMatMGUT)
ALLEXE += $(RUN_MSSMatMGUT_EXE) $(RUN_CMD_LINE_MSSMatMGUT_EXE) $(SCAN_MSSMatMGUT_EXE)
