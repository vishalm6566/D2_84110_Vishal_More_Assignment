///////////////////////////////////////////////////////////////////
//
//Q1. Write a menu driven program to calculate volume of the 
//box(length * width * height).Provide necessary constructors.
//
///////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class Box
{
        int length;
        int width;
        int height;

    public:

    Box()                   //Parameterless Constructor
    {
        length = 0;
        width = 0;
        height = 0;
    }

    Box(int value) : Box(value,value,value)           //Constructor Delegation
    {
        //length = value;
        //width = value;
        //height = value;   
    }

    Box(int length, int width, int height)      //Parameterized constructor
    {   
        this->length = length;
        this->width = width;
        this->height = height;
    }

    // Box(int length = 0, int width=0, int height=0)      //Parameterized constructor with defalut argument
    // {
    //     this->length = length;
    //     this->width = width;
    //     this->height = height;
    // }

    void acceptBoxDimension(int length, int width, int height)
    {
        this->length = length;
        this->width = width;
        this->height = height;
    }

    int displayBoxVolume()
    {
        int volume = length * width * height;
        return volume;
    }
};

int menu()
{
    int choice;
    cout<<"---------------------------------"<<endl;
    cout<<"1-accept box dimension"<<endl;
    cout<<"2-find volume of box"<<endl;
    cout<<"0-Exit"<<endl;
    cout<<"---------------------------------"<<endl;
    cout<<"Enter your choice : ";
    cin>>choice;
    cout<<"---------------------------------"<<endl;
    return choice;
}

int main()
{
    int choice,length,width,height;

    Box box;

    do
    {        
        switch(choice = menu())
        {
            case 1:
            {
                cout<<"Enter length : ";
                cin>>length;
                cout<<"Enter width : ";
                cin>>width;
                cout<<"Enter height : ";
                cin>>height;
                box.acceptBoxDimension(length,width,height);
                cout<<"//////////////////////////////////////////////////"<<endl;
                cout<<"               new box created"<<endl;
                cout<<"//////////////////////////////////////////////////"<<endl;
                break;
            }
            case 2:
            {
                int volume = box.displayBoxVolume();
                cout<<"//////////////////////////////////////////////////"<<endl;
                cout<<"             volume : "<<volume<<"                 "<<endl;
                cout<<"///////////////////////////////////////////////////"<<endl;

                break;
            }
            default: 
                if(choice != 0) cout<<"***********Enter correct choice************"<<endl;
        }
    }
    while(choice != 0);
    

    return 0;
}