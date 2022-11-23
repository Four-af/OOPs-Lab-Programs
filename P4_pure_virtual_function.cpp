#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// base class
// pure virtual function
class Media
{
protected:
    string title;
    string publication;

public:
    virtual void read() = 0;
    virtual void show() = 0;
};

// derived class
class Book : public Media
{
private:
    int pages;

public:
    void read()
    {
        cout << "Enter title: ";
        cin >> title;
        cout << "Enter publication: ";
        cin >> publication;
        cout << "Enter number of pages: ";
        cin >> pages;
    }
    void show()
    {
        cout << "Title: " << title << endl;
        cout << "Publication: " << publication << endl;
        cout << "Number of pages: " << pages << endl;
    }
};

// derived class
class Tape : public Media
{
private:
    int playingTime;

public:
    void read()
    {
        cout << "Enter title: ";
        cin >> title;
        cout << "Enter publication: ";
        cin >> publication;
        cout << "Enter playing time: ";
        cin >> playingTime;
    }
    void show()
    {
        cout << "Title: " << title << endl;
        cout << "Publication: " << publication << endl;
        cout << "Playing time: " << playingTime << endl;
    }
};

int main()
{
    Media *base_ptr;
    // Media k;
    cout << "\n____20BCS008 Aiman Fatima____\n";
    cout << "\n|| Accessing the details using pointer of base class ||\n";
    cout << "\nEnter details of a book " << endl;
    Book b;
    base_ptr = &b;
    base_ptr->read();
    cout << "\nEnter details of a tape " << endl;
    Tape t;
    base_ptr = &t;
    base_ptr->read();
    cout << "\nDetails of the book " << endl;
    base_ptr = &b;
    base_ptr->show();
    cout << "\nDetails of the tape " << endl;
    base_ptr = &t;
    base_ptr->show();
    return 0;
}