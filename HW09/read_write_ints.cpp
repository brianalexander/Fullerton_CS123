// // ==========================================================================
// // file: read_write_ints.cpp
// // ==========================================================================
// // Programmer: Brian Alexander
// // Date: 09/26/2018
// // Class: CSCI 123 ("Intro to Programming Using C++")
// // Time: MW 04:30pm
// // Instructor: Mr. Edwards
// // Project: Read/Write File Ints
// //
// // Description:
// //      This program allows a user to either store 5 ints or read 5 ints from
// //      the file nums.txxt which exists in the same diretory.  It first  
// //      prompts the user for their choice of R)ead or W)rite, then calls the
// //      function DisplayInts or WriteInts. The program ends by closing the 
// //      file connection.
// //
// // ==========================================================================

#include <iostream>
#include <fstream>
using namespace std;

// function prototypes
void WriteInts(ofstream& outputFile);
void DisplayInts(ifstream& inputFile);


// // ==== main ================================================================
// //
// // ==========================================================================
int main() 
{
	char readOrWrite;
	ifstream inputFile;
	ofstream outputFile;

	cout << "Do you wish to R)ead or W)rite ints?";
	cin >> readOrWrite;

	if (toupper(readOrWrite) == 'W')
		{
		outputFile.open("nums.txt");
		if (outputFile.fail())
			{
			cout << "Unable to open the output file..." << endl;
			exit(EXIT_FAILURE);
			}
		else
			{
			WriteInts(outputFile);
			}
		outputFile.close();	
		}
	else if (toupper(readOrWrite) == 'R')
		{
		inputFile.open("nums.txt");		
		if (inputFile.fail())
			{
			cout << "Unable to open the input file..." << endl;
			exit(EXIT_FAILURE);
			}
		else
			{
			DisplayInts(inputFile);
			}
		inputFile.close();	
		}
	else
		{
		cout << "Please enter \"R\" for Read or \"W\" for Write." 
			<< endl;
		}

	return 0;
}  // end of "main"



// // ==== WriteInts ===========================================================
// //
// // This function writes the 5 inputted integers entered to the console
// // into the file nums.txt in the same directory as this file.
// //
// // Input:
// //      outputFile [IN/OUT]  -- a reference to the file we will store 
// //				values in 
// //
// // Output:
// //	   Nothing.
// //
// // ==========================================================================

void WriteInts(ofstream& outputFile)
{
	int tempInt;
	int counter;
	counter = 5;
	while(counter > 0)
		{
		cout << "Enter an int: ";
		cin >> tempInt;
		outputFile << tempInt << endl;
		counter--;
		}
} // end of "WriteInts"



// // ==== DisplayInts =========================================================
// //
// // This function displays the ints stored in the nums.txt file in the same
// // directory as this file.
// //
// // Input:
// //      inputFile [IN/OUT]  -- a reference to the file we will read
// //				values from
// //
// // Output:
// //      Nothing.
// //
// // ==========================================================================

void DisplayInts(ifstream& inputFile)
{
	int outInt;
	int counter;
	counter = 5;
	while(counter > 0)
		{
		if (inputFile >> outInt)
			{
			cout << outInt << endl;
			}
		counter--;
		}
} // end of "DisplayInts"
