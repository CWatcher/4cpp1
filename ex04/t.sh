#!/bin/sh

make > /dev/null		\
	&& echo make ok! 	\
	|| exit 1

valgrind --leak-check=full -q replace in.txt "bb" "r"
cat in.txt.replace
rm in.txt.replace
