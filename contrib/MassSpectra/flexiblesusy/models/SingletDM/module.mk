DIR          := models/SingletDM
MODNAME      := SingletDM
SARAH_MODEL  := SingletDM

SingletDM_INSTALL_DIR := $(INSTALL_DIR)/$(DIR)

SingletDM_MK     := \
		$(DIR)/module.mk

SingletDM_TWO_SCALE_SUSY_MK := \
		$(DIR)/two_scale_susy.mk

SingletDM_TWO_SCALE_SOFT_MK := \
		$(DIR)/two_scale_soft.mk

SingletDM_TWO_SCALE_MK := \
		$(SingletDM_TWO_SCALE_SUSY_MK) \
		$(SingletDM_TWO_SCALE_SOFT_MK)

SingletDM_SLHA_INPUT := \
		$(DIR)/LesHouches.in.SingletDM_generated \
		$(DIR)/LesHouches.in.SingletDM

SingletDM_GNUPLOT := \
		$(DIR)/SingletDM_plot_rgflow.gnuplot \
		$(DIR)/SingletDM_plot_spectrum.gnuplot

SingletDM_TARBALL := \
		$(MODNAME).tar.gz

LIBSingletDM_SRC :=
EXESingletDM_SRC :=

LIBSingletDM_HDR :=

ifneq ($(findstring two_scale,$(ALGORITHMS)),)
LIBSingletDM_SRC += \
		$(DIR)/SingletDM_effective_couplings.cpp \
		$(DIR)/SingletDM_mass_eigenstates.cpp \
		$(DIR)/SingletDM_info.cpp \
		$(DIR)/SingletDM_input_parameters.cpp \
		$(DIR)/SingletDM_observables.cpp \
		$(DIR)/SingletDM_slha_io.cpp \
		$(DIR)/SingletDM_physical.cpp \
		$(DIR)/SingletDM_utilities.cpp \
		$(DIR)/SingletDM_two_scale_convergence_tester.cpp \
		$(DIR)/SingletDM_two_scale_high_scale_constraint.cpp \
		$(DIR)/SingletDM_two_scale_initial_guesser.cpp \
		$(DIR)/SingletDM_two_scale_low_scale_constraint.cpp \
		$(DIR)/SingletDM_two_scale_model.cpp \
		$(DIR)/SingletDM_two_scale_model_slha.cpp \
		$(DIR)/SingletDM_two_scale_susy_parameters.cpp \
		$(DIR)/SingletDM_two_scale_soft_parameters.cpp \
		$(DIR)/SingletDM_two_scale_susy_scale_constraint.cpp
EXESingletDM_SRC += \
		$(DIR)/run_SingletDM.cpp \
		$(DIR)/run_cmd_line_SingletDM.cpp \
		$(DIR)/scan_SingletDM.cpp
LIBSingletDM_HDR += \
		$(DIR)/SingletDM_convergence_tester.hpp \
		$(DIR)/SingletDM_effective_couplings.hpp \
		$(DIR)/SingletDM_high_scale_constraint.hpp \
		$(DIR)/SingletDM_mass_eigenstates.hpp \
		$(DIR)/SingletDM_info.hpp \
		$(DIR)/SingletDM_initial_guesser.hpp \
		$(DIR)/SingletDM_input_parameters.hpp \
		$(DIR)/SingletDM_low_scale_constraint.hpp \
		$(DIR)/SingletDM_model.hpp \
		$(DIR)/SingletDM_model_slha.hpp \
		$(DIR)/SingletDM_observables.hpp \
		$(DIR)/SingletDM_physical.hpp \
		$(DIR)/SingletDM_slha_io.hpp \
		$(DIR)/SingletDM_spectrum_generator_interface.hpp \
		$(DIR)/SingletDM_spectrum_generator.hpp \
		$(DIR)/SingletDM_susy_scale_constraint.hpp \
		$(DIR)/SingletDM_utilities.hpp \
		$(DIR)/SingletDM_two_scale_convergence_tester.hpp \
		$(DIR)/SingletDM_two_scale_high_scale_constraint.hpp \
		$(DIR)/SingletDM_two_scale_initial_guesser.hpp \
		$(DIR)/SingletDM_two_scale_low_scale_constraint.hpp \
		$(DIR)/SingletDM_two_scale_model.hpp \
		$(DIR)/SingletDM_two_scale_model_slha.hpp \
		$(DIR)/SingletDM_two_scale_soft_parameters.hpp \
		$(DIR)/SingletDM_two_scale_susy_parameters.hpp \
		$(DIR)/SingletDM_two_scale_susy_scale_constraint.hpp

