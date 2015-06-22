DIR          := models/CMSSMNoFV
MODNAME      := CMSSMNoFV
SARAH_MODEL  := MSSMNoFV

CMSSMNoFV_INSTALL_DIR := $(INSTALL_DIR)/$(DIR)

CMSSMNoFV_MK     := \
		$(DIR)/module.mk

CMSSMNoFV_TWO_SCALE_SUSY_MK := \
		$(DIR)/two_scale_susy.mk

CMSSMNoFV_TWO_SCALE_SOFT_MK := \
		$(DIR)/two_scale_soft.mk

CMSSMNoFV_TWO_SCALE_MK := \
		$(CMSSMNoFV_TWO_SCALE_SUSY_MK) \
		$(CMSSMNoFV_TWO_SCALE_SOFT_MK)

CMSSMNoFV_SLHA_INPUT := \
		$(DIR)/LesHouches.in.CMSSMNoFV

CMSSMNoFV_GNUPLOT := \
		$(DIR)/CMSSMNoFV_plot_rgflow.gnuplot \
		$(DIR)/CMSSMNoFV_plot_spectrum.gnuplot

CMSSMNoFV_TARBALL := \
		$(MODNAME).tar.gz

LIBCMSSMNoFV_SRC :=
EXECMSSMNoFV_SRC :=

LIBCMSSMNoFV_HDR :=

ifneq ($(findstring two_scale,$(ALGORITHMS)),)
LIBCMSSMNoFV_SRC += \
		$(DIR)/CMSSMNoFV_info.cpp \
		$(DIR)/CMSSMNoFV_input_parameters.cpp \
		$(DIR)/CMSSMNoFV_slha_io.cpp \
		$(DIR)/CMSSMNoFV_physical.cpp \
		$(DIR)/CMSSMNoFV_utilities.cpp \
		$(DIR)/CMSSMNoFV_two_scale_convergence_tester.cpp \
		$(DIR)/CMSSMNoFV_two_scale_high_scale_constraint.cpp \
		$(DIR)/CMSSMNoFV_two_scale_initial_guesser.cpp \
		$(DIR)/CMSSMNoFV_two_scale_low_scale_constraint.cpp \
		$(DIR)/CMSSMNoFV_two_scale_model.cpp \
		$(DIR)/CMSSMNoFV_two_scale_model_slha.cpp \
		$(DIR)/CMSSMNoFV_two_scale_susy_parameters.cpp \
		$(DIR)/CMSSMNoFV_two_scale_soft_parameters.cpp \
		$(DIR)/CMSSMNoFV_two_scale_susy_scale_constraint.cpp
EXECMSSMNoFV_SRC += \
		$(DIR)/run_CMSSMNoFV.cpp \
		$(DIR)/run_cmd_line_CMSSMNoFV.cpp \
		$(DIR)/scan_CMSSMNoFV.cpp
LIBCMSSMNoFV_HDR += \
		$(DIR)/CMSSMNoFV_convergence_tester.hpp \
		$(DIR)/CMSSMNoFV_high_scale_constraint.hpp \
		$(DIR)/CMSSMNoFV_info.hpp \
		$(DIR)/CMSSMNoFV_initial_guesser.hpp \
		$(DIR)/CMSSMNoFV_input_parameters.hpp \
		$(DIR)/CMSSMNoFV_low_scale_constraint.hpp \
		$(DIR)/CMSSMNoFV_model.hpp \
		$(DIR)/CMSSMNoFV_model_slha.hpp \
		$(DIR)/CMSSMNoFV_physical.hpp \
		$(DIR)/CMSSMNoFV_slha_io.hpp \
		$(DIR)/CMSSMNoFV_spectrum_generator.hpp \
		$(DIR)/CMSSMNoFV_susy_scale_constraint.hpp \
		$(DIR)/CMSSMNoFV_utilities.hpp \
		$(DIR)/CMSSMNoFV_two_scale_convergence_tester.hpp \
		$(DIR)/CMSSMNoFV_two_scale_high_scale_constraint.hpp \
		$(DIR)/CMSSMNoFV_two_scale_initial_guesser.hpp \
		$(DIR)/CMSSMNoFV_two_scale_low_scale_constraint.hpp \
		$(DIR)/CMSSMNoFV_two_scale_model.hpp \
		$(DIR)/CMSSMNoFV_two_scale_model_slha.hpp \
		$(DIR)/CMSSMNoFV_two_scale_soft_parameters.hpp \
		$(DIR)/CMSSMNoFV_two_scale_susy_parameters.hpp \
		$(DIR)/CMSSMNoFV_two_scale_susy_scale_constraint.hpp

