#!/bin/sh

OBJECTS=()

function CC {
    gcc -Wall -Wextra -pedantic -c $1
    OBJECTS+="${1%.*}.o "
}

CC game.c
CC main.c
CC title_screan.c

gcc -lraylib -lm $OBJECTS -o game

echo "finished"
