FILE = llvm-intro

all:	$(FILE).pdf

%.pdf:	%.tex
	latexmk -pdf $^

%.ll:	%.c
	clang -m32 -S -Os -emit-llvm -o $@ $<

clean:
	rm -f *~
	latexmk -C $(FILE).pdf

.PHONY:	all clean
