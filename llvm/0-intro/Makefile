FILE = llvm-intro

all:	$(FILE).pdf

%.pdf:	%.tex
	latexmk -pdf $^

%.ll:	%.c
	clang -S -emit-llvm -o $@ $<

%.s:	%.ll
	llc -o $@ $<

clean:
	rm -f *~ *.nav *.snm *.vrb
	latexmk -f -C $(FILE).pdf

.PHONY:	all clean
