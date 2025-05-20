#!/bin/bash

if [ -z "$1" ]; then
    echo "Usage: $0 <filename.cpp>"
    exit 1
fi

BASENAME=$(basename "$1" .cpp)

# create bin folder if it doesn't exist
if [ ! -d "./bin" ]; then
    mkdir "./bin"
fi

# Compile
g++ -std=c++17 -o "./bin/$BASENAME.exe" "$1" 

# Run
./bin/"$BASENAME.exe"
