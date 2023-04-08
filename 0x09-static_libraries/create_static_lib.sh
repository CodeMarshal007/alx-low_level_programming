#!/bin/bash

# get all .c files in the current directory
c_files=$(find . -maxdepth 1 -name "*.c")

# Check if there are any .c files
if [ -z "$c_files" ]; then
  echo "No .c files found in the current directory"
  exit 1
fi

# Compile each .c file into an object .o file
for file in $c_files; do
  object_file=$(basename "$file" .c).o
  gcc -c "$file" -o "$object_file"
done

# Create the static library with the object files
ar -rcs liball.a *.o

echo "Static library 'liball.a' created successfully"

# Clean up the created object code (.o) files in the directory 
rm *.o