ifneq ($(MAKECMDGOALS),showbuild)
ifneq ($(MAKECMDGOALS),tag)
ifneq ($(MAKECMDGOALS),release)
ifneq ($(MAKECMDGOALS),doc)
-include $(SingletDM_TWO_SCALE_SUSY_MK)
-include $(SingletDM_TWO_SCALE_SOFT_MK)
ifneq ($(MAKECMDGOALS),clean)
ifneq ($(MAKECMDGOALS),distclean)
ifneq ($(MAKECMDGOALS),pack-$(MODNAME)-src)
ifeq ($(findstring clean-,$(MAKECMDGOALS)),)
ifeq ($(findstring distclean-,$(MAKECMDGOALS)),)
ifeq ($(findstring doc-,$(MAKECMDGOALS)),)
$(SingletDM_TWO_SCALE_SUSY_MK): run-metacode-$(MODNAME)
		@$(CONVERT_DOS_PATHS) $@
$(SingletDM_TWO_SCALE_SOFT_MK): run-metacode-$(MODNAME)
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
LIBSingletDM_SRC := $(sort $(LIBSingletDM_SRC))
EXESingletDM_SRC := $(sort $(EXESingletDM_SRC))

LIBSingletDM_OBJ := \
		$(patsubst %.cpp, %.o, $(filter %.cpp, $(LIBSingletDM_SRC))) \
		$(patsubst %.f, %.o, $(filter %.f, $(LIBSingletDM_SRC)))

EXESingletDM_OBJ := \
		$(patsubst %.cpp, %.o, $(filter %.cpp, $(EXESingletDM_SRC))) \
		$(patsubst %.f, %.o, $(filter %.f, $(EXESingletDM_SRC)))

EXESingletDM_EXE := \
		$(patsubst %.cpp, %.x, $(filter %.cpp, $(EXESingletDM_SRC))) \
		$(patsubst %.f, %.x, $(filter %.f, $(EXESingletDM_SRC)))

LIBSingletDM_DEP := \
		$(LIBSingletDM_OBJ:.o=.d)

EXESingletDM_DEP := \
		$(EXESingletDM_OBJ:.o=.d)

LIBSingletDM     := $(DIR)/lib$(MODNAME)$(LIBEXT)

METACODE_STAMP_SingletDM := $(DIR)/00_DELETE_ME_TO_RERUN_METACODE

ifeq ($(ENABLE_META),yes)
SARAH_MODEL_FILES_SingletDM := \
		$(shell $(SARAH_DEP_GEN) $(SARAH_MODEL))
endif

.PHONY:         all-$(MODNAME) clean-$(MODNAME) clean-$(MODNAME)-src \
		clean-$(MODNAME)-dep clean-$(MODNAME)-lib \
		clean-$(MODNAME)-obj distclean-$(MODNAME) \
		run-metacode-$(MODNAME) pack-$(MODNAME)-src

all-$(MODNAME): $(LIBSingletDM) $(EXESingletDM_EXE)
		@true

ifneq ($(INSTALL_DIR),)
install-src::
		install -d $(SingletDM_INSTALL_DIR)
		install -m u=rw,g=r,o=r $(LIBSingletDM_SRC) $(SingletDM_INSTALL_DIR)
		install -m u=rw,g=r,o=r $(LIBSingletDM_HDR) $(SingletDM_INSTALL_DIR)
		install -m u=rw,g=r,o=r $(EXESingletDM_SRC) $(SingletDM_INSTALL_DIR)
		$(INSTALL_STRIPPED) $(SingletDM_MK) $(SingletDM_INSTALL_DIR) -m u=rw,g=r,o=r
		install -m u=rw,g=r,o=r $(SingletDM_TWO_SCALE_MK) $(SingletDM_INSTALL_DIR)
