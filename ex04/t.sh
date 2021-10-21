#!/bin/sh

make > /dev/null		\
	&& echo make ok! 	\
	|| exit 1

./tt.sh in.txt "bb" "r"
./tt.sh in.txt "b" "r"
./tt.sh in.txt "b" "rr"
./tt.sh Makefile "o" "Y"
./tt.sh Makefile "pp" "PP"
./tt.sh Makefile "pp" "P"
./tt.sh Makefile "p" "PP"
./tt.sh Makefile "pp" "pp"
./tt.sh Makefile "pp" "p"
./tt.sh Makefile "p" "pp"
# replace in.txt "a
# b" "r"
