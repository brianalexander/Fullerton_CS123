// ============================================================================
// File: main.cpp (Fall 2018)
// ============================================================================
// Programmer: Brian Alexander
// Date: 11/26/2018
// Class: CSCI 123 ("Intro to Programming Using C++")
// Time: 04:30PM MW
// Instructor: Prof. Edwards
// Project: CInt Destructor
//
// Description:
//      This program demonstrates the role of a destructor for a class. The CInt
//      class stores an integer value that is dynamicallly allocated from the 
//      heap. It also contains a destructor to release the integer. There are
//      'cout' statements in the constructor and destructor as well as in the 
//      main function so that the memory management can be easily seen on 
//      stdout.
// 
// Sample run:
//      Enter an int: 22
//      main: about to allocate the stack ADT...
//      CInt constructor, *m_intPtr = 22
//      main: stack ADT value is = 22
//      Enter another int: 78
//      main: about to allocate the heap ADT...
//      CInt constructor, *m_intPtr = 78
//      main: heap ADT value is 78
//      main: about to release the heap ADT...
//      CInt destructor, *m_intPtr = 78
//      main: about to return zero...
//      CInt destructor, *m_intPtr = 22
// 
// ============================================================================

#include    <iostream>
#include    <cstdlib>
using namespace std;
#include    "cint.h"


// ==== main ==================================================================
// 
// ============================================================================

int     main()
{
    int         userInt;

    // get an integer value from the user
    cout << "Enter an int: ";
    cin >> userInt;

    // use the integer value to create an instance of CInt from the stack
    cout << "main: about to allocate the stack ADT..." << endl;
    CInt stackCInt = CInt(userInt);

    // display the int value inside the stack ADT to stdout
    cout << "main: stack ADT value is = " << stackCInt.GetInt() << endl;

    // get another int from the user
    cout << "Enter another int: ";
    cin >> userInt;

    // use the integer value to create an instance of CInt from the heap
    cout << "main: about to allocate the heap ADT..." << endl;
    CInt *heapCInt = new CInt(userInt);

    // display the int value inside the heap ADT
    cout << "main: heap ADT value is = " << (*heapCInt).GetInt() << endl;

    // release the heap ADT
    delete heapCInt;

    cout << "main: about to return zero..." << endl;
    return 0;

}  // end of "main"
