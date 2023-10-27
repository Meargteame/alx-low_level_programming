#!/bin/bash

# Compile each .c file into .o object files
gcc -c *.c

# Create the static library liball.a from the object files
ar rcs liball.a *.o

# Generate an index for the static library
ranlib liball.a

# Clean up the object files
rm *.o 
