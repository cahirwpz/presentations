FILE = exceptions

all:	$(FILE).pdf

%.pdf:	%.tex
	latexmk -pdf $^

clean:
	rm -f *~ *.nav *.snm *.vrb
	latexmk -f -c $(FILE).pdf

.PHONY:	all clean
