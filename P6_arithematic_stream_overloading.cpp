#include <bits/stdc++.h>
using namespace std;

class Complex
{
    float real;
    float img;

public:
    Complex()
    {
        real = img = 0;
    }
    // += operator overloading
    void operator+=(Complex c)
    {
        real = real + c.real;
        img = img + c.img;
    }
    // -= operator overloading
    void operator-=(Complex c)
    {
        real = real - c.real;
        img = img - c.img;
    }
    // *= operator overloading
    void operator*=(Complex c)
    {
        real = real * c.real - img * c.img;
        img = real * c.img + img * c.real;
    }
    // /= operator overloading
    void operator/=(Complex c)
    {
        float denominator = c.real * c.real + c.img * c.img;
        real = (real * c.real + img * c.img) / denominator;
        img = (img * c.real - real * c.img) / denominator;
    }
    // Input stream Operator overloading
    friend istream &operator>>(istream &In, Complex &c)
    {
        cout << "Enter Real Part : ";
        In >> c.real;
        cout << "Enter Imaginary Part : ";
        In >> c.img;
        return In;
    }
    // Output stream Operator overloading
    friend ostream &operator<<(ostream &Out, Complex &c)
    {
        Out << fixed;
        Out << "Resulatnt Complex Number : (" << setprecision(2) << c.real;
        Out << " + i(" << setprecision(2) << c.img << "))" << endl;
        return Out;
    }
};

int main()
{
    Complex c1, c2, c3;
    cout << "\n____20BCS008 Aiman Fatima____\n";
    cout << "\n|| Arithmetic Assignment Operators and Stream Operators overloading ||\n";
    cout << "\nEnter Complex Number c1\n";
    cin >> c1;
    cout << "Enter Complex Number c2\n";
    cin >> c2;
    c3 = c1;
    c3 += c2;
    cout << "\n----| Addition : c1 + c2 |----\n";
    cout << c3;
    c3 = c1;
    c3 -= c2;
    cout << "\n----| Substraction : c1 + c2 |----\n";
    cout << c3;
    c3 = c1;
    c3 *= c2;
    cout << "\n----| Multiplication : c1 + c2 |----\n";
    cout << c3;
    c3 = c1;
    c3 /= c2;
    cout << "\n----| DivisionI : c1 + c2 |----\n";
    cout << c3;
}