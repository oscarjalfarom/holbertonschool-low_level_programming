#!/bin/bash

# Compile each .c file into .o object files
gcc -c *.c

# Create the static library liball.a
ar rcs liball.a *.o

# Clean up by removing the .o object files
ranlib liball.a
