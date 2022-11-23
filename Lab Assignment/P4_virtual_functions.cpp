#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
using namespace std;

const float VAL = 82.30;

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
        cout << "Value in INR : " << setprecision(2) << r << endl;
    }
    float getInr()
    {
        return r;
    }
};

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
        cout << "Value in Dollar : " << setprecision(2) << d << "\n"
             << endl;
    }
};

int main()
{
    rupee r1, r2;
    dollar d1, d2;
    float a, b;
    cout << "\nEnter a dollar value and rupee value : ";
    cin >> a >> b;
    d1.inDlr(a);
    r2.inINR(b);
    r1 = d1; // operator overloading in source class
    d2 = r2; // constructor in destination class
    r1.printinr();
    d2.printdlr();
    return 0;
}