#!/bin/bash

if [ -z "$1" ]; then
    echo "Usage: $0 <filename.cpp>"
    exit 1
fi

BASENAME=$(basename "$1" .cpp)

# Compile
g++ -std=c++17 -o "$BASENAME.exe" "$1" 

# Run
./"$BASENAME.exe"
