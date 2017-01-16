DIR          := models/SingletDMZ3
MODNAME      := SingletDMZ3
SARAH_MODEL  := SingletDMZ3

SingletDMZ3_INSTALL_DIR := $(INSTALL_DIR)/$(DIR)

SingletDMZ3_MK     := \
		$(DIR)/module.mk

SingletDMZ3_TWO_SCALE_SUSY_MK := \
		$(DIR)/two_scale_susy.mk

SingletDMZ3_TWO_SCALE_SOFT_MK := \
		$(DIR)/two_scale_soft.mk

SingletDMZ3_TWO_SCALE_MK := \
		$(SingletDMZ3_TWO_SCALE_SUSY_MK) \
		$(SingletDMZ3_TWO_SCALE_SOFT_MK)

SingletDMZ3_SLHA_INPUT := \
		$(DIR)/LesHouches.in.SingletDMZ3_generated \
		$(DIR)/LesHouches.in.SingletDMZ3

SingletDMZ3_GNUPLOT := \
		$(DIR)/SingletDMZ3_plot_rgflow.gnuplot \
		$(DIR)/SingletDMZ3_plot_spectrum.gnuplot

SingletDMZ3_TARBALL := \
		$(MODNAME).tar.gz

LIBSingletDMZ3_SRC :=
EXESingletDMZ3_SRC :=

LIBSingletDMZ3_HDR :=

ifneq ($(findstring two_scale,$(ALGORITHMS)),)
LIBSingletDMZ3_SRC += \
		$(DIR)/SingletDMZ3_effective_couplings.cpp \
		$(DIR)/SingletDMZ3_mass_eigenstates.cpp \
		$(DIR)/SingletDMZ3_info.cpp \
		$(DIR)/SingletDMZ3_input_parameters.cpp \
		$(DIR)/SingletDMZ3_observables.cpp \
		$(DIR)/SingletDMZ3_slha_io.cpp \
		$(DIR)/SingletDMZ3_physical.cpp \
		$(DIR)/SingletDMZ3_utilities.cpp \
		$(DIR)/SingletDMZ3_two_scale_convergence_tester.cpp \
		$(DIR)/SingletDMZ3_two_scale_high_scale_constraint.cpp \
		$(DIR)/SingletDMZ3_two_scale_initial_guesser.cpp \
		$(DIR)/SingletDMZ3_two_scale_low_scale_constraint.cpp \
		$(DIR)/SingletDMZ3_two_scale_model.cpp \
		$(DIR)/SingletDMZ3_two_scale_model_slha.cpp \
		$(DIR)/SingletDMZ3_two_scale_susy_parameters.cpp \
		$(DIR)/SingletDMZ3_two_scale_soft_parameters.cpp \
		$(DIR)/SingletDMZ3_two_scale_susy_scale_constraint.cpp
EXESingletDMZ3_SRC += \
		$(DIR)/run_SingletDMZ3.cpp \
		$(DIR)/run_cmd_line_SingletDMZ3.cpp \
		$(DIR)/scan_SingletDMZ3.cpp
LIBSingletDMZ3_HDR += \
		$(DIR)/SingletDMZ3_convergence_tester.hpp \
		$(DIR)/SingletDMZ3_effective_couplings.hpp \
		$(DIR)/SingletDMZ3_high_scale_constraint.hpp \
		$(DIR)/SingletDMZ3_mass_eigenstates.hpp \
		$(DIR)/SingletDMZ3_info.hpp \
		$(DIR)/SingletDMZ3_initial_guesser.hpp \
		$(DIR)/SingletDMZ3_input_parameters.hpp \
		$(DIR)/SingletDMZ3_low_scale_constraint.hpp \
		$(DIR)/SingletDMZ3_model.hpp \
		$(DIR)/SingletDMZ3_model_slha.hpp \
		$(DIR)/SingletDMZ3_observables.hpp \
		$(DIR)/SingletDMZ3_physical.hpp \
		$(DIR)/SingletDMZ3_slha_io.hpp \
		$(DIR)/SingletDMZ3_spectrum_generator_interface.hpp \
		$(DIR)/SingletDMZ3_spectrum_generator.hpp \
		$(DIR)/SingletDMZ3_susy_scale_constraint.hpp \
		$(DIR)/SingletDMZ3_utilities.hpp \
		$(DIR)/SingletDMZ3_two_scale_convergence_tester.hpp \
		$(DIR)/SingletDMZ3_two_scale_high_scale_constraint.hpp \
		$(DIR)/SingletDMZ3_two_scale_initial_guesser.hpp \
		$(DIR)/SingletDMZ3_two_scale_low_scale_constraint.hpp \
		$(DIR)/SingletDMZ3_two_scale_model.hpp \
		$(DIR)/SingletDMZ3_two_scale_model_slha.hpp \
		$(DIR)/SingletDMZ3_two_scale_soft_parameters.hpp \
		$(DIR)/SingletDMZ3_two_scale_susy_parameters.hpp \
		$(DIR)/SingletDMZ3_two_scale_susy_scale_constraint.hpp

