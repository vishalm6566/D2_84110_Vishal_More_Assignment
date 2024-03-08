#include <iostream>
#include <vector> 

using namespace std;

class BankAccount
{
private:
    const int accno;
    string name;
    double balance;
    static int generate_accno;

public:
    BankAccount() : accno(++generate_accno) {}

    BankAccount(string name, double balance) : accno(++generate_accno)
    {
        this->name = name;
        this->balance = balance;
    }

    void acceptaccountDeatils()
    {
        cout << "Enter name - ";
        cin >> name;
        cout << "Enter initial Balance - ";
        cin >> balance;
    }

    void displayAccountDeatils()
    {
        cout << "Accno = " << accno << endl;
        cout << "Name = " << name << endl;
        cout << "Balanace = " << balance << endl;
    }

    void withdraw(int amount)
    {
        balance = balance - amount;
        checkBalance();
    }

    void deposit(int amount)
    {
        balance = balance + amount;
        checkBalance();
    }

    void checkBalance()
    {
        cout<<balance<<endl;
    }

    string getName() 
    {
        return name;
    }
};

int BankAccount::generate_accno = 1000;

int menu()
{
    int choice;
    cout<<"------------------------------------------"<<endl;
    cout<<"1- Accept Details"<<endl;
    cout<<"2- Display Details"<<endl;
    cout<<"3- Withdraw"<<endl;
    cout<<"4- Deposit"<<endl;
    cout<<"5- cehckBalance"<<endl;
    cout<<"0-Exit"<<endl;
    cout<<"------------------------------------------"<<endl;
    cout<<"Enter your choice : ";
    cin>>choice;
    cout<<"-------------------------------------------"<<endl;
    return choice;
};


int main()
{
    int amount, choice,i=0;
    BankAccount *accounts[2];
    BankAccount *bptr;
    bptr = NULL;

    do{
        switch(choice = menu())
        {
        case 1:
        {
            bptr = new BankAccount();
              ->acceptaccountDeatils();
            accounts[i++] = bptr;
            break;
        }
        case 2:
            bptr->displayAccountDeatils();
            break;
        case 3:
        {
            cout<<"Enter amount to withdraw : "<<endl;
            cin>>amount;
            bptr->withdraw(amount);
            break;
        }
        case 4:
        {
            cout<<"Enter amount to deposit : "<<endl;
            cin>>amount;
            bptr->deposit(amount);
            break;
        }
        case 5:
            bptr->checkBalance();
            break;
        default:
            if(choice != 0) cout<<"Enter valid choice \n";
        }

    }while(choice != 0);

    for(int i = 0; i < 2; i++)
    {
        cout << accounts[i]->getName()<<endl;
    }
    
    return 0;
}

