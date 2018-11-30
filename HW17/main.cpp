// ============================================================================
// File: main.cpp (Fall 2018)
// ============================================================================
// Programmer: ???
// Date: ???
// Class: CSCI 123 ("Intro to Programming Using C++")
// Time: ???
// Instructor: Prof. Edwards
// Project: CCalc
//
// Description:
//      This program tests the CCalc object. A loop is entered where the user is
//      prompted for a simple mathematical operation to be performed on the 
//      CCalc object. The user is allowed to manipulate the CCalc object until 
//      they indicate they wish to quit.
// ============================================================================

#include    <iostream>
#include    <cstdlib>
#include    <cctype>
using namespace std;
#include    "ccalc.h"


// function prototypes
void    DisplayMenu();
void    HandleChoice(CCalc  &calc, char  item);


// ==== main ==================================================================
//
// ============================================================================

int     main()
{
    CCalc       calculator;
    char        choice;

    // loop and let the user manipulate the calculator
    do  {
        // display the menu and get the user selection
        DisplayMenu();
        cout << "Please enter a selection: ";
        cin >> choice;
        HandleChoice(calculator, choice);
        cout << endl;

        } while ('Q' != toupper(choice));

    return 0;

}  // end of "main"



// ==== DisplayMenu ===========================================================
//
// This function displays the menu of options to stdout.
//
// Input:  nothing
//
// Output: nothing
//
// ============================================================================

void    DisplayMenu()
{
    cout << "Calculator Options:" << endl;
    cout << "  [C] Clear" << endl;
    cout << "  [T] Set Value" << endl;
    cout << "  [V] Display Value" << endl;
    cout << "  [A] Add" << endl;
    cout << "  [S] Subtract" << endl;
    cout << "  [D] Divide" << endl;
    cout << "  [M] Multiply" << endl;
    cout << "  [Q] Quit" << endl;

}  // end of "DisplayMenu"



// ==== HandleChoice ==========================================================
//
// This function handles the menu selection by examining the input char
// parameter and using the CCalc parameter to call the appropriate CCalc member 
// function.
//
// Input:
//      calc [IN/OUT]   -- a reference to an existing CCalc object
//
//      item [IN]       -- a char representing the current menu selection
//
// Output:
//      Nothing
//
// ============================================================================

void    HandleChoice(CCalc  &calc, char  item)
{
    double  temp;

    // switch on the menu selection and call the corresponding CCalc member 
    // function
    switch (toupper(item))
        {
        case  'C':
            // clear the calculator so it has a value of zero
            calc.Clear();
            break;
	case  'T':
	    cout << "Please enter a new value to assign: ";
	    cin >> temp;
	    calc.SetValue(temp);
	    break;
	case  'V':
	    cout << "The current value is ";
	    cout << calc.GetValue() << endl;
	    break;
	case  'A':
	    cout << "Enter a number to add: ";
	    cin >> temp;
	    calc.Add(temp);
	    break;
	case  'S':
	    cout << "Enter a number to subtract: ";
	    cin >> temp;
	    calc.Subtract(temp);
	    break;
	case  'D':
	    cout << "Enter a number to divide by (Hint: Not zero): ";
	    cin >> temp;
	    calc.Divide(temp);
	    break;
	case  'M':
	    cout << "Enter a number to multiply by: ";
	    cin >> temp;
	    calc.Multiply(temp);
	    break;
	case  'Q':
	    cout << "Thanks for calculating with us!" << endl;
	    break;
	}

}  // end of "HandleChoice"
