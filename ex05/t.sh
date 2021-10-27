#!/bin/zsh

make > /dev/null		\
	&& echo make ok! 	\
	|| exit 1

#valgrind --leak-check=full -q ./aa
valgrind -q ./aa
valgrind -q ./aa debug
valgrind -q ./aa warning
valgrind -q ./aa error
valgrind -q ./aa nothing
# leaks -quiet --atExit -- ./aa
# leaks -quiet --atExit -- ./aa debug
# leaks -quiet --atExit -- ./aa warning
# leaks -quiet --atExit -- ./aa error
# leaks -quiet --atExit -- ./aa nothing
