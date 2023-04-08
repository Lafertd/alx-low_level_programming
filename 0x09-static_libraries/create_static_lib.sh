#!/bin/bash
gcc -Wall -Wextra -wpedantic -Werror -c *.c | ar -rc  liball.a *.o
