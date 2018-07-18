//
// Gustavo Rayos
// October 02, 2014
// lab4.c
// Purpose: Main method for lab 4
//

#include <ctype.h>
#include <stdio.h>
#include "arrayfunctions.h"

int main(void) {
    
    printf("\n---------\n");
    printf("Problem_1\n");
    printf("---------\n");
    
        int array[20];
    
        //int testArray[] = {1,4,6,2,3}; // testArray is to check if findConsecutive method works.
        //findConsecutive(testArray, 5);
    
        fillInteger(array, 20, -20, 20);
    
        findConsecutive(array, 20);
    
    printf("---------\n");
    printf("Problem_2\n");
    printf("---------\n");
    
        char charArray[50];
    
        //char testCharArray[] = {'a','g','t','n','s','t','u','v','v'}; // testCharArray is to check if findTriples method works.
        //findTriples(testCharArray, 9);
    
        fillCharacter(charArray, 50, 'a', 'z');
    
        findTriples(charArray, 50);
    
    printf("---------\n");
    printf("Problem_3\n");
    printf("---------\n");
    
        char letter;
    
        char *wordArray[20];
            wordArray[0] = "one";
            wordArray[1] = "two";
            wordArray[2] = "three";
            wordArray[3] = "four";
            wordArray[4] = "five";
            wordArray[5] = "six";
            wordArray[6] = "seven";
            wordArray[7] = "eight";
            wordArray[8] = "nine";
            wordArray[9] = "ten";
            wordArray[10] = "eleven";
            wordArray[11] = "twelve";
            wordArray[12] = "thirteen";
            wordArray[13] = "fourteen";
            wordArray[14] = "fifteen";
            wordArray[15] = "sixteen";
            wordArray[16] = "seventeen";
            wordArray[17] = "eighteen";
            wordArray[18] = "nineteen";
            wordArray[19] = "twenty";
            //wordArray[20] = NULL;
    
        printf("Please input a letter\n");
    
        scanf("%c", &letter);
    
    if (!(letter > 'a' && letter < 'z')) {
        printf("Please input a lowercase letter\n");
    }
        
        findWords(wordArray, 20, letter);
    
    printf("\n---------\n");
    printf("Problem_4\n");
    printf("---------\n");
    
        float floatArray[10];
        
        fillFloat(floatArray, 10, 1.0, 50.0);
        
        printf("\nfloatMean method: %f\n", floatMean(floatArray, 10));
        printf("\nfloatMin method: %f\n", floatMin(floatArray, 10));
        printf("\nfloatMax method: %f\n\n", floatMax(floatArray, 10));
    
} // end of main