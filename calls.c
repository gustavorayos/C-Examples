//
// CS 271 - lab assignment #2
// calls.c
// To scan a .txt file with phone call lengths, and calculate mean, min, and max of calls.
// written by Gustavo Rayos
// September 5, 2014
//

#include <stdio.h>

int main() {
    
    unsigned count = 0;
    int length;
    int sum = 0;
    double mean;
    
    printf("Enter call lengths\n");
    scanf("%d",&length);
    
    int min=length; // assume max is the first call length entered.
    int max=length; // assume min is the first call length entered.
    
    while (length != -1) { // -1 is sentinal, will end while loop.
        
        if (length <= min) // used to replace current min with lesser min.
            min = length;
        if (length >= max) // used to replace current max with greater max
            max = length;
        
        sum = length + sum; // adds all call lengths together
        count++; // counts number of calls while going through while loop
        scanf("%d",&length); // loops while loop
        
    }// end of while
    
    mean = (double)sum/count;
    
    if (count != 0) {
        printf("Total Number of Calls %13d\nMean Call Length %10.1f seconds\nMinimum Call Length %7d seconds\nMaximum Call Length %7d seconds\n", count,mean,min,max);
    } // end of if
    else
        printf("No numbers were intered\n");
} // end of main
