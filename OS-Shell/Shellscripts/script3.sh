#!/bin/bash

# WASS to find out the sum  and average of five numbers.(command line).
# 5 numbers to be given as params

let sum=$1+$2+$3+$4+$5

# Average might be a floating point 
# Thus piped to bc -l : inbuilt mathlib for predefined math routines

avg=$(echo $sum / 5 | bc -l ) 

echo "Sum : " $sum
echo "Average : " $avg