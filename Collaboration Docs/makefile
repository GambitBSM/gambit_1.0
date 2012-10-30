PLANTEX = Physics\ Goals\ and\ Plans/Physics_Goals_and_Plans.tex
CODEPOLTEX = Code_Policies/Code_Policies.tex
COLABPOLTEX = Collaboration\ Policies/Collaboration_Policies.tex
WGTEX = Working\ Groups\ and\ Positions/WGs_and_Positions.tex
MEMTEX = Members/Members.tex

all: gambit_docs

gambit_docs:
	pdflatex $(PLANTEX)
	pdflatex $(CODEPOLTEX)
	pdflatex $(COLABPOLTEX)
	pdflatex $(WGTEX)
	pdflatex $(MEMTEX)
	rm *.aux *.log *.bbl *.out

