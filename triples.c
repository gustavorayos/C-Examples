//
// CS 271 - lab assignment #2
// triples.c
// To find the pathogorean triples of all triangles with largest side < 500.
// written by Gustavo Rayos
// September 5, 2014
//

#include <stdio.h>

int main(){
    
    int hyp;
    int side1;
    int side2;
    int count = 0;
    int userhyp;
    
    printf("Input the length of the hypotenuse please.\n");
    scanf("%d", &userhyp);
    
    printf("\nSide 1\t\tSide 2\t\tHypotenuse\n------\t\t------\t\t----------\n");
    
    for(hyp = 1; hyp <= userhyp; hyp++){
        
        for(side1 = 1; side1 <= hyp; side1++){
            
            for(side2 = 1; side2 <= hyp; side2++){
                
                if (side1 * side1 + side2 * side2 == hyp * hyp){
                    count++;
                    
                    if (count == 1)
                        printf("%6d\t\t%6d\t\t%10d\n", side1, side2, hyp);
                    else
                        count = 0;
                    
                } // end of if
            } // side 2
        } // side 1
    } // hyp
} // end of main 

