#!/bin/sh

make > /dev/null		\
	&& echo make ok! 	\
	|| exit 1

valgrind aa in.txt "a" "b" 2> valgrind.log && grep "ERROR" valgrind.log
cat in.txt.replace
