//
// CS 272 - lab assignment #9
// Lab9.cpp
// Structs and memory allocation practice
// written by Gustavo Rayos
// December 02, 2014
//

#include <iostream>
#include <iomanip>
using namespace std;

//structs
struct date {
    
    int month;
    int day;
    int year;
    
    
};

typedef struct date Date;

struct time {
    
    int hour;
    int minute;
    int second;
    
};

typedef struct time Time;

struct event {
    
    Date eventDate;
    Time eventTime;
    
};

typedef struct event Event;
typedef Event *EventPtr;

// function header
void inputDate(Date *);
void outputDate( const Date * const d);
void inputTime(Time *);
void outputTime( const Time * const t);

//functions
void inputDate(Date *d) {
    
    cout << "Please enter the month: ";
    cin >> d->month;
    
    cout << "Please enter the day: ";
    cin >> d->day;
    
    cout << "Please enter the year: ";
    cin >> d->year;
    cout << endl;
    
    if(d->month < 1 || d->month > 12)
        d->month = 1;
    
    if(d->day < 1 || d->day > 31)
        d->day = 1;
    
    if(d->year < 0 || d->year > 9999)
        d->year = 2014;
    
}

void inputTime(Time *t) {
    
    cout << "Please enter the hour: ";
    cin >> t->hour;
    
    cout << "Please enter the minute: ";
    cin >> t->minute;
    
    cout << "Please enter the second: ";
    cin >> t->second;
    cout << endl;
    
    if(t->second > 60 || t->second < 0)
        t->second = 0;
    
    if(t->minute > 60 || t->minute < 0)
        t->minute = 0;
    
    if(t->hour > 12 || t->hour < 1)
        t->hour = 1;
    
} // end of inputTime method

void outputDate(const Date * const d) {
    
    cout << setw(2) << setfill('0')
    << d->month << "/"
    << setw(2) << setfill('0')
    << d->day << "/"
    << setw(2) << setfill('0')
    << d->year << "     " << endl;
    
}//end of OutputDate method

void outputTime(Time * const t) {
    
    cout << setw(2) << setfill('0')
    << t->hour << ":"
    << setw(2) << setfill('0')
    << t->minute << ":"
    << setw(2) << setfill('0')
    << t->second;
    cout<<endl;
    
} //End ouf outputTime method

int main() {
    
    int eventCount;
    EventPtr newPtr;
    
    cout << "How many events will be entered?" << endl;
    cin >> eventCount;
    
    newPtr = (EventPtr)malloc (sizeof(Event) * (eventCount));
    
    if (newPtr == NULL) {
        cout << "unable to allocate enough memory" << endl;
        return 1;
    }
    
    EventPtr ePtr;
    ePtr = newPtr;
    
    for(int x = 0; x < eventCount; ++x) {
        
        inputDate(&(ePtr->eventDate));
        inputTime(&(ePtr->eventTime));
        
        ++ePtr;
    }
    ePtr=ePtr-eventCount;
    
    for(int y = 0; y < eventCount; ++y) {
        
        cout << "Event #" << (y + 1) << ":	";
        
        outputTime(&(ePtr->eventTime));
        outputDate(&(ePtr->eventDate));
        
        ++ePtr;
    }
    
    if (eventCount > 1)
        free(ePtr);
    
} // end of main method




