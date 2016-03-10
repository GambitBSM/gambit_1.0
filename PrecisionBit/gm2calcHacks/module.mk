DIR          := src
MODNAME      := gm2calc

# source files for library
LIBsrc_SRC := \
		$(DIR)/dilog.cpp \
		$(DIR)/ffunctions.cpp \
		$(DIR)/gm2_1loop.cpp \
		$(DIR)/gm2_2loop.cpp \
		$(DIR)/gm2_mb.cpp \
		$(DIR)/gm2_uncertainty.cpp \
		$(DIR)/gm2_slha_io.cpp \
		$(DIR)/MSSMNoFV_onshell.cpp \
		$(DIR)/MSSMNoFV_onshell_mass_eigenstates.cpp \
		$(DIR)/MSSMNoFV_onshell_physical.cpp \
		$(DIR)/MSSMNoFV_onshell_problems.cpp \
		$(DIR)/MSSMNoFV_onshell_soft_parameters.cpp \
		$(DIR)/MSSMNoFV_onshell_susy_parameters.cpp \
		$(DIR)/BOSS_factory_MSSMNoFV_onshell.cpp \
		$(DIR)/BOSS_factory_MSSMNoFV_onshell_mass_eigenstates.cpp \
		$(DIR)/BOSS_factory_MSSMNoFV_onshell_physical.cpp \
		$(DIR)/BOSS_factory_MSSMNoFV_onshell_problems.cpp \
		$(DIR)/BOSS_factory_MSSMNoFV_onshell_soft_parameters.cpp \
		$(DIR)/BOSS_factory_MSSMNoFV_onshell_susy_parameters.cpp \
		$(DIR)/BOSS_MSSMNoFV_onshell.cpp \
		$(DIR)/BOSS_MSSMNoFV_onshell_mass_eigenstates.cpp \
		$(DIR)/BOSS_MSSMNoFV_onshell_physical.cpp \
		$(DIR)/BOSS_MSSMNoFV_onshell_problems.cpp \
		$(DIR)/BOSS_MSSMNoFV_onshell_soft_parameters.cpp \
		$(DIR)/BOSS_MSSMNoFV_onshell_susy_parameters.cpp \
		$(DIR)/BOSS_func_calculate_amu_1loop.cpp \
		$(DIR)/BOSS_func_calculate_amu_1loop_non_tan_beta_resummed.cpp \
		$(DIR)/BOSS_func_calculate_amu_2loop.cpp \
		$(DIR)/BOSS_func_calculate_amu_2loop_non_tan_beta_resummed.cpp \
		$(DIR)/BOSS_func_calculate_uncertainty_amu_2loop.cpp \
		$(DIR)/BOSS_function_return_utils.cpp \
		$(DIR)/BOSS_wrapperdeleter.cpp
#

# source files with main()
EXEsrc_SRC := \
		$(DIR)/gm2calc.cpp \
		$(DIR)/gm2scan.cpp

# example programs
EXAsrc_SRC := \
		$(DIR)/example-gm2calc.cpp \
		$(DIR)/example-slha.cpp

LIBsrc_OBJ := $(LIBsrc_SRC:.cpp=.o)

EXEsrc_OBJ := $(EXEsrc_SRC:.cpp=.o)

EXAsrc_OBJ := $(EXAsrc_SRC:.cpp=.o)

LIBsrc_DEP := $(LIBsrc_OBJ:.o=.d)

EXEsrc_DEP := $(EXEsrc_OBJ:.o=.d)

EXAsrc_DEP := $(EXAsrc_OBJ:.o=.d)

EXEsrc_EXE := $(patsubst $(DIR)/%.o, $(BINDIR)/%.x, $(EXEsrc_OBJ))

EXAsrc_EXE := $(patsubst $(DIR)/%.o, $(BINDIR)/%.x, $(EXAsrc_OBJ))

LIBsrc     := $(DIR)/lib$(MODNAME)$(LIBEXT)

SHAREDLIBsrc := $(DIR)/lib$(MODNAME)$(SHAREDLIBEXT)

.PHONY: examples

clean::
	-rm -f $(LIBsrc_DEP) $(EXEsrc_DEP) $(EXAsrc_DEP)
	-rm -f $(LIBsrc_OBJ) $(EXEsrc_OBJ) $(EXAsrc_OBJ)
	-rm -f $(LIBsrc)
	-rm -f $(EXEsrc_EXE) $(EXAsrc_EXE)

examples: $(EXAsrc_EXE) make.args

$(LIBsrc_DEP) $(EXEsrc_DEP) $(EXAsrc_DEP) $(LIBsrc_OBJ) $(EXEsrc_OBJ) $(EXAsrc_OBJ): \
	override CPPFLAGS += $(EIGENFLAGS) $(BOOSTFLAGS)

$(LIBsrc): $(LIBsrc_OBJ)
	$(MAKELIB) $@ $^

$(SHAREDLIBsrc): $(LIBsrc_OBJ)
	$(MAKESHAREDLIB) -o $@ $^

$(BINDIR)/%.x: $(DIR)/%.o $(LIBsrc) | $(BINDIR)
	$(CXX) -o $@ $^ $(LDLIBS)

ALLDEP += $(LIBsrc_DEP) $(EXEsrc_DEP) $(EXAsrc_DEP)
ALLLIB += $(LIBsrc)
ALLEXE += $(EXEsrc_EXE)
SHAREDLIB += $(SHAREDLIBsrc)
