#!/bin/bash
gcc -Wall -Wextra -pedantic -Werror -c *.c
ar -rc  liball.a *.o
