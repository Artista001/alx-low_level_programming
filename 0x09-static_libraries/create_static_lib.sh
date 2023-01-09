#!/bin/bash
gcc -c *.c
ar -rcs liball.c *.o
ranlib liball.a
