///////////////////////////////////////////////////////////////////
//
// Q1. Write a class for Time and provide the functionality
// Time()
// Time(int h,int m,int s)
// getHour()
// getMinute()
// getSeconds()
// printTime()
// setHour()
// setMinute()
// setSeconds()
// In main create array of objects of Time.
// Allocate the memory for the array and the object dynamically.
//
//////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class Time
{
    int hour;
    int minute;
    int second;

    public : 
    Time()
    {
        hour = 0;
        minute = 0;
        second = 0;
    }

    Time(int hour, int minute, int second)
    {
        this->hour = hour;
        this->minute = minute;
        this->second = second;
    }

    void printTime()
    {
        cout<<"-------------------------------------------------"<<endl;
        cout<<"                 Hour   : "<<hour<<endl;
        cout<<"                 Minute : "<<minute<<endl;
        cout<<"                 Second : "<<second<<endl;
        cout<<"-------------------------------------------------"<<endl;

    }

    int getHour() 
    {
        return hour;
    }

    void setHour(int hour) 
    {
        this->hour = hour;
    }

    int getMinute() 
    {
        return minute;
    }

    void setMinute(int minute) 
    {
        this->minute = minute;
    }

    int getSeconds() 
    {
        return second;
    }

    void setSeconds(int second) 
    {
        this->second = second;
    }
 
};

int main()
{
    // In main create array of objects of Time using static memory allocation.
    Time arr[5] {Time(1,2,3), Time(3,4,5), Time(5,6,7), Time(8,9,0), Time(0,0,0)};

    for(int i = 0; i < 5; i++)
    {
        arr[i].printTime();
    }
    
    // Allocate the memory for the array and the object dynamically.

    Time** brr = new Time*[3];


    // Time *brr[3];
    brr[0] = new Time(2,3,4);
    brr[1] = new Time(3,4,5);
    brr[2] = new Time(0,0,0);

    for(int i = 0; i < 3; i++)
    {
        brr[i]->printTime();
    }


    return 0;
}