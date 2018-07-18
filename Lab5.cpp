//
// CS 271 - lab assignment #5
// Lab5.cpp
// Practice programs for pointers and C++
// written by Gustavo Rayos
// October 16, 2014
//

#include <iostream>
#include <iomanip>
using namespace std;

void swap1 (int x, int y);

void swap2 (int *x, int *y);

float maximum (float *array, int size);

void swap1 (int x, int y) {
    
    int tmp = x;
    x = y;
    y = tmp;
    
}

void swap2 (int *x, int *y) {
    
    int *tmp;
    *tmp = *x;
    *x = *y;
    *y = *tmp;

}

float maximum (float *array, int size) {

    int max;
    
    array[0] = max;
    
    int i;
    for (i = 0; i < size; i++) {
        
        if (array[i] > max)
            max = array[i];
    }
    
    return max;
}

int main() {
    
	// problem 1
    int values[5];
	int count = 2;
    
    for (int i = 0; i < 5; i++) {
        
    	values[i] = count;
 	   	count = count + 2;

    }
    
    int x = 1;
    int y = 2;
    
    swap1(values[x], values[y]);
    
    cout<<"\nAfter the first swap:\n";
    
    for (int j = 0; j < 5; j++) {
        cout<<values[j]<<" ";
    }
	
	cout<<endl;
	
	// problem 2
    int *aPtr;
       aPtr=values;
     
       int *vPtr;
       vPtr=&values[1];
     
       int *wPtr;
       wPtr=&values[2];
     
       swap2(vPtr, wPtr);
     
       cout<< "\nAfter the second swap:\n";
       for(int i=0; i<5; i++){
           cout<<values[i]<<" ";
       }
	   
	   cout<<endl;
	   
	   // problem 3
       cout<<"\nUsing Pointer/Offset Notation:\n";
       for(int offset = 0; offset < 5; offset++){
           cout<<*(aPtr+offset)<<" ";
       }
	   
	   cout<<endl;
     
	   // problem 4
       cout<<"\nUsing Pointer/Subscript Notation:\n";
       for(int i = 0; i < 5; i++){
           cout<<aPtr[i]<<" ";
       }
	   
	   cout<<endl;
     
       //print aPtr
       cout<<"\naPtr is: "<<aPtr;
     
       cout<<"\naPtr + 3 is: "<< aPtr + 3;
     
       cout<<"\nValue stored in (aPtr+3) is: "<<*(aPtr+3)<<"\n\n";
	   
	   //Input array from user
	   
	   float list[10];
	   
	   for (int i = 0; i < 10; i++) {
	       cout<<"Enter an integer ";
	       cin>>list[i];
	   } // end of for loop
	   
	   float max = maximum (list, 10);
	   cout<<"\nThe max of the array is "<<max;
	   cout<<"\n\n";
	   
} // end of main