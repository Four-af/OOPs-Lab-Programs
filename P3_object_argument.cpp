// Write a C++ program to perform the addition of two time
// objects in hour and minute format, display the result in
// hour: minute format using object as a function argument.
#include <bits/stdc++.h>
using namespace std;

class AddTime
{
private:
    int hr;
    int min;

public:
    AddTime()
    {
    }
    AddTime(int h, int m)
    {
        this->hr = h;
        this->min = m;
    }
    AddTime Add(AddTime &a)
    {
        int hh = a.hr;
        int mm = a.min;
        AddTime A;
        int tot_hr = hh + hr;
        int tot_min = mm + min;
        if (tot_min >= 60)
        {
            tot_min -= 60;
            tot_hr += 1;
        }
        A = AddTime(tot_hr, tot_min);
        return A;
    }
    void gettime()
    {
        cout << hr << ": ";
        if (min >= 0 && min < 10)
        {
            cout << "0";
        }
        cout << min;
    }
};
int main()
{
    int h, m;
    cout << "\n____20BCS008 Aiman Fatima____\n";
    cout << "\n----Enter time 1----\n";
    cout << "Enter hour : ";
    cin >> h;
    cout << "Enter minute : ";
    cin >> m;
    AddTime A(h, m);
    cout << "\n----Enter time 2----\n";
    cout << "Enter hour : ";
    cin >> h;
    cout << "Enter minute : ";
    cin >> m;
    AddTime B(h, m);
    cout << "\n|| Displaying time ||\n";
    cout << "Time 1 -> ";
    A.gettime();
    cout << "\nTime 2 -> ";
    B.gettime();
    AddTime C = A.Add(B);
    cout << "\n\n|| Resultant Time ->  ";
    C.gettime();
    cout << " ||\n\n";
    return 0;
}