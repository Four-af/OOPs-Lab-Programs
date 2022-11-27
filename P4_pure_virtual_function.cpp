/*Write a C++ program based on following scenario:
Consider an example of a bookshop which sells books and video tapes. These two classes are
inherited from the base class called media. The media class has command data members such as
title and publication. The book class has data members for storing a number of pages in a book,
and the tape class has the playing time in a tape. Each class will have member functions such as
read() and show(). In the base class, these members have to be defined as virtual functions. Write
a program which models the class hierarchy for the bookshop and processes objects of these classes
using pointers to the base class.*/

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