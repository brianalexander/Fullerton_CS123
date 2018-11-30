// ============================================================================
// File: main.cpp (Fall 2018)
// ============================================================================
// This program is just a test driver for the CDie class. It creates a CDie
// object and displays its initial value. Then it asks the user how many times 
// to toss the die object after which it enters a loop for that many iterations
// and displays the result of "random" tosses.
// ============================================================================

#include    <iostream>
#include    <cstdlib>
#include    "cdie.h"
using namespace std;


// ==== main ==================================================================
// 
// ============================================================================

int     main()
{
    int         dieVal;

    // seed the random number generator with the current system time
    srand(time(NULL));

    // ask the user what the initial value of the CDie object should be
    cout << "What is the initial value of the die? ";
    cin >> dieVal;
    if ((dieVal < 1) || (dieVal > 6))
        {
        cout << "Sorry, the value must be between 1 and 6 inclusive...\n";
        exit(EXIT_FAILURE);
        }

    // create an instance of the CDie class, using the user's value as an 
    // argument for the constructor
    CDie        myDie(dieVal);
    char        response;

    // show the initial value of the die
    cout << "Here's the initial value of the die:\n";
    myDie.Draw();

    do  {
        cout << "Toss the die? ";
        cin >> response;
        if ('Y' != toupper(response))
            {
            break;
            }
        else
            {
            myDie.Toss();
            myDie.Draw();
            }

        } while (true);

    cout << "Thanks for playing, bye!" << endl;
    return  0;

}  // end of "main"
