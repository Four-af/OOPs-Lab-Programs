#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
using namespace std;

// base class
class Media
{
    string title;
    string publication;

public:
    Media()
    {
        title = "NONE";
        publication = "NONE";
    }
}

// derived class books
class books : public Media
{
    int page_no;

public:
    books()
    {
        page_no = 0;
    }
};

// derived class video_tapes
class video_tapes : : public Media
{
    int time;

public:
    video_tapes()
    {
        time = 0;
    }
};

// main function
int main()
{
    // Objects of Book Video and Media
    return 0;
}