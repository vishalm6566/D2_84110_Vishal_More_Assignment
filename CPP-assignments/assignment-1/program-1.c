/////////////////////////////////////////////////////////////////////////////////////////////////
//
//Q1. Write a menu driven program for Date in a C. Declare a structure Date having data members
//day, month, year. Implement the following functions.
//void initDate(struct Date* ptrDate);
//void printDateOnConsole(struct Date* ptrDate);
//void acceptDateFromConsole(struct Date* ptrDate);
//
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

struct Date { 
    int day;
    int month;
    int year;
};

void initDate(struct Date* ptrDate)
{
    ptrDate->day = 0;
    ptrDate->month = 0;
    ptrDate->year = 0;

}

void printDateOnConsole(struct Date* ptrDate)
{
    printf("//////////////////////////////////////////\n");
    printf("           Date : %d / %d / %d \n",ptrDate->day, ptrDate->month, ptrDate->year);
    printf("//////////////////////////////////////////\n");
}

void acceptDateFromConsole(struct Date* ptrDate)
{
    printf("Enter day : ");
    scanf("%d",&ptrDate->day);
    printf("Enter month : ");
    scanf("%d",&ptrDate->month);
    printf("Enter year : ");
    scanf("%d",&ptrDate->year);
}

int menu()
{
    int choice;
    printf("--------------select your choice : ----------------\n");
    printf("1 : initialize date\n");
    printf("2 : display date\n");
    printf("3 : accept date\n");
    printf("0 : Exit\n");
    scanf("%d",&choice);

    return choice;
}

int main()
{
    int choice;
    struct Date date;
    
    do{
        switch(choice = menu())
        {
        case 1:
            initDate(&date);
            break;
        case 2:
            printDateOnConsole(&date);
            break;
        case 3:
            acceptDateFromConsole(&date);
            break;
        default:
            if(choice != 0) printf("Enter valid choice \n");
        }

    }while(choice != 0);

    return 0;
}