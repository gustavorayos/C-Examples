//
// Gustavo Rayos
// September 18, 2014
// lab3.c
// Purpose: Main method for CS 271 lab3
//

#include "lab3functions.h"
#include <stdio.h>

int main (void) {
    
    int pernum;
    int primenum;
    int count = 0;
    
    printf("----------------\nPERFECT METHOD\n");
    printf("----------------\n");
    
    for (pernum = 1; pernum <= 1000; pernum++) { // will scan numbers 1 through 1000
        if (perfect(pernum) == 1) // when the perfect method returns a 1, with the current pernum as the parameter..
            printf ("%d\n", pernum); // it prints the current pernum. 
    } // end of for loop
    
    printf("------------\nPRIME METHOD\n");
    printf("------------\n");
    
    for (primenum = 2; count < 20; primenum++) { // will scan prime num until the prime method return 1, at which point it will print the prime num it is currently on.
        if (prime(primenum) == 1){ // prime method returns a 1
            printf("%d\t", primenum); // and primenum is printed
            count++; // everytime a primenum is printed, we add to the count until it reaches 20.
            if (count % 5==0) // Whenever count reach a number that is divisable by 5
                printf("\n"); // It goes to a new line creating 5 neat columns.
        } // end of if
    } // end of for loop
    
    printf("----------------\nREVDIGITS METHOD\n");
    printf("----------------\n%-9d\t%-9d\t%-9d\t%-9d\t\n\n", revDigits(-12345), revDigits(46545),revDigits(12345678),revDigits(192837465));
    
} // end of main method