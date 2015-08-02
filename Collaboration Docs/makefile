
Collaboration_Policies.pdf:  Collaboration\ Policies/Collaboration_Policies.tex
Members.pdf:                 Members/Members.tex
WGs_and_Positions.pdf:       Working\ Groups\ and\ Positions/WGs_and_Positions.tex
Physics_Goals_and_Plans.pdf: Physics\ Goals\ and\ Plans/Physics_Goals_and_Plans.tex
Code_Policies.pdf:           Code_Policies/Code_Policies.tex

gambit_docs := Collaboration_Policies.pdf \
               Members.pdf \
               WGs_and_Positions.pdf \
               Physics_Goals_and_Plans.pdf \
               Code_Policies.pdf

$(gambit_docs): Templates/GAMBIT_doc_common_header.tex


.DEFAULT_GOAL := all
all: $(gambit_docs)

# Run pdflatex twice in case references need to be resolved
$(gambit_docs):
	pdflatex -jobname $(basename $@) "$<"
	pdflatex -jobname $(basename $@) "$<"
	rm -f $(patsubst FILE.%,$(basename $@).%, FILE.aux FILE.log FILE.bbl FILE.out)

