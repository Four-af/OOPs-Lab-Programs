#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
using namespace std;

// current value of 1 USD in INR is 81.79 INR
const float VAL = 81.79;

// class rupee
class rupee
{
    float r;

public:
    rupee()
    {
        r = 0.0;
    }

    void inINR(float a)
    {
        r = a;
    }

    rupee(float dlr)
    {
        r = dlr;
    }

    void printinr()
    {
        cout << fixed;
        cout << "\nValue in INR : " << setprecision(2) << r << endl;
    }
    float getInr()
    {
        return r;
    }
};

// class dollar
class dollar
{
    float d;

public:
    dollar()
    {
        d = 0.0;
    }

    void inDlr(float a)
    {
        d = a;
    }

    dollar(rupee rr)
    {
        d = rr.getInr() / VAL;
    }

    operator rupee()
    {
        return (rupee(d * VAL));
    }
    void printdlr()
    {
        cout << fixed;
        cout << "\nValue in Dollar : " << setprecision(2) << d << "\n"
             << endl;
    }
};

// main function
int main()
{
    rupee r1, r2;
    dollar d1, d2;
    float a, b;
    cout << "\n____20BCS008 Aiman Fatima____\n";
    cout << "\n<Current value of 1 USD in INR is 81.79>\n";
    cout << "\nEnter value in dollar(s) : ";
    cin >> a;
    d1.inDlr(a);
    cout << "\n----Operator overloading in source class----";
    r1 = d1; // operator overloading in source class
    r1.printinr();
    ///////////////
    cout << "\nEnter value in rupee(s) : ";
    cin >> b;
    r2.inINR(b);
    cout << "\n----Constructor in destination class----";
    d2 = r2; // constructor in destination class
    d2.printdlr();
    return 0;
}