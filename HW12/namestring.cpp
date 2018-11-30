// =============================================================================
// file: namestrings.cpp
// =============================================================================
// Programmer: Brian Alexander
// Date: 10/15/2018
// Class: CSCI 123 ("Intro to Programming Using C++")
// Time: MW 04:30pm
// Instructor: Mr. Edwards
// Project: Name Strings
//
// Description:
//      This program gets the users name as three separate inputs.  It then
//      concatenates them into a single string.  The user is displayed their
//      full name, number of characters in their name, and are informed if
//      any of their names are the same.
//
// =============================================================================

#include <iostream>
#include <cstring>
using namespace std;



// ==== main ===================================================================
//
// =============================================================================
int main() 
{
	char firstName [50];
	char middleName [50];
	char lastName [50];
	char fullName [150];

	cout << "Please enter your first name: ";
	cin >> firstName;
	cout << "Please enter your middle name: ";
	cin >> middleName;
	cout << "Please enter your last name: ";
	cin >> lastName;

	strcpy(fullName, firstName);
	strcat(fullName, " ");
	strcat(fullName, middleName);
	strcat(fullName, " ");
	strcat(fullName, lastName);
	
	cout << "Your full name is: " << fullName << endl; 
	
	cout << "The total number of characters in your name is: " <<
       		strlen(firstName) + strlen(middleName) + strlen(lastName) <<
		endl;
	
	if (strcmp(firstName, middleName) == 0) 
		{
		cout << "The first and middle names are the same." << endl;
		}
	if(strcmp(firstName, lastName) == 0)
		{
		cout << "The first and last names are the same." << endl;
		}
	if(strcmp(middleName, lastName) == 0)
		{
		cout << "The middle and last names are the same." << endl;
		}

	return 0;
}  // end of "main"

