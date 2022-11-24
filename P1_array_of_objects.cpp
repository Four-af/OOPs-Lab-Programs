// Write a program to implement STUDENT class consisting of name, enrollment_Id and
// marks as class data members. Create three objects for the class using the concept of array of
// objects. Write member functions to read and display the student information. Also write the main
// program to create objects and call the member functions from the class.
#include <bits/stdc++.h>
using namespace std;
class Student
{
private:
    string name;
    int enrollment_Id;
    vector<int> marks;

public:
    Student()
    {
    }
    Student(string name_value, int id, vector<int> marks_value)
    {
        this->name = name_value;
        this->enrollment_Id = id;
        int ss = marks_value.size();
        marks.resize(ss);
        this->marks = marks_value;
    }
    void getData()
    {
        cout << "Name : \t" << name << endl;
        cout << "Enrollment Id : " << enrollment_Id << endl;
        for (int i = 0; i < marks.size(); i++)
        {
            cout << "Marks of Subject " << i + 1 << " : " << marks[i] << endl;
        }
    }
};

int main()
{
    cout << "\n____20BCS008 Aiman Fatima____\n";
    cout << "\n----Enter details of three students----\n";
    Student *s = new Student[3];
    vector<int> S;
    for (int i = 0; i < 3; i++)
    {
        cout << "\n|| Enter data of Student " << i + 1 << " ||" << endl;
        cout << "Enter Name: ";
        string name;
        cin >> name;
        cout << "Enter Id: ";
        int id;
        cin >> id;
        cout << "Enter No. of subjects: ";
        int sub;
        cin >> sub;
        S.resize(sub);
        for (int i = 0; i < sub; i++)
        {
            cout << "Enter marks of Subject " << i + 1 << " : ";
            cin >> S[i];
        }
        s[i] = Student(name, id, S);
        S.clear();
    }
    cout << "\n----Getting details of the students----\n";
    for (int i = 0; i < 3; i++)
    {
        cout << "\n|| Student " << i + 1 << " ||" << endl;
        s[i].getData();
    }
    delete[] s;
    return 0;
}