#!/bin/bash

# Check if a filename is provided
if [ $# -eq 0 ]; then
    echo "Error: Please provide a C++ file name"
    echo "Usage: $0 filename.cpp"
    exit 1
fi

# Store the filename from command line argument
filename=$1

# Check if the file exists
if [ ! -f "$filename" ]; then
    echo "Error: File '$filename' not found"
    exit 1
fi

# Compile the C++ file
echo "Compiling $filename..."
g++ "$filename"

# Check if compilation was successful
if [ $? -eq 0 ]; then
    echo "Compilation successful! Running the program..."
    ./a.out
else
    echo "Compilation failed!"
    exit 1
fi

