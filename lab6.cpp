//
//  lab6.cpp
//  vectorFunctions
//
//  Created by Gustavo Rayos on 10/23/14.
//  Copyright (c) 2014 Gustavo Rayos. All rights reserved.
//

#include "vectorFunctions.h"
#include <iostream>
#include <vector>
#include <exception>
using namespace std;

int main() {
    
    vector<int>integers(1000);
    vector<int>primes(200);
    vector<int>integers2(5000);
    vector<int>primes2(700);
    vector<int>ErrorVector(5000);
    
    cout<<"-----------------------------\n Prime numbers from 1 - 1000\n-----------------------------\n";
    
    primeSieve(integers);
    
    movePrimes(integers, primes);
    
    cout<<"\n-----------------------------\n Prime numbers from 1 - 5000\n-----------------------------\n";
    
    primeSieve(integers2);
    
    movePrimes(integers2, primes2);
    
}