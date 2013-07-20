 ######################################################################
 # Project: BinnedLik
 ###################################################################### 

MAKEFLAGS = --no-print-directory -r -s
#MAKEFLAGS = --warn-undefined-variables --debug

include Makefile.arch

# Internal configuration
PACKAGE=BinnedLik
LD_LIBRARY_PATH:=.:$(ROOTSYS)/lib:$(LD_LIBRARY_PATH)
OBJDIR=obj
DEPDIR=$(OBJDIR)/dep
VPATH= $(OBJDIR)
INCLUDES += -I. -I$(ROOTSYS)/include 
ROOTSYS  ?= ERROR_RootSysIsNotDefined

DICTHEAD  = $(PACKAGE)_Dict.h
DICTFILE  = $(PACKAGE)_Dict.C
DICTOBJ   = $(PACKAGE)_Dict.o
DICTLDEF  = LinkDef.h
SKIPCPPLIST  = 
SKIPHLIST    =  $(DICTHEAD) $(DICTLDEF)
LIBFILE   = lib$(PACKAGE).a
SHLIBFILE = lib$(PACKAGE).so
DLLIBFILE = lib$(PACKAGE).dll
UNAME = $(shell uname)


default: shlib 

# List of all source files to build
HLIST   = $(filter-out $(SKIPHLIST),$(wildcard *.h))
CPPLIST = $(filter-out $(SKIPCPPLIST),$(wildcard *.$(SrcSuf)))
DICTHLIST = $(HLIST)

# List of all object files to build
OLIST=$(patsubst %.cxx,%.o,$(CPPLIST))

# Implicit rule to compile all classes
%.o : %.cxx 
	@echo "Compiling $<"
	@mkdir -p $(OBJDIR)
	@$(CXX) $(CXXFLAGS) -g -c $< -o $(OBJDIR)/$(notdir $@) $(INCLUDES)


# Rule to make the dictionary
$(DICTFILE):  $(DICTHLIST) $(DICTLDEF)
	@echo "Generating dictionary $@" 
#	@echo rootcint -f $(DICTFILE) $^
	$(ROOTSYS)/bin/rootcint -f $(DICTFILE) -c $(INCLUDES) $^

$(OBJDIR)/$(DICTOBJ): $(DICTFILE)
	@echo "Compiling $<"
	@mkdir -p $(OBJDIR)
	@$(CXX) $(CXXFLAGS) -g -c $(INCLUDES) -o $@ $<


##############################
# The dependencies section   
# - the purpose of the .d files is to keep track of the
#   header file dependence
# - this can be achieved using the makedepend command 
##############################
# .d tries to pre-process .cc
-include $(foreach var,$(CPPLIST:.$(SrcSuf)=.d),$(DEPDIR)/$(var)) /dev/null
# -include $(foreach var,$(CPPLIST:.$(SrcSuf)=.d),$(DEPDIR)/$(var)) /dev/null


$(DEPDIR)/%.d: %.$(SrcSuf)
	@mkdir -p $(DEPDIR)
	if test -f $< ; then \
		echo "Making $(@F)"; \
		$(SHELL) -ec '$(CPP) -MM $(CXXFLAGS) $(INCLUDES) $< | sed '\''/Cstd\/rw/d'\'' > $@'; \
	fi

# Rule to combine objects into a library
$(LIBFILE): $(OLIST) $(OBJDIR)/$(DICTOBJ)
	@echo "Making static library: $(LIBFILE)"
	@rm -f $(LIBFILE)
	@ar q $(LIBFILE) $(addprefix $(OBJDIR)/,$(OLIST) $(OBJDIR)/$(DICTOBJ)
	@ranlib $(LIBFILE)

# Rule to combine objects into a unix shared library
$(SHLIBFILE): $(OLIST) $(OBJDIR)/$(DICTOBJ)
	@echo "Making shared library: $(SHLIBFILE)"
	@rm -f $(SHLIBFILE)
	 @$(LD) $(SOFLAGS) $(addprefix $(OBJDIR)/,$(OLIST)) $(OBJDIR)/$(DICTOBJ) -o $(SHLIBFILE)

# Rule to combine objects into a windows shared library
$(DLLIBFILE): $(OLIST) $(OBJDIR)/$(DICTOBJ)
	@echo "Making dll file: $(DLLIBFILE)"
	@rm -f $(DLLIBFILE)
	$(LD) -Wl,--export-all-symbols -Wl,--export-dynamic -Wl,--enable-auto-import -Wl,-Bdynamic -shared --enable-auto-image-base -Wl,-soname -o $(DLLIBFILE) -Wl,--whole-archive $(addprefix $(OBJDIR)/,$(OLIST) $(patsubst %.$(SrcSuf),%.o,$(DICTFILE))) -Wl,--no-whole-archive -L$(ROOTSYS)/lib -lCore -lTMVA -lCint -lHist -lGraf -lGraf3d -lTree -lRint -lPostscript -lMatrix -lMinuit -lPhysics -lHtml -lm

# Useful build targets
lib: $(LIBFILE) 
shlib: $(SHLIBFILE)
winlib: $(DLLIBFILE)
clean:
	rm -f $(DICTFILE) $(DICTHEAD)
	rm -f $(SHLIBFILE)
	rm -f $(OBJDIR)/*.o
	rm -f $(DEPDIR)/*.d
	rm -f $(LIBFILE)
	rm -f $(SHLIBFILE)
	rm -f $(DLLIBFILE)

distclean:
	rm -rf obj 
	rm -f *~
	rm -f *_Dict*
	rm -f $(SHLIBFILE)
	rm -f $(LIBFILE)
	rm -f $(SHLIBFILE)
	rm -f $(DLLIBFILE)

.PHONY : winlib shlib lib default clean

