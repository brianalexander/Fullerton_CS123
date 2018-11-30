// ============================================================================
// File: matrix_manip.cpp (Fall 2017)
// ============================================================================
// Programmer: ???
// Date: ???
// Class: CSCI 123 ("Intro to Programming Using C++")
// Time: ???
// Instructor: Mr. Edwards
// Project: Matrix Manipulation
//
// Description:
//  This program allows the user to manipulate a two-dimensional array of ints.
//  A menu is presented in a loop, and the user has the option to:
//  
//     1) set all the elements of the 2D array to a user-entered value;
//     2) display the 2D array to stdout (using a user-entered field width);
//     3) display the sum of all the ints in the 2D array
//     4) quit the program.
//
// ============================================================================

#include    <iostream>
#include    <iomanip>
using namespace std;


// defined constants
const   int         ROWS = 3;
const   int         COLS = 5;
const   int         WIDTH = 5;


// function prototypes
void    DispMatrix(int  matrix[][COLS], int  numRows, int  width);
void    DispMenu();
int     GetMatrixSum(int  matrix[][COLS], int  numRows);
void    InitMatrix(int  matrix[][COLS], int  numRows, int  initVal);


// ==== main ==================================================================
// 
// ============================================================================

int     main()
{
    bool        bContinue = true;
    int         myInts[ROWS][COLS];
    char        selection;

    // announce ourselves to the user
    cout << "Welcome to the Matrix Manipulation Program!" << endl;

    // loop, display the menu and handle user selections until it's time to 
    // quit!
    do  {
        // display the menu and get the user selection
        DispMenu();
	// FlushStdIn();
        cin >> selection;

        // switch on the user's selection to call the appropriate function;
        // if the function to call requires additional input from the user, 
        // get it here in the switch, not in the called function

        // PUT YOUR CODE HERE...
        switch(toupper(selection))
		{
	    	case 'I':
			int 	initVal;
			cout << "Enter a value to assign to all matrix elements: ";
			cin >> initVal;
			InitMatrix(myInts, ROWS, initVal);
			break;
	   	 case 'D':
			int 	width;
			cout << "Please enter the field width to use: ";
			cin >> width;
			DispMatrix(myInts, ROWS, width);
			break;
	    	case 'G':
			cout << "The sum of all the matrix values is " << GetMatrixSum(myInts, ROWS)
					<< endl;
			break;
	   	case 'Q':
			cout << "Bye!" << endl;
			bContinue = false;
			break;
	   	default:
			cout << "Please try again from the listed options" << endl;
		}

        } while (bContinue);

    return 0;

}  // end of "main"



// ==== DispMenu ==============================================================
// 
// This function is responsible for writing the menu options to stdout for the
// user.
// 
// Input:  nothing
// 
// Output: nothing
// 
// ============================================================================

void    DispMenu()
{
    // display the menu
    cout << endl << "Please select one of the following options:\n";
    cout << " I)nitialize the matrix" << endl;
    cout << " D)isplay the matrix" << endl;
    cout << " G)et the sum of all values in the matrix" << endl;
    cout << " Q)uit" << endl;  
    cout << "=> ";

}  // end of "DispMenu"



// ==== FlushStdin ============================================================
// 
// This function discards any data that is currently in the stdin buffer and
// also clears the bit flags for the stream object, so that the caller can
// proceed to read from a valid and empty input stream.
// 
// Input:
//     Nothing
// 
// Output:
//     Nothing
// 
// ============================================================================

void    FlushStdin()
{
    char    inChar;

    cin.clear();
    do  {
        cin.get(inChar);
        if (('\n' == inChar) || (cin.eof()))
            {
            break;
            }

        } while (true);

}  // end of "FlushStdin"



// ==== DispMatrix ============================================================
// 
// This function displays the stored matrix using a setw parameter specified
// by the user.
// 
// Input:
//      matrix [IN] -- an initialized matrix of shape ROWS x COLS
//      numRows [IN] -- number of rows for the matrix
//      width [IN] -- the amount of left-padding between numbers being
//      	displayed
// Output:
//     Nothing
// 
// ============================================================================

void    DispMatrix(int  matrix[][COLS], int  numRows, int  width) 
{
	cout << "Here are the current matrix contents: " << endl;
	for (int i = 0; i < numRows; i++) 
		{
		for (int j = 0; j < COLS; j++)
			{
			cout << setw(width) << matrix[i][j];
			}
		cout << endl;
		}
} // end of "DispMatrix"



// ==== GetMatrixSum ==========================================================
// 
// This function displays the stored matrix using a setw parameter specified
// by the user.
// 
// Input:
//      matrix [IN] -- an initialized matrix of shape ROWS x COLS
//      numRows [IN] -- number of rows for the matrix
//
// Output:
//     The sum of all integers in the matrix.
// 
// ============================================================================

int     GetMatrixSum(int  matrix[][COLS], int  numRows)
{
	int total;

	for (int i = 0; i < numRows; i++)
		{
		for (int j = 0; j < COLS; j++)
			{
			total += matrix[i][j];
			}
		}
	return total;
} // end of "GetMatrixSum"



// ==== InitMatrix ============================================================
// 
// This function initializes the value of the ROW x COL matrix being passed in
// to the specified initialization value, initVal.
// 
// Input:
//      matrix [IN/OUT] -- an uninitialized matrix ROWS x COLS
//      numRows [IN] -- number of rows for the matrix
//      initVal [IN] -- The value with which we will initialize all indicies
//      	in the matrix
//
// Output:
//     Nothing.
// 
// ============================================================================

void    InitMatrix(int  matrix[][COLS], int  numRows, int  initVal)
{
	for (int i = 0; i < numRows; i++)
		{
		for (int j = 0; j < COLS; j++)
			{
			matrix[i][j] = initVal;
			}
		}
} // end of "InitMatrix"
