// =============================================================================
// // file: megacalc.cpp
// // ==========================================================================
// // Programmer: Brian Alexander
// // Date: 09/24/2018
// // Class: CSCI 123 ("Intro to Programming Using C++")
// // Time: MW 04:30pm
// // Instructor: Mr. Edwards
// // Project: MegaCalc
// //
// // Description:
// //	Given two integer inputs, this program will output their sum,
// //	difference, product, quotient, and remainder.  If the second
// // 	input is zero it will not output the quotient or remainder, but
// //	instead show an error about division by zero.
// // ==========================================================================

#include <iostream>
using namespace std;

// function prototypes
void MegaCalc(int inputOne, int inputTwo, int &sum, int &difference, 
		int &product, int &quotient, int &remainder);


// ==== main ==================================================================
// //
// // =========================================================================

int main() 
{
	int inputOne;
	int inputTwo;
	int sum;
	int difference;
	int product;
	int quotient;
	int remainder;

	cout << "Please enter two integer values separated by white space: ";
	cin >> inputOne >> inputTwo;
	
	MegaCalc(inputOne, inputTwo, sum, difference, product, 
			quotient, remainder);

	cout << "Here are the results: " << endl;
	cout << inputOne << " plus " << inputTwo << " equals " << sum << endl;
	cout << inputOne << " minus " << inputTwo << " equals " << 
		difference << endl;
	cout << inputOne << " multiplied by " << inputTwo << " equals " << 
		product << endl;

	if (inputTwo != 0)
		{
		cout << inputOne << " divided by " << inputTwo << " equals " 
			<< quotient << " with a remainder of " 
			<< remainder << endl;
		}
	else
       		{
		cout << "Division by zero is undefined..." << endl;
		}

	return 0;

}  // end of "main"



// ==== MegaCalc ==============================================================
// //
// // This function calculates the sum from one to the limit parameter
// // (inclusive), then returns the value to the caller.
// //
// // Input:
// //      inputOne[IN]  -- an integer value 
// //      inputTwo[IN]  -- an integer value  
// //      &sum[OUT]  -- a reference to the sum integer in the main method 
// //      &difference[OUT]  -- a reference to the difference integer in the
// //				main method 
// //      &product[OUT]  -- a reference to the product integer in the main 
// //				method
// //      &quotient[OUT]  -- a reference to the quotient integer in the main  
// //				method
// //      &remainder[OUT]  -- a reference to the remainder integer in the main 
// //				method
// // Output:
// //      Values are set for sum, difference, product, quotient, and remainder
// //		in the main method
// //
// // ==========================================================================

void MegaCalc(int inputOne, int inputTwo, int &sum, int &difference, 
		int &product, int &quotient, int &remainder)
{
	sum = inputOne+inputTwo;
	difference = inputOne - inputTwo;
	product = inputOne * inputTwo;

	if (inputTwo != 0)
		{
		quotient = inputOne / inputTwo;
	       	remainder = inputOne % inputTwo;
		}

} // end of MegaCalc
