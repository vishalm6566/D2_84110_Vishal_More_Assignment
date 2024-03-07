//////////////////////////////////////////////////////////////////////////////////////////////////
//
//Q3. Write a menu driven program for Student in CPP language. Create a class student with data
//members roll no, name and marks. Implement the following functions
//void initStudent();
//void printStudentOnConsole();
//void acceptStudentFromConsole();
//
//////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class Student {
    int rollNum; 
    string name;
    double marks;

    public :
    void initStudent()
    {
        this->rollNum = 0;
        this->name = "null";
        this->marks = 0.0;
    }

    void printStudentOnConsole()
    {
        cout<<"//////////////////////////////////////////\n";
        cout<<"Roll Number : "<<rollNum<<endl;
        cout<<"Name       : "<<name<<endl;
        cout<<"Marks       : "<<marks<<endl;
        cout<<"//////////////////////////////////////////\n";
    }

    void acceptStudentFromConsole()
    {
        cout<<"Enter your roll number : ";
        cin>>rollNum;
        cout<<"Enter your name : ";
        cin>>name;
        cout<<"Enter your marks : ";
        cin>>marks;
    }

};

int menu()
{
    int choice;
    cout<<"-----------select your choice : ------------\n";
    cout<<"1 : initialize student\n";
    cout<<"2 : display student\n";
    cout<<"3 : accept student\n";
    cout<<"0 : Exit\n";
    cin>>choice;

    return choice;
}


int main()
{
    int choice;
    Student student;
    
    do{
        switch(choice = menu())
        {
        case 1:
            student.initStudent();
            break;
        case 2:
            student.printStudentOnConsole();
            break;
        case 3:
            student.acceptStudentFromConsole();
            break;
        default:
            if(choice != 0) cout<<"Enter valid choice \n";
        }

    }while(choice != 0);

    return 0;
}