///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Q2. Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a fifty-cent toll.
// Mostly they do, but sometimes a car goes by without paying.
// The tollbooth keeps track of the number of cars that have gone by and of the total amount of money
// collected. Model this tollbooth with a class called tollbooth.
// The two data items are a type unsigned int to hold the total number of cars, and a type double to
// hold the total amount of money collected.
// A constructor initializes all data members to 0. A member function called payingCar() increments
// the car total and adds 0.50 to the cash total. An other function, called nopayCar()
// increments the car total but adds nothing to the cash total. Finally, a member function called
// printOnConsole() displays the two totals and number of paying as well as non paying cars total.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class Toolbooth
{
    unsigned int totalCars;
    double totalAmout;

    public:

    Toolbooth()
    {
        totalCars = 0;
        totalAmout = 0;
    }

    void payingCar()
    {
        totalCars++;
        totalAmout += 0.50;
    }

    void nopayCar()
    {
        totalCars++;
    }

    void printOnConsole()
    {
        cout<<"////////////////////////////////////////////////////////////"<<endl;
        cout<<"         Total Cars passed     : "<<totalCars<<endl;
        cout<<"         Total Amout collected : "<<totalAmout<<endl;
        cout<<"         Total no paying  cars : "<<calculateNoPayCar()<<endl;
        cout<<"///////////////////////////////////////////////////////////"<<endl;
    }

    int calculateNoPayCar()
    {
        double noPayAmout = (totalCars * 0.50) - totalAmout;
        return noPayAmout / 0.50;
    }

};

int menu()
{
    int choice;
    cout<<"---------------------------------"<<endl;
    cout<<"1-Paying Car"<<endl;
    cout<<"2-No Paying Car"<<endl;
    cout<<"3-Display data"<<endl;
    cout<<"0-Exit"<<endl;
    cout<<"---------------------------------"<<endl;
    cout<<"Enter your choice : ";
    cin>>choice;
    cout<<"---------------------------------"<<endl;
    return choice;
}

int main()
{
    int choice;
    Toolbooth booth;

    do
    {        
        switch(choice = menu())
        {
            case 1:
                booth.payingCar();
                break;
            case 2:
                booth.nopayCar();
                break;
            case 3:
                booth.printOnConsole();
                break;
            default: 
                if(choice != 0) cout<<"---------------Enter correct choice---------------"<<endl;
        }
    }
    while(choice != 0);
    



    return 0;
}