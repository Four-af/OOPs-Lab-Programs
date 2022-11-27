#include <iostream>
#include <string.h>
using namespace std;

class AccountBook
{
private:
    string name;
    int accountNumber;

public:
    void read();
    void display();
    string operator[](int);
    int operator[](string);
};

void AccountBook::read()
{
    cout << "\nEnter name: ";
    getchar();
    getline(cin, name);
    cout << "Enter account number: ";
    cin >> accountNumber;
}

void AccountBook::display()
{
    cout << name << "\t" << accountNumber << endl;
}

string AccountBook::operator[](int accountNumber)
{
    if (this->accountNumber == accountNumber)
        return name;
    else
        return "Not found";
}

int AccountBook::operator[](string name)
{
    if (this->name == name)
    {
        return accountNumber;
    }
    else
    {
        return -1;
    }
}

int main()
{
    cout << "\n____20BCS008 Aiman Fatima____\n";
    AccountBook accountBook[5];
    int choice;
    while (1)
    {
        cout << "\n_____Menu_____\n";
        cout << "1. Read 5 details" << endl;
        cout << "2. Display" << endl;
        cout << "3. Search by account number" << endl;
        cout << "4. Search by name" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            for (int i = 0; i < 5; i++)
            {
                cout << "\n---- Details of customer " << i + 1 << " ----";
                accountBook[i].read();
            }
            break;
        case 2:
            cout << "\n---- Displaying Details ----\n";
            cout << "\nName\tAccount Number" << endl;
            for (int i = 0; i < 5; i++)
            {
                accountBook[i].display();
            }
            cout << endl;
            break;
        case 3:
        {
            int accountNumber;
            cout << "\nEnter account number: ";
            cin >> accountNumber;
            bool found = false;
            for (int i = 0; i < 5; i++)
            {
                if (accountBook[i][accountNumber] != "Not found")
                {
                    cout << "Name: " << accountBook[i][accountNumber] << endl;
                    found = true;
                }
            }
            if (!found)
            {
                cout << "\nAccount number not found" << endl;
            }
            cout << endl;
            break;
        }
        case 4:
        {
            string name;
            cout << "\nEnter name: ";
            cin >> name;
            bool found = false;
            for (int i = 0; i < 5; i++)
            {
                if (accountBook[i][name] != -1)
                {
                    cout << "Account number: " << accountBook[i][name] << endl;
                    found = true;
                }
            }
            if (!found)
            {
                cout << "\nName not found" << endl;
            }
            cout << endl;
            break;
        }
        case 5:
            cout << "\nThe End.\n\n";
            return 0;
        default:
            cout << "\nWrong choice!!\n";
        }
    }
    return 0;
}