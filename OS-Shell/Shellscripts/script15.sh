#!/bin/bash

# Implementation of ls| wc command.

# use ls and pipe the output to wc 
# when ls is piped with wc command with -l option 
# it display count of all files present in the given directory path

# Pass absolute path of directory(file) as param

# Check if directory exists
if [ -d "$1" ]; then
    printf "\n"
    echo "-- piping ls to wc -- "
    printf "\n"

    echo "Total count of files in directory : "
        ls $1 | wc -l
    printf "\n"
else
    echo "Not a valid path to a directory"
fi