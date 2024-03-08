///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Q3. Create a namespace NStudent. Create the Student class(created as per assignment-1 Q3) inside
// namespace. Test the functionalities.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

namespace NStudent {

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

    using namespace NStudent;               //Namespace case 1
    Student student;

    //NStudent::Student student;            //Namespace case 2
    
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