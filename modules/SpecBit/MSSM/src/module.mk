DIR          := src
MODNAME      := flexisusy

LIBFLEXI_MK  := \
		$(DIR)/module.mk

LIBFLEXI_SRC := \
		$(DIR)/betafunction.cpp \
		$(DIR)/build_info.cpp \
		$(DIR)/command_line_options.cpp \
		$(DIR)/def.cpp \
		$(DIR)/dilog.f \
		$(DIR)/error.cpp \
		$(DIR)/gsl_utils.cpp \
		$(DIR)/linalg.cpp \
		$(DIR)/lowe.cpp \
		$(DIR)/sfermions.cpp \
		$(DIR)/mssm_twoloophiggs.f \
		$(DIR)/nmssm2loop.f \
		$(DIR)/numerics.cpp \
		$(DIR)/spectrum_generator_settings.cpp \
		$(DIR)/rge.cpp \
		$(DIR)/rk.cpp \
		$(DIR)/scan.cpp \
		$(DIR)/slha_io.cpp \
		$(DIR)/utils.cpp \
		$(DIR)/wrappers.cpp

LIBFLEXI_HDR := \
		$(DIR)/betafunction.hpp \
		$(DIR)/build_info.hpp \
		$(DIR)/command_line_options.hpp \
		$(DIR)/compound_constraint.hpp \
		$(DIR)/constraint.hpp \
		$(DIR)/consts.hpp \
		$(DIR)/convergence_tester.hpp \
		$(DIR)/coupling_monitor.hpp \
		$(DIR)/def.h \
		$(DIR)/dilog.h \
		$(DIR)/error.hpp \
		$(DIR)/ew_input.hpp \
		$(DIR)/gsl_utils.hpp \
		$(DIR)/gut_scale_calculator.hpp \
		$(DIR)/initial_guesser.hpp \
		$(DIR)/linalg2.hpp \
		$(DIR)/linalg.h \
		$(DIR)/logger.hpp \
		$(DIR)/lowe.h \
		$(DIR)/matching.hpp \
		$(DIR)/mathdefs.hpp \
		$(DIR)/minimizer.hpp \
		$(DIR)/mssm_twoloophiggs.h \
		$(DIR)/mycomplex.h \
		$(DIR)/nmssm2loop.h \
		$(DIR)/nmssm_twoloophiggs.h \
		$(DIR)/numerics.h \
		$(DIR)/numerics.hpp \
		$(DIR)/problems.hpp \
		$(DIR)/rge.h \
		$(DIR)/rg_flow.hpp \
		$(DIR)/rk.hpp \
		$(DIR)/root_finder.hpp \
		$(DIR)/scan.hpp \
		$(DIR)/sfermions.hpp \
		$(DIR)/slha_io.hpp \
		$(DIR)/small_matrices.hpp \
		$(DIR)/spectrum_generator_settings.hpp \
		$(DIR)/utils.h \
		$(DIR)/wrappers.hpp \
		$(DIR)/xpr-base.h \
		$(DIR)/xpr-matrix.h \
		$(DIR)/xpr-vector.h

ifneq ($(findstring two_scale,$(ALGORITHMS)),)
LIBFLEXI_SRC += \
		$(DIR)/two_scale_composite_convergence_tester.cpp \
		$(DIR)/two_scale_convergence_tester.cpp \
		$(DIR)/two_scale_running_precision.cpp \
		$(DIR)/two_scale_solver.cpp

LIBFLEXI_HDR += \
		$(DIR)/two_scale_composite_convergence_tester.hpp \
		$(DIR)/two_scale_constraint.hpp \
		$(DIR)/two_scale_convergence_tester.hpp \
		$(DIR)/two_scale_convergence_tester_skeleton.hpp \
		$(DIR)/two_scale_initial_guesser.hpp \
		$(DIR)/two_scale_matching.hpp \
		$(DIR)/two_scale_model.hpp \
		$(DIR)/two_scale_running_precision.hpp \
		$(DIR)/two_scale_solver.hpp
endif

ifneq ($(findstring lattice,$(ALGORITHMS)),)
LIBFLEXI_SRC += \
		$(DIR)/lattice_model.cpp \
		$(DIR)/lattice_constraint.cpp \
		$(DIR)/lattice_numerical_constraint.cpp \
		$(DIR)/lattice_solver.cpp \
		$(DIR)/SM.cpp \
		$(DIR)/fortran_utils.f

LIBFLEXI_HDR += \
		$(DIR)/lattice_compound_constraint.hpp \
		$(DIR)/lattice_constraint.hpp \
		$(DIR)/lattice_convergence_tester.hpp \
		$(DIR)/lattice_foreign_constraint.hpp \
		$(DIR)/lattice_initial_guesser.hpp \
		$(DIR)/lattice_model.hpp \
		$(DIR)/lattice_numerical_constraint.hpp \
		$(DIR)/lattice_solver.hpp \
		$(DIR)/SM.hpp
endif

LIBFLEXI_OBJ := \
		$(patsubst %.cpp, %.o, $(filter %.cpp, $(LIBFLEXI_SRC))) \
		$(patsubst %.f, %.o, $(filter %.f, $(LIBFLEXI_SRC)))

LIBFLEXI_DEP := \
		$(LIBFLEXI_OBJ:.o=.d)

LIBFLEXI     := $(DIR)/lib$(MODNAME)$(LIBEXT)

LIBFLEXI_INSTALL_DIR := $(INSTALL_DIR)/$(DIR)

.PHONY:         all-$(MODNAME) clean-$(MODNAME) distclean-$(MODNAME)

all-$(MODNAME): $(LIBFLEXI)

ifneq ($(INSTALL_DIR),)
install-src::
		install -d $(LIBFLEXI_INSTALL_DIR)
		install -m u=rw,g=r,o=r $(LIBFLEXI_SRC) $(LIBFLEXI_INSTALL_DIR)
		install -m u=rw,g=r,o=r $(LIBFLEXI_HDR) $(LIBFLEXI_INSTALL_DIR)
		install -m u=rw,g=r,o=r $(LIBFLEXI_MK) $(LIBFLEXI_INSTALL_DIR)
endif

clean-$(MODNAME)-dep:
		-rm -f $(LIBFLEXI_DEP)

clean-$(MODNAME)-obj:
		-rm -f $(LIBFLEXI_OBJ)

clean-$(MODNAME): clean-$(MODNAME)-dep clean-$(MODNAME)-obj
		-rm -f $(LIBFLEXI)

distclean-$(MODNAME): clean-$(MODNAME)

clean::         clean-$(MODNAME)

distclean::     distclean-$(MODNAME)

$(LIBFLEXI_DEP) $(LIBFLEXI_OBJ): CPPFLAGS += $(EIGENFLAGS)

ifneq ($(findstring lattice,$(ALGORITHMS)),)
$(LIBFLEXI_DEP) $(LIBFLEXI_OBJ): CPPFLAGS += $(GSLFLAGS) $(BOOSTFLAGS)
endif

ifeq ($(ENABLE_STATIC_LIBS),yes)
$(LIBFLEXI): $(LIBFLEXI_OBJ)
		$(MAKELIB) $@ $^
else
$(LIBFLEXI): $(LIBFLEXI_OBJ)
		$(MAKELIB) $@ $^ $(BOOSTTHREADLIBS) $(THREADLIBS) $(GSLLIBS) $(LAPACKLIBS) $(FLIBS)
endif

ALLDEP += $(LIBFLEXI_DEP)
ALLLIB += $(LIBFLEXI)
