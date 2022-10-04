#!/bin/bash
# complie *.c to *.o
gcc -c -Wall -Werror -fPIC *.c
# create liball.so
gcc -shared -o liball.so *.o
