#!/bin/bash

# WASS to check whether file exist or not.
# File path to be given as param 

# Checks for a regular file only !

FILE=$1

# Check if file exists at path
if [ -f "$FILE" ]; then
    echo "$FILE exists."

# Prompt if not found
else 
    echo "$FILE does not exist."
fi