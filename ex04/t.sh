#!/bin/sh

make > /dev/null		\
	&& echo make ok! 	\
	|| exit 1

valgrind --leak-check=full -q aa in.txt "a" "b"
cat in.txt.replace
rm in.txt.replace
