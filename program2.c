// CS 271
// Program Name: program2.c
// Author: Gustavo Rayos
// Date: September 03, 2014
// Purpose: Output the min and max of 3 inputed integers. 

#include <stdio.h>

// function main begins program execution
int main (void) {
    
    int integer1; // first number to be entered by user
    int integer2; // second number to be entered by user
    int integer3; // thind number to be entered by user
    int min;
    int max;
    
    printf ("Enter first integer\n"); // prompt
    scanf ("%d", &integer1); // read an integer
    
    printf ("Enter second integer\n"); // prompt
    scanf ("%d", &integer2); // read an integer
    
    printf ("Enter third integer\n"); // prompt
    scanf ("%d", &integer3); // read an integer
    
    if (integer1 <= integer2 && integer1 <= integer3)
        min = integer1;
    if (integer2 <= integer1 && integer2 <= integer3)
        min = integer2;
    if (integer3 <= integer1 && integer3 <= integer2)
        min = integer3;
    
    if (integer1 >= integer2 && integer1 >= integer3)
        max = integer1;
    if (integer2 >= integer1 && integer2 >= integer3)
        max = integer2;
    if (integer3 >= integer1 && integer3 >= integer2)
        max = integer3;
    
    printf ("The min is %d and the max is %d\n", min, max);
    
} // end function main