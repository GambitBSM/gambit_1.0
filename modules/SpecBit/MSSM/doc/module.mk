DIR          := doc
MODNAME      := doc

DOC_MK       := \
		$(DIR)/module.mk

DOC_TMPL     := \
		$(DIR)/mainpage.dox.in \
		$(DIR)/version.tex.in

DOC_INSTALL_DIR := $(INSTALL_DIR)/$(DIR)

DOC_VERSION_TEX := \
		$(DIR)/version.tex

HTML_OUTPUT_DIR := $(DIR)/html
PDF_OUTPUT_DIR  := $(DIR)
INDEX_PADE      := $(HTML_OUTPUT_DIR)/index.html
DOXYFILE        := $(DIR)/Doxyfile
DOXYGEN_MAINPAGE:= $(DIR)/mainpage.dox
MANUAL_PDF      := $(PDF_OUTPUT_DIR)/flexiblesusy.pdf
MANUAL_BIB      := \
		$(DIR)/bibliography.bib
MANUAL_STY      := \
		$(DIR)/tikz-uml.sty \
		$(DIR)/xstring.sty \
		$(DIR)/xstring.tex
MANUAL_SRC_MAIN := \
		$(DIR)/flexiblesusy.tex
MANUAL_SRC_CHAP := \
		$(DIR)/chapters/overview.tex \
		$(DIR)/chapters/quick_start.tex \
		$(DIR)/chapters/usage.tex \
		$(DIR)/chapters/output.tex
MANUAL_SRC      := \
		$(MANUAL_SRC_MAIN) \
		$(MANUAL_SRC_CHAP) \
		$(DOC_VERSION_TEX)

PAPER_PDF       := $(PDF_OUTPUT_DIR)/paper.pdf
PAPER_SRC       := $(DIR)/paper.tex

LATEX_TMP       := \
		$(patsubst %.pdf, %.aux, $(MANUAL_PDF) $(PAPER_PDF)) \
		$(patsubst %.pdf, %.log, $(MANUAL_PDF) $(PAPER_PDF)) \
		$(patsubst %.pdf, %.toc, $(MANUAL_PDF) $(PAPER_PDF)) \
		$(patsubst %.pdf, %.out, $(MANUAL_PDF) $(PAPER_PDF)) \
		$(patsubst %.pdf, %.spl, $(MANUAL_PDF) $(PAPER_PDF))

.PHONY:         all-$(MODNAME) clean-$(MODNAME) distclean-$(MODNAME) \
		$(INDEX_PADE) doc doc-html doc-pdf

doc: all-$(MODNAME)

doc-pdf: $(MANUAL_PDF) $(PAPER_PDF)

doc-html: $(INDEX_PADE)

all-$(MODNAME): doc-html doc-pdf

ifneq ($(INSTALL_DIR),)
install-src::
		install -d $(DOC_INSTALL_DIR)
		install -m u=rw,g=r,o=r $(DOC_TMPL) $(DOC_INSTALL_DIR)
		install -m u=rw,g=r,o=r $(DOC_MK) $(DOC_INSTALL_DIR)
		install -m u=rw,g=r,o=r $(DOXYFILE) $(DOC_INSTALL_DIR)
		install -m u=rw,g=r,o=r $(PAPER_SRC) $(DOC_INSTALL_DIR)
		install -m u=rw,g=r,o=r $(MANUAL_SRC_MAIN) $(DOC_INSTALL_DIR)
		install -m u=rw,g=r,o=r $(MANUAL_BIB) $(DOC_INSTALL_DIR)
		install -m u=rw,g=r,o=r $(MANUAL_STY) $(DOC_INSTALL_DIR)
		install -d $(DOC_INSTALL_DIR)/chapters
		install -m u=rw,g=r,o=r $(MANUAL_SRC_CHAP) $(DOC_INSTALL_DIR)/chapters
endif

clean-$(MODNAME):
		-rm -f $(LATEX_TMP)

distclean-$(MODNAME): clean-$(MODNAME)
		-rm -rf $(HTML_OUTPUT_DIR)
		-rm -f $(DOXYGEN_MAINPAGE)
		-rm -f $(MANUAL_PDF) $(PAPER_PDF)
		-rm -f $(DOC_VERSION_TEX)

clean::         clean-$(MODNAME)

distclean::     distclean-$(MODNAME)

$(INDEX_PADE):
		( cat $(DOXYFILE) ; \
		  echo "INPUT = $(MODULES)" ; \
		  echo "OUTPUT_DIRECTORY = $(HTML_OUTPUT_DIR)" ; \
		  echo "EXCLUDE = $(ALLDEP) $(META_SRC) $(TEMPLATES) \
		        $(TEST_SRC) $(TEST_META)"; \
		  echo "EXCLUDE_PATTERNS = */test/*"; \
		) | doxygen -

$(MANUAL_PDF): $(MANUAL_SRC)
		pdflatex -output-directory $(PDF_OUTPUT_DIR) $<
		bibtex $(shell echo $< | rev | cut -d. -f2 | rev)
		pdflatex -output-directory $(PDF_OUTPUT_DIR) $<

$(PAPER_PDF): $(PAPER_SRC)
		pdflatex -output-directory $(PDF_OUTPUT_DIR) $<
		pdflatex -output-directory $(PDF_OUTPUT_DIR) $<
