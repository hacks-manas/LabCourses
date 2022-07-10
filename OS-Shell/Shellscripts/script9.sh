#!/bin/bash

# WASS to check whether file exist or not? 
# If exist again check whether it is a regular file,
# Directory file, blockoriented or character oriented file.

# Example instances been provided as comments above conditional statements

###
    # Regular file :    Regular file is a file on the system that contains data, text, or program instructions.
    # Directory file :  Directories store both special and ordinary files. UNIX directories are equivalent to folders. 
                    #   A directory file contains an entry for every file and subdirectory that it houses
                    #   Each entry has two components.
                    #   (1) The Filename
                    #   (2) A unique identification number for the file or directory (called the inode number)
    # Block oriented file : 
                    #   A block special file acts as a direct interface to a block device. 
                    #   A block device is any device which performs data I/O in units of blocks.
    # Character oriented file : 
                    #   A character special file is similar to a block device, 
                    #   but data is written one character (eight bits, or one byte) at a time.
###

# Pass absolute path as param
FILE=$1

# Check if file exists at path

# any regular file
if [ -f "$FILE" ]; then
    printf "\n"
    echo "$FILE exists and is a regular file."
    printf "\n"

# any directory file
elif [ -d "$FILE" ]; then
    printf "\n"
    echo "$FILE exists and is a directory file "
    printf "\n"

# files in /dev/stdin, /dev/stdout, /dev/stderr  
elif [ -c "$FILE" ]; then
    printf "\n"
    echo "$FILE exists and is a character oriented file"
    printf "\n"

# /dev/sda1
elif [ -b "$FILE" ]; then
    printf "\n"
    echo "$FILE exists and is a block oriented file"
    printf "\n"

# Error if not found
else
    printf "\n" 
    echo "$FILE does not exist."
    printf "\n"
fi