#!/bin/bash

# WASS to count total no of words and characters in a string.
# String to be fed as input by the user

printf "\n"
echo "Type the string for word and character count :"
read inputstring

printf "\n"
echo "Number of words in the string :"
echo "$inputstring" | wc -w

printf "\n"
echo "Number of characters in the string :"
echo "$inputstring" | wc -m
