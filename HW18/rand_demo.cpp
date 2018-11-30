// ============================================================================
// File: rand_demo.cpp (Fall 2018)
// ============================================================================
// This program demonstrates how to use the "srand" and "rand" functions to 
// generate pseudo-random numbers. First the user is asked how many random 
// numbers to display. Then the random number generator is seeded with the 
// current system time (which is constantly changing). Then a loop is entered 
// that displays the return value of the "rand" function.
// ============================================================================

#include    <iostream>
#include    <cstdlib>
using namespace std;


// ==== main ==================================================================
// 
// ============================================================================

int     main()
{
    char            response;
    int             counter;

    // get the number of random numbers to display from the user
    cout << "How many random values do you want to see? ";
    cin >> counter;

    // see if the user wants to seed the random number generator with the 
    // current system time
    cout << "Do you want to start the random number generator? ";
    cin >> response;
    if ('Y' == toupper(response))
        {
        srand(time(NULL));
        }

    // loop and display numbers
    cout << "Okay, here we go!" << endl;
    for (; counter > 0; --counter)
        {
        cout << rand() << endl;
        }

    return  0;

}  // end of "main"
