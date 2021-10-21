#!/bin/zsh

make > /dev/null		\
	&& echo make ok! 	\
	|| exit 1

#valgrind --leak-check=full -q ./aa
valgrind -q ./aa
#leaks -quiet --atExit -- ./aa
