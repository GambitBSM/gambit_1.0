DIR          := models/MSSMNoFV
MODNAME      := MSSMNoFV
SARAH_MODEL  := MSSMNoFV

MSSMNoFV_INSTALL_DIR := $(INSTALL_DIR)/$(DIR)

MSSMNoFV_MK     := \
		$(DIR)/module.mk

MSSMNoFV_TWO_SCALE_SUSY_MK := \
		$(DIR)/two_scale_susy.mk

MSSMNoFV_TWO_SCALE_SOFT_MK := \
		$(DIR)/two_scale_soft.mk

MSSMNoFV_TWO_SCALE_MK := \
		$(MSSMNoFV_TWO_SCALE_SUSY_MK) \
		$(MSSMNoFV_TWO_SCALE_SOFT_MK)

MSSMNoFV_SLHA_INPUT := \
		$(DIR)/LesHouches.in.MSSMNoFV_generated \
		$(DIR)/LesHouches.in.MSSMNoFV

MSSMNoFV_GNUPLOT := \
		$(DIR)/MSSMNoFV_plot_rgflow.gnuplot \
		$(DIR)/MSSMNoFV_plot_spectrum.gnuplot

MSSMNoFV_TARBALL := \
		$(MODNAME).tar.gz

LIBMSSMNoFV_SRC :=
EXEMSSMNoFV_SRC :=

LIBMSSMNoFV_HDR :=

ifneq ($(findstring two_scale,$(ALGORITHMS)),)
LIBMSSMNoFV_SRC += \
		$(DIR)/MSSMNoFV_effective_couplings.cpp \
		$(DIR)/MSSMNoFV_mass_eigenstates.cpp \
		$(DIR)/MSSMNoFV_info.cpp \
		$(DIR)/MSSMNoFV_input_parameters.cpp \
		$(DIR)/MSSMNoFV_observables.cpp \
		$(DIR)/MSSMNoFV_slha_io.cpp \
		$(DIR)/MSSMNoFV_physical.cpp \
		$(DIR)/MSSMNoFV_utilities.cpp \
		$(DIR)/MSSMNoFV_two_scale_convergence_tester.cpp \
		$(DIR)/MSSMNoFV_two_scale_high_scale_constraint.cpp \
		$(DIR)/MSSMNoFV_two_scale_initial_guesser.cpp \
		$(DIR)/MSSMNoFV_two_scale_low_scale_constraint.cpp \
		$(DIR)/MSSMNoFV_two_scale_model.cpp \
		$(DIR)/MSSMNoFV_two_scale_model_slha.cpp \
		$(DIR)/MSSMNoFV_two_scale_susy_parameters.cpp \
		$(DIR)/MSSMNoFV_two_scale_soft_parameters.cpp \
		$(DIR)/MSSMNoFV_two_scale_susy_scale_constraint.cpp
EXEMSSMNoFV_SRC += \
		$(DIR)/run_MSSMNoFV.cpp \
		$(DIR)/run_cmd_line_MSSMNoFV.cpp \
		$(DIR)/scan_MSSMNoFV.cpp
LIBMSSMNoFV_HDR += \
		$(DIR)/MSSMNoFV_convergence_tester.hpp \
		$(DIR)/MSSMNoFV_effective_couplings.hpp \
		$(DIR)/MSSMNoFV_high_scale_constraint.hpp \
		$(DIR)/MSSMNoFV_mass_eigenstates.hpp \
		$(DIR)/MSSMNoFV_info.hpp \
		$(DIR)/MSSMNoFV_initial_guesser.hpp \
		$(DIR)/MSSMNoFV_input_parameters.hpp \
		$(DIR)/MSSMNoFV_low_scale_constraint.hpp \
		$(DIR)/MSSMNoFV_model.hpp \
		$(DIR)/MSSMNoFV_model_slha.hpp \
		$(DIR)/MSSMNoFV_observables.hpp \
		$(DIR)/MSSMNoFV_physical.hpp \
		$(DIR)/MSSMNoFV_slha_io.hpp \
		$(DIR)/MSSMNoFV_spectrum_generator_interface.hpp \
		$(DIR)/MSSMNoFV_spectrum_generator.hpp \
		$(DIR)/MSSMNoFV_susy_scale_constraint.hpp \
		$(DIR)/MSSMNoFV_utilities.hpp \
		$(DIR)/MSSMNoFV_two_scale_convergence_tester.hpp \
		$(DIR)/MSSMNoFV_two_scale_high_scale_constraint.hpp \
		$(DIR)/MSSMNoFV_two_scale_initial_guesser.hpp \
		$(DIR)/MSSMNoFV_two_scale_low_scale_constraint.hpp \
		$(DIR)/MSSMNoFV_two_scale_model.hpp \
		$(DIR)/MSSMNoFV_two_scale_model_slha.hpp \
		$(DIR)/MSSMNoFV_two_scale_soft_parameters.hpp \
		$(DIR)/MSSMNoFV_two_scale_susy_parameters.hpp \
		$(DIR)/MSSMNoFV_two_scale_susy_scale_constraint.hpp

