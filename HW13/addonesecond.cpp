// ============================================================================
// File: addonesecond.cpp (Fall 2018)
// ============================================================================
// Programmer: ???
// Date: ???
// Class: CSCI 123 ("Intro to Programming Using C++")
// Time: ???
// Instructor: Prof. Edwards
// Project: Add One Second
//
// Description:
//      This program prompts the user for the hour, minutes and seconds values 
//      for a 24-hour time. If the time values are successfully read from stdin 
//      and the values are within appropriate ranges for hours, minutes and 
//      seconds, the user is then asked how many times to increment the time by
//      one second. After the user enters that value, the time is displayed in
//      one second intervals, incremented for each display.
// ============================================================================

#include    <iostream>
#include    <iomanip>
#include    <cstdlib>
#include    <unistd.h>
using namespace std;


// the Time structure declaration
struct Time
{
	int	hours;
	int	minutes;
	int	seconds;
};


// defined constants
const   int MAX_HOURS = 23;
const   int MAX_MINS = 59;
const   int MAX_SECS = 59;


// function prototypes
void    AddOneSecond(Time  &timeRef);
bool    GetTime(Time  &timeRef);
void    DispTime(const Time  &timeRef);



// ==== main ==================================================================
//
// ============================================================================

int     main()
{
    Time        userTime;
    int         numSeconds;

    // get the time from the user
    cout << "Enter the hours, minutes and seconds values separated "
         << "with spaces: ";

    if (false == GetTime(userTime))
        {
        // call the 'exit' function to terminate the program
        exit(EXIT_FAILURE);
        }

    // get the number of times to increment from the user
    cout << "The time you entered is ";
    DispTime(userTime);
    cout << "How many times to you want to increment the time? ";
    cin >> numSeconds;

    // loop and show the incremented time
    for (; numSeconds > 0; --numSeconds)
        {
        AddOneSecond(userTime);
        DispTime(userTime);
        sleep(1);
        }

    return 0;

}  // end of main



// ==== AddOneSecond ==========================================================
//
// This function examines the input time parameter and adds one second to it.
// If any of the fields (i.e., the seconds, minutes or hours) need to be
// reset to zero as a result of adding the second, it is handled by this
// function.
//
// Input:
//      timeRef [IN/OUT]    -- a reference to a Time structure
//
// Output:
//      Nothing; the caller's Time structure will be updated.
//
// ============================================================================

void    AddOneSecond(Time  &timeRef)
{
    if(timeRef.seconds < MAX_SECS)
    	{
	timeRef.seconds++;
	}
    else if(timeRef.seconds == MAX_SECS)
    	{
	timeRef.seconds = 0;
	if(timeRef.minutes == MAX_MINS)
		{
		timeRef.minutes = 0;
		if(timeRef.hours == MAX_HOURS)
			{
			timeRef.hours = 0;
			}
		else
			{
			timeRef.hours++;
			}
		}
	else 
		{
		timeRef.minutes++;
		}
	}


}  // end of "AddOneSecond"



// ==== DispTime ==============================================================
//
// This function uses the input Time parameter to display a formatted time to
// stdout. The format used is HH:MM:SS, where the hours, minutes and seconds
// displayed in field widths of two characters with leading zeros if necessary.
//
// Input:
//      timeRef [IN]    -- a reference to a Time structure
//
// Output:
//      Nothing.
//
// ============================================================================

void    DispTime(const Time  &timeRef)
{
    cout.fill('0');
    cout << setw(2) << timeRef.hours << ":" 
	    << setw(2) << timeRef.minutes << ":" 
	    << setw(2) << timeRef.seconds << endl;

}  // end of "DispTime"



// ==== GetTime ===============================================================
//
// This function extracts the hours, minutes and seconds integer values from 
// stdin and stores them in the reference parameter. As an attempt is made to
// read a value, it is tested for successful extraction, and also tested to 
// make sure it is within the appropriate range for that value (e.g., the hours
// must be between zero and 23, the minutes and seconds between zero and 59).
// If either an extraction fails or the extracted value is out of range, an 
// error message is written to stdout and a value of false is returned. If all
// values are successfully extracted and within range, a value of true is 
// returned.
// 
// Input:
//      timeRef [OUT]   -- a reference to a Time structure
//
// Output:
//      A value of true if all integer values are successfully extracted and
//      within appropriate range; also, the caller's argument will contain the
//      extracted values. Else, if a failed extraction is encountered or a 
//      value is extracted, a value of false is returned.
//
// ============================================================================

bool    GetTime(Time  &timeRef)
{
    cin >> timeRef.hours >> timeRef.minutes >> timeRef.seconds;
    if (timeRef.hours <= MAX_HOURS && timeRef.minutes <= MAX_MINS && timeRef.seconds <= MAX_SECS) 
    	{
	return true;
	}
    else 
    	{
	if(timeRef.hours > MAX_HOURS) 
		{
		cout << "The hours value is invalid." << endl;
		} 
	else if(timeRef.minutes > MAX_MINS)
		{
		cout << "The minutes value is invalid." << endl;
		}
	else 
		{
		cout << "The seconds value is invalid." << endl;
		}
	return false;
	}

}  // end of "GetTime"
