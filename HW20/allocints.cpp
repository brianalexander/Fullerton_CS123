// =============================================================================
// file: allocints.cpp
// =============================================================================
// Programmer: Brian Alexander
// Date: 11/19/2018
// Class: CSCI 123 ("Intro to Programming Using C++")
// Time: MW 04:30pm
// Instructor: Mr. Edwards
// Project: AllocInts
//
// Description:
//     This program will let the user indicate the dimension of an array of 
//     integers, which is allocated from the heap. The array elements will be 
//     set to defined values and displayed to stdout before being released back 
//     to the heap. 
//
// =============================================================================

#include <iostream>
using namespace std;

typedef int* IntArrayPtr;

// function prototypes
IntArrayPtr AllocInts(const int arrDims);
void DispArray(const int intArray[], const int arrDims);


// ==== main ===================================================================
//
// =============================================================================
int main() 
{
	int arrDims;
	IntArrayPtr intArray;
	
	cout << "How many integers do you want to store in your array?" 
		<< endl;
	cin >> arrDims;

	intArray = AllocInts(arrDims);
	DispArray(intArray, arrDims);

	delete [] intArray;

	return 0;
}  // end of "main"



// ==== AllocInts ==============================================================
//
// This function will receive the number of ints to allocate from the caller. 
// It then allocates a new array and saves the base address in a local pointer. 
// It then assigns sequentially increasing values to each array element.
//  Once that's done, it returns a pointer to the array to the caller.
//
// Input:
//      arrDims[IN]  -- an integer value containing the number of elements 
//                     in the array.
//
// Output:
//      Returns a pointer to the new int array of length arrDims.
//
// =============================================================================

IntArrayPtr AllocInts(const int arrDims)
{
IntArrayPtr newArray = new int[arrDims];
for(int i = 0; i < arrDims; i++)
	{
	newArray[i] = i+1;
	}
return newArray;
} // end of "AllocInts"



// ==== DispArray ==============================================================
//
// This function displays the values of an arrDims length integer array.
//
// Input:
//      intArray [IN]  -- an array of integers 
//
//      arrDims[IN]  -- the length of intArray
//
// Output:
// 	Nothing.
//
// =============================================================================

void DispArray(const int intArray[], const int arrDims)
{
for(int i = 0; i < arrDims; i++)
	{
	cout << intArray[i] << endl;
	}
} // end of CalcArea
