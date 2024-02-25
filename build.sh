#!/bin/sh

CFLAGS="-Wall -Wextra -pedantic"

gcc $CFLAGS -c game.c

gcc game.o -o game -lraylib -lm
