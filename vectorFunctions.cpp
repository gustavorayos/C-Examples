//
//  main.cpp
//  vectorFunctions
//
//  Created by Gustavo Rayos on 10/23/14.
//  Copyright (c) 2014 Gustavo Rayos. All rights reserved.
//

#include "vectorFunctions.h"
#include <iostream>
#include <vector>
#include <iomanip>
#include <exception>
using namespace std;

void primeSieve (vector<int> &vec) {
    
    int i;
    int j;
    
    for (i = 0; i < vec.size(); i++) {
        vec[i] = 1;
    }
    
    for (i = 2; i < vec.size(); i++) {
        for (j = i + i; j < vec.size(); j = j + i) {
                vec[j] = 0;
        }
    }
    
    vec[0] = 0;
    vec[1] = 0;
    
} // end of primeSieve method

void movePrimes (const vector<int> &Sieve, vector<int> &primes) {
    try{
    
    int i;
    int j = 0;
    int count = 0;
    
    for (i = 0; i < Sieve.size(); i++) {
        if (Sieve[i] == 1) {
            primes[j] = i;
            j++;
        }
    } // end of for
    
    for (i = 0; i < primes.size(); i++) {
        if (primes[i] != 0) {
            cout<<setw(6)<<primes[i];
            count++;
            if (count == 10) {
                cout<<"\n";
                count = 0;
            }
        }
    }
    cout<<"\n";
} // end of try
    
    catch(out_of_range& ex){
        cout<<"Error occured " <<ex.what()<<endl;
    } // end of catch
} // end of movePrimes method