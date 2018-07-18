//
// Gustavo Rayos
// September 18, 2014
// lab3functions.c
// Purpose: Functions for CS 271 lab3
//

#include "lab3functions.h"
#include <stdio.h>
#include <math.h>

int perfect (int n){ // determines if parameter n is a perfect number.
    
    int sum = 0;
    int i;
	
	for (i = 1; i <= n/2; i++) { // will scan through numbers 1 through n/2.
		if (n % i == 0) // if n is divisible by the current i value,
			sum = sum + i; // we add i to the sum
	} // end of for loop

	if (sum == n) // if added i values amount to the value of n.
		return 1; // it is a perfect number and we return 1.
	return 0; // otherwise we return 0
	
} // end of perfect function

int prime (int n) { // will determine whether parameter n is prime or not
    
    if (n==0)
        return 0; // 0 is not a prime number
    
    if (n==1)
        return 0; // 1 is not a prime number
    
    int i;
    for (i = 2; i <= sqrt(n); i++) { // will scan numbers 2 through n
        if (n % i == 0) // if n is divisible by the current value of i, then it is not prime.
            return 0; // we return false, or 0 in this case.
    } // end of for loop
    return 1; // because we return 0 for all cases were n is not prime, the default is 1, which means n is prime.
    
} // end of prime function

int revDigits (int n) { // reverses the digits of a given int parameter.
    
    int new = 0;
    int end = 0;
    
    while (n != 0) { // this loop will continue until n == 0.
        end = n % 10; // will get the final digit of n,
        new = new * 10 + end; // will place the final digit of n at beginning of new number
        n = n/10; // will set up n to enter loop for next digit
    } // end of while
    
    return new;
    
} // end of revDigits
