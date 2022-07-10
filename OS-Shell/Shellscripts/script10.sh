#!/bin/bash

# WASS to find greatest among three numbers.
# Numbers to be fed by the user as input

echo "Enter Number 1"
read n1
echo "Enter Number 2"
read n2
echo "Enter Number 3"
read n3

if [[ $n1 == 0 || $n2 == 0 || $n3 == 0 ]]; then
    echo "command line arguments are missing"

elif [[ $n1 == $2 && $n2 == $n3 ]]; then
    echo "All three numbers are equal"

elif [[ $n1 == $n2 || $n2 == $n3 || $n3 == $n1 ]]; then
    echo "Can not figure out the greatest"
    
else
    if [[ $n1 > $n2 && $n1 > $n3 ]]; then 
        echo "$n1 is greatest number"
    elif [[ $n2 > $n1 && $n2 > $n3 ]]; then
        echo "$n2 is greatest number"
    else
        echo "$n3 is greatest number"
    fi
fi