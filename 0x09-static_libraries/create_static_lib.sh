#!/bin/bash
gcc -Wall -Wextra -Wpedantic -Werror -c *c | ar -rc  liball.a *.c
