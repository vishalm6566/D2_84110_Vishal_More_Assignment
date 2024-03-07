///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Q2. Write a menu driven program for Date in a CPP language using class.
//Date is having data members day, month, year. Implement the following functions.
//void initDate();
//void printDateOnConsole();
//void acceptDateFromConsole();
//bool isLeapYear();
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class Date { 
    int day;
    int month;
    int year;

public : 
    void initDate()
    {
        day = 0;
        month = 0;
        year = 0;
    }

    void printDateOnConsole()
    {
        printf("//////////////////////////////////////////\n");
        printf("           Date : %d / %d / %d \n",day, month, year);
        printf("//////////////////////////////////////////\n");
    }

    void acceptDateFromConsole()
    {
        printf("Enter day : ");
        scanf("%d",&day);
        printf("Enter month : ");
        scanf("%d",&month);
        printf("Enter year : ");
        scanf("%d",&year);
    }

    void isLeapYear()
    {
        if(year % 400 == 0)
            cout << "-----------"<<year<<" is a Leap Year----------------\n";
            
        else if(year % 4 == 0  && year % 100 != 0)
            cout << "-----------"<<year<<" is a Leap Year----------------\n";
            
        else            
        cout << "-----------"<<year<<" is not a Leap Year----------------\n";

    }
};


int menu()
{
    int choice;
    printf("select your choice : \n");
    printf("1 : initialize date\n");
    printf("2 : display date\n");
    printf("3 : accept date\n");   
    printf("4 : check leap year\n");
    printf("0 : Exit\n");
    scanf("%d",&choice);

    return choice;
}

int main()
{
    int choice;
    Date date;
    
    do{
        switch(choice = menu())
        {
        case 1:
            date.initDate();
            break;
        case 2:
            date.printDateOnConsole();
            break;
        case 3:
            date.acceptDateFromConsole();
            break;
        case 4:
            date.isLeapYear();
            break;
        default:
            if(choice != 0) printf("Enter valid choice \n");
        }

    }while(choice != 0);

    return 0;
}