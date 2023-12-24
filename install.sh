#!/bin/bash

# This will build the executable for the Challenge - Even Fibonacci Numbers - at Demcon

hash cmake 2>/dev/null ||  { echo >&2 "I require 'CMake' but it's not installed.
Aborting"; exit 1; }

hash cmake 2>/dev/null ||  { echo >&2 "I require 'make' but it's not installed.
#Aborting"; exit 1; }

cmake -E make_directory build
cd build || exit;
cmake -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Release ../
make EvenFibonacciNumbers

# Run the executable
echo "To run the executable: ./build/EvenFibonacciNumbers"