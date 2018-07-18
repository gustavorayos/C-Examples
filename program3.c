// CS 271
// Program Name: program3.c
// Author: Gustavo Rayos
// Date: September 03, 2014
// Purpose: Order 3 integers inputed by the user from smallest to largest.

#include <stdio.h>

int main() {
    
    int int1; // first number to be entered by user
    int int2; // second number to be entered by user
    int int3; // thind number to be entered by user
    int min;
    int max;
    int mid;
    
    printf ("Enter first integer\n"); // prompt
    scanf ("%d", &int1); // read an integer
    
    printf ("Enter second integer\n"); // prompt
    scanf ("%d", &int2); // read an integer
    
    printf ("Enter third integer\n"); // prompt
    scanf ("%d", &int3); // read an integer
    
    if ((int2 >= int1) && (int2 <= int3)) {
        min = int1;
        mid = int2;
        max = int3;
    } // end of if
    
    if ((int1 >= int2) && (int1 <= int3)) {
        min = int2;
        mid = int1;
        max = int3;
    } // end of if
    
    if ((int3 >= int1) && (int3 <= int2)) {
        min = int1;
        mid = int3;
        max = int2;
    } // end of if
    
    if ((int3 <= int2) && (int2 <= int1)) {
        min = int3;
        mid = int2;
        max = int1;
    } // end of if
    
    printf ("The min is %d and the max is %d\n", min, max);
    printf ("%d\t%d\t%d\t\n", min, mid, max);
    
} // end of main method
