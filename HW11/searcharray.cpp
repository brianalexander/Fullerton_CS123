// =============================================================================
// file: squarefeet.cpp
// =============================================================================
// Programmer: Brian Alexander
// Date: 10/10/2018
// Class: CSCI 123 ("Intro to Programming Using C++")
// Time: MW 04:30pm
// Instructor: Mr. Edwards
// Project: SquareFeet
//
// Description:
//      This program accepts 10 integer inputs from the user and assigns them
//      to an array.  Then the user is prompted for an integer to search 
//      for in the array and will print out each index where the target is 
//      found.  It then returns the total number of times the target was found
//      and displays that information to the screen.
//
// =============================================================================

#include	<iostream>
using namespace std;

// function prototypes
int	SearchArray(int myArray[10], int numElem, int target);

// ==== main ===================================================================
//
// =============================================================================
int	main(void) 
{
	int		numElem = 10;
	int 		myArray[10];
	int		searchVal;
	int		numElemFound;
	
	cout << "Please enter 10 integer values: ";
	for(int i = 0; i < numElem; i++)
		{
		cout << "#" << (i + 1) << ": "; 
		cin >> myArray[i];
		}
	cout << "\nPlease enter a search value: ";
	cin >> searchVal;

	numElemFound = SearchArray(myArray, numElem, searchVal);
	
	cout << searchVal << " was found " << numElemFound << " times" << endl;

	return 0;
}  // end of "main"



// ==== SearchArray ============================================================
//
// This function calculates the sum from one to the limit parameter
// (inclusive), then returns the value to the caller.
//
// Input:
//      myArray [IN]  -- An integer array containing the integers to be  
//                     searched through, provided by the user.
//      numElem [IN] -- Number of elements in myArray.
//      target [IN] -- The integer to search myArray for.
//
// Output:
//      The total number of times that target was found inside myArray.
//
// =============================================================================

int	SearchArray(int	myArray[10], int numElem, int target)
{
	int	count = 0;

	for (int i = 0; i < numElem; i++)
		{
		if (myArray[i] == target)
			{
			cout << "array[" << i << "] = " << target << endl;
			count += 1;
			}
		}
	return count;
} // end of SearchArray
