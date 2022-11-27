// Write a C++ program handling the following details for
// students and staff using inheritance.
//• Student Details: name, address, percentage marks
//• Staff Details: name, address, salary
// Create appropriate base and derived classes. Input the details and output them.

#include <bits/stdc++.h>
using namespace std;
class School
{
private:
    string name;
    string address;

public:
    School()
    {
    }
    void getDetails()
    {
        cout << "Enter School name : ";
        cin >> name;
        cout << "Enter address : ";
        cin >> address;
    }
    void showDetails()
    {
        cout << "School Name : " << name << endl;
        cout << "Address : " << address << endl;
    }
};

class Student : public School
{
    string name;
    string roll_no;
    float percentage;

public:
    Student()
    {
    }
    void getDetails()
    {
        School::getDetails();
        cout << "Enter roll no : ";
        cin >> roll_no;
        cout << "Enter name : ";
        cin >> name;
        cout << "Enter percentage : ";
        cin >> percentage;
    }
    void printStudent()
    {
        cout << "\n----Details of the student----\n";
        School::showDetails();
        cout << "Name : " << name << endl;
        cout << "Roll_no : " << roll_no << endl;
        cout << fixed;
        cout << "Percentage : " << setprecision(2) << percentage << endl;
    }
};

class Staff : public School
{
    string name;
    string staff_id;
    float salary;

public:
    Staff()
    {
    }
    void getDetails()
    {
        School::getDetails();
        cout << "Enter staff id: ";
        cin >> staff_id;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter salary: ";
        cin >> salary;
    }
    void printStaff()
    {
        cout << "\n----Details of the Staff----\n";
        School::showDetails();
        cout << "Name : " << name << endl;
        cout << "Staff Id : " << staff_id << endl;
        cout << fixed;
        cout << "Percentage : " << setprecision(2) << salary << endl;
    }
};

int main()
{
    cout << "\n____20BCS008 Aiman Fatima____\n";
    Student student;
    Staff staff;
    cout << "\n----Enter details of the student----\n";
    student.getDetails();

    cout << "\n----Enter details of the staff----\n";
    staff.getDetails();
    student.printStudent();
    cout << endl;
    staff.printStaff();
    return 0;
}