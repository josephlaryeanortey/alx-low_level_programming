#!/bin/bash

# Compile each .c file and create corresponding .o files
gcc -Wall -Werror -Wextra -pedantic -c *.c

# Create the static library liball.a from all the .o files
ar rcs liball.a *.o

# Clean up by removing the .o files
rm *.o