ifneq ($(MAKECMDGOALS),showbuild)
ifneq ($(MAKECMDGOALS),tag)
ifneq ($(MAKECMDGOALS),release)
ifneq ($(MAKECMDGOALS),doc)
-include $(SingletDMZ3_TWO_SCALE_SUSY_MK)
-include $(SingletDMZ3_TWO_SCALE_SOFT_MK)
ifneq ($(MAKECMDGOALS),clean)
ifneq ($(MAKECMDGOALS),distclean)
ifneq ($(MAKECMDGOALS),pack-$(MODNAME)-src)
ifeq ($(findstring clean-,$(MAKECMDGOALS)),)
ifeq ($(findstring distclean-,$(MAKECMDGOALS)),)
ifeq ($(findstring doc-,$(MAKECMDGOALS)),)
$(SingletDMZ3_TWO_SCALE_SUSY_MK): run-metacode-$(MODNAME)
		@$(CONVERT_DOS_PATHS) $@
$(SingletDMZ3_TWO_SCALE_SOFT_MK): run-metacode-$(MODNAME)
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
LIBSingletDMZ3_SRC := $(sort $(LIBSingletDMZ3_SRC))
EXESingletDMZ3_SRC := $(sort $(EXESingletDMZ3_SRC))

LIBSingletDMZ3_OBJ := \
		$(patsubst %.cpp, %.o, $(filter %.cpp, $(LIBSingletDMZ3_SRC))) \
		$(patsubst %.f, %.o, $(filter %.f, $(LIBSingletDMZ3_SRC)))

EXESingletDMZ3_OBJ := \
		$(patsubst %.cpp, %.o, $(filter %.cpp, $(EXESingletDMZ3_SRC))) \
		$(patsubst %.f, %.o, $(filter %.f, $(EXESingletDMZ3_SRC)))

EXESingletDMZ3_EXE := \
		$(patsubst %.cpp, %.x, $(filter %.cpp, $(EXESingletDMZ3_SRC))) \
		$(patsubst %.f, %.x, $(filter %.f, $(EXESingletDMZ3_SRC)))

LIBSingletDMZ3_DEP := \
		$(LIBSingletDMZ3_OBJ:.o=.d)

EXESingletDMZ3_DEP := \
		$(EXESingletDMZ3_OBJ:.o=.d)

LIBSingletDMZ3     := $(DIR)/lib$(MODNAME)$(LIBEXT)

METACODE_STAMP_SingletDMZ3 := $(DIR)/00_DELETE_ME_TO_RERUN_METACODE

ifeq ($(ENABLE_META),yes)
SARAH_MODEL_FILES_SingletDMZ3 := \
		$(shell $(SARAH_DEP_GEN) $(SARAH_MODEL))
endif

.PHONY:         all-$(MODNAME) clean-$(MODNAME) clean-$(MODNAME)-src \
		clean-$(MODNAME)-dep clean-$(MODNAME)-lib \
		clean-$(MODNAME)-obj distclean-$(MODNAME) \
		run-metacode-$(MODNAME) pack-$(MODNAME)-src

all-$(MODNAME): $(LIBSingletDMZ3) $(EXESingletDMZ3_EXE)
		@true

ifneq ($(INSTALL_DIR),)
install-src::
		install -d $(SingletDMZ3_INSTALL_DIR)
		install -m u=rw,g=r,o=r $(LIBSingletDMZ3_SRC) $(SingletDMZ3_INSTALL_DIR)
		install -m u=rw,g=r,o=r $(LIBSingletDMZ3_HDR) $(SingletDMZ3_INSTALL_DIR)
		install -m u=rw,g=r,o=r $(EXESingletDMZ3_SRC) $(SingletDMZ3_INSTALL_DIR)
		$(INSTALL_STRIPPED) $(SingletDMZ3_MK) $(SingletDMZ3_INSTALL_DIR) -m u=rw,g=r,o=r
		install -m u=rw,g=r,o=r $(SingletDMZ3_TWO_SCALE_MK) $(SingletDMZ3_INSTALL_DIR)
