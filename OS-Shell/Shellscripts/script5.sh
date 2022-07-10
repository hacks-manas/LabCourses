#!/bin/bash

# WASS to combine two files into third and count the total no of lines in third file.

# Insert absolute path of file1, file2 as param 
FILE1=$1
FILE2=$2

if [[ -f "$FILE1" && -f "$FILE2" ]]; then
        echo "$FILE1 $FILE2 exists."
    printf "\n"
    
    # The cat command will concat files as is !
    # Thus adding a newline before concat will result in exact numbers

    # If file3 is absent the program creates file3 with desired result
    # If file3 is already present with some content the program will append to file3.txt

    (cat $FILE1; printf "\n"; cat $FILE2 ) >> "file3.txt"

    printf "\n"
        echo "file3.txt created"
    printf "\n"

    #lines are counted from 0
        echo "Number of lines in file3.txt : "
        wc -l $"file3.txt"
    printf "\n"
    
else 
    echo "Files does not exist."
fi