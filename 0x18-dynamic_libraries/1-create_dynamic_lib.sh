#!/bin/bash

# Compile each .c file into position-independent code (-fPIC)
for file in *.c; do
    gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c -fPIC "$file"
done

# Create the dynamic library liball.so from the necessary object files
gcc -shared -o liball.so 0-main.o 0-putchar.o 100-atoi.o 1-isdigit.o 1-strncat.o 2-strlen.o 3-islower.o 3-strcmp.o 4-isalpha.o 5-strstr.o 9-strcpy.o

# Clean up: remove the temporary object files
rm *.o