ifneq ($(SingletDMZ3_SLHA_INPUT),)
		install -m u=rw,g=r,o=r $(SingletDMZ3_SLHA_INPUT) $(SingletDMZ3_INSTALL_DIR)
endif
		install -m u=rw,g=r,o=r $(SingletDMZ3_GNUPLOT) $(SingletDMZ3_INSTALL_DIR)
endif

clean-$(MODNAME)-dep:
		-rm -f $(LIBSingletDMZ3_DEP)
		-rm -f $(EXESingletDMZ3_DEP)

clean-$(MODNAME)-lib:
		-rm -f $(LIBSingletDMZ3)

clean-$(MODNAME)-obj:
		-rm -f $(LIBSingletDMZ3_OBJ)
		-rm -f $(EXESingletDMZ3_OBJ)


clean-$(MODNAME): clean-$(MODNAME)-dep clean-$(MODNAME)-lib clean-$(MODNAME)-obj
		-rm -f $(EXESingletDMZ3_EXE)

distclean-$(MODNAME): clean-$(MODNAME)
		@true

clean-obj::     clean-$(MODNAME)-obj

clean::         clean-$(MODNAME)

distclean::     distclean-$(MODNAME)

pack-$(MODNAME)-src:
		tar -czf $(SingletDMZ3_TARBALL) \
		$(LIBSingletDMZ3_SRC) $(LIBSingletDMZ3_HDR) \
		$(EXESingletDMZ3_SRC) \
		$(SingletDMZ3_MK) $(SingletDMZ3_TWO_SCALE_MK) \
		$(SingletDMZ3_SLHA_INPUT) $(SingletDMZ3_GNUPLOT)

$(LIBSingletDMZ3_SRC) $(LIBSingletDMZ3_HDR) $(EXESingletDMZ3_SRC) \
: run-metacode-$(MODNAME)
		@true

run-metacode-$(MODNAME): $(METACODE_STAMP_SingletDMZ3)
		@true

ifeq ($(ENABLE_META),yes)
$(METACODE_STAMP_SingletDMZ3): $(DIR)/start.m $(DIR)/FlexibleSUSY.m $(META_SRC) $(TEMPLATES) $(SARAH_MODEL_FILES_SingletDMZ3)
		"$(MATH)" -run "Get[\"$<\"]; Quit[]"
		@touch "$(METACODE_STAMP_SingletDMZ3)"
		@echo "Note: to regenerate SingletDMZ3 source files," \
		      "please remove the file "
		@echo "\"$(METACODE_STAMP_SingletDMZ3)\" and run make"
		@echo "---------------------------------"
else
$(METACODE_STAMP_SingletDMZ3):
		@true
endif

$(LIBSingletDMZ3_DEP) $(EXESingletDMZ3_DEP) $(LIBSingletDMZ3_OBJ) $(EXESingletDMZ3_OBJ): CPPFLAGS += $(GSLFLAGS) $(EIGENFLAGS) $(BOOSTFLAGS) $(TSILFLAGS)

ifneq (,$(findstring yes,$(ENABLE_LOOPTOOLS)$(ENABLE_FFLITE)))
$(LIBSingletDMZ3_DEP) $(EXESingletDMZ3_DEP) $(LIBSingletDMZ3_OBJ) $(EXESingletDMZ3_OBJ): CPPFLAGS += $(LOOPFUNCFLAGS)
endif

$(LIBSingletDMZ3): $(LIBSingletDMZ3_OBJ)
		$(MAKELIB) $@ $^

$(DIR)/%.x: $(DIR)/%.o $(LIBSingletDMZ3) $(LIBFLEXI) $(LIBLEGACY) $(filter-out -%,$(LOOPFUNCLIBS))
		$(CXX) $(LDFLAGS) -o $@ $(call abspathx,$^ $(ADDONLIBS)) $(filter -%,$(LOOPFUNCLIBS)) $(GSLLIBS) $(BOOSTTHREADLIBS) $(THREADLIBS) $(LAPACKLIBS) $(BLASLIBS) $(FLIBS) $(SQLITELIBS) $(TSILLIBS) $(LDLIBS)

ALLDEP += $(LIBSingletDMZ3_DEP) $(EXESingletDMZ3_DEP)
ALLSRC += $(LIBSingletDMZ3_SRC) $(EXESingletDMZ3_SRC)
ALLLIB += $(LIBSingletDMZ3)
ALLEXE += $(EXESingletDMZ3_EXE)
