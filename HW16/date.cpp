#include <cstdlib>
#include <iostream>
#include <iomanip>
#include "date.h"
using namespace std;

void GetDate(Date &date1)
{
    char slash;
    cout << "Please enter the date MM/DD/YYYY" << endl;
    if (cin >> date1.month)
        {
	cin >> slash;
        if (cin >> date1.day)
            {
	    cin >> slash;
            if (cin >> date1.year)
                {
                }
            else
                {
                    cout << "Failed to extract the year.";
                    exit(1);
                }
            }
        else
            {
                cout << "Failed to extract the day.";
                exit(1);
            } 
        }
    else
        {
            cout << "Failed to extract the month.";
            exit(1);
        }
}


void DispDate(Date &date1)
{
    cout << setw(2) << setfill('0') << date1.month << "/" << 
	    setw(2) << setfill('0') << date1.day << "/" << date1.year << endl;

}
