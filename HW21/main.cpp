// ============================================================================
// File: main.cpp (Fall 2018)
// ============================================================================
// Programmer: ???
// Date: ???
// Class: CSCI 123 ("Intro to Programming Using C++")
// Time: ???
// Instructor: Mr. Edwards
// Project: CDate
//
// Description:
//      ???
//      ???
//      ???
//
// ============================================================================

#include    <iostream>
#include    <iomanip>
#include    <cstdlib>
using namespace std;
#include    "cdate.h"



// function prototypes
CDate*  MakeDate(int  mVal, int  dVal, int  yVal);
void    ShowDate(const CDate  *datePtr);


// ==== main ==================================================================
//
// ============================================================================

int     main()
{
    CDate       *myDatePtr;
    int         monthVal;
    int         dayVal;
    int         yearVal;

    // get the month, day and year from the user
    cout << "Please enter a month, day and year: ";
    cin >> monthVal >> dayVal >> yearVal;

    // call MakeDate to create a date and get a pointer to it; if it's NULL
    // display an error message and terminate the program
    myDatePtr = MakeDate(monthVal, dayVal, yearVal);
    if (myDatePtr == NULL)
    	{
	cout << "Your date was bad.  Ending program." << endl;
	return 0;
	}

    // call ShowDate to display the heap date object's date

    ShowDate(myDatePtr);

    // write the heap date to stdout using the overloaded insertion operator
    cout << *myDatePtr;

    // release the date object back to the heap
    delete myDatePtr;

    return 0;

}  // end of "main"



// ==== MakeDate ==============================================================
// 
// This function recieves month, day and year arguments from the caller and
// uses them to create a CDate object from the heap. The object is allocated
// from the heap, and if all of three of the integer parameters are 
// successfully assigned to the CDate object, a pointer to the object is
// returned to the caller. But if any of the assignments fail, a NULL pointer
// is returned to the caller.
// 
// Input:
//      mVal [IN]       -- the integer month value
// 
//      dVal [IN]       -- the integer day value
// 
//      yVal [IN]       -- the integer year value
// 
// Output:
//      If all three parameter values are successfully assigned to the heap
//      CDate object, a pointer to that object is returned, else a NULL pointer
//      is returned.
// 
// ============================================================================

CDate*  MakeDate(int  mVal, int  dVal, int  yVal)
{
CDate* datePtr = new CDate();
if ((*datePtr).SetMonth(mVal) && 
		    (*datePtr).SetDay(dVal) && 
		    (*datePtr).SetYear(yVal))
    	{
	return datePtr;
	}
else 
	{
	return NULL;
	}
}  // end of "MakeDate"



// ==== ShowDate ==============================================================
// 
// This function receives a pointer to a CDate object and uses it to write its
// date to the standard output stream using the CDate::DispDate member function.
// 
// Input:
//      datePtr [IN]    -- a pointer to a CDate object
// 
// Output:
//      Nothing.
// 
// ============================================================================

void    ShowDate(const CDate  *datePtr)
{
    (*datePtr).DispDate();

}  // end of "ShowDate"
