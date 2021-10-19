#!/bin/zsh

make > /dev/null		\
	&& echo make ok! 	\
	|| exit 1

valgrind aa 2> valgrind.log && grep "ERROR" valgrind.log

