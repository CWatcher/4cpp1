#!/bin/sh

#valgrind --leak-check=full -q ./replace $1 $2 $3
valgrind -q ./replace $1 $2 $3
sed "s/$2/$3/g" $1 | diff - "$1.replace" && echo ok!
rm "$1.replace"