ifneq ($(MAKECMDGOALS),showbuild)
ifneq ($(MAKECMDGOALS),tag)
ifneq ($(MAKECMDGOALS),release)
ifneq ($(MAKECMDGOALS),doc)
-include $(MSSMNoFV_TWO_SCALE_SUSY_MK)
-include $(MSSMNoFV_TWO_SCALE_SOFT_MK)
ifneq ($(MAKECMDGOALS),clean)
ifneq ($(MAKECMDGOALS),distclean)
ifneq ($(MAKECMDGOALS),pack-$(MODNAME)-src)
ifeq ($(findstring clean-,$(MAKECMDGOALS)),)
ifeq ($(findstring distclean-,$(MAKECMDGOALS)),)
ifeq ($(findstring doc-,$(MAKECMDGOALS)),)
$(MSSMNoFV_TWO_SCALE_SUSY_MK): run-metacode-$(MODNAME)
		@$(CONVERT_DOS_PATHS) $@
$(MSSMNoFV_TWO_SCALE_SOFT_MK): run-metacode-$(MODNAME)
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
LIBMSSMNoFV_SRC := $(sort $(LIBMSSMNoFV_SRC))
EXEMSSMNoFV_SRC := $(sort $(EXEMSSMNoFV_SRC))

LIBMSSMNoFV_OBJ := \
		$(patsubst %.cpp, %.o, $(filter %.cpp, $(LIBMSSMNoFV_SRC))) \
		$(patsubst %.f, %.o, $(filter %.f, $(LIBMSSMNoFV_SRC)))

EXEMSSMNoFV_OBJ := \
		$(patsubst %.cpp, %.o, $(filter %.cpp, $(EXEMSSMNoFV_SRC))) \
		$(patsubst %.f, %.o, $(filter %.f, $(EXEMSSMNoFV_SRC)))

EXEMSSMNoFV_EXE := \
		$(patsubst %.cpp, %.x, $(filter %.cpp, $(EXEMSSMNoFV_SRC))) \
		$(patsubst %.f, %.x, $(filter %.f, $(EXEMSSMNoFV_SRC)))

LIBMSSMNoFV_DEP := \
		$(LIBMSSMNoFV_OBJ:.o=.d)

EXEMSSMNoFV_DEP := \
		$(EXEMSSMNoFV_OBJ:.o=.d)

LIBMSSMNoFV     := $(DIR)/lib$(MODNAME)$(LIBEXT)

METACODE_STAMP_MSSMNoFV := $(DIR)/00_DELETE_ME_TO_RERUN_METACODE

ifeq ($(ENABLE_META),yes)
SARAH_MODEL_FILES_MSSMNoFV := \
		$(shell $(SARAH_DEP_GEN) $(SARAH_MODEL))
endif

.PHONY:         all-$(MODNAME) clean-$(MODNAME) clean-$(MODNAME)-src \
		clean-$(MODNAME)-dep clean-$(MODNAME)-lib \
		clean-$(MODNAME)-obj distclean-$(MODNAME) \
		run-metacode-$(MODNAME) pack-$(MODNAME)-src

all-$(MODNAME): $(LIBMSSMNoFV) $(EXEMSSMNoFV_EXE)
		@true

ifneq ($(INSTALL_DIR),)
install-src::
		install -d $(MSSMNoFV_INSTALL_DIR)
		install -m u=rw,g=r,o=r $(LIBMSSMNoFV_SRC) $(MSSMNoFV_INSTALL_DIR)
		install -m u=rw,g=r,o=r $(LIBMSSMNoFV_HDR) $(MSSMNoFV_INSTALL_DIR)
		install -m u=rw,g=r,o=r $(EXEMSSMNoFV_SRC) $(MSSMNoFV_INSTALL_DIR)
		$(INSTALL_STRIPPED) $(MSSMNoFV_MK) $(MSSMNoFV_INSTALL_DIR) -m u=rw,g=r,o=r
		install -m u=rw,g=r,o=r $(MSSMNoFV_TWO_SCALE_MK) $(MSSMNoFV_INSTALL_DIR)
