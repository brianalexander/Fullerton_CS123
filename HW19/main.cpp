// ============================================================================
// File: main.cpp (Fall 2018)
// ============================================================================
// Programmer: ???
// Date: ???
// Class: CSCI 123 ("Intro to Programming Using C++")
// Time: ???
// Instructor: Mr. Edwards
// Project: CCircleOps
//
// Description:
//      This is an exercise dealing with overloaded operators. The increment
//      and decrement operators are overloaded for the CCircle class, along
//      with some relational operators. Also, several "special" constructors 
//      have been implemented as well (the default ctor, type conversion ctors
//      and the copy ctor).
// ============================================================================

#include    <iostream>
#include    <fstream>
using namespace std;
#include    "ccircle.h"


void    DispCircle(CCircle  circ, ostream &outStream = cout)
{
    circ.ShowCircleInfo(outStream);
}


// ==== main ==================================================================
// 
// ============================================================================

int     main()
{
    CCircle     circOne;
    CCircle     circTwo(5.82);
    CCircle     circThree(circTwo);
    double      userRadius;
    int         numReps;

    // display some information about the circles
    cout << "Radius of circOne = " << circOne.GetRadius() << endl;
    cout << "Radius of circTwo = " << circTwo.GetRadius() << endl;
    cout << "Radius of circThree = " << circThree.GetRadius() << endl << endl;

    // let the user try out some stuff with "circOne"
    cout << "Enter a radius for circOne: ";
    cin >> userRadius;
    circOne.SetRadius(userRadius);
    cout << "The radius of circOne is now " << circOne.GetRadius() << endl << endl;

    // try the overloaded increment operator with circOne
    cout << "Enter the number of times to increment circOne: ";
    cin >> numReps;
    for (; numReps > 0; --numReps)
        {
        // increment the circle object, then display information about the 
        // circle's current state
        ++circOne;
        circOne.ShowCircleInfo();
        cout << endl;
        }
    cout << endl;

    cout << "Enter the number of times to decrement circOne: ";
    cin >> numReps;
    for (; numReps > 0; --numReps)
        {
        --circOne;
        circOne.ShowCircleInfo();
        cout << endl;
        }
    cout << endl;

    // let the user set the radius for two circle objects
    cout << "Enter a radius for circOne: ";
    cin >> userRadius;
    circOne.SetRadius(userRadius);
    cout << "Enter a radius for circTwo: ";
    cin >> userRadius;
    circTwo.SetRadius(userRadius);

    // test a relational operator
    if (circOne < circTwo)
        {
        cout << "Guess what? circOne < circTwo" << endl << endl;
        }
    else
        {
        cout << "Guess what? circOne >= circTwo" << endl << endl;
        }

    // try writing the same circle information to an output file
    ofstream        myFile("circinfo.txt");

    if (myFile.fail())
        {
        cout << "Unable to open output file..." << endl;
        exit(EXIT_FAILURE);
        }

    myFile << "Here's some information about the circle objects..." << endl;

    // display info about each circle
    myFile << "circOne: ";
    DispCircle(circOne, myFile);
    myFile << endl;
    myFile << "circTwo: ";
    DispCircle(circTwo, myFile);
    myFile << endl;
    myFile << "circThree: ";
    DispCircle(circThree, myFile);
    myFile << endl;

    return  0;

}  // end of "main"
