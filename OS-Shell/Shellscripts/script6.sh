#!/bin/bash

# WASS to count the no of lines, words and characters in a given file.
# Insert absolute path as param

FILE=$1

# Check if file exists at path
if [ -f "$FILE" ]; then
    printf "\n"

    echo "$FILE exists."
    printf "\n"
    
    filename=$(basename $FILE)

    #lines are counted from 0
    echo "Number of Lines : "
        wc -l $filename
    printf "\n"

    echo "Number of words : "
        wc -w $filename
    printf "\n"
    
    echo "Number of characters : "
        wc -m $filename
    printf "\n"
    
else 
    echo "$FILE does not exist."
    printf "\n"
fi