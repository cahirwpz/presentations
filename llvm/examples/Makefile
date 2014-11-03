all:	example.s

%.s:	%.ll
	llc -o $@ $<

%.ll:	%.c
	clang -S -emit-llvm -o $@ $<

clean:
	rm -vf *.ll *.s

.SECONDARY:
.PHONY:	all clean