ifneq ($(SingletDM_SLHA_INPUT),)
		install -m u=rw,g=r,o=r $(SingletDM_SLHA_INPUT) $(SingletDM_INSTALL_DIR)
endif
		install -m u=rw,g=r,o=r $(SingletDM_GNUPLOT) $(SingletDM_INSTALL_DIR)
endif

clean-$(MODNAME)-dep:
		-rm -f $(LIBSingletDM_DEP)
		-rm -f $(EXESingletDM_DEP)

clean-$(MODNAME)-lib:
		-rm -f $(LIBSingletDM)

clean-$(MODNAME)-obj:
		-rm -f $(LIBSingletDM_OBJ)
		-rm -f $(EXESingletDM_OBJ)


clean-$(MODNAME): clean-$(MODNAME)-dep clean-$(MODNAME)-lib clean-$(MODNAME)-obj
		-rm -f $(EXESingletDM_EXE)

distclean-$(MODNAME): clean-$(MODNAME)
		@true

clean-obj::     clean-$(MODNAME)-obj

clean::         clean-$(MODNAME)

distclean::     distclean-$(MODNAME)

pack-$(MODNAME)-src:
		tar -czf $(SingletDM_TARBALL) \
		$(LIBSingletDM_SRC) $(LIBSingletDM_HDR) \
		$(EXESingletDM_SRC) \
		$(SingletDM_MK) $(SingletDM_TWO_SCALE_MK) \
		$(SingletDM_SLHA_INPUT) $(SingletDM_GNUPLOT)

$(LIBSingletDM_SRC) $(LIBSingletDM_HDR) $(EXESingletDM_SRC) \
: run-metacode-$(MODNAME)
		@true

run-metacode-$(MODNAME): $(METACODE_STAMP_SingletDM)
		@true

ifeq ($(ENABLE_META),yes)
$(METACODE_STAMP_SingletDM): $(DIR)/start.m $(DIR)/FlexibleSUSY.m $(META_SRC) $(TEMPLATES) $(SARAH_MODEL_FILES_SingletDM)
		"$(MATH)" -run "Get[\"$<\"]; Quit[]"
		@touch "$(METACODE_STAMP_SingletDM)"
		@echo "Note: to regenerate SingletDM source files," \
		      "please remove the file "
		@echo "\"$(METACODE_STAMP_SingletDM)\" and run make"
		@echo "---------------------------------"
else
$(METACODE_STAMP_SingletDM):
		@true
endif

$(LIBSingletDM_DEP) $(EXESingletDM_DEP) $(LIBSingletDM_OBJ) $(EXESingletDM_OBJ): CPPFLAGS += $(GSLFLAGS) $(EIGENFLAGS) $(BOOSTFLAGS) $(TSILFLAGS)

ifneq (,$(findstring yes,$(ENABLE_LOOPTOOLS)$(ENABLE_FFLITE)))
$(LIBSingletDM_DEP) $(EXESingletDM_DEP) $(LIBSingletDM_OBJ) $(EXESingletDM_OBJ): CPPFLAGS += $(LOOPFUNCFLAGS)
endif

$(LIBSingletDM): $(LIBSingletDM_OBJ)
		$(MAKELIB) $@ $^

$(DIR)/%.x: $(DIR)/%.o $(LIBSingletDM) $(LIBFLEXI) $(LIBLEGACY) $(filter-out -%,$(LOOPFUNCLIBS))
		$(CXX) $(LDFLAGS) -o $@ $(call abspathx,$^ $(ADDONLIBS)) $(filter -%,$(LOOPFUNCLIBS)) $(GSLLIBS) $(BOOSTTHREADLIBS) $(THREADLIBS) $(LAPACKLIBS) $(BLASLIBS) $(FLIBS) $(SQLITELIBS) $(TSILLIBS) $(LDLIBS)

ALLDEP += $(LIBSingletDM_DEP) $(EXESingletDM_DEP)
ALLSRC += $(LIBSingletDM_SRC) $(EXESingletDM_SRC)
ALLLIB += $(LIBSingletDM)
ALLEXE += $(EXESingletDM_EXE)
