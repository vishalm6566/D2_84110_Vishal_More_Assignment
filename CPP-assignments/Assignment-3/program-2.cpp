////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Q2. Stack is a Last-In-First-Out data structure. Write a Stack class. It implements stack using
// Dynamically allocated array. Stack size should be passed in parameterized constructor. If size is not
// given, allocate stack of size 5.
// Provide member functions like push(), pop(), peek(), isEmpty(), isFull(), and print().
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

enum EMenu
{
    EXIT,
    PUSH,
    POP,
    PEEK,
    ISEMPTY,
    ISFULL,
    PRINT
};

class Stack
{
    int *arr;
    int top;
    int size;

public:
    Stack(int size = 5)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int num)
    {
        if (isFull())
        {
            cout << "****Stack is full.****" << endl;
            return;
        }
        arr[++top] = num;
        cout << top << endl;
    }

    int pop()
    {
        if (isEmpty())
        {
            cout << "*****Stack is Empty.****" << endl;
            return 0;
        }
        else
        {
            cout << arr[top] << endl;
            return arr[top--];
        }
    }

    int peek()
    {
        if (top < 0)
        {
            cout << "Stack is Empty" << endl;
            return 0;
        }
        else
            return arr[top];
    }

    bool isEmpty()
    {
        if (top < 0)
            return true;
        else
            return false;
    }

    bool isFull()
    {
        if (top >= size - 1)
            return true;
        else
            return false;
    }

    void print()
    {
        for (int i = 0; i <= top; i++)
        {
            cout << arr[i] << " | ";
        }
        cout << endl;
    }

    ~Stack()
    {
        delete[] arr;
    }
};

EMenu menu()
{
    int choice;
    cout << "--------------------------------------------" << endl;
    cout << "Enter your choice" << endl;
    cout << "1 - push   2 - pop" << endl;
    cout << "3 - peek   4 - isEmpty" << endl;
    cout << "5 - isFull 6 - display stack" << endl;
    cout << "0 - Exit" << endl;
    cout << "--------------------------------------------" << endl;
    cin >> choice;
    return EMenu(choice);
}

int main()
{
    int choice, num;
    bool b;
    int size;
    Stack *str;
    cout << "You want to give size : " << endl;
    cout << "1 - Yes  0 - No" << endl;
    cin >> b;
    if (b)
    {
        cout << "Enter size : ";
        cin >> size;
        str = new Stack(size);
        cout << "defined stack created of size = " << size << endl;
    }
    else
    {
        str = new Stack;
        cout << "default stack created of size 5" << endl;
    }

    do
    {
        switch (choice = menu())
        {
        case EXIT:
            cout << "Thank you!!!!!!" << endl;
            break;
        case PUSH:
        {
            if (!str->isFull())
            {
                cout << "Enter your number : ";
                cin >> num;
            }
            str->push(num);
            break;
        }
        case POP:
        {
            num = str->pop();
            if (num != 0)
                cout << "****" << num << " poped successfully****" << endl;
            break;
        }
        case PEEK:
        {
            num = str->peek();
            cout << "Peek element : " << num << endl;
            break;
        }
        case ISEMPTY:
        {
            b = str->isEmpty();
            if (b)
                cout << "****Stack is Empty****" << endl;
            else
                cout << "****Stack is not Empty****" << endl;
            break;
        }
        case ISFULL:
        {
            b = str->isFull();
            if (b)
                cout << "****Stack is Full****" << endl;
            else
                cout << "****Stack is not Full****" << endl;
            break;
        }
        case PRINT:
            str->print();
            break;
        default:
            cout << "Enter correct choice" << endl;
        }
    } while (choice != 0);

    return 0;
}