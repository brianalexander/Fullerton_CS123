// ============================================================================
// file: file_analysis.cpp
// ============================================================================
// Programmer: Brian Alexander
// Date: 10/08/2018
// Class: CSCI 123 ("Intro to Programming Using C++")
// Time: MW 04:30pm
// Instructor: Mr. Edwards
// Project: File Analysis
//
// Description:
//	The program will open data.txt, look at its contents and determine the 
//	number of uppercase, lowercase, digit, punctuation and whitespace 
//	characters contained in the file so that the caller can report the 
//	results to stdout. Additionally, the function ReadFile will return 
//	the total number of characters read to the caller. 
//
// ============================================================================

#include <iostream>
#include <cctype>
#include <fstream>
using namespace std;

// function prototypes
int ReadFile(ifstream& inFile, int& totalUpper, int& totalLower, int& totalDigits, int& totalPunct, int& totalSpace);


// ==== main ==================================================================
//
// ============================================================================
int main() 
{
	ifstream inFile ("data.txt");
	int totalUpper	= 0;
	int totalLower	= 0;
	int totalDigits	= 0;
	int totalPunct	= 0;
	int totalSpace	= 0;
	int totalChars 	= 0;

	totalChars = ReadFile(inFile, totalUpper, totalLower, totalDigits, totalPunct, totalSpace);

	cout << "File \"data.txt\" contains the following:" << endl;
	cout << "  Uppercase letters:\t\t" << totalUpper << endl;
	cout << "  Lowercase letters:\t\t" << totalLower << endl;
	cout << "  Digits:\t\t\t" << totalDigits << endl;
	cout << "  Punctuation characters:\t" << totalPunct << endl;
	cout << "  Whitespace characters:\t" << totalSpace << endl;
	cout << "  Total characters read:\t" << totalChars << endl;

	inFile.close();
	return 0;
}  // end of "main"



// ==== ReadFile ==============================================================
//
// This function calculates the the counts for each of its parameters
// and returns the total number of characters in the file.
//
// Input:
//      inFile[IN/OUT]  -- reference to a file for reading 
//      totalUpper[IN/OUT]  -- number of uppercase letters in inFile 
//      totalLower[IN/OUT]  -- number of lowercase letters in inFile 
//      totalDigits[IN/OUT]  -- number of digits in inFile 
//      totalPunct[IN/OUT]  -- number of punctuation characters in inFile 
//      totalSpace[IN/OUT]  -- number of whitespace characters in inFile 
//
// Output:
//      Returns the total number of characters in the given file.
//
// ============================================================================

int ReadFile(ifstream& inFile, int& totalUpper, int& totalLower, int& totalDigits, int& totalPunct, int& totalSpace)
{
	char current;
	int charCount;

	charCount = 0;

	while(true)
		{
		
		current = inFile.get();

		if(inFile.eof())
			{
			break;
			}

		if(isupper(current))
			{
			totalUpper += 1;
			}
		else if(islower(current))
			{
			totalLower += 1;
			}
		else if(isspace(current))
			{
			totalSpace += 1;
			}
		else if(isdigit(current))
			{
			totalDigits += 1;
			}
		else if(ispunct(current))
			{
			totalPunct += 1;
			}

		charCount += 1;
		} 

	return charCount;
} // end of "ReadFile"
