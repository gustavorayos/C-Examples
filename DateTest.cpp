//
// CS 271 - lab assignment #7
// DateTest.cpp
// Tests for Date class
// written by Gustavo Rayos
// November 06, 2014
//

#include <iostream>
#include <stdexcept>
#include <string>
#include <iomanip>
#include "Date.h"
using namespace std;

int main() {
  
    Date defConstructor;
    Date newYears(1,1,2014);
    Date valentines(2,14,2014);
    Date independence(7,4,1987);
    Date birthday(9,30,1988);
    Date newYearsEve(12,31,2014);
    Date checkMonthOver(13,17,2002);
    Date checkJanOver(1,32,2006);
    Date checkFebOver(2,29,1988);
    Date checkAprilOver(04,31,1999);
    Date nineNine(99,99,2013);
    
    cout<<"--------------------------\n Default Constructor Test\n--------------------------\n";
    cout<<"defConstructor; output --> ";
    defConstructor.displayMessage();
    
    cout<<"\n----------------------------\n Argument Constructor Tests\n----------------------------\n";
    
    cout<<"newYears(1,1,2014); output --> ";
    newYears.displayMessage();
    
    cout<<"valentines(2,14,2014); output --> ";
    valentines.displayMessage();
    
    cout<<"independence(7,4,1987); output --> ";
    independence.displayMessage();
    
    cout<<"birthday(9,30,1988); output --> ";
    birthday.displayMessage();
    
    cout<<"newYearsEve(12,31,2014); output --> ";
    newYearsEve.displayMessage();
    
    cout<<"\n-----------------\n Month > 12 Test\n-----------------\n";
    cout<<"checkMonthOver(13,17,2002); output --> ";
    checkMonthOver.displayMessage();
    
    cout<<"\n------------------------\n January Date > 31 Test\n------------------------\n";
    cout<<"checkJanOver(1,32,2006) output --> ";
    checkJanOver.displayMessage();
    
    cout<<"\n-------------------------\n February Date > 28 Test\n-------------------------\n";
    cout<<"checkFebOver(2,29,1988); output --> ";
    checkFebOver.displayMessage();
    
    cout<<"\n----------------------\n April Date > 30 Test\n----------------------\n";
    cout<<"checkAprilOver(04,31,1999); output --> ";
    checkAprilOver.displayMessage();
    
    cout<<"\n-------------------------\n Month and Day = 99 Test\n-------------------------\n";
    cout<<"nineNine(99,99,2013); output --> ";
    nineNine.displayMessage();
    
    cout<<endl;
}
