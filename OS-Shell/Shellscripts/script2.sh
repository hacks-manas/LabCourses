#!/bin/bash

# WASS to display the last access time or modification time of a given file.

# Insert absolute file path as param 
FILE=$1

# Check if file exists at path
if [ -f "$FILE" ]; then
    echo "$FILE exists."
    printf "\n"
    filename=$(basename $FILE)

# Another way is to use ls command to view access time of a file
    # ls -l --time=atime "$filename"

    stat "$filename"
else 
    echo "$FILE does not exist."
fi