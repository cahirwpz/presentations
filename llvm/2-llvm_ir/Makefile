FILE = llvm-ir

all:	$(FILE).pdf

%.pdf:	%.tex
	latexmk -shell-escape -pdf $^

clean:
	rm -f *~ *.nav *.snm *.vrb
	latexmk -f -c $(FILE).pdf

.PHONY:	all clean
