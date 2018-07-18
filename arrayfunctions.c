//
// Gustavo Rayos
// October 02, 2014
// arrayfunctions.c
// Purpose: Functions for CS 271 lab4
//

#include "arrayfunctions.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void fillInteger(int a[ ], int length, int min, int max) {
    
    int i, count = 0;
    
    for (i = 0; i < length; i++) {
        a[i] = rand() % (max * 2 + 1) + min;
        printf("%d\t", a[i]);
        count++;
        if (count == 10) {
            printf("\n");
            count = 0;
        }
    } // end of for loop
    
    printf("\n");
    
} // end of fillInteger method

void fillCharacter(char c[], int length, char start, char end) {
    
    int z;
    
    for(z = 0; z < length; z++) {
        c[z] = (rand() % (end-start +1)) + start;
        printf("%c", c[z]);
        printf(" ");
    } // end of for
    
    printf("\n\n");
    
} // end of fillCharacter method

void findConsecutive(int a[] , int length) {
    
    int z;
    
    for (z = 0; z < length; z++) {
        if (a[z] == a[z + 1] - 1)
            printf("Elements %d and %d are consecutive\n", z, (z + 1));
    } // end of for
    
} // end of findConsecutive method

void findTriples(char c[], int length) {
    
    int z;
    
    for(z = 0; z < length; z++) {
        if (c[z] == c[z+1] - 1) {
            if (c[z] == c[z+2] -2) {
                printf("%c%c%c\n",c[z],c[z+1],c[z+2]);
            } // end of inner if
        } // end of outer it
    } // end of for
    
} // end of findTriples method

void findWords(char *c[], int length, char letter) {
    
    int i;
    int check = 0;
    
    for (i = 0; i < length; i++) {
        if (strchr(c[i], letter) != NULL) {
            printf("%s\n", c[i]);
            check++;
        }
    }
        if (check == 0)
            printf("No elements contain that letter\n");
}

void fillFloat(float array[], int length, float min, float max) {
    
    int z;
    
    for(z = 0; z < length; z++) {
        array[z] = min + fmod(rand(),max);
        
        printf("%lf  ", array[z]);
    } // end of for loop
    
    printf("\n");
    
} // end of fillFloat method

float floatMean(float array[], int length) {
    
    float mean;
    float sum = 0;
    int z;
    
    for(z = 0; z < length; z++) {
        sum = sum + array[z];
    } // end of for
    
    mean = sum / (float)length;
    
    return mean;

} // end of floatMean method

float floatMin(float array[], int length) {
    
    float min = array[0];
    int z;
    
    for (z = 0; z < length; z++) {
        if (array[z] < min)
            min = array[z];
    } // end of for loop
    
    return min;
    
} // end of floatMin method

float floatMax(float array[], int length) {
    
    float max = array[0];
    int z;
    
    for(z = 0; z < length; z++) {
        if(array[z] > max)
            max = array[z];
    } // end of for loop
    
    return max;
} // end of floatMax method