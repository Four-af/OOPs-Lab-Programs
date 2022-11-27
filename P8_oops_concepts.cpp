// Write suitable C++ program to implement following OOPS concepts:
// (a) Pure Virtual Function
// (b) Pointers to Derived Class Object
// (c) Virtual Destructor
// (d) Overloading through friend function
#include <bits/stdc++.h>
using namespace std;

class Base
{
public:
    Base()
    {
        cout << "\nBase class created\n";
    }
    // Virtual Destructor
    virtual ~Base()
    {
        cout << "\nBase class destructor!" << endl;
    }
    // Pure virtual function
    virtual void DisplayAction()
    {
        cout << "\nDispay function of Base class called\n";
    }
};

class Derived : public Base
{
public:
    Derived()
    {
        cout << "\nDerived class created" << endl;
    }

    ~Derived()
    {
        cout << "\nDerived class destructor!" << endl;
    }

    void DisplayAction()
    {
        cout << "\nDisplay of Derived class called!" << endl;
    }
};

class Overloading_Through_Friend
{
private:
    int number;

public:
    Overloading_Through_Friend(int r = 0)
    {
        number = r;
    }
    void Display()
    {
        cout << number;
    }
    friend Overloading_Through_Friend operator+(Overloading_Through_Friend c1, Overloading_Through_Friend c2);
};

Overloading_Through_Friend operator+(Overloading_Through_Friend c1, Overloading_Through_Friend c2)
{
    Overloading_Through_Friend temp;
    temp.number = c1.number + c2.number;
    return temp;
}

int main()
{
    cout << "\n____20BCS008 Aiman Fatima____\n";
    Base *obj;
    // pointer to derived class
    obj = new Derived();
    obj->DisplayAction();

    Overloading_Through_Friend C1(4), C2(8), C3;
    cout << endl;
    C1.Display();
    cout << " + ";
    C2.Display();
    cout << " = ";
    C3 = C1 + C2;
    cout << "\n";
    C3.Display();
    obj->~Base();
    cout << endl;
    return 0;
}