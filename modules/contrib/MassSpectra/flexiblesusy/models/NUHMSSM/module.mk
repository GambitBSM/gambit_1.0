DIR          := models/NUHMSSM
MODNAME      := NUHMSSM
SARAH_MODEL  := MSSM

NUHMSSM_INSTALL_DIR := $(INSTALL_DIR)/$(DIR)

NUHMSSM_MK     := \
		$(DIR)/module.mk

NUHMSSM_TWO_SCALE_SUSY_MK := \
		$(DIR)/two_scale_susy.mk

NUHMSSM_TWO_SCALE_SOFT_MK := \
		$(DIR)/two_scale_soft.mk

NUHMSSM_TWO_SCALE_MK := \
		$(NUHMSSM_TWO_SCALE_SUSY_MK) \
		$(NUHMSSM_TWO_SCALE_SOFT_MK)

NUHMSSM_SLHA_INPUT := \


NUHMSSM_GNUPLOT := \
		$(DIR)/NUHMSSM_plot_rgflow.gnuplot \
		$(DIR)/NUHMSSM_plot_spectrum.gnuplot

NUHMSSM_TARBALL := \
		$(MODNAME).tar.gz

LIBNUHMSSM_SRC :=
EXENUHMSSM_SRC :=

LIBNUHMSSM_HDR :=

ifneq ($(findstring two_scale,$(ALGORITHMS)),)
LIBNUHMSSM_SRC += \
		$(DIR)/NUHMSSM_info.cpp \
		$(DIR)/NUHMSSM_input_parameters.cpp \
		$(DIR)/NUHMSSM_slha_io.cpp \
		$(DIR)/NUHMSSM_physical.cpp \
		$(DIR)/NUHMSSM_utilities.cpp \
		$(DIR)/NUHMSSM_two_scale_convergence_tester.cpp \
		$(DIR)/NUHMSSM_two_scale_high_scale_constraint.cpp \
		$(DIR)/NUHMSSM_two_scale_initial_guesser.cpp \
		$(DIR)/NUHMSSM_two_scale_low_scale_constraint.cpp \
		$(DIR)/NUHMSSM_two_scale_model.cpp \
		$(DIR)/NUHMSSM_two_scale_model_slha.cpp \
		$(DIR)/NUHMSSM_two_scale_susy_parameters.cpp \
		$(DIR)/NUHMSSM_two_scale_soft_parameters.cpp \
		$(DIR)/NUHMSSM_two_scale_susy_scale_constraint.cpp
EXENUHMSSM_SRC += \
		$(DIR)/run_NUHMSSM.cpp \
		$(DIR)/run_cmd_line_NUHMSSM.cpp \
		$(DIR)/scan_NUHMSSM.cpp
LIBNUHMSSM_HDR += \
		$(DIR)/NUHMSSM_convergence_tester.hpp \
		$(DIR)/NUHMSSM_high_scale_constraint.hpp \
		$(DIR)/NUHMSSM_info.hpp \
		$(DIR)/NUHMSSM_initial_guesser.hpp \
		$(DIR)/NUHMSSM_input_parameters.hpp \
		$(DIR)/NUHMSSM_low_scale_constraint.hpp \
		$(DIR)/NUHMSSM_model.hpp \
		$(DIR)/NUHMSSM_model_slha.hpp \
		$(DIR)/NUHMSSM_physical.hpp \
		$(DIR)/NUHMSSM_slha_io.hpp \
		$(DIR)/NUHMSSM_spectrum_generator.hpp \
		$(DIR)/NUHMSSM_susy_scale_constraint.hpp \
		$(DIR)/NUHMSSM_utilities.hpp \
		$(DIR)/NUHMSSM_two_scale_convergence_tester.hpp \
		$(DIR)/NUHMSSM_two_scale_high_scale_constraint.hpp \
		$(DIR)/NUHMSSM_two_scale_initial_guesser.hpp \
		$(DIR)/NUHMSSM_two_scale_low_scale_constraint.hpp \
		$(DIR)/NUHMSSM_two_scale_model.hpp \
		$(DIR)/NUHMSSM_two_scale_model_slha.hpp \
		$(DIR)/NUHMSSM_two_scale_soft_parameters.hpp \
		$(DIR)/NUHMSSM_two_scale_susy_parameters.hpp \
		$(DIR)/NUHMSSM_two_scale_susy_scale_constraint.hpp