ifneq ($(MAKECMDGOALS),showbuild)
ifneq ($(MAKECMDGOALS),tag)
ifneq ($(MAKECMDGOALS),release)
ifneq ($(MAKECMDGOALS),doc)
-include $(CMSSMNoFV_TWO_SCALE_SUSY_MK)
-include $(CMSSMNoFV_TWO_SCALE_SOFT_MK)
ifneq ($(MAKECMDGOALS),clean)
ifneq ($(MAKECMDGOALS),distclean)
ifneq ($(MAKECMDGOALS),pack-$(MODNAME)-src)
ifeq ($(findstring clean-,$(MAKECMDGOALS)),)
ifeq ($(findstring distclean-,$(MAKECMDGOALS)),)
ifeq ($(findstring doc-,$(MAKECMDGOALS)),)
$(CMSSMNoFV_TWO_SCALE_SUSY_MK): run-metacode-$(MODNAME)
		@$(CONVERT_DOS_PATHS) $@
$(CMSSMNoFV_TWO_SCALE_SOFT_MK): run-metacode-$(MODNAME)
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
LIBCMSSMNoFV_SRC := $(sort $(LIBCMSSMNoFV_SRC))
EXECMSSMNoFV_SRC := $(sort $(EXECMSSMNoFV_SRC))

LIBCMSSMNoFV_OBJ := \
		$(patsubst %.cpp, %.o, $(filter %.cpp, $(LIBCMSSMNoFV_SRC))) \
		$(patsubst %.f, %.o, $(filter %.f, $(LIBCMSSMNoFV_SRC)))

EXECMSSMNoFV_OBJ := \
		$(patsubst %.cpp, %.o, $(filter %.cpp, $(EXECMSSMNoFV_SRC))) \
		$(patsubst %.f, %.o, $(filter %.f, $(EXECMSSMNoFV_SRC)))

LIBCMSSMNoFV_DEP := \
		$(LIBCMSSMNoFV_OBJ:.o=.d)

EXECMSSMNoFV_DEP := \
		$(EXECMSSMNoFV_OBJ:.o=.d)

LIBCMSSMNoFV     := $(DIR)/lib$(MODNAME)$(LIBEXT)

RUN_CMSSMNoFV_OBJ := $(DIR)/run_CMSSMNoFV.o
RUN_CMSSMNoFV_EXE := $(DIR)/run_CMSSMNoFV.x

RUN_CMD_LINE_CMSSMNoFV_OBJ := $(DIR)/run_cmd_line_CMSSMNoFV.o
RUN_CMD_LINE_CMSSMNoFV_EXE := $(DIR)/run_cmd_line_CMSSMNoFV.x

SCAN_CMSSMNoFV_OBJ := $(DIR)/scan_CMSSMNoFV.o
SCAN_CMSSMNoFV_EXE := $(DIR)/scan_CMSSMNoFV.x

METACODE_STAMP_CMSSMNoFV := $(DIR)/00_DELETE_ME_TO_RERUN_METACODE

ifeq ($(ENABLE_META),yes)
SARAH_MODEL_FILES_CMSSMNoFV := \
		$(shell $(SARAH_DEP_GEN) $(SARAH_MODEL))
endif

.PHONY:         all-$(MODNAME) clean-$(MODNAME) clean-$(MODNAME)-src \
		clean-$(MODNAME)-dep clean-$(MODNAME)-obj \
		distclean-$(MODNAME) run-metacode-$(MODNAME) \
		pack-$(MODNAME)-src

all-$(MODNAME): $(LIBCMSSMNoFV)

ifneq ($(INSTALL_DIR),)
install-src::
		install -d $(CMSSMNoFV_INSTALL_DIR)
		install -m u=rw,g=r,o=r $(LIBCMSSMNoFV_SRC) $(CMSSMNoFV_INSTALL_DIR)
		install -m u=rw,g=r,o=r $(LIBCMSSMNoFV_HDR) $(CMSSMNoFV_INSTALL_DIR)
		install -m u=rw,g=r,o=r $(EXECMSSMNoFV_SRC) $(CMSSMNoFV_INSTALL_DIR)
		$(INSTALL_STRIPPED) $(CMSSMNoFV_MK) $(CMSSMNoFV_INSTALL_DIR) -m u=rw,g=r,o=r
		install -m u=rw,g=r,o=r $(CMSSMNoFV_TWO_SCALE_MK) $(CMSSMNoFV_INSTALL_DIR)
ifneq ($(CMSSMNoFV_SLHA_INPUT),)
		install -m u=rw,g=r,o=r $(CMSSMNoFV_SLHA_INPUT) $(CMSSMNoFV_INSTALL_DIR)
endif
		install -m u=rw,g=r,o=r $(CMSSMNoFV_GNUPLOT) $(CMSSMNoFV_INSTALL_DIR)
endif

clean-$(MODNAME)-dep:
		-rm -f $(LIBCMSSMNoFV_DEP)
		-rm -f $(EXECMSSMNoFV_DEP)

clean-$(MODNAME)-obj:
		-rm -f $(LIBCMSSMNoFV_OBJ)
		-rm -f $(EXECMSSMNoFV_OBJ)


