// ============================================================================
// File: main.cpp (Fall 2018)
// ============================================================================
// Programmer: ???
// Date: ???
// Class: CSCI 123 ("Intro to Programming Using C++")
// Time: ???
// Instructor: Mr. Edwards
// Project: CHouse
//
// Description:
//      ???
//      
// ============================================================================

#include    <iostream>
#include    <cstdlib>
using namespace std;
#include    "chouse.h"


// number of digits of precision to use for floating point values
const   int NUMDIGS = 4;

// function prototypes
void    DispHouseArea(CHouse  house);


// ==== main ==================================================================
// 
// ============================================================================

int     main()
{       
    int         numRooms;
    int         totalArea;

    // get the number of rooms in your house
    cout << "How many rooms in the house? ";
    if (!(cin >> numRooms))
        {
        cout << "Failed to get the number of rooms..." << endl;
        exit(EXIT_FAILURE);
        }

    // create a CHouse object, using the number of rooms as an argument
    CHouse      myHouse = numRooms;

    // get the dimensions of each room from the user at the keyboard
    myHouse.SetRoomSizes();

    // send the house object to a function to test pass by value
    cout << "\nmain: about to call DispHouseArea with pass by value..." << endl;
    DispHouseArea(myHouse);

    // display the total square footage
    cout << "\nmain: returned from DispHouseArea..." << endl;
    cout << "main: the total area of the house is " << myHouse.GetTotalArea()
         << endl;
    return 0;

}  // end of "main"



// ==== DispHouseArea =========================================================
// 
// This function is a test to see if the copy constructor is performing a 
// proper deep copy. A CHouse object is passed by value, which should not 
// affect the corresponding object's dynamic array when the parameter is 
// destroyed.
// 
// Input:
//      house [IN]      -- a CHouse object (passed by value)
// 
// Output:
//      Nothing
// 
// ============================================================================

void    DispHouseArea(CHouse  house)
{
    // setup the floating point display
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(NUMDIGS);

    // display the total square footage
    cout << "\nDispHouseArea: the total area of the house is " 
         << house.GetTotalArea() << endl;

}  // end of "DispHouseArea"
