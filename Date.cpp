//
// CS 271 - lab assignment #7
// Date.cpp
// .cpp file for Date class
// written by Gustavo Rayos
// November 06, 2014
//

#include <iostream>
#include <stdexcept>
#include <string>
#include <iomanip>
#include "Date.h"
using namespace std;

Date::Date() {
    
    setMonth(1);
    setDay(1);
    setYear(2014);

}

Date::Date(int _month, int _day, int _year) {
    
    setMonth(_month);
    setDay(_day);
    setYear(_year);
    
}

void Date::setMonth(int _month) {
    
    if (_month > 12 || _month < 1) {
        month = 1;
    }
    else
        month = _month;
}

void Date::setDay(int _day) {

    if ((getMonth() == 1 || getMonth() == 3 || getMonth() == 5 || getMonth() == 7 || getMonth() == 8 || getMonth() == 10 || getMonth() == 12) && (_day < 1 || _day > 31)) {
        day = 1;
    }
    
    else if ((getMonth() == 4 || getMonth() == 6 || getMonth() == 9 || getMonth() == 11) && (_day < 1 || _day > 30)) {
        day = 1;
    }
    
    else if ((month == 2) && (_day < 1  || _day > 28)) {
            day = 1;
    }
    
    else
        day = _day;
}

void Date::setYear(int _year) {
    year = _year;
}

int Date::getMonth() {
    return month;
}

int Date::getDay() {
    return day;
}

int Date::getYear() {
    return year;
}

void Date::displayMessage() {
    cout<<setw(2)<<setfill('0')<<getMonth()<<"/"<<setw(2)<<setfill('0')<<getDay()<<"/"<<setw(4)<<setfill('0')<<getYear()<<endl;
}


