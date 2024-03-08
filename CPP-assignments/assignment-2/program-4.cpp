//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Q4. Write a class Address. Implement constructors, getters, setters, accept(), and display() methods.
// Instead of char[] use string datatype
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class Address{
    string building;
    string street;
    string city;
    int pin;

    public:
    Address(){
        building = "null";
        street = "null";
        city = "null";
        pin = 000000;
    }

    Address(string building, string street, string city, int pin)
    {
        this->building = building;
        this->street = street;
        this->city = city;
        this->pin = pin;
    }

    void acceptAddress()
    {
        cout<<"         Enter your Address"<<endl;
        cout<<"Enter Building : ";
        cin.ignore();
        getline (cin, building);
        cout<<"Enter Street : ";
        getline (cin, street);
        cout<<"Enter city : ";
        getline (cin, city);
        cout<<"Enter pin : ";
        cin>>pin;
    }

    void getBuilding()
    {
        cout<<"//////////////////////////////////////////\n";
        cout<<"      Building  : "<<building<<endl;
        cout<<"//////////////////////////////////////////\n";
    }
    void getStreet()
    {
        cout<<"//////////////////////////////////////////\n";
        cout<<"      Street  : "<<street<<endl;
        cout<<"//////////////////////////////////////////\n";
    }
    void getCity()
    {
        cout<<"//////////////////////////////////////////\n";
        cout<<"      City  : "<<city<<endl;
        cout<<"//////////////////////////////////////////\n";
    }
    void getPin()
    {
        cout<<"//////////////////////////////////////////\n";
        cout<<"      Pin  : "<<pin<<endl;
        cout<<"//////////////////////////////////////////\n";
    }

    void setBuilding(string building)
    {
        this->building = building;
    }

    void setStreet(string street)
    {
        this->street = street;
    }

    void setCity(string city)
    {
        this->city = city;
    }

    void setPin(int pin)
    {
        this->pin = pin;
    }


    void displayAddress()
    {
        cout<<"//////////////////////////////////////////\n";
        cout<<"      Building  : "<<building<<endl;
        cout<<"      street    : "<<street<<endl;
        cout<<"      city      : "<<city<<endl;
        cout<<"      pin       : "<<pin<<endl;
        cout<<"//////////////////////////////////////////\n";
    }

};

int menu()
{
    int choice;
    cout<<"------------------------------------------"<<endl;
    cout<<"1-Accept Address  2-Display Address"<<endl;
    cout<<"3-Get Building    4-Get Street"<<endl;
    cout<<"5-Get City        6-Get Pin"<<endl;
    cout<<"7-Set Building    8-Set Street"<<endl;
    cout<<"9-Set City        10-Set Pin"<<endl;
    cout<<"0-Exit"<<endl;
    cout<<"------------------------------------------"<<endl;
    cout<<"Enter your choice : ";
    cin>>choice;
    cout<<"-------------------------------------------"<<endl;
    return choice;
}


int main()
{
    int choice;
    Address address;
    string str;
    int pin;

    do{
        switch(choice = menu())
        {
        case 1:
            address.acceptAddress();
            break;
        case 2:
            address.displayAddress();
            break;
        case 3:
            address.getBuilding();
            break;
        case 4:
            address.getStreet();
            break;
        case 5:
            address.getCity();
            break;
        case 6:
            address.getPin();
            break;
        case 7:
        {
            cout<<"Enter Building : ";
            cin.ignore();
            getline(cin, str);
            address.setBuilding(str);
            break;
        }
        case 8:
        {
            cout<<"Enter Street : ";
            cin.ignore();
            getline(cin, str);
            address.setStreet(str);
            break;
        }
        case 9:
        {
            cout<<"Enter City : ";
            cin.ignore();
            getline(cin, str);
            address.setCity(str);
            break;
        }
        case 10:
        {
            cout<<"Enter pin : ";
            cin>>pin;
            address.setPin(pin);
            break;
        }
        default:
            if(choice != 0) cout<<"Enter valid choice \n";
        }

    }while(choice != 0);

    return 0;
}