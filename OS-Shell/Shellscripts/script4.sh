#!/bin/bash

# WASS to find out the sum  and average of five numbers.(keyboard)
# Five number to be fed by the user as inputs
echo "Enter number 1 : "
    read a
echo "Enter number 2 : "
    read b
echo "Enter number 3 : "
    read c
echo "Enter number 4 : "
    read d
echo "Enter number 5 : "
    read e

sum=$(($a + $b + $c + $d + $e))

# Average might be a floating point 
# Thus piped to bc -l : inbuilt mathlib for predefined math routines

avg=$(echo $sum / 5 | bc -l ) 

echo "The sum of these numbers is: " $sum
echo "The average of these numbers is: " $avg