ifneq ($(MSSMNoFV_SLHA_INPUT),)
		install -m u=rw,g=r,o=r $(MSSMNoFV_SLHA_INPUT) $(MSSMNoFV_INSTALL_DIR)
endif
		install -m u=rw,g=r,o=r $(MSSMNoFV_GNUPLOT) $(MSSMNoFV_INSTALL_DIR)
endif

clean-$(MODNAME)-dep:
		-rm -f $(LIBMSSMNoFV_DEP)
		-rm -f $(EXEMSSMNoFV_DEP)

clean-$(MODNAME)-lib:
		-rm -f $(LIBMSSMNoFV)

clean-$(MODNAME)-obj:
		-rm -f $(LIBMSSMNoFV_OBJ)
		-rm -f $(EXEMSSMNoFV_OBJ)


clean-$(MODNAME): clean-$(MODNAME)-dep clean-$(MODNAME)-lib clean-$(MODNAME)-obj
		-rm -f $(EXEMSSMNoFV_EXE)

distclean-$(MODNAME): clean-$(MODNAME)
		@true

clean-obj::     clean-$(MODNAME)-obj

clean::         clean-$(MODNAME)

distclean::     distclean-$(MODNAME)

pack-$(MODNAME)-src:
		tar -czf $(MSSMNoFV_TARBALL) \
		$(LIBMSSMNoFV_SRC) $(LIBMSSMNoFV_HDR) \
		$(EXEMSSMNoFV_SRC) \
		$(MSSMNoFV_MK) $(MSSMNoFV_TWO_SCALE_MK) \
		$(MSSMNoFV_SLHA_INPUT) $(MSSMNoFV_GNUPLOT)

$(LIBMSSMNoFV_SRC) $(LIBMSSMNoFV_HDR) $(EXEMSSMNoFV_SRC) \
: run-metacode-$(MODNAME)
		@true

run-metacode-$(MODNAME): $(METACODE_STAMP_MSSMNoFV)
		@true

ifeq ($(ENABLE_META),yes)
$(METACODE_STAMP_MSSMNoFV): $(DIR)/start.m $(DIR)/FlexibleSUSY.m $(META_SRC) $(TEMPLATES) $(SARAH_MODEL_FILES_MSSMNoFV)
		"$(MATH)" -run "Get[\"$<\"]; Quit[]"
		@touch "$(METACODE_STAMP_MSSMNoFV)"
		@echo "Note: to regenerate MSSMNoFV source files," \
		      "please remove the file "
		@echo "\"$(METACODE_STAMP_MSSMNoFV)\" and run make"
		@echo "---------------------------------"
else
$(METACODE_STAMP_MSSMNoFV):
		@true
endif

$(LIBMSSMNoFV_DEP) $(EXEMSSMNoFV_DEP) $(LIBMSSMNoFV_OBJ) $(EXEMSSMNoFV_OBJ): CPPFLAGS += $(GSLFLAGS) $(EIGENFLAGS) $(BOOSTFLAGS) $(TSILFLAGS)

ifneq (,$(findstring yes,$(ENABLE_LOOPTOOLS)$(ENABLE_FFLITE)))
$(LIBMSSMNoFV_DEP) $(EXEMSSMNoFV_DEP) $(LIBMSSMNoFV_OBJ) $(EXEMSSMNoFV_OBJ): CPPFLAGS += $(LOOPFUNCFLAGS)
endif

$(LIBMSSMNoFV): $(LIBMSSMNoFV_OBJ)
		$(MAKELIB) $@ $^

$(DIR)/%.x: $(DIR)/%.o $(LIBMSSMNoFV) $(LIBFLEXI) $(LIBLEGACY) $(filter-out -%,$(LOOPFUNCLIBS))
		$(CXX) $(LDFLAGS) -o $@ $(call abspathx,$^ $(ADDONLIBS)) $(filter -%,$(LOOPFUNCLIBS)) $(GSLLIBS) $(BOOSTTHREADLIBS) $(THREADLIBS) $(LAPACKLIBS) $(BLASLIBS) $(FLIBS) $(SQLITELIBS) $(TSILLIBS) $(LDLIBS)

ALLDEP += $(LIBMSSMNoFV_DEP) $(EXEMSSMNoFV_DEP)
ALLSRC += $(LIBMSSMNoFV_SRC) $(EXEMSSMNoFV_SRC)
ALLLIB += $(LIBMSSMNoFV)
ALLEXE += $(EXEMSSMNoFV_EXE)
