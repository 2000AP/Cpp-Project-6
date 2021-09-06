//************* C++ program to read time in HH:MM:SS format and convert into total seconds using class *****************

#include <iostream>
#include <iomanip>  //file used to manipulate output of program
using namespace std;

class Time
{
private:
    int HH, MM, SS, Sec;

public:
    void takeTime();
    void displayTime();
    int calculateSec();
    void displaySec();
};


// to Take in time
void Time ::takeTime()
{
    cout << "Enter Time : ";
    cout << "\nHours? ";
    cin >> HH;
    cout << "\nMinute? ";
    cin >> MM;
    cout << "\nSeconds? ";
    cin >> SS;
};

// to display Time
void Time ::displayTime()
{
    cout << "\n\nThe time is = " 
    << setw(2) << setfill('0') << HH << ":"  //setw() is used to set the width of time to display
    << setw(2) << setfill('0') << MM << ":"  //setfill() is used set the library fill character
    << setw(2) << setfill('0') << SS;
};

// to calculate seconds
int Time ::calculateSec()
{
    int S1, S2, S3;
    S1 = HH * 3600;
    S2 = MM * 60;
    S3 = SS * 1;
    Sec = S1 + S2 + S3;
    return Sec;
};

// to display time
void Time ::displaySec()
{
    cout << "\n\nTime in total Seconds: " << Sec;
};

int main()
{
    Time T;
    T.takeTime();
    T.displayTime();
    T.calculateSec();
    T.displaySec();
    return 0;
}