ifneq ($(MAKECMDGOALS),showbuild)
ifneq ($(MAKECMDGOALS),tag)
ifneq ($(MAKECMDGOALS),release)
ifneq ($(MAKECMDGOALS),doc)
-include $(NUHMSSM_TWO_SCALE_SUSY_MK)
-include $(NUHMSSM_TWO_SCALE_SOFT_MK)
ifneq ($(MAKECMDGOALS),clean)
ifneq ($(MAKECMDGOALS),distclean)
ifneq ($(MAKECMDGOALS),pack-$(MODNAME)-src)
ifeq ($(findstring clean-,$(MAKECMDGOALS)),)
ifeq ($(findstring distclean-,$(MAKECMDGOALS)),)
ifeq ($(findstring doc-,$(MAKECMDGOALS)),)
$(NUHMSSM_TWO_SCALE_SUSY_MK): run-metacode-$(MODNAME)
		@$(CONVERT_DOS_PATHS) $@
$(NUHMSSM_TWO_SCALE_SOFT_MK): run-metacode-$(MODNAME)
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
LIBNUHMSSM_SRC := $(sort $(LIBNUHMSSM_SRC))
EXENUHMSSM_SRC := $(sort $(EXENUHMSSM_SRC))

LIBNUHMSSM_OBJ := \
		$(patsubst %.cpp, %.o, $(filter %.cpp, $(LIBNUHMSSM_SRC))) \
		$(patsubst %.f, %.o, $(filter %.f, $(LIBNUHMSSM_SRC)))

EXENUHMSSM_OBJ := \
		$(patsubst %.cpp, %.o, $(filter %.cpp, $(EXENUHMSSM_SRC))) \
		$(patsubst %.f, %.o, $(filter %.f, $(EXENUHMSSM_SRC)))

LIBNUHMSSM_DEP := \
		$(LIBNUHMSSM_OBJ:.o=.d)

EXENUHMSSM_DEP := \
		$(EXENUHMSSM_OBJ:.o=.d)

LIBNUHMSSM     := $(DIR)/lib$(MODNAME)$(LIBEXT)

RUN_NUHMSSM_OBJ := $(DIR)/run_NUHMSSM.o
RUN_NUHMSSM_EXE := $(DIR)/run_NUHMSSM.x

RUN_CMD_LINE_NUHMSSM_OBJ := $(DIR)/run_cmd_line_NUHMSSM.o
RUN_CMD_LINE_NUHMSSM_EXE := $(DIR)/run_cmd_line_NUHMSSM.x

SCAN_NUHMSSM_OBJ := $(DIR)/scan_NUHMSSM.o
SCAN_NUHMSSM_EXE := $(DIR)/scan_NUHMSSM.x

METACODE_STAMP_NUHMSSM := $(DIR)/00_DELETE_ME_TO_RERUN_METACODE

ifeq ($(ENABLE_META),yes)
SARAH_MODEL_FILES_NUHMSSM := \
		$(shell $(SARAH_DEP_GEN) $(SARAH_MODEL))
endif

.PHONY:         all-$(MODNAME) clean-$(MODNAME) clean-$(MODNAME)-src \
		distclean-$(MODNAME) run-metacode-$(MODNAME) \
		pack-$(MODNAME)-src

all-$(MODNAME): $(LIBNUHMSSM)

ifneq ($(INSTALL_DIR),)
install-src::
		install -d $(NUHMSSM_INSTALL_DIR)
		install -m u=rw,g=r,o=r $(LIBNUHMSSM_SRC) $(NUHMSSM_INSTALL_DIR)
		install -m u=rw,g=r,o=r $(LIBNUHMSSM_HDR) $(NUHMSSM_INSTALL_DIR)
		install -m u=rw,g=r,o=r $(EXENUHMSSM_SRC) $(NUHMSSM_INSTALL_DIR)
		$(INSTALL_STRIPPED) $(NUHMSSM_MK) $(NUHMSSM_INSTALL_DIR) -m u=rw,g=r,o=r
		install -m u=rw,g=r,o=r $(NUHMSSM_TWO_SCALE_MK) $(NUHMSSM_INSTALL_DIR)
ifneq ($(NUHMSSM_SLHA_INPUT),)
		install -m u=rw,g=r,o=r $(NUHMSSM_SLHA_INPUT) $(NUHMSSM_INSTALL_DIR)
endif
		install -m u=rw,g=r,o=r $(NUHMSSM_GNUPLOT) $(NUHMSSM_INSTALL_DIR)
endif

clean-$(MODNAME)-dep:
		-rm -f $(LIBNUHMSSM_DEP)
		-rm -f $(EXENUHMSSM_DEP)

clean-$(MODNAME)-obj:
		-rm -f $(LIBNUHMSSM_OBJ)
		-rm -f $(EXENUHMSSM_OBJ)