clean-$(MODNAME): clean-$(MODNAME)-dep clean-$(MODNAME)-obj
		-rm -f $(LIBCMSSMNoFV)
		-rm -f $(RUN_CMSSMNoFV_EXE)
		-rm -f $(RUN_CMD_LINE_CMSSMNoFV_EXE)
		-rm -f $(SCAN_CMSSMNoFV_EXE)

distclean-$(MODNAME): clean-$(MODNAME)

clean::         clean-$(MODNAME)

distclean::     distclean-$(MODNAME)

pack-$(MODNAME)-src:
		tar -czf $(CMSSMNoFV_TARBALL) \
		$(LIBCMSSMNoFV_SRC) $(LIBCMSSMNoFV_HDR) \
		$(EXECMSSMNoFV_SRC) \
		$(CMSSMNoFV_MK) $(CMSSMNoFV_TWO_SCALE_MK) \
		$(CMSSMNoFV_SLHA_INPUT) $(CMSSMNoFV_GNUPLOT)

$(LIBCMSSMNoFV_SRC) $(LIBCMSSMNoFV_HDR) $(EXECMSSMNoFV_SRC) \
: run-metacode-$(MODNAME)
		@true

run-metacode-$(MODNAME): $(METACODE_STAMP_CMSSMNoFV)
		@true

ifeq ($(ENABLE_META),yes)
$(METACODE_STAMP_CMSSMNoFV): $(DIR)/start.m $(DIR)/FlexibleSUSY.m $(META_SRC) $(TEMPLATES) $(SARAH_MODEL_FILES_CMSSMNoFV)
		"$(MATH)" -run "Get[\"$<\"]; Quit[]"
		@touch "$(METACODE_STAMP_CMSSMNoFV)"
		@echo "Note: to regenerate CMSSMNoFV source files," \
		      "please remove the file "
		@echo "\"$(METACODE_STAMP_CMSSMNoFV)\" and run make"
		@echo "---------------------------------"
else
$(METACODE_STAMP_CMSSMNoFV):
		@true
endif

$(LIBCMSSMNoFV_DEP) $(EXECMSSMNoFV_DEP) $(LIBCMSSMNoFV_OBJ) $(EXECMSSMNoFV_OBJ): CPPFLAGS += $(GSLFLAGS) $(EIGENFLAGS) $(BOOSTFLAGS)

ifneq (,$(findstring yes,$(ENABLE_LOOPTOOLS)$(ENABLE_FFLITE)))
$(LIBCMSSMNoFV_DEP) $(EXECMSSMNoFV_DEP) $(LIBCMSSMNoFV_OBJ) $(EXECMSSMNoFV_OBJ): CPPFLAGS += $(LOOPFUNCFLAGS)
endif

$(LIBCMSSMNoFV): $(LIBCMSSMNoFV_OBJ)
		$(MAKELIB) $@ $^

$(RUN_CMSSMNoFV_EXE): $(RUN_CMSSMNoFV_OBJ) $(LIBCMSSMNoFV) $(LIBFLEXI) $(LIBLEGACY) $(filter-out -%,$(LOOPFUNCLIBS))
		$(CXX) -o $@ $(call abspathx,$^) $(filter -%,$(LOOPFUNCLIBS)) $(GSLLIBS) $(BOOSTTHREADLIBS) $(THREADLIBS) $(LAPACKLIBS) $(BLASLIBS) $(FLIBS)

$(RUN_CMD_LINE_CMSSMNoFV_EXE): $(RUN_CMD_LINE_CMSSMNoFV_OBJ) $(LIBCMSSMNoFV) $(LIBFLEXI) $(LIBLEGACY) $(filter-out -%,$(LOOPFUNCLIBS))
		$(CXX) -o $@ $(call abspathx,$^) $(filter -%,$(LOOPFUNCLIBS)) $(GSLLIBS) $(BOOSTTHREADLIBS) $(THREADLIBS) $(LAPACKLIBS) $(BLASLIBS) $(FLIBS)

$(SCAN_CMSSMNoFV_EXE): $(SCAN_CMSSMNoFV_OBJ) $(LIBCMSSMNoFV) $(LIBFLEXI) $(LIBLEGACY) $(filter-out -%,$(LOOPFUNCLIBS))
		$(CXX) -o $@ $(call abspathx,$^) $(filter -%,$(LOOPFUNCLIBS)) $(GSLLIBS) $(BOOSTTHREADLIBS) $(THREADLIBS) $(LAPACKLIBS) $(BLASLIBS) $(FLIBS)

ALLDEP += $(LIBCMSSMNoFV_DEP) $(EXECMSSMNoFV_DEP)
ALLSRC += $(LIBCMSSMNoFV_SRC) $(EXECMSSMNoFV_SRC)
ALLLIB += $(LIBCMSSMNoFV)
ALLEXE += $(RUN_CMSSMNoFV_EXE) $(RUN_CMD_LINE_CMSSMNoFV_EXE) $(SCAN_CMSSMNoFV_EXE)
