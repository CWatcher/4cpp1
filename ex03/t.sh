#!/bin/zsh

make > /dev/null		\
	&& echo make ok! 	\
	|| exit 1

#export MallocStackLogging=1
#export MallocScribble=1

leaks -quiet --atExit -- ./aa