clean-$(MODNAME): clean-$(MODNAME)-dep clean-$(MODNAME)-obj
		-rm -f $(LIBNUHMSSM)
		-rm -f $(RUN_NUHMSSM_EXE)
		-rm -f $(RUN_CMD_LINE_NUHMSSM_EXE)
		-rm -f $(SCAN_NUHMSSM_EXE)

distclean-$(MODNAME): clean-$(MODNAME)

clean::         clean-$(MODNAME)

distclean::     distclean-$(MODNAME)

pack-$(MODNAME)-src:
		tar -czf $(NUHMSSM_TARBALL) \
		$(LIBNUHMSSM_SRC) $(LIBNUHMSSM_HDR) \
		$(EXENUHMSSM_SRC) \
		$(NUHMSSM_MK) $(NUHMSSM_TWO_SCALE_MK) \
		$(NUHMSSM_SLHA_INPUT) $(NUHMSSM_GNUPLOT)

$(LIBNUHMSSM_SRC) $(LIBNUHMSSM_HDR) $(EXENUHMSSM_SRC) \
: run-metacode-$(MODNAME)
		@true

run-metacode-$(MODNAME): $(METACODE_STAMP_NUHMSSM)
		@true

ifeq ($(ENABLE_META),yes)
$(METACODE_STAMP_NUHMSSM): $(DIR)/start.m $(DIR)/FlexibleSUSY.m $(META_SRC) $(TEMPLATES) $(SARAH_MODEL_FILES_NUHMSSM)
		"$(MATH)" -run "Get[\"$<\"]; Quit[]"
		@touch "$(METACODE_STAMP_NUHMSSM)"
		@echo "Note: to regenerate NUHMSSM source files," \
		      "please remove the file "
		@echo "\"$(METACODE_STAMP_NUHMSSM)\" and run make"
		@echo "---------------------------------"
else
$(METACODE_STAMP_NUHMSSM):
		@true
endif

$(LIBNUHMSSM_DEP) $(EXENUHMSSM_DEP) $(LIBNUHMSSM_OBJ) $(EXENUHMSSM_OBJ): CPPFLAGS += $(GSLFLAGS) $(EIGENFLAGS) $(BOOSTFLAGS)

ifneq (,$(findstring yes,$(ENABLE_LOOPTOOLS)$(ENABLE_FFLITE)))
$(LIBNUHMSSM_DEP) $(EXENUHMSSM_DEP) $(LIBNUHMSSM_OBJ) $(EXENUHMSSM_OBJ): CPPFLAGS += $(LOOPFUNCFLAGS)
endif

$(LIBNUHMSSM): $(LIBNUHMSSM_OBJ)
		$(MAKELIB) $@ $^

$(RUN_NUHMSSM_EXE): $(RUN_NUHMSSM_OBJ) $(LIBNUHMSSM) $(LIBFLEXI) $(LIBLEGACY) $(filter-out -%,$(LOOPFUNCLIBS))
		$(CXX) -o $@ $(call abspathx,$^) $(filter -%,$(LOOPFUNCLIBS)) $(GSLLIBS) $(BOOSTTHREADLIBS) $(THREADLIBS) $(LAPACKLIBS) $(BLASLIBS) $(FLIBS)

$(RUN_CMD_LINE_NUHMSSM_EXE): $(RUN_CMD_LINE_NUHMSSM_OBJ) $(LIBNUHMSSM) $(LIBFLEXI) $(LIBLEGACY) $(filter-out -%,$(LOOPFUNCLIBS))
		$(CXX) -o $@ $(call abspathx,$^) $(filter -%,$(LOOPFUNCLIBS)) $(GSLLIBS) $(BOOSTTHREADLIBS) $(THREADLIBS) $(LAPACKLIBS) $(BLASLIBS) $(FLIBS)

$(SCAN_NUHMSSM_EXE): $(SCAN_NUHMSSM_OBJ) $(LIBNUHMSSM) $(LIBFLEXI) $(LIBLEGACY) $(filter-out -%,$(LOOPFUNCLIBS))
		$(CXX) -o $@ $(call abspathx,$^) $(filter -%,$(LOOPFUNCLIBS)) $(GSLLIBS) $(BOOSTTHREADLIBS) $(THREADLIBS) $(LAPACKLIBS) $(BLASLIBS) $(FLIBS)

ALLDEP += $(LIBNUHMSSM_DEP) $(EXENUHMSSM_DEP)
ALLSRC += $(LIBNUHMSSM_SRC) $(EXENUHMSSM_SRC)
ALLLIB += $(LIBNUHMSSM)
ALLEXE += $(RUN_NUHMSSM_EXE) $(RUN_CMD_LINE_NUHMSSM_EXE) $(SCAN_NUHMSSM_EXE)